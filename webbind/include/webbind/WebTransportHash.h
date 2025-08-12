#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type WebTransportHash */
DECLARE_EMLITE_TYPE(WebTransportHash, em_Val);

/** @brief Getter of the algorithm property */
jb_String WebTransportHash_algorithm(const WebTransportHash *self);

/** @brief Setter of the algorithm property */
void WebTransportHash_set_algorithm(WebTransportHash* self, jb_String * value);

/** @brief Getter of the value property */
jb_Any WebTransportHash_value(const WebTransportHash *self);

/** @brief Setter of the value property */
void WebTransportHash_set_value(WebTransportHash* self, jb_Any * value);

/** @brief Constructor of the WebTransportHash dictionary type */
WebTransportHash WebTransportHash_new();

#ifdef __cplusplus
}
#endif
