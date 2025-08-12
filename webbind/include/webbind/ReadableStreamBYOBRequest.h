#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface ReadableStreamBYOBRequest
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ReadableStreamBYOBRequest)
 */
DECLARE_EMLITE_TYPE(ReadableStreamBYOBRequest, em_Val);

/**
 * @brief Gets the `view` property. 
*/
jb_Any ReadableStreamBYOBRequest_view(const ReadableStreamBYOBRequest *self);

/**
 * @brief Calls the `respond` method. 
*/
jb_Undefined ReadableStreamBYOBRequest_respond(ReadableStreamBYOBRequest* self , long long bytesWritten);

/**
 * @brief Calls the `respondWithNewView` method. 
*/
jb_Undefined ReadableStreamBYOBRequest_respondWithNewView(ReadableStreamBYOBRequest* self , jb_Any * view);

#ifdef __cplusplus
}
#endif
