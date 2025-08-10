#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RouterCondition, em_Val);

jb_Any RouterCondition_urlPattern(const RouterCondition *self);

void RouterCondition_set_urlPattern(RouterCondition* self, jb_Any * value);

jb_String RouterCondition_requestMethod(const RouterCondition *self);

void RouterCondition_set_requestMethod(RouterCondition* self, jb_String * value);

RequestMode RouterCondition_requestMode(const RouterCondition *self);

void RouterCondition_set_requestMode(RouterCondition* self, RequestMode * value);

RequestDestination RouterCondition_requestDestination(const RouterCondition *self);

void RouterCondition_set_requestDestination(RouterCondition* self, RequestDestination * value);

RunningStatus RouterCondition_runningStatus(const RouterCondition *self);

void RouterCondition_set_runningStatus(RouterCondition* self, RunningStatus * value);

jb_Array RouterCondition_or_(const RouterCondition *self);

void RouterCondition_set_or_(RouterCondition* self, jb_Array * value);

RouterCondition RouterCondition_not_(const RouterCondition *self);

void RouterCondition_set_not_(RouterCondition* self, RouterCondition * value);

RouterCondition RouterCondition_new();

#ifdef __cplusplus
}
#endif
