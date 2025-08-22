#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ResponseInit ResponseInit;
typedef struct Headers Headers;
typedef struct ReadableStream ReadableStream;
typedef struct Blob Blob;
typedef struct FormData FormData;


/**
 * @brief Interface Response
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Response)
 */
DECLARE_EMLITE_TYPE(Response, em_Val);

/**
 * @brief Creates a new `Response` object. 
*/
Response Response_new0();

/**
 * @brief Creates a new `Response` object. 
*/
Response Response_new1(jb_Any * body);

/**
 * @brief Creates a new `Response` object. 
*/
Response Response_new2(jb_Any * body, ResponseInit * init);

/**
 * @brief Calls the `error` method. 
*/
Response Response_error(Response* self );

/**
 * @brief Calls the `redirect` method. 
*/
Response Response_redirect0(Response* self , jb_String * url);

/**
 * @brief Calls the `redirect` method. 
*/
Response Response_redirect1(Response* self , jb_String * url, unsigned short status);

/**
 * @brief Calls the `json` method. 
*/
jb_Promise Response_json(Response* self );

/**
 * @brief Gets the `type` property. 
*/
ResponseType Response_type(const Response *self);

/**
 * @brief Gets the `url` property. 
*/
jb_String Response_url(const Response *self);

/**
 * @brief Gets the `redirected` property. 
*/
bool Response_redirected(const Response *self);

/**
 * @brief Gets the `status` property. 
*/
unsigned short Response_status(const Response *self);

/**
 * @brief Gets the `ok` property. 
*/
bool Response_ok(const Response *self);

/**
 * @brief Gets the `statusText` property. 
*/
jb_String Response_statusText(const Response *self);

/**
 * @brief Gets the `headers` property. 
*/
Headers Response_headers(const Response *self);

/**
 * @brief Calls the `clone` method. 
*/
Response Response_clone(Response* self );

/**
 * @brief Gets the `body` property. 
*/
ReadableStream Response_body(const Response *self);

/**
 * @brief Gets the `bodyUsed` property. 
*/
bool Response_bodyUsed(const Response *self);

/**
 * @brief Calls the `arrayBuffer` method. 
*/
jb_Promise Response_arrayBuffer(Response* self );

/**
 * @brief Calls the `blob` method. 
*/
jb_Promise Response_blob(Response* self );

/**
 * @brief Calls the `bytes` method. 
*/
jb_Promise Response_bytes(Response* self );

/**
 * @brief Calls the `formData` method. 
*/
jb_Promise Response_formData(Response* self );

/**
 * @brief Calls the `text` method. 
*/
jb_Promise Response_text(Response* self );

#ifdef __cplusplus
}
#endif
