#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "RouterCondition.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(RouterRule, em_Val);

RouterCondition RouterRule_condition(const RouterRule *self);

void RouterRule_set_condition(RouterRule* self, RouterCondition * value);

jb_Any RouterRule_source(const RouterRule *self);

void RouterRule_set_source(RouterRule* self, jb_Any * value);

RouterRule RouterRule_new();

#ifdef __cplusplus
}
#endif
