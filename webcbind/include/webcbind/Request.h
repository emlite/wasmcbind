#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RequestInit RequestInit;
typedef struct Headers Headers;
typedef struct AbortSignal AbortSignal;
typedef struct ReadableStream ReadableStream;
typedef struct Blob Blob;
typedef struct FormData FormData;


/**
 * @brief Interface Request
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Request)
 */
DECLARE_EMLITE_TYPE(Request, em_Val);

/**
 * @brief Creates a new `Request` object. 
*/
Request Request_new0(jb_Any * input);

/**
 * @brief Creates a new `Request` object. 
*/
Request Request_new1(jb_Any * input, RequestInit * init);

/**
 * @brief Gets the `method` property. 
*/
jb_String Request_method(const Request *self);

/**
 * @brief Gets the `url` property. 
*/
jb_String Request_url(const Request *self);

/**
 * @brief Gets the `headers` property. 
*/
Headers Request_headers(const Request *self);

/**
 * @brief Gets the `destination` property. 
*/
RequestDestination Request_destination(const Request *self);

/**
 * @brief Gets the `referrer` property. 
*/
jb_String Request_referrer(const Request *self);

/**
 * @brief Gets the `referrerPolicy` property. 
*/
ReferrerPolicy Request_referrerPolicy(const Request *self);

/**
 * @brief Gets the `mode` property. 
*/
RequestMode Request_mode(const Request *self);

/**
 * @brief Gets the `credentials` property. 
*/
RequestCredentials Request_credentials(const Request *self);

/**
 * @brief Gets the `cache` property. 
*/
RequestCache Request_cache(const Request *self);

/**
 * @brief Gets the `redirect` property. 
*/
RequestRedirect Request_redirect(const Request *self);

/**
 * @brief Gets the `integrity` property. 
*/
jb_String Request_integrity(const Request *self);

/**
 * @brief Gets the `keepalive` property. 
*/
bool Request_keepalive(const Request *self);

/**
 * @brief Gets the `isReloadNavigation` property. 
*/
bool Request_isReloadNavigation(const Request *self);

/**
 * @brief Gets the `isHistoryNavigation` property. 
*/
bool Request_isHistoryNavigation(const Request *self);

/**
 * @brief Gets the `signal` property. 
*/
AbortSignal Request_signal(const Request *self);

/**
 * @brief Gets the `duplex` property. 
*/
RequestDuplex Request_duplex(const Request *self);

/**
 * @brief Calls the `clone` method. 
*/
Request Request_clone(Request* self );

/**
 * @brief Gets the `targetAddressSpace` property. 
*/
IPAddressSpace Request_targetAddressSpace(const Request *self);

/**
 * @brief Gets the `body` property. 
*/
ReadableStream Request_body(const Request *self);

/**
 * @brief Gets the `bodyUsed` property. 
*/
bool Request_bodyUsed(const Request *self);

/**
 * @brief Calls the `arrayBuffer` method. 
*/
jb_Promise Request_arrayBuffer(Request* self );

/**
 * @brief Calls the `blob` method. 
*/
jb_Promise Request_blob(Request* self );

/**
 * @brief Calls the `bytes` method. 
*/
jb_Promise Request_bytes(Request* self );

/**
 * @brief Calls the `formData` method. 
*/
jb_Promise Request_formData(Request* self );

/**
 * @brief Calls the `json` method. 
*/
jb_Promise Request_json(Request* self );

/**
 * @brief Calls the `text` method. 
*/
jb_Promise Request_text(Request* self );

#ifdef __cplusplus
}
#endif
