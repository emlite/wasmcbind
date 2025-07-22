#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct XRSession XRSession;
typedef struct XRSessionInit XRSessionInit;


typedef struct {
  em_Val inner;
} XRSessionInit;


DECLARE_EMLITE_TYPE(XRSessionInit, em_Val);

jb_Sequence XRSessionInit_requiredFeatures( const XRSessionInit *self);

void XRSessionInit_set_requiredFeatures(XRSessionInit* self, const jb_Sequence* value);

jb_Sequence XRSessionInit_optionalFeatures( const XRSessionInit *self);

void XRSessionInit_set_optionalFeatures(XRSessionInit* self, const jb_Sequence* value);
typedef struct {
  EventTarget inner;
} XRSystem;


DECLARE_EMLITE_TYPE(XRSystem, EventTarget);

jb_Promise XRSystem_isSessionSupported(XRSystem* self , const XRSessionMode* mode);

jb_Promise XRSystem_requestSession(XRSystem* self , const XRSessionMode* mode);

jb_Promise XRSystem_requestSession(XRSystem* self , const XRSessionMode* mode, const XRSessionInit* options);

jb_Any XRSystem_ondevicechange( const XRSystem *self);

void XRSystem_set_ondevicechange(XRSystem* self, const jb_Any* value);
