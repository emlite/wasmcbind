#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct IdleOptions IdleOptions;

DECLARE_EMLITE_TYPE(IdleDetector, EventTarget);

IdleDetector IdleDetector_new();

UserIdleState IdleDetector_userState(const IdleDetector *self);

ScreenIdleState IdleDetector_screenState(const IdleDetector *self);

jb_Any IdleDetector_onchange(const IdleDetector *self);

void IdleDetector_set_onchange(IdleDetector* self, jb_Any * value);

jb_Promise IdleDetector_requestPermission(IdleDetector* self );

jb_Promise IdleDetector_start0(IdleDetector* self );

jb_Promise IdleDetector_start1(IdleDetector* self , IdleOptions * options);

#ifdef __cplusplus
}
#endif
