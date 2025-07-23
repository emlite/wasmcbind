#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct XRSession XRSession;
typedef struct XRSessionInit XRSessionInit;


DECLARE_EMLITE_TYPE(XRSessionInit, em_Val);

jb_Sequence XRSessionInit_requiredFeatures(const XRSessionInit *self);

void XRSessionInit_set_requiredFeatures(XRSessionInit* self, jb_Sequence * value);

jb_Sequence XRSessionInit_optionalFeatures(const XRSessionInit *self);

void XRSessionInit_set_optionalFeatures(XRSessionInit* self, jb_Sequence * value);
DECLARE_EMLITE_TYPE(XRSystem, EventTarget);

jb_Promise XRSystem_isSessionSupported(XRSystem* self , XRSessionMode * mode);

jb_Promise XRSystem_requestSession0(XRSystem* self , XRSessionMode * mode);

jb_Promise XRSystem_requestSession1(XRSystem* self , XRSessionMode * mode, XRSessionInit * options);

jb_Any XRSystem_ondevicechange(const XRSystem *self);

void XRSystem_set_ondevicechange(XRSystem* self, jb_Any * value);
