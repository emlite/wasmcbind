#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(NotificationAction, em_Val);

jb_String NotificationAction_action(const NotificationAction *self);

void NotificationAction_set_action(NotificationAction* self, jb_String * value);

jb_String NotificationAction_title(const NotificationAction *self);

void NotificationAction_set_title(NotificationAction* self, jb_String * value);

jb_String NotificationAction_icon(const NotificationAction *self);

void NotificationAction_set_icon(NotificationAction* self, jb_String * value);

NotificationAction NotificationAction_new();

#ifdef __cplusplus
}
#endif
