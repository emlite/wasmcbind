#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HIDDevice HIDDevice;

/** @brief Dictionary type HIDConnectionEventInit */
DECLARE_EMLITE_TYPE(HIDConnectionEventInit, EventInit);

/** @brief Getter of the device property */
HIDDevice HIDConnectionEventInit_device(const HIDConnectionEventInit *self);

/** @brief Setter of the device property */
void HIDConnectionEventInit_set_device(HIDConnectionEventInit* self, HIDDevice * value);

/** @brief Constructor of the HIDConnectionEventInit dictionary type */
HIDConnectionEventInit HIDConnectionEventInit_new();

#ifdef __cplusplus
}
#endif
