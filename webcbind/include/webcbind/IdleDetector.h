#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct IdleOptions IdleOptions;


/**
 * @brief Interface IdleDetector
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/IdleDetector)
 */
DECLARE_EMLITE_TYPE(IdleDetector, EventTarget);

/**
 * @brief Creates a new `IdleDetector` object. 
*/
IdleDetector IdleDetector_new();

/**
 * @brief Gets the `userState` property. 
*/
UserIdleState IdleDetector_userState(const IdleDetector *self);

/**
 * @brief Gets the `screenState` property. 
*/
ScreenIdleState IdleDetector_screenState(const IdleDetector *self);

/**
 * @brief Gets the `onchange` property. 
*/
jb_Any IdleDetector_onchange(const IdleDetector *self);

/**
 * @brief Sets the `onchange` property. 
*/
void IdleDetector_set_onchange(IdleDetector* self, jb_Any * value);

/**
 * @brief Calls the `requestPermission` method. 
*/
jb_Promise IdleDetector_requestPermission(IdleDetector* self );

/**
 * @brief Calls the `start` method. 
*/
jb_Promise IdleDetector_start0(IdleDetector* self );

/**
 * @brief Calls the `start` method. 
*/
jb_Promise IdleDetector_start1(IdleDetector* self , IdleOptions * options);

#ifdef __cplusplus
}
#endif
