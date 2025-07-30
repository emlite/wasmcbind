#include <webbind/XMLHttpRequest.h>
#include <webbind/XMLHttpRequestUpload.h>
#include <webbind/Document.h>


DEFINE_EMLITE_TYPE(AttributionReportingRequestOptions, em_Val);


bool AttributionReportingRequestOptions_eventSourceEligible(const AttributionReportingRequestOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("eventSourceEligible")));
}


void AttributionReportingRequestOptions_set_eventSourceEligible(AttributionReportingRequestOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("eventSourceEligible"), em_Val_from(value));
}


bool AttributionReportingRequestOptions_triggerEligible(const AttributionReportingRequestOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("triggerEligible")));
}


void AttributionReportingRequestOptions_set_triggerEligible(AttributionReportingRequestOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("triggerEligible"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(PrivateToken, em_Val);


TokenVersion PrivateToken_version(const PrivateToken *self) {
    return em_Val_as(TokenVersion, em_Val_get(em_Val_as_val(self->inner), em_Val_from("version")));
}


void PrivateToken_set_version(PrivateToken* self, TokenVersion * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("version"), em_Val_from(value));
}


OperationType PrivateToken_operation(const PrivateToken *self) {
    return em_Val_as(OperationType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("operation")));
}


void PrivateToken_set_operation(PrivateToken* self, OperationType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("operation"), em_Val_from(value));
}


RefreshPolicy PrivateToken_refreshPolicy(const PrivateToken *self) {
    return em_Val_as(RefreshPolicy, em_Val_get(em_Val_as_val(self->inner), em_Val_from("refreshPolicy")));
}


void PrivateToken_set_refreshPolicy(PrivateToken* self, RefreshPolicy * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("refreshPolicy"), em_Val_from(value));
}


jb_Array PrivateToken_issuers(const PrivateToken *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("issuers")));
}


void PrivateToken_set_issuers(PrivateToken* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("issuers"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(XMLHttpRequest, XMLHttpRequestEventTarget);


XMLHttpRequest XMLHttpRequest_new() {
        em_Val vv = em_Val_new(em_Val_global("XMLHttpRequest") );
        return XMLHttpRequest_from_val(&vv);
      }


jb_Any XMLHttpRequest_onreadystatechange(const XMLHttpRequest *self) {
    return em_Val_as(jb_Any, em_Val_get(XMLHttpRequestEventTarget_as_val(self->inner), em_Val_from("onreadystatechange")));
}


void XMLHttpRequest_set_onreadystatechange(XMLHttpRequest* self, jb_Any * value) {
    em_Val_set(XMLHttpRequestEventTarget_as_val(self->inner), em_Val_from("onreadystatechange"), em_Val_from(value));
}


unsigned short XMLHttpRequest_readyState(const XMLHttpRequest *self) {
    return em_Val_as(unsigned short, em_Val_get(XMLHttpRequestEventTarget_as_val(self->inner), em_Val_from("readyState")));
}


jb_Undefined XMLHttpRequest_open0(XMLHttpRequest* self , jb_String * method, jb_String * url, bool async) {
    return em_Val_as(jb_Undefined, em_Val_call(XMLHttpRequestEventTarget_as_val(self->inner), "open", em_Val_from(method), em_Val_from(url), em_Val_from(async)));
}


jb_Undefined XMLHttpRequest_open1(XMLHttpRequest* self , jb_String * method, jb_String * url, bool async, jb_String * username) {
    return em_Val_as(jb_Undefined, em_Val_call(XMLHttpRequestEventTarget_as_val(self->inner), "open", em_Val_from(method), em_Val_from(url), em_Val_from(async), em_Val_from(username)));
}


jb_Undefined XMLHttpRequest_open2(XMLHttpRequest* self , jb_String * method, jb_String * url, bool async, jb_String * username, jb_String * password) {
    return em_Val_as(jb_Undefined, em_Val_call(XMLHttpRequestEventTarget_as_val(self->inner), "open", em_Val_from(method), em_Val_from(url), em_Val_from(async), em_Val_from(username), em_Val_from(password)));
}


jb_Undefined XMLHttpRequest_setRequestHeader(XMLHttpRequest* self , jb_String * name, jb_String * value) {
    return em_Val_as(jb_Undefined, em_Val_call(XMLHttpRequestEventTarget_as_val(self->inner), "setRequestHeader", em_Val_from(name), em_Val_from(value)));
}


unsigned long XMLHttpRequest_timeout(const XMLHttpRequest *self) {
    return em_Val_as(unsigned long, em_Val_get(XMLHttpRequestEventTarget_as_val(self->inner), em_Val_from("timeout")));
}


void XMLHttpRequest_set_timeout(XMLHttpRequest* self, unsigned long value) {
    em_Val_set(XMLHttpRequestEventTarget_as_val(self->inner), em_Val_from("timeout"), em_Val_from(value));
}


bool XMLHttpRequest_withCredentials(const XMLHttpRequest *self) {
    return em_Val_as(bool, em_Val_get(XMLHttpRequestEventTarget_as_val(self->inner), em_Val_from("withCredentials")));
}


void XMLHttpRequest_set_withCredentials(XMLHttpRequest* self, bool value) {
    em_Val_set(XMLHttpRequestEventTarget_as_val(self->inner), em_Val_from("withCredentials"), em_Val_from(value));
}


XMLHttpRequestUpload XMLHttpRequest_upload(const XMLHttpRequest *self) {
    return em_Val_as(XMLHttpRequestUpload, em_Val_get(XMLHttpRequestEventTarget_as_val(self->inner), em_Val_from("upload")));
}


jb_Undefined XMLHttpRequest_send0(XMLHttpRequest* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(XMLHttpRequestEventTarget_as_val(self->inner), "send"));
}


jb_Undefined XMLHttpRequest_send1(XMLHttpRequest* self , jb_Any * body) {
    return em_Val_as(jb_Undefined, em_Val_call(XMLHttpRequestEventTarget_as_val(self->inner), "send", em_Val_from(body)));
}


jb_Undefined XMLHttpRequest_abort(XMLHttpRequest* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(XMLHttpRequestEventTarget_as_val(self->inner), "abort"));
}


jb_String XMLHttpRequest_responseURL(const XMLHttpRequest *self) {
    return em_Val_as(jb_String, em_Val_get(XMLHttpRequestEventTarget_as_val(self->inner), em_Val_from("responseURL")));
}


unsigned short XMLHttpRequest_status(const XMLHttpRequest *self) {
    return em_Val_as(unsigned short, em_Val_get(XMLHttpRequestEventTarget_as_val(self->inner), em_Val_from("status")));
}


jb_String XMLHttpRequest_statusText(const XMLHttpRequest *self) {
    return em_Val_as(jb_String, em_Val_get(XMLHttpRequestEventTarget_as_val(self->inner), em_Val_from("statusText")));
}


jb_String XMLHttpRequest_getResponseHeader(XMLHttpRequest* self , jb_String * name) {
    return em_Val_as(jb_String, em_Val_call(XMLHttpRequestEventTarget_as_val(self->inner), "getResponseHeader", em_Val_from(name)));
}


jb_String XMLHttpRequest_getAllResponseHeaders(XMLHttpRequest* self ) {
    return em_Val_as(jb_String, em_Val_call(XMLHttpRequestEventTarget_as_val(self->inner), "getAllResponseHeaders"));
}


jb_Undefined XMLHttpRequest_overrideMimeType(XMLHttpRequest* self , jb_String * mime) {
    return em_Val_as(jb_Undefined, em_Val_call(XMLHttpRequestEventTarget_as_val(self->inner), "overrideMimeType", em_Val_from(mime)));
}


XMLHttpRequestResponseType XMLHttpRequest_responseType(const XMLHttpRequest *self) {
    return em_Val_as(XMLHttpRequestResponseType, em_Val_get(XMLHttpRequestEventTarget_as_val(self->inner), em_Val_from("responseType")));
}


void XMLHttpRequest_set_responseType(XMLHttpRequest* self, XMLHttpRequestResponseType * value) {
    em_Val_set(XMLHttpRequestEventTarget_as_val(self->inner), em_Val_from("responseType"), em_Val_from(value));
}


jb_Any XMLHttpRequest_response(const XMLHttpRequest *self) {
    return em_Val_as(jb_Any, em_Val_get(XMLHttpRequestEventTarget_as_val(self->inner), em_Val_from("response")));
}


jb_String XMLHttpRequest_responseText(const XMLHttpRequest *self) {
    return em_Val_as(jb_String, em_Val_get(XMLHttpRequestEventTarget_as_val(self->inner), em_Val_from("responseText")));
}


Document XMLHttpRequest_responseXML(const XMLHttpRequest *self) {
    return em_Val_as(Document, em_Val_get(XMLHttpRequestEventTarget_as_val(self->inner), em_Val_from("responseXML")));
}


jb_Undefined XMLHttpRequest_setAttributionReporting(XMLHttpRequest* self , AttributionReportingRequestOptions * options) {
    return em_Val_as(jb_Undefined, em_Val_call(XMLHttpRequestEventTarget_as_val(self->inner), "setAttributionReporting", em_Val_from(options)));
}


jb_Undefined XMLHttpRequest_setPrivateToken(XMLHttpRequest* self , PrivateToken * privateToken) {
    return em_Val_as(jb_Undefined, em_Val_call(XMLHttpRequestEventTarget_as_val(self->inner), "setPrivateToken", em_Val_from(privateToken)));
}

