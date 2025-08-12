#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type NotificationAction */
DECLARE_EMLITE_TYPE(NotificationAction, em_Val);

/** @brief Getter of the action property */
jb_String NotificationAction_action(const NotificationAction *self);

/** @brief Setter of the action property */
void NotificationAction_set_action(NotificationAction* self, jb_String * value);

/** @brief Getter of the title property */
jb_String NotificationAction_title(const NotificationAction *self);

/** @brief Setter of the title property */
void NotificationAction_set_title(NotificationAction* self, jb_String * value);

/** @brief Getter of the icon property */
jb_String NotificationAction_icon(const NotificationAction *self);

/** @brief Setter of the icon property */
void NotificationAction_set_icon(NotificationAction* self, jb_String * value);

/** @brief Constructor of the NotificationAction dictionary type */
NotificationAction NotificationAction_new();

#ifdef __cplusplus
}
#endif
