#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type WebTransportErrorOptions */
DECLARE_EMLITE_TYPE(WebTransportErrorOptions, em_Val);

/** @brief Getter of the source property */
WebTransportErrorSource WebTransportErrorOptions_source(const WebTransportErrorOptions *self);

/** @brief Setter of the source property */
void WebTransportErrorOptions_set_source(WebTransportErrorOptions* self, WebTransportErrorSource * value);

/** @brief Getter of the streamErrorCode property */
unsigned long WebTransportErrorOptions_streamErrorCode(const WebTransportErrorOptions *self);

/** @brief Setter of the streamErrorCode property */
void WebTransportErrorOptions_set_streamErrorCode(WebTransportErrorOptions* self, unsigned long value);

/** @brief Constructor of the WebTransportErrorOptions dictionary type */
WebTransportErrorOptions WebTransportErrorOptions_new();

#ifdef __cplusplus
}
#endif
