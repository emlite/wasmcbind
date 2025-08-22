#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RTCError RTCError;

/** @brief Dictionary type RTCErrorEventInit */
DECLARE_EMLITE_TYPE(RTCErrorEventInit, EventInit);

/** @brief Getter of the error property */
RTCError RTCErrorEventInit_error(const RTCErrorEventInit *self);

/** @brief Setter of the error property */
void RTCErrorEventInit_set_error(RTCErrorEventInit* self, RTCError * value);

/** @brief Constructor of the RTCErrorEventInit dictionary type */
RTCErrorEventInit RTCErrorEventInit_new();

#ifdef __cplusplus
}
#endif
