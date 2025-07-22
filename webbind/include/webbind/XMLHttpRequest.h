#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "XMLHttpRequestEventTarget.h"
#include "enums.h"

typedef struct XMLHttpRequestUpload XMLHttpRequestUpload;
typedef struct Document Document;
typedef struct AttributionReportingRequestOptions AttributionReportingRequestOptions;
typedef struct PrivateToken PrivateToken;


typedef struct {
  em_Val inner;
} AttributionReportingRequestOptions;


DECLARE_EMLITE_TYPE(AttributionReportingRequestOptions, em_Val);

bool AttributionReportingRequestOptions_eventSourceEligible( const AttributionReportingRequestOptions *self);

void AttributionReportingRequestOptions_set_eventSourceEligible(AttributionReportingRequestOptions* self, bool value);

bool AttributionReportingRequestOptions_triggerEligible( const AttributionReportingRequestOptions *self);

void AttributionReportingRequestOptions_set_triggerEligible(AttributionReportingRequestOptions* self, bool value);
typedef struct {
  em_Val inner;
} PrivateToken;


DECLARE_EMLITE_TYPE(PrivateToken, em_Val);

TokenVersion PrivateToken_version( const PrivateToken *self);

void PrivateToken_set_version(PrivateToken* self, const TokenVersion* value);

OperationType PrivateToken_operation( const PrivateToken *self);

void PrivateToken_set_operation(PrivateToken* self, const OperationType* value);

RefreshPolicy PrivateToken_refreshPolicy( const PrivateToken *self);

void PrivateToken_set_refreshPolicy(PrivateToken* self, const RefreshPolicy* value);

jb_Sequence PrivateToken_issuers( const PrivateToken *self);

void PrivateToken_set_issuers(PrivateToken* self, const jb_Sequence* value);
typedef struct {
  XMLHttpRequestEventTarget inner;
} XMLHttpRequest;


DECLARE_EMLITE_TYPE(XMLHttpRequest, XMLHttpRequestEventTarget);

XMLHttpRequest XMLHttpRequest_new();

jb_Any XMLHttpRequest_onreadystatechange( const XMLHttpRequest *self);

void XMLHttpRequest_set_onreadystatechange(XMLHttpRequest* self, const jb_Any* value);

unsigned short XMLHttpRequest_readyState( const XMLHttpRequest *self);

jb_Undefined XMLHttpRequest_open(XMLHttpRequest* self , const jb_ByteString* method, const jb_USVString* url, bool async);

jb_Undefined XMLHttpRequest_open(XMLHttpRequest* self , const jb_ByteString* method, const jb_USVString* url, bool async, const jb_USVString* username);

jb_Undefined XMLHttpRequest_open(XMLHttpRequest* self , const jb_ByteString* method, const jb_USVString* url, bool async, const jb_USVString* username, const jb_USVString* password);

jb_Undefined XMLHttpRequest_setRequestHeader(XMLHttpRequest* self , const jb_ByteString* name, const jb_ByteString* value);

unsigned long XMLHttpRequest_timeout( const XMLHttpRequest *self);

void XMLHttpRequest_set_timeout(XMLHttpRequest* self, unsigned long value);

bool XMLHttpRequest_withCredentials( const XMLHttpRequest *self);

void XMLHttpRequest_set_withCredentials(XMLHttpRequest* self, bool value);

XMLHttpRequestUpload XMLHttpRequest_upload( const XMLHttpRequest *self);

jb_Undefined XMLHttpRequest_send(XMLHttpRequest* self );

jb_Undefined XMLHttpRequest_send(XMLHttpRequest* self , const jb_Any* body);

jb_Undefined XMLHttpRequest_abort(XMLHttpRequest* self );

jb_USVString XMLHttpRequest_responseURL( const XMLHttpRequest *self);

unsigned short XMLHttpRequest_status( const XMLHttpRequest *self);

jb_ByteString XMLHttpRequest_statusText( const XMLHttpRequest *self);

jb_ByteString XMLHttpRequest_getResponseHeader(XMLHttpRequest* self , const jb_ByteString* name);

jb_ByteString XMLHttpRequest_getAllResponseHeaders(XMLHttpRequest* self );

jb_Undefined XMLHttpRequest_overrideMimeType(XMLHttpRequest* self , const jb_DOMString* mime);

XMLHttpRequestResponseType XMLHttpRequest_responseType( const XMLHttpRequest *self);

void XMLHttpRequest_set_responseType(XMLHttpRequest* self, const XMLHttpRequestResponseType* value);

jb_Any XMLHttpRequest_response( const XMLHttpRequest *self);

jb_USVString XMLHttpRequest_responseText( const XMLHttpRequest *self);

Document XMLHttpRequest_responseXML( const XMLHttpRequest *self);

jb_Undefined XMLHttpRequest_setAttributionReporting(XMLHttpRequest* self , const AttributionReportingRequestOptions* options);

jb_Undefined XMLHttpRequest_setPrivateToken(XMLHttpRequest* self , const PrivateToken* privateToken);
