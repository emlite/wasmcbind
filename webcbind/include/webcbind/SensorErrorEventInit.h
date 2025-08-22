#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMException DOMException;

/** @brief Dictionary type SensorErrorEventInit */
DECLARE_EMLITE_TYPE(SensorErrorEventInit, EventInit);

/** @brief Getter of the error property */
DOMException SensorErrorEventInit_error(const SensorErrorEventInit *self);

/** @brief Setter of the error property */
void SensorErrorEventInit_set_error(SensorErrorEventInit* self, DOMException * value);

/** @brief Constructor of the SensorErrorEventInit dictionary type */
SensorErrorEventInit SensorErrorEventInit_new();

#ifdef __cplusplus
}
#endif
