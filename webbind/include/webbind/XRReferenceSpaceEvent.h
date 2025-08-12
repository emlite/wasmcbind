#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Event.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRReferenceSpaceEventInit XRReferenceSpaceEventInit;
typedef struct XRReferenceSpace XRReferenceSpace;
typedef struct XRRigidTransform XRRigidTransform;


/**
 * @brief Interface XRReferenceSpaceEvent
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRReferenceSpaceEvent)
 */
DECLARE_EMLITE_TYPE(XRReferenceSpaceEvent, Event);

/**
 * @brief Creates a new `XRReferenceSpaceEvent` object. 
*/
XRReferenceSpaceEvent XRReferenceSpaceEvent_new(jb_String * type, XRReferenceSpaceEventInit * eventInitDict);

/**
 * @brief Gets the `referenceSpace` property. 
*/
XRReferenceSpace XRReferenceSpaceEvent_referenceSpace(const XRReferenceSpaceEvent *self);

/**
 * @brief Gets the `transform` property. 
*/
XRRigidTransform XRReferenceSpaceEvent_transform(const XRReferenceSpaceEvent *self);

#ifdef __cplusplus
}
#endif
