// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __RemoteInputStream_hh__
#define __RemoteInputStream_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_RemoteInputStream
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_RemoteInputStream
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_RemoteInputStream
#endif



#ifndef __IOEx_hh_EXTERNAL_GUARD__
#define __IOEx_hh_EXTERNAL_GUARD__
#include <IOEx.hh>
#endif
#ifndef __seq1__StackTraceElement_hh_EXTERNAL_GUARD__
#define __seq1__StackTraceElement_hh_EXTERNAL_GUARD__
#include <seq1_StackTraceElement.hh>
#endif
#ifndef __corbaidl_hh_EXTERNAL_GUARD__
#define __corbaidl_hh_EXTERNAL_GUARD__
#include <corbaidl.hh>
#endif
#ifndef __boxes_hh_EXTERNAL_GUARD__
#define __boxes_hh_EXTERNAL_GUARD__
#include <boxes.hh>
#endif
#ifndef __StackTraceElement_hh_EXTERNAL_GUARD__
#define __StackTraceElement_hh_EXTERNAL_GUARD__
#include <StackTraceElement.hh>
#endif
#ifndef __Throwable_hh_EXTERNAL_GUARD__
#define __Throwable_hh_EXTERNAL_GUARD__
#include <Throwable.hh>
#endif
#ifndef __Exception_hh_EXTERNAL_GUARD__
#define __Exception_hh_EXTERNAL_GUARD__
#include <Exception.hh>
#endif
#ifndef __IOException_hh_EXTERNAL_GUARD__
#define __IOException_hh_EXTERNAL_GUARD__
#include <IOException.hh>
#endif
#ifndef __seq1__octet_hh_EXTERNAL_GUARD__
#define __seq1__octet_hh_EXTERNAL_GUARD__
#include <seq1_octet.hh>
#endif



#ifdef USE_stub_in_nt_dll
# ifndef USE_core_stub_in_nt_dll
#  define USE_core_stub_in_nt_dll
# endif
# ifndef USE_dyn_stub_in_nt_dll
#  define USE_dyn_stub_in_nt_dll
# endif
#endif

#ifdef _core_attr
# error "A local CPP macro _core_attr has already been defined."
#else
# ifdef  USE_core_stub_in_nt_dll
#  define _core_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _core_attr
# endif
#endif

#ifdef _dyn_attr
# error "A local CPP macro _dyn_attr has already been defined."
#else
# ifdef  USE_dyn_stub_in_nt_dll
#  define _dyn_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _dyn_attr
# endif
#endif





_CORBA_MODULE com

_CORBA_MODULE_BEG

  _CORBA_MODULE healthmarketscience

  _CORBA_MODULE_BEG

    _CORBA_MODULE rmiio

    _CORBA_MODULE_BEG

#ifndef __com_mhealthmarketscience_mrmiio_mRemoteInputStream__
#define __com_mhealthmarketscience_mrmiio_mRemoteInputStream__

      class RemoteInputStream;
      class _objref_RemoteInputStream;
      class _impl_RemoteInputStream;
      
      typedef _objref_RemoteInputStream* RemoteInputStream_ptr;
      typedef RemoteInputStream_ptr RemoteInputStreamRef;

      class RemoteInputStream_Helper {
      public:
        typedef RemoteInputStream_ptr _ptr_type;

        static _ptr_type _nil();
        static _CORBA_Boolean is_nil(_ptr_type);
        static void release(_ptr_type);
        static void duplicate(_ptr_type);
        static void marshalObjRef(_ptr_type, cdrStream&);
        static _ptr_type unmarshalObjRef(cdrStream&);
      };

      typedef _CORBA_ObjRef_Var<_objref_RemoteInputStream, RemoteInputStream_Helper> RemoteInputStream_var;
      typedef _CORBA_ObjRef_OUT_arg<_objref_RemoteInputStream,RemoteInputStream_Helper > RemoteInputStream_out;

#endif

      // interface RemoteInputStream
      class RemoteInputStream {
      public:
        // Declarations for this interface type.
        typedef RemoteInputStream_ptr _ptr_type;
        typedef RemoteInputStream_var _var_type;

        static _ptr_type _duplicate(_ptr_type);
        static _ptr_type _narrow(CORBA::Object_ptr);
        static _ptr_type _unchecked_narrow(CORBA::Object_ptr);
        
        static _ptr_type _nil();

        static inline void _marshalObjRef(_ptr_type, cdrStream&);

        static inline _ptr_type _unmarshalObjRef(cdrStream& s) {
          omniObjRef* o = omniObjRef::_unMarshal(_PD_repoId,s);
          if (o)
            return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
          else
            return _nil();
        }

        static _core_attr const char* _PD_repoId;

        // Other IDL defined within this scope.
        
      };

      class _objref_RemoteInputStream :
        public virtual CORBA::Object,
        public virtual omniObjRef
      {
      public:
        CORBA::Boolean usingGZIPCompression();
        CORBA::Long available();
        void close(CORBA::Boolean readSuccess);
        org::omg::boxedRMI::seq1_octet* readPacket(CORBA::Long packetId);
        CORBA::LongLong skip(CORBA::LongLong n, CORBA::Long skipId);

        inline _objref_RemoteInputStream()  { _PR_setobj(0); }  // nil
        _objref_RemoteInputStream(omniIOR*, omniIdentity*);

      protected:
        virtual ~_objref_RemoteInputStream();

        
      private:
        virtual void* _ptrToObjRef(const char*);

        _objref_RemoteInputStream(const _objref_RemoteInputStream&);
        _objref_RemoteInputStream& operator = (const _objref_RemoteInputStream&);
        // not implemented

        friend class RemoteInputStream;
      };

      class _pof_RemoteInputStream : public _OMNI_NS(proxyObjectFactory) {
      public:
        inline _pof_RemoteInputStream() : _OMNI_NS(proxyObjectFactory)(RemoteInputStream::_PD_repoId) {}
        virtual ~_pof_RemoteInputStream();

        virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
        virtual _CORBA_Boolean is_a(const char*) const;
      };

      class _impl_RemoteInputStream :
        public virtual omniServant
      {
      public:
        virtual ~_impl_RemoteInputStream();

        virtual CORBA::Boolean usingGZIPCompression() = 0;
        virtual CORBA::Long available() = 0;
        virtual void close(CORBA::Boolean readSuccess) = 0;
        virtual org::omg::boxedRMI::seq1_octet* readPacket(CORBA::Long packetId) = 0;
        virtual CORBA::LongLong skip(CORBA::LongLong n, CORBA::Long skipId) = 0;
        
      public:  // Really protected, workaround for xlC
        virtual _CORBA_Boolean _dispatch(omniCallHandle&);

      private:
        virtual void* _ptrToInterface(const char*);
        virtual const char* _mostDerivedRepoId();
        
      };


    _CORBA_MODULE_END

  _CORBA_MODULE_END

_CORBA_MODULE_END



_CORBA_MODULE POA_com
_CORBA_MODULE_BEG

  _CORBA_MODULE healthmarketscience
  _CORBA_MODULE_BEG

    _CORBA_MODULE rmiio
    _CORBA_MODULE_BEG

      class RemoteInputStream :
        public virtual com::healthmarketscience::rmiio::_impl_RemoteInputStream,
        public virtual PortableServer::ServantBase
      {
      public:
        virtual ~RemoteInputStream();

        inline ::com::healthmarketscience::rmiio::RemoteInputStream_ptr _this() {
          return (::com::healthmarketscience::rmiio::RemoteInputStream_ptr) _do_this(::com::healthmarketscience::rmiio::RemoteInputStream::_PD_repoId);
        }
      };

    _CORBA_MODULE_END

  _CORBA_MODULE_END

_CORBA_MODULE_END



_CORBA_MODULE OBV_com
_CORBA_MODULE_BEG

  _CORBA_MODULE healthmarketscience
  _CORBA_MODULE_BEG

    _CORBA_MODULE rmiio
    _CORBA_MODULE_BEG

    _CORBA_MODULE_END

  _CORBA_MODULE_END

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr



inline void
com::healthmarketscience::rmiio::RemoteInputStream::_marshalObjRef(::com::healthmarketscience::rmiio::RemoteInputStream_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_RemoteInputStream
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_RemoteInputStream
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_RemoteInputStream
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_RemoteInputStream
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_RemoteInputStream
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_RemoteInputStream
#endif

#endif  // __RemoteInputStream_hh__
