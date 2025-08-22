#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "XRSpace.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRRigidTransform XRRigidTransform;


/**
 * @brief Interface XRReferenceSpace
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRReferenceSpace)
 */
DECLARE_EMLITE_TYPE(XRReferenceSpace, XRSpace);

/**
 * @brief Calls the `getOffsetReferenceSpace` method. 
*/
XRReferenceSpace XRReferenceSpace_getOffsetReferenceSpace(XRReferenceSpace* self , XRRigidTransform * originOffset);

/**
 * @brief Gets the `onreset` property. 
*/
jb_Any XRReferenceSpace_onreset(const XRReferenceSpace *self);

/**
 * @brief Sets the `onreset` property. 
*/
void XRReferenceSpace_set_onreset(XRReferenceSpace* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
