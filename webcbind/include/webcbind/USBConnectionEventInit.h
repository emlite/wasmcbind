#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct USBDevice USBDevice;

/** @brief Dictionary type USBConnectionEventInit */
DECLARE_EMLITE_TYPE(USBConnectionEventInit, EventInit);

/** @brief Getter of the device property */
USBDevice USBConnectionEventInit_device(const USBConnectionEventInit *self);

/** @brief Setter of the device property */
void USBConnectionEventInit_set_device(USBConnectionEventInit* self, USBDevice * value);

/** @brief Constructor of the USBConnectionEventInit dictionary type */
USBConnectionEventInit USBConnectionEventInit_new();

#ifdef __cplusplus
}
#endif
