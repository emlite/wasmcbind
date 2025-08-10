#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"
#include "NDEFMessageInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(NDEFReadingEventInit, EventInit);

jb_String NDEFReadingEventInit_serialNumber(const NDEFReadingEventInit *self);

void NDEFReadingEventInit_set_serialNumber(NDEFReadingEventInit* self, jb_String * value);

NDEFMessageInit NDEFReadingEventInit_message(const NDEFReadingEventInit *self);

void NDEFReadingEventInit_set_message(NDEFReadingEventInit* self, NDEFMessageInit * value);

NDEFReadingEventInit NDEFReadingEventInit_new();

#ifdef __cplusplus
}
#endif
