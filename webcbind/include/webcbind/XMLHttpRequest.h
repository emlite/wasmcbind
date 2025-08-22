#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "XMLHttpRequestEventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XMLHttpRequestUpload XMLHttpRequestUpload;
typedef struct Document Document;
typedef struct AttributionReportingRequestOptions AttributionReportingRequestOptions;
typedef struct PrivateToken PrivateToken;


/**
 * @brief Interface XMLHttpRequest
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XMLHttpRequest)
 */
DECLARE_EMLITE_TYPE(XMLHttpRequest, XMLHttpRequestEventTarget);

/**
 * @brief Creates a new `XMLHttpRequest` object. 
*/
XMLHttpRequest XMLHttpRequest_new();

/**
 * @brief Gets the `onreadystatechange` property. 
*/
jb_Any XMLHttpRequest_onreadystatechange(const XMLHttpRequest *self);

/**
 * @brief Sets the `onreadystatechange` property. 
*/
void XMLHttpRequest_set_onreadystatechange(XMLHttpRequest* self, jb_Any * value);

/**
 * @brief Gets the `readyState` property. 
*/
unsigned short XMLHttpRequest_readyState(const XMLHttpRequest *self);

/**
 * @brief Calls the `open` method. 
*/
jb_Undefined XMLHttpRequest_open0(XMLHttpRequest* self , jb_String * method, jb_String * url, bool async);

/**
 * @brief Calls the `open` method. 
*/
jb_Undefined XMLHttpRequest_open1(XMLHttpRequest* self , jb_String * method, jb_String * url, bool async, jb_String * username);

/**
 * @brief Calls the `open` method. 
*/
jb_Undefined XMLHttpRequest_open2(XMLHttpRequest* self , jb_String * method, jb_String * url, bool async, jb_String * username, jb_String * password);

/**
 * @brief Calls the `setRequestHeader` method. 
*/
jb_Undefined XMLHttpRequest_setRequestHeader(XMLHttpRequest* self , jb_String * name, jb_String * value);

/**
 * @brief Gets the `timeout` property. 
*/
unsigned long XMLHttpRequest_timeout(const XMLHttpRequest *self);

/**
 * @brief Sets the `timeout` property. 
*/
void XMLHttpRequest_set_timeout(XMLHttpRequest* self, unsigned long value);

/**
 * @brief Gets the `withCredentials` property. 
*/
bool XMLHttpRequest_withCredentials(const XMLHttpRequest *self);

/**
 * @brief Sets the `withCredentials` property. 
*/
void XMLHttpRequest_set_withCredentials(XMLHttpRequest* self, bool value);

/**
 * @brief Gets the `upload` property. 
*/
XMLHttpRequestUpload XMLHttpRequest_upload(const XMLHttpRequest *self);

/**
 * @brief Calls the `send` method. 
*/
jb_Undefined XMLHttpRequest_send0(XMLHttpRequest* self );

/**
 * @brief Calls the `send` method. 
*/
jb_Undefined XMLHttpRequest_send1(XMLHttpRequest* self , jb_Any * body);

/**
 * @brief Calls the `abort` method. 
*/
jb_Undefined XMLHttpRequest_abort(XMLHttpRequest* self );

/**
 * @brief Gets the `responseURL` property. 
*/
jb_String XMLHttpRequest_responseURL(const XMLHttpRequest *self);

/**
 * @brief Gets the `status` property. 
*/
unsigned short XMLHttpRequest_status(const XMLHttpRequest *self);

/**
 * @brief Gets the `statusText` property. 
*/
jb_String XMLHttpRequest_statusText(const XMLHttpRequest *self);

/**
 * @brief Calls the `getResponseHeader` method. 
*/
jb_String XMLHttpRequest_getResponseHeader(XMLHttpRequest* self , jb_String * name);

/**
 * @brief Calls the `getAllResponseHeaders` method. 
*/
jb_String XMLHttpRequest_getAllResponseHeaders(XMLHttpRequest* self );

/**
 * @brief Calls the `overrideMimeType` method. 
*/
jb_Undefined XMLHttpRequest_overrideMimeType(XMLHttpRequest* self , jb_String * mime);

/**
 * @brief Gets the `responseType` property. 
*/
XMLHttpRequestResponseType XMLHttpRequest_responseType(const XMLHttpRequest *self);

/**
 * @brief Sets the `responseType` property. 
*/
void XMLHttpRequest_set_responseType(XMLHttpRequest* self, XMLHttpRequestResponseType * value);

/**
 * @brief Gets the `response` property. 
*/
jb_Any XMLHttpRequest_response(const XMLHttpRequest *self);

/**
 * @brief Gets the `responseText` property. 
*/
jb_String XMLHttpRequest_responseText(const XMLHttpRequest *self);

/**
 * @brief Gets the `responseXML` property. 
*/
Document XMLHttpRequest_responseXML(const XMLHttpRequest *self);

/**
 * @brief Calls the `setAttributionReporting` method. 
*/
jb_Undefined XMLHttpRequest_setAttributionReporting(XMLHttpRequest* self , AttributionReportingRequestOptions * options);

/**
 * @brief Calls the `setPrivateToken` method. 
*/
jb_Undefined XMLHttpRequest_setPrivateToken(XMLHttpRequest* self , PrivateToken * privateToken);

#ifdef __cplusplus
}
#endif
