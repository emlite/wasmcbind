#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"
#include "NDEFMessageInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type NDEFReadingEventInit */
DECLARE_EMLITE_TYPE(NDEFReadingEventInit, EventInit);

/** @brief Getter of the serialNumber property */
jb_String NDEFReadingEventInit_serialNumber(const NDEFReadingEventInit *self);

/** @brief Setter of the serialNumber property */
void NDEFReadingEventInit_set_serialNumber(NDEFReadingEventInit* self, jb_String * value);

/** @brief Getter of the message property */
NDEFMessageInit NDEFReadingEventInit_message(const NDEFReadingEventInit *self);

/** @brief Setter of the message property */
void NDEFReadingEventInit_set_message(NDEFReadingEventInit* self, NDEFMessageInit * value);

/** @brief Constructor of the NDEFReadingEventInit dictionary type */
NDEFReadingEventInit NDEFReadingEventInit_new();

#ifdef __cplusplus
}
#endif
