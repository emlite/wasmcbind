#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NotificationOptions NotificationOptions;
typedef struct NotificationAction NotificationAction;


/**
 * @brief Interface Notification
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Notification)
 */
DECLARE_EMLITE_TYPE(Notification, EventTarget);

/**
 * @brief Creates a new `Notification` object. 
*/
Notification Notification_new0(jb_String * title);

/**
 * @brief Creates a new `Notification` object. 
*/
Notification Notification_new1(jb_String * title, NotificationOptions * options);

/**
 * @brief Gets the `permission` property. 
*/
NotificationPermission Notification_permission(const Notification *self);

/**
 * @brief Calls the `requestPermission` method. 
*/
jb_Promise Notification_requestPermission0(Notification* self );

/**
 * @brief Calls the `requestPermission` method. 
*/
jb_Promise Notification_requestPermission1(Notification* self , jb_Function * deprecatedCallback);

/**
 * @brief Gets the `maxActions` property. 
*/
unsigned long Notification_maxActions(const Notification *self);

/**
 * @brief Gets the `onclick` property. 
*/
jb_Any Notification_onclick(const Notification *self);

/**
 * @brief Sets the `onclick` property. 
*/
void Notification_set_onclick(Notification* self, jb_Any * value);

/**
 * @brief Gets the `onshow` property. 
*/
jb_Any Notification_onshow(const Notification *self);

/**
 * @brief Sets the `onshow` property. 
*/
void Notification_set_onshow(Notification* self, jb_Any * value);

/**
 * @brief Gets the `onerror` property. 
*/
jb_Any Notification_onerror(const Notification *self);

/**
 * @brief Sets the `onerror` property. 
*/
void Notification_set_onerror(Notification* self, jb_Any * value);

/**
 * @brief Gets the `onclose` property. 
*/
jb_Any Notification_onclose(const Notification *self);

/**
 * @brief Sets the `onclose` property. 
*/
void Notification_set_onclose(Notification* self, jb_Any * value);

/**
 * @brief Gets the `title` property. 
*/
jb_String Notification_title(const Notification *self);

/**
 * @brief Gets the `dir` property. 
*/
NotificationDirection Notification_dir(const Notification *self);

/**
 * @brief Gets the `lang` property. 
*/
jb_String Notification_lang(const Notification *self);

/**
 * @brief Gets the `body` property. 
*/
jb_String Notification_body(const Notification *self);

/**
 * @brief Gets the `tag` property. 
*/
jb_String Notification_tag(const Notification *self);

/**
 * @brief Gets the `image` property. 
*/
jb_String Notification_image(const Notification *self);

/**
 * @brief Gets the `icon` property. 
*/
jb_String Notification_icon(const Notification *self);

/**
 * @brief Gets the `badge` property. 
*/
jb_String Notification_badge(const Notification *self);

/**
 * @brief Gets the `vibrate` property. 
*/
jb_Array Notification_vibrate(const Notification *self);

/**
 * @brief Gets the `timestamp` property. 
*/
jb_Any Notification_timestamp(const Notification *self);

/**
 * @brief Gets the `renotify` property. 
*/
bool Notification_renotify(const Notification *self);

/**
 * @brief Gets the `silent` property. 
*/
bool Notification_silent(const Notification *self);

/**
 * @brief Gets the `requireInteraction` property. 
*/
bool Notification_requireInteraction(const Notification *self);

/**
 * @brief Gets the `data` property. 
*/
jb_Any Notification_data(const Notification *self);

/**
 * @brief Gets the `actions` property. 
*/
jb_Array Notification_actions(const Notification *self);

/**
 * @brief Calls the `close` method. 
*/
jb_Undefined Notification_close(Notification* self );

#ifdef __cplusplus
}
#endif
