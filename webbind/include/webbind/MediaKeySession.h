#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaKeyStatusMap MediaKeyStatusMap;


/**
 * @brief Interface MediaKeySession
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MediaKeySession)
 */
DECLARE_EMLITE_TYPE(MediaKeySession, EventTarget);

/**
 * @brief Gets the `sessionId` property. 
*/
jb_String MediaKeySession_sessionId(const MediaKeySession *self);

/**
 * @brief Gets the `expiration` property. 
*/
double MediaKeySession_expiration(const MediaKeySession *self);

/**
 * @brief Gets the `closed` property. 
*/
jb_Promise MediaKeySession_closed(const MediaKeySession *self);

/**
 * @brief Gets the `keyStatuses` property. 
*/
MediaKeyStatusMap MediaKeySession_keyStatuses(const MediaKeySession *self);

/**
 * @brief Gets the `onkeystatuseschange` property. 
*/
jb_Any MediaKeySession_onkeystatuseschange(const MediaKeySession *self);

/**
 * @brief Sets the `onkeystatuseschange` property. 
*/
void MediaKeySession_set_onkeystatuseschange(MediaKeySession* self, jb_Any * value);

/**
 * @brief Gets the `onmessage` property. 
*/
jb_Any MediaKeySession_onmessage(const MediaKeySession *self);

/**
 * @brief Sets the `onmessage` property. 
*/
void MediaKeySession_set_onmessage(MediaKeySession* self, jb_Any * value);

/**
 * @brief Calls the `generateRequest` method. 
*/
jb_Promise MediaKeySession_generateRequest(MediaKeySession* self , jb_String * initDataType, jb_Any * initData);

/**
 * @brief Calls the `load` method. 
*/
jb_Promise MediaKeySession_load(MediaKeySession* self , jb_String * sessionId);

/**
 * @brief Calls the `update` method. 
*/
jb_Promise MediaKeySession_update(MediaKeySession* self , jb_Any * response);

/**
 * @brief Calls the `close` method. 
*/
jb_Promise MediaKeySession_close(MediaKeySession* self );

/**
 * @brief Calls the `remove` method. 
*/
jb_Promise MediaKeySession_remove(MediaKeySession* self );

#ifdef __cplusplus
}
#endif
