#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(GetNotificationOptions, em_Val);

jb_String GetNotificationOptions_tag(const GetNotificationOptions *self);

void GetNotificationOptions_set_tag(GetNotificationOptions* self, jb_String * value);

GetNotificationOptions GetNotificationOptions_new();

#ifdef __cplusplus
}
#endif
