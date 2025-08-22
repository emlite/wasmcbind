#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type GetNotificationOptions */
DECLARE_EMLITE_TYPE(GetNotificationOptions, em_Val);

/** @brief Getter of the tag property */
jb_String GetNotificationOptions_tag(const GetNotificationOptions *self);

/** @brief Setter of the tag property */
void GetNotificationOptions_set_tag(GetNotificationOptions* self, jb_String * value);

/** @brief Constructor of the GetNotificationOptions dictionary type */
GetNotificationOptions GetNotificationOptions_new();

#ifdef __cplusplus
}
#endif
