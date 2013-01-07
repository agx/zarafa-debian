/*
 * Copyright 2005 - 2013  Zarafa B.V.
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License, version 3, 
 * as published by the Free Software Foundation with the following additional 
 * term according to sec. 7:
 *  
 * According to sec. 7 of the GNU Affero General Public License, version
 * 3, the terms of the AGPL are supplemented with the following terms:
 * 
 * "Zarafa" is a registered trademark of Zarafa B.V. The licensing of
 * the Program under the AGPL does not imply a trademark license.
 * Therefore any rights, title and interest in our trademarks remain
 * entirely with us.
 * 
 * However, if you propagate an unmodified version of the Program you are
 * allowed to use the term "Zarafa" to indicate that you distribute the
 * Program. Furthermore you may use our trademarks where it is necessary
 * to indicate the intended purpose of a product or service provided you
 * use it in accordance with honest practices in industrial or commercial
 * matters.  If you want to propagate modified versions of the Program
 * under the name "Zarafa" or "Zarafa Server", you may only do so if you
 * have a written permission by Zarafa B.V. (to acquire a permission
 * please contact Zarafa at trademark@zarafa.com).
 * 
 * The interactive user interface of the software displays an attribution
 * notice containing the term "Zarafa" and/or the logo of Zarafa.
 * Interactive user interfaces of unmodified and modified versions must
 * display Appropriate Legal Notices according to sec. 5 of the GNU
 * Affero General Public License, version 3, when you propagate
 * unmodified or modified versions of the Program. In accordance with
 * sec. 7 b) of the GNU Affero General Public License, version 3, these
 * Appropriate Legal Notices must retain the logo of Zarafa or display
 * the words "Initial Development by Zarafa" if the display of the logo
 * is not reasonably feasible for technical reasons. The use of the logo
 * of Zarafa in Legal Notices is allowed for unmodified and modified
 * versions of the software.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Affero General Public License for more details.
 *  
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 * 
 */

/* ----------------------------------------------------------------------------
 * This file was automatically generated by SWIG (http://www.swig.org).
 * Version 1.3.40
 * 
 * This file is not intended to be easily readable and contains a number of 
 * coding conventions designed to improve portability and efficiency. Do not make
 * changes to this file unless you know what you are doing--modify the SWIG 
 * interface file instead. 
 * ----------------------------------------------------------------------------- */

#ifndef SWIG_MAPICore_WRAP_H_
#define SWIG_MAPICore_WRAP_H_

#include <map>
#include <string>


class SwigDirector_MAPIAdviseSink : public MAPIAdviseSink, public Swig::Director {

public:
    SwigDirector_MAPIAdviseSink(PyObject *self, ULONG cInterfaces, LPCIID lpInterfaces);
    virtual ULONG OnNotify(ULONG cNotif, LPNOTIFICATION lpNotifications);


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* name) const {
      std::map<std::string, bool>::const_iterator iv = inner.find(name);
      return (iv != inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* name, bool val) const
    { inner[name] = val;}

private:
    mutable std::map<std::string, bool> inner;


#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (method == NULL) {
          std::string msg = "Method in class MAPIAdviseSink doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      };
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[1];
#endif

};


class SwigDirector_ExchangeImportContentsChanges : public ExchangeImportContentsChanges, public Swig::Director {

public:
    SwigDirector_ExchangeImportContentsChanges(PyObject *self, ULONG cInterfaces, LPCIID lpInterfaces);
    virtual HRESULT GetLastError(HRESULT hResult, ULONG ulFlags, LPMAPIERROR *OUTPUT);
    virtual HRESULT Config(IStream *lpStream, ULONG ulFlags);
    virtual HRESULT UpdateState(IStream *lpStream);
    virtual HRESULT ImportMessageChange(ULONG cValues, LPSPropValue lpProps, ULONG ulFlags, IMessage **lppMessage);
    virtual HRESULT ImportMessageDeletion(ULONG ulFlags, LPENTRYLIST lpSourceEntryList);
    virtual HRESULT ImportPerUserReadStateChange(ULONG cElements, LPREADSTATE lpReadState);
    virtual HRESULT ImportMessageMove(ULONG cbSourceKeySrcFolder, BYTE *pbSourceKeySrcFolder, ULONG cbSourceKeySrcMessage, BYTE *pbSourceKeySrcMessage, ULONG cbPCLMessage, BYTE *pbPCLMessage, ULONG cbSourceKeyDestMessage, BYTE *pbSourceKeyDestMessage, ULONG cbChangeNumDestMessage, BYTE *pbChangeNumDestMessage);


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* name) const {
      std::map<std::string, bool>::const_iterator iv = inner.find(name);
      return (iv != inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* name, bool val) const
    { inner[name] = val;}

private:
    mutable std::map<std::string, bool> inner;


#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (method == NULL) {
          std::string msg = "Method in class ExchangeImportContentsChanges doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      };
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[7];
#endif

};


class SwigDirector_ExchangeImportHierarchyChanges : public ExchangeImportHierarchyChanges, public Swig::Director {

public:
    SwigDirector_ExchangeImportHierarchyChanges(PyObject *self, ULONG cInterfaces, LPCIID lpInterfaces);
    virtual HRESULT GetLastError(HRESULT hResult, ULONG ulFlags, LPMAPIERROR *OUTPUT);
    virtual HRESULT Config(IStream *lpStream, ULONG ulFlags);
    virtual HRESULT UpdateState(IStream *lpStream);
    virtual HRESULT ImportFolderChange(ULONG cValues, LPSPropValue lpProps);
    virtual HRESULT ImportFolderDeletion(ULONG ulFlags, LPENTRYLIST lpSrcEntryList);


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* name) const {
      std::map<std::string, bool>::const_iterator iv = inner.find(name);
      return (iv != inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* name, bool val) const
    { inner[name] = val;}

private:
    mutable std::map<std::string, bool> inner;


#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (method == NULL) {
          std::string msg = "Method in class ExchangeImportHierarchyChanges doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      };
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[5];
#endif

};


class SwigDirector_ExchangeExportChanges : public ExchangeExportChanges, public Swig::Director {

public:
    SwigDirector_ExchangeExportChanges(PyObject *self, ULONG cInterfaces, LPCIID lpInterfaces);
    virtual HRESULT GetLastError(HRESULT hResult, ULONG ulFlags, LPMAPIERROR *OUTPUT);
    virtual HRESULT Config(IStream *lpStream, ULONG ulFlags, IUnknown *lpUnk, LPSRestriction lpRestriction, LPSPropTagArray lpIncludeProps, LPSPropTagArray lpExcludeProps, ULONG ulBufferSize);
    virtual HRESULT Synchronize(ULONG *lpulSteps, ULONG *INOUT);
    virtual HRESULT UpdateState(IStream *lpStream);


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* name) const {
      std::map<std::string, bool>::const_iterator iv = inner.find(name);
      return (iv != inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* name, bool val) const
    { inner[name] = val;}

private:
    mutable std::map<std::string, bool> inner;


#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (method == NULL) {
          std::string msg = "Method in class ExchangeExportChanges doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      };
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[4];
#endif

};


class SwigDirector_ECChangeAdviseSink : public ECChangeAdviseSink, public Swig::Director {

public:
    SwigDirector_ECChangeAdviseSink(PyObject *self, ULONG cInterfaces, LPCIID lpInterfaces);
    virtual ULONG OnNotify(ULONG ulFlags, LPENTRYLIST lpEntryList);


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* name) const {
      std::map<std::string, bool>::const_iterator iv = inner.find(name);
      return (iv != inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* name, bool val) const
    { inner[name] = val;}

private:
    mutable std::map<std::string, bool> inner;


#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (method == NULL) {
          std::string msg = "Method in class ECChangeAdviseSink doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      };
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[1];
#endif

};


class SwigDirector_ECImportContentsChanges : public ECImportContentsChanges, public Swig::Director {

public:
    SwigDirector_ECImportContentsChanges(PyObject *self, ULONG cInterfaces, LPCIID lpInterfaces);
    virtual HRESULT GetLastError(HRESULT hResult, ULONG ulFlags, LPMAPIERROR *OUTPUT);
    virtual HRESULT Config(IStream *lpStream, ULONG ulFlags);
    virtual HRESULT UpdateState(IStream *lpStream);
    virtual HRESULT ImportMessageChange(ULONG cValues, LPSPropValue lpProps, ULONG ulFlags, IMessage **lppMessage);
    virtual HRESULT ImportMessageDeletion(ULONG ulFlags, LPENTRYLIST lpSourceEntryList);
    virtual HRESULT ImportPerUserReadStateChange(ULONG cElements, LPREADSTATE lpReadState);
    virtual HRESULT ImportMessageMove(ULONG cbSourceKeySrcFolder, BYTE *pbSourceKeySrcFolder, ULONG cbSourceKeySrcMessage, BYTE *pbSourceKeySrcMessage, ULONG cbPCLMessage, BYTE *pbPCLMessage, ULONG cbSourceKeyDestMessage, BYTE *pbSourceKeyDestMessage, ULONG cbChangeNumDestMessage, BYTE *pbChangeNumDestMessage);
    virtual HRESULT ConfigForConversionStream(IStream *lpStream, ULONG ulFlags, ULONG cValuesConversion, LPSPropValue lpPropArrayConversion);
    virtual HRESULT ImportMessageChangeAsAStream(ULONG cValues, LPSPropValue lpProps, ULONG ulFlags, IStream **lppStream);
    virtual HRESULT SetMessageInterface(IID const &refiid);


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* name) const {
      std::map<std::string, bool>::const_iterator iv = inner.find(name);
      return (iv != inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* name, bool val) const
    { inner[name] = val;}

private:
    mutable std::map<std::string, bool> inner;


#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (method == NULL) {
          std::string msg = "Method in class ECImportContentsChanges doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      };
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[10];
#endif

};


class SwigDirector_ECSimpleLogger : public ECSimpleLogger, public Swig::Director {

public:
    SwigDirector_ECSimpleLogger(PyObject *self);
    virtual HRESULT Log(int loglevel, char const *szMessage);


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* name) const {
      std::map<std::string, bool>::const_iterator iv = inner.find(name);
      return (iv != inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* name, bool val) const
    { inner[name] = val;}

private:
    mutable std::map<std::string, bool> inner;


#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (method == NULL) {
          std::string msg = "Method in class ECSimpleLogger doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      };
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[1];
#endif

};


class SwigDirector_Stream : public Stream, public Swig::Director {

public:
    SwigDirector_Stream(PyObject *self, ULONG cInterfaces, LPCIID lpInterfaces);
    virtual HRESULT Write(char const *pv, ULONG cb, ULONG *OUTPUT);
    virtual HRESULT Seek(LARGE_INTEGER dlibMove, DWORD dwOrigin, ULARGE_INTEGER *plibNewPosition);
    virtual HRESULT SetSize(ULARGE_INTEGER libNewSize);
    virtual HRESULT CopyTo(IStream *pstm, ULARGE_INTEGER cb, ULARGE_INTEGER *pcbRead, ULARGE_INTEGER *pcbWritten);
    virtual HRESULT Commit(DWORD grfCommitFlags);
    virtual HRESULT Revert();
    virtual HRESULT LockRegion(ULARGE_INTEGER libOffset, ULARGE_INTEGER cb, DWORD dwLockType);
    virtual HRESULT UnlockRegion(ULARGE_INTEGER libOffset, ULARGE_INTEGER cb, DWORD dwLockType);
    virtual HRESULT Stat(STATSTG *pstatstg, DWORD grfStatFlag);
    virtual HRESULT Clone(IStream **ppstm);
    virtual HRESULT Read(void *OUTPUT, ULONG cb, ULONG *cbOUTPUT);
    virtual HRESULT Write(void const *pv, ULONG cb, ULONG *OUTPUT);


/* Internal Director utilities */
public:
    bool swig_get_inner(const char* name) const {
      std::map<std::string, bool>::const_iterator iv = inner.find(name);
      return (iv != inner.end() ? iv->second : false);
    }

    void swig_set_inner(const char* name, bool val) const
    { inner[name] = val;}

private:
    mutable std::map<std::string, bool> inner;


#if defined(SWIG_PYTHON_DIRECTOR_VTABLE)
/* VTable implementation */
    PyObject *swig_get_method(size_t method_index, const char *method_name) const {
      PyObject *method = vtable[method_index];
      if (!method) {
        swig::SwigVar_PyObject name = SWIG_Python_str_FromChar(method_name);
        method = PyObject_GetAttr(swig_get_self(), name);
        if (method == NULL) {
          std::string msg = "Method in class Stream doesn't exist, undefined ";
          msg += method_name;
          Swig::DirectorMethodException::raise(msg.c_str());
        }
        vtable[method_index] = method;
      };
      return method;
    }
private:
    mutable swig::SwigVar_PyObject vtable[12];
#endif

};


#endif
