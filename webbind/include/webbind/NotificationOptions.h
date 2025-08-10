#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "NotificationAction.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(NotificationOptions, em_Val);

NotificationDirection NotificationOptions_dir(const NotificationOptions *self);

void NotificationOptions_set_dir(NotificationOptions* self, NotificationDirection * value);

jb_String NotificationOptions_lang(const NotificationOptions *self);

void NotificationOptions_set_lang(NotificationOptions* self, jb_String * value);

jb_String NotificationOptions_body(const NotificationOptions *self);

void NotificationOptions_set_body(NotificationOptions* self, jb_String * value);

jb_String NotificationOptions_tag(const NotificationOptions *self);

void NotificationOptions_set_tag(NotificationOptions* self, jb_String * value);

jb_String NotificationOptions_image(const NotificationOptions *self);

void NotificationOptions_set_image(NotificationOptions* self, jb_String * value);

jb_String NotificationOptions_icon(const NotificationOptions *self);

void NotificationOptions_set_icon(NotificationOptions* self, jb_String * value);

jb_String NotificationOptions_badge(const NotificationOptions *self);

void NotificationOptions_set_badge(NotificationOptions* self, jb_String * value);

jb_Any NotificationOptions_vibrate(const NotificationOptions *self);

void NotificationOptions_set_vibrate(NotificationOptions* self, jb_Any * value);

jb_Any NotificationOptions_timestamp(const NotificationOptions *self);

void NotificationOptions_set_timestamp(NotificationOptions* self, jb_Any * value);

bool NotificationOptions_renotify(const NotificationOptions *self);

void NotificationOptions_set_renotify(NotificationOptions* self, bool value);

bool NotificationOptions_silent(const NotificationOptions *self);

void NotificationOptions_set_silent(NotificationOptions* self, bool value);

bool NotificationOptions_requireInteraction(const NotificationOptions *self);

void NotificationOptions_set_requireInteraction(NotificationOptions* self, bool value);

jb_Any NotificationOptions_data(const NotificationOptions *self);

void NotificationOptions_set_data(NotificationOptions* self, jb_Any * value);

jb_Array NotificationOptions_actions(const NotificationOptions *self);

void NotificationOptions_set_actions(NotificationOptions* self, jb_Array * value);

NotificationOptions NotificationOptions_new();

#ifdef __cplusplus
}
#endif
