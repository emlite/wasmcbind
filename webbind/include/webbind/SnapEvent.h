#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SnapEventInit SnapEventInit;
typedef struct Node Node;


/**
 * @brief Interface SnapEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SnapEvent)
 */
DECLARE_EMLITE_TYPE(SnapEvent, Event);

/**
 * @brief Creates a new `SnapEvent` object. 
*/
SnapEvent SnapEvent_new0(jb_String * type);

/**
 * @brief Creates a new `SnapEvent` object. 
*/
SnapEvent SnapEvent_new1(jb_String * type, SnapEventInit * eventInitDict);

/**
 * @brief Gets the `snapTargetBlock` property. 
*/
Node SnapEvent_snapTargetBlock(const SnapEvent *self);

/**
 * @brief Gets the `snapTargetInline` property. 
*/
Node SnapEvent_snapTargetInline(const SnapEvent *self);

#ifdef __cplusplus
}
#endif
