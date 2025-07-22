#include <webbind/XMLHttpRequest.h>
#include <webbind/XMLHttpRequestUpload.h>
#include <webbind/Document.h>


DEFINE_EMLITE_TYPE(AttributionReportingRequestOptions, em_Val);


bool AttributionReportingRequestOptions_eventSourceEligible(const AttributionReportingRequestOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "eventSourceEligible"));
}


void AttributionReportingRequestOptions_set_eventSourceEligible(AttributionReportingRequestOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "eventSourceEligible", value);
}


bool AttributionReportingRequestOptions_triggerEligible(const AttributionReportingRequestOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "triggerEligible"));
}


void AttributionReportingRequestOptions_set_triggerEligible(AttributionReportingRequestOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "triggerEligible", value);
}

DEFINE_EMLITE_TYPE(PrivateToken, em_Val);


TokenVersion PrivateToken_version(const PrivateToken *self) {
    return em_Val_as(TokenVersion, em_Val_get(em_Val_as_val(self->inner), "version"));
}


void PrivateToken_set_version(PrivateToken* self, const TokenVersion* value) {
    em_Val_set(em_Val_as_val(self->inner), "version", value);
}


OperationType PrivateToken_operation(const PrivateToken *self) {
    return em_Val_as(OperationType, em_Val_get(em_Val_as_val(self->inner), "operation"));
}


void PrivateToken_set_operation(PrivateToken* self, const OperationType* value) {
    em_Val_set(em_Val_as_val(self->inner), "operation", value);
}


RefreshPolicy PrivateToken_refreshPolicy(const PrivateToken *self) {
    return em_Val_as(RefreshPolicy, em_Val_get(em_Val_as_val(self->inner), "refreshPolicy"));
}


void PrivateToken_set_refreshPolicy(PrivateToken* self, const RefreshPolicy* value) {
    em_Val_set(em_Val_as_val(self->inner), "refreshPolicy", value);
}


jb_Sequence PrivateToken_issuers(const PrivateToken *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "issuers"));
}


void PrivateToken_set_issuers(PrivateToken* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "issuers", value);
}

DEFINE_EMLITE_TYPE(XMLHttpRequest, XMLHttpRequestEventTarget);


XMLHttpRequest XMLHttpRequest_new() : XMLHttpRequestEventTarget(em_Val_global("XMLHttpRequest").new_()) {
        return XMLHttpRequest(em_Val_new(em_Val_global("XMLHttpRequest", ));
      }


jb_Any XMLHttpRequest_onreadystatechange(const XMLHttpRequest *self) {
    return em_Val_as(jb_Any, em_Val_get(XMLHttpRequestEventTarget_as_val(self->inner), "onreadystatechange"));
}


void XMLHttpRequest_set_onreadystatechange(XMLHttpRequest* self, const jb_Any* value) {
    em_Val_set(XMLHttpRequestEventTarget_as_val(self->inner), "onreadystatechange", value);
}


unsigned short XMLHttpRequest_readyState(const XMLHttpRequest *self) {
    return em_Val_as(unsigned short, em_Val_get(XMLHttpRequestEventTarget_as_val(self->inner), "readyState"));
}


jb_Undefined XMLHttpRequest_open(XMLHttpRequest* self , const jb_ByteString* method, const jb_USVString* url, bool async) {
    return em_Val_as(jb_Undefined, em_Val_call(XMLHttpRequestEventTarget_as_val(self->inner), "open", em_Val_from(method), em_Val_from(url), em_Val_from(async)));
}


jb_Undefined XMLHttpRequest_open(XMLHttpRequest* self , const jb_ByteString* method, const jb_USVString* url, bool async, const jb_USVString* username) {
    return em_Val_as(jb_Undefined, em_Val_call(XMLHttpRequestEventTarget_as_val(self->inner), "open", em_Val_from(method), em_Val_from(url), em_Val_from(async), em_Val_from(username)));
}


jb_Undefined XMLHttpRequest_open(XMLHttpRequest* self , const jb_ByteString* method, const jb_USVString* url, bool async, const jb_USVString* username, const jb_USVString* password) {
    return em_Val_as(jb_Undefined, em_Val_call(XMLHttpRequestEventTarget_as_val(self->inner), "open", em_Val_from(method), em_Val_from(url), em_Val_from(async), em_Val_from(username), em_Val_from(password)));
}


jb_Undefined XMLHttpRequest_setRequestHeader(XMLHttpRequest* self , const jb_ByteString* name, const jb_ByteString* value) {
    return em_Val_as(jb_Undefined, em_Val_call(XMLHttpRequestEventTarget_as_val(self->inner), "setRequestHeader", em_Val_from(name), em_Val_from(value)));
}


unsigned long XMLHttpRequest_timeout(const XMLHttpRequest *self) {
    return em_Val_as(unsigned long, em_Val_get(XMLHttpRequestEventTarget_as_val(self->inner), "timeout"));
}


void XMLHttpRequest_set_timeout(XMLHttpRequest* self, unsigned long value) {
    em_Val_set(XMLHttpRequestEventTarget_as_val(self->inner), "timeout", value);
}


bool XMLHttpRequest_withCredentials(const XMLHttpRequest *self) {
    return em_Val_as(bool, em_Val_get(XMLHttpRequestEventTarget_as_val(self->inner), "withCredentials"));
}


void XMLHttpRequest_set_withCredentials(XMLHttpRequest* self, bool value) {
    em_Val_set(XMLHttpRequestEventTarget_as_val(self->inner), "withCredentials", value);
}


XMLHttpRequestUpload XMLHttpRequest_upload(const XMLHttpRequest *self) {
    return em_Val_as(XMLHttpRequestUpload, em_Val_get(XMLHttpRequestEventTarget_as_val(self->inner), "upload"));
}


jb_Undefined XMLHttpRequest_send(XMLHttpRequest* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(XMLHttpRequestEventTarget_as_val(self->inner), "send"));
}


jb_Undefined XMLHttpRequest_send(XMLHttpRequest* self , const jb_Any* body) {
    return em_Val_as(jb_Undefined, em_Val_call(XMLHttpRequestEventTarget_as_val(self->inner), "send", em_Val_from(body)));
}


jb_Undefined XMLHttpRequest_abort(XMLHttpRequest* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(XMLHttpRequestEventTarget_as_val(self->inner), "abort"));
}


jb_USVString XMLHttpRequest_responseURL(const XMLHttpRequest *self) {
    return em_Val_as(jb_USVString, em_Val_get(XMLHttpRequestEventTarget_as_val(self->inner), "responseURL"));
}


unsigned short XMLHttpRequest_status(const XMLHttpRequest *self) {
    return em_Val_as(unsigned short, em_Val_get(XMLHttpRequestEventTarget_as_val(self->inner), "status"));
}


jb_ByteString XMLHttpRequest_statusText(const XMLHttpRequest *self) {
    return em_Val_as(jb_ByteString, em_Val_get(XMLHttpRequestEventTarget_as_val(self->inner), "statusText"));
}


jb_ByteString XMLHttpRequest_getResponseHeader(XMLHttpRequest* self , const jb_ByteString* name) {
    return em_Val_as(jb_ByteString, em_Val_call(XMLHttpRequestEventTarget_as_val(self->inner), "getResponseHeader", em_Val_from(name)));
}


jb_ByteString XMLHttpRequest_getAllResponseHeaders(XMLHttpRequest* self ) {
    return em_Val_as(jb_ByteString, em_Val_call(XMLHttpRequestEventTarget_as_val(self->inner), "getAllResponseHeaders"));
}


jb_Undefined XMLHttpRequest_overrideMimeType(XMLHttpRequest* self , const jb_DOMString* mime) {
    return em_Val_as(jb_Undefined, em_Val_call(XMLHttpRequestEventTarget_as_val(self->inner), "overrideMimeType", em_Val_from(mime)));
}


XMLHttpRequestResponseType XMLHttpRequest_responseType(const XMLHttpRequest *self) {
    return em_Val_as(XMLHttpRequestResponseType, em_Val_get(XMLHttpRequestEventTarget_as_val(self->inner), "responseType"));
}


void XMLHttpRequest_set_responseType(XMLHttpRequest* self, const XMLHttpRequestResponseType* value) {
    em_Val_set(XMLHttpRequestEventTarget_as_val(self->inner), "responseType", value);
}


jb_Any XMLHttpRequest_response(const XMLHttpRequest *self) {
    return em_Val_as(jb_Any, em_Val_get(XMLHttpRequestEventTarget_as_val(self->inner), "response"));
}


jb_USVString XMLHttpRequest_responseText(const XMLHttpRequest *self) {
    return em_Val_as(jb_USVString, em_Val_get(XMLHttpRequestEventTarget_as_val(self->inner), "responseText"));
}


Document XMLHttpRequest_responseXML(const XMLHttpRequest *self) {
    return em_Val_as(Document, em_Val_get(XMLHttpRequestEventTarget_as_val(self->inner), "responseXML"));
}


jb_Undefined XMLHttpRequest_setAttributionReporting(XMLHttpRequest* self , const AttributionReportingRequestOptions* options) {
    return em_Val_as(jb_Undefined, em_Val_call(XMLHttpRequestEventTarget_as_val(self->inner), "setAttributionReporting", em_Val_from(options)));
}


jb_Undefined XMLHttpRequest_setPrivateToken(XMLHttpRequest* self , const PrivateToken* privateToken) {
    return em_Val_as(jb_Undefined, em_Val_call(XMLHttpRequestEventTarget_as_val(self->inner), "setPrivateToken", em_Val_from(privateToken)));
}

