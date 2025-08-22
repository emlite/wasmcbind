#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "DOMException.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct WebTransportErrorOptions WebTransportErrorOptions;


/**
 * @brief Interface WebTransportError
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportError)
 */
DECLARE_EMLITE_TYPE(WebTransportError, DOMException);

/**
 * @brief Creates a new `WebTransportError` object. 
*/
WebTransportError WebTransportError_new0();

/**
 * @brief Creates a new `WebTransportError` object. 
*/
WebTransportError WebTransportError_new1(jb_String * message);

/**
 * @brief Creates a new `WebTransportError` object. 
*/
WebTransportError WebTransportError_new2(jb_String * message, WebTransportErrorOptions * options);

/**
 * @brief Gets the `source` property. 
*/
WebTransportErrorSource WebTransportError_source(const WebTransportError *self);

/**
 * @brief Gets the `streamErrorCode` property. 
*/
unsigned long WebTransportError_streamErrorCode(const WebTransportError *self);

#ifdef __cplusplus
}
#endif
