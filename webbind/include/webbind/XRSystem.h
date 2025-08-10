#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRSession XRSession;
typedef struct XRSessionInit XRSessionInit;

DECLARE_EMLITE_TYPE(XRSystem, EventTarget);

jb_Promise XRSystem_isSessionSupported(XRSystem* self , XRSessionMode * mode);

jb_Promise XRSystem_requestSession0(XRSystem* self , XRSessionMode * mode);

jb_Promise XRSystem_requestSession1(XRSystem* self , XRSessionMode * mode, XRSessionInit * options);

jb_Any XRSystem_ondevicechange(const XRSystem *self);

void XRSystem_set_ondevicechange(XRSystem* self, jb_Any * value);

#ifdef __cplusplus
}
#endif
