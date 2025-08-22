#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "NotificationAction.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type NotificationOptions */
DECLARE_EMLITE_TYPE(NotificationOptions, em_Val);

/** @brief Getter of the dir property */
NotificationDirection NotificationOptions_dir(const NotificationOptions *self);

/** @brief Setter of the dir property */
void NotificationOptions_set_dir(NotificationOptions* self, NotificationDirection * value);

/** @brief Getter of the lang property */
jb_String NotificationOptions_lang(const NotificationOptions *self);

/** @brief Setter of the lang property */
void NotificationOptions_set_lang(NotificationOptions* self, jb_String * value);

/** @brief Getter of the body property */
jb_String NotificationOptions_body(const NotificationOptions *self);

/** @brief Setter of the body property */
void NotificationOptions_set_body(NotificationOptions* self, jb_String * value);

/** @brief Getter of the navigate property */
jb_String NotificationOptions_navigate(const NotificationOptions *self);

/** @brief Setter of the navigate property */
void NotificationOptions_set_navigate(NotificationOptions* self, jb_String * value);

/** @brief Getter of the tag property */
jb_String NotificationOptions_tag(const NotificationOptions *self);

/** @brief Setter of the tag property */
void NotificationOptions_set_tag(NotificationOptions* self, jb_String * value);

/** @brief Getter of the image property */
jb_String NotificationOptions_image(const NotificationOptions *self);

/** @brief Setter of the image property */
void NotificationOptions_set_image(NotificationOptions* self, jb_String * value);

/** @brief Getter of the icon property */
jb_String NotificationOptions_icon(const NotificationOptions *self);

/** @brief Setter of the icon property */
void NotificationOptions_set_icon(NotificationOptions* self, jb_String * value);

/** @brief Getter of the badge property */
jb_String NotificationOptions_badge(const NotificationOptions *self);

/** @brief Setter of the badge property */
void NotificationOptions_set_badge(NotificationOptions* self, jb_String * value);

/** @brief Getter of the vibrate property */
jb_Any NotificationOptions_vibrate(const NotificationOptions *self);

/** @brief Setter of the vibrate property */
void NotificationOptions_set_vibrate(NotificationOptions* self, jb_Any * value);

/** @brief Getter of the timestamp property */
jb_Any NotificationOptions_timestamp(const NotificationOptions *self);

/** @brief Setter of the timestamp property */
void NotificationOptions_set_timestamp(NotificationOptions* self, jb_Any * value);

/** @brief Getter of the renotify property */
bool NotificationOptions_renotify(const NotificationOptions *self);

/** @brief Setter of the renotify property */
void NotificationOptions_set_renotify(NotificationOptions* self, bool value);

/** @brief Getter of the silent property */
bool NotificationOptions_silent(const NotificationOptions *self);

/** @brief Setter of the silent property */
void NotificationOptions_set_silent(NotificationOptions* self, bool value);

/** @brief Getter of the requireInteraction property */
bool NotificationOptions_requireInteraction(const NotificationOptions *self);

/** @brief Setter of the requireInteraction property */
void NotificationOptions_set_requireInteraction(NotificationOptions* self, bool value);

/** @brief Getter of the data property */
jb_Any NotificationOptions_data(const NotificationOptions *self);

/** @brief Setter of the data property */
void NotificationOptions_set_data(NotificationOptions* self, jb_Any * value);

/** @brief Getter of the actions property */
jb_Array NotificationOptions_actions(const NotificationOptions *self);

/** @brief Setter of the actions property */
void NotificationOptions_set_actions(NotificationOptions* self, jb_Array * value);

/** @brief Constructor of the NotificationOptions dictionary type */
NotificationOptions NotificationOptions_new();

#ifdef __cplusplus
}
#endif
