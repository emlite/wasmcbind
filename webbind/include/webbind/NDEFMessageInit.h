#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "NDEFRecordInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(NDEFMessageInit, em_Val);

jb_Array NDEFMessageInit_records(const NDEFMessageInit *self);

void NDEFMessageInit_set_records(NDEFMessageInit* self, jb_Array * value);

NDEFMessageInit NDEFMessageInit_new();

#ifdef __cplusplus
}
#endif
