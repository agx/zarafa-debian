# This file was automatically generated by SWIG (http://www.swig.org).
# Version 1.3.36
#
# Don't modify this file, modify the SWIG interface instead.
# This file is compatible with both classic and new-style classes.

import _inetmapi
import new
new_instancemethod = new.instancemethod
try:
    _swig_property = property
except NameError:
    pass # Python < 2.2 doesn't have 'property'.
def _swig_setattr_nondynamic(self,class_type,name,value,static=1):
    if (name == "thisown"): return self.this.own(value)
    if (name == "this"):
        if type(value).__name__ == 'PySwigObject':
            self.__dict__[name] = value
            return
    method = class_type.__swig_setmethods__.get(name,None)
    if method: return method(self,value)
    if (not static) or hasattr(self,name):
        self.__dict__[name] = value
    else:
        raise AttributeError("You cannot add attributes to %s" % self)

def _swig_setattr(self,class_type,name,value):
    return _swig_setattr_nondynamic(self,class_type,name,value,0)

def _swig_getattr(self,class_type,name):
    if (name == "thisown"): return self.this.own()
    method = class_type.__swig_getmethods__.get(name,None)
    if method: return method(self)
    raise AttributeError,name

def _swig_repr(self):
    try: strthis = "proxy of " + self.this.__repr__()
    except: strthis = ""
    return "<%s.%s; %s >" % (self.__class__.__module__, self.__class__.__name__, strthis,)

import types
try:
    _object = types.ObjectType
    _newclass = 1
except AttributeError:
    class _object : pass
    _newclass = 0
del types


class sending_options(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, sending_options, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, sending_options, name)
    __repr__ = _swig_repr
    __swig_setmethods__["alternate_boundary"] = _inetmapi.sending_options_alternate_boundary_set
    __swig_getmethods__["alternate_boundary"] = _inetmapi.sending_options_alternate_boundary_get
    if _newclass:alternate_boundary = _swig_property(_inetmapi.sending_options_alternate_boundary_get, _inetmapi.sending_options_alternate_boundary_set)
    __swig_setmethods__["no_recipients_workaround"] = _inetmapi.sending_options_no_recipients_workaround_set
    __swig_getmethods__["no_recipients_workaround"] = _inetmapi.sending_options_no_recipients_workaround_get
    if _newclass:no_recipients_workaround = _swig_property(_inetmapi.sending_options_no_recipients_workaround_get, _inetmapi.sending_options_no_recipients_workaround_set)
    __swig_setmethods__["msg_in_msg"] = _inetmapi.sending_options_msg_in_msg_set
    __swig_getmethods__["msg_in_msg"] = _inetmapi.sending_options_msg_in_msg_get
    if _newclass:msg_in_msg = _swig_property(_inetmapi.sending_options_msg_in_msg_get, _inetmapi.sending_options_msg_in_msg_set)
    __swig_setmethods__["headers_only"] = _inetmapi.sending_options_headers_only_set
    __swig_getmethods__["headers_only"] = _inetmapi.sending_options_headers_only_get
    if _newclass:headers_only = _swig_property(_inetmapi.sending_options_headers_only_get, _inetmapi.sending_options_headers_only_set)
    __swig_setmethods__["add_received_date"] = _inetmapi.sending_options_add_received_date_set
    __swig_getmethods__["add_received_date"] = _inetmapi.sending_options_add_received_date_get
    if _newclass:add_received_date = _swig_property(_inetmapi.sending_options_add_received_date_get, _inetmapi.sending_options_add_received_date_set)
    __swig_setmethods__["force_tnef"] = _inetmapi.sending_options_force_tnef_set
    __swig_getmethods__["force_tnef"] = _inetmapi.sending_options_force_tnef_get
    if _newclass:force_tnef = _swig_property(_inetmapi.sending_options_force_tnef_get, _inetmapi.sending_options_force_tnef_set)
    __swig_setmethods__["force_utf8"] = _inetmapi.sending_options_force_utf8_set
    __swig_getmethods__["force_utf8"] = _inetmapi.sending_options_force_utf8_get
    if _newclass:force_utf8 = _swig_property(_inetmapi.sending_options_force_utf8_get, _inetmapi.sending_options_force_utf8_set)
    __swig_setmethods__["charset_upgrade"] = _inetmapi.sending_options_charset_upgrade_set
    __swig_getmethods__["charset_upgrade"] = _inetmapi.sending_options_charset_upgrade_get
    if _newclass:charset_upgrade = _swig_property(_inetmapi.sending_options_charset_upgrade_get, _inetmapi.sending_options_charset_upgrade_set)
    __swig_setmethods__["allow_send_to_everyone"] = _inetmapi.sending_options_allow_send_to_everyone_set
    __swig_getmethods__["allow_send_to_everyone"] = _inetmapi.sending_options_allow_send_to_everyone_get
    if _newclass:allow_send_to_everyone = _swig_property(_inetmapi.sending_options_allow_send_to_everyone_get, _inetmapi.sending_options_allow_send_to_everyone_set)
    __swig_setmethods__["enable_dsn"] = _inetmapi.sending_options_enable_dsn_set
    __swig_getmethods__["enable_dsn"] = _inetmapi.sending_options_enable_dsn_get
    if _newclass:enable_dsn = _swig_property(_inetmapi.sending_options_enable_dsn_get, _inetmapi.sending_options_enable_dsn_set)
    def __init__(self, *args): 
        this = _inetmapi.new_sending_options(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _inetmapi.delete_sending_options
    __del__ = lambda self : None;
sending_options_swigregister = _inetmapi.sending_options_swigregister
sending_options_swigregister(sending_options)

class delivery_options(_object):
    __swig_setmethods__ = {}
    __setattr__ = lambda self, name, value: _swig_setattr(self, delivery_options, name, value)
    __swig_getmethods__ = {}
    __getattr__ = lambda self, name: _swig_getattr(self, delivery_options, name)
    __repr__ = _swig_repr
    __swig_setmethods__["use_received_date"] = _inetmapi.delivery_options_use_received_date_set
    __swig_getmethods__["use_received_date"] = _inetmapi.delivery_options_use_received_date_get
    if _newclass:use_received_date = _swig_property(_inetmapi.delivery_options_use_received_date_get, _inetmapi.delivery_options_use_received_date_set)
    __swig_setmethods__["mark_as_read"] = _inetmapi.delivery_options_mark_as_read_set
    __swig_getmethods__["mark_as_read"] = _inetmapi.delivery_options_mark_as_read_get
    if _newclass:mark_as_read = _swig_property(_inetmapi.delivery_options_mark_as_read_get, _inetmapi.delivery_options_mark_as_read_set)
    __swig_setmethods__["add_imap_data"] = _inetmapi.delivery_options_add_imap_data_set
    __swig_getmethods__["add_imap_data"] = _inetmapi.delivery_options_add_imap_data_get
    if _newclass:add_imap_data = _swig_property(_inetmapi.delivery_options_add_imap_data_get, _inetmapi.delivery_options_add_imap_data_set)
    def __init__(self, *args): 
        this = _inetmapi.new_delivery_options(*args)
        try: self.this.append(this)
        except: self.this = this
    __swig_destroy__ = _inetmapi.delete_delivery_options
    __del__ = lambda self : None;
delivery_options_swigregister = _inetmapi.delivery_options_swigregister
delivery_options_swigregister(delivery_options)

IMToMAPI = _inetmapi.IMToMAPI
IMToINet = _inetmapi.IMToINet
createIMAPProperties = _inetmapi.createIMAPProperties


