/*
Copyright (c) 2007 Health Market Science, Inc.

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307
USA

You can contact Health Market Science at info@healthmarketscience.com
or at the following address:

Health Market Science
2700 Horizon Drive
Suite 200
King of Prussia, PA 19406
*/
package examples.stream;

import java.io.File;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.InputStream;
import java.rmi.Remote;
import java.rmi.registry.LocateRegistry;
import java.rmi.registry.Registry;
import java.rmi.server.UnicastRemoteObject;

import com.healthmarketscience.rmiio.RemoteInputStream;
import com.healthmarketscience.rmiio.RemoteInputStreamClient;

/**
 * Simple example server which can be the target of a streamed file.
 *
 * @author James Ahlborn
 */
public class TestServer {

  public static class FileServer
    implements RemoteFileServer
  {
    public void sendFile(RemoteInputStream ristream) throws IOException {
      InputStream istream = RemoteInputStreamClient.wrap(ristream);
      FileOutputStream ostream = null;
      try {

        File tempFile = File.createTempFile("sentFile_", ".dat");
        ostream = new FileOutputStream(tempFile);
        System.out.println("Writing file " + tempFile);

        byte[] buf = new byte[1024];

        int bytesRead = 0;
        while((bytesRead = istream.read(buf)) >= 0) {
          ostream.write(buf, 0, bytesRead);
        }
        ostream.flush();

        System.out.println("Finished writing file " + tempFile);
        
      } finally {
        try {
          if(istream != null) {
            istream.close();
          }
        } finally {
          if(ostream != null) {
            ostream.close();
          }
        }
      }
    }
  }

  public static void main(String[] args) throws Exception
  {
    
    FileServer server = new FileServer();
    RemoteFileServer stub = (RemoteFileServer)
      UnicastRemoteObject.exportObject(server, 0);

    // bind to registry
    Registry registry = LocateRegistry.getRegistry();
    registry.bind("RemoteFileServer", stub);

    System.out.println("Server ready");
    
  }
  
}
