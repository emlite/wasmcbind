#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRReferenceSpace XRReferenceSpace;
typedef struct XRRigidTransform XRRigidTransform;

/** @brief Dictionary type XRReferenceSpaceEventInit */
DECLARE_EMLITE_TYPE(XRReferenceSpaceEventInit, EventInit);

/** @brief Getter of the referenceSpace property */
XRReferenceSpace XRReferenceSpaceEventInit_referenceSpace(const XRReferenceSpaceEventInit *self);

/** @brief Setter of the referenceSpace property */
void XRReferenceSpaceEventInit_set_referenceSpace(XRReferenceSpaceEventInit* self, XRReferenceSpace * value);

/** @brief Getter of the transform property */
XRRigidTransform XRReferenceSpaceEventInit_transform(const XRReferenceSpaceEventInit *self);

/** @brief Setter of the transform property */
void XRReferenceSpaceEventInit_set_transform(XRReferenceSpaceEventInit* self, XRRigidTransform * value);

/** @brief Constructor of the XRReferenceSpaceEventInit dictionary type */
XRReferenceSpaceEventInit XRReferenceSpaceEventInit_new();

#ifdef __cplusplus
}
#endif
