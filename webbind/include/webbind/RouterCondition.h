#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RouterCondition */
DECLARE_EMLITE_TYPE(RouterCondition, em_Val);

/** @brief Getter of the urlPattern property */
jb_Any RouterCondition_urlPattern(const RouterCondition *self);

/** @brief Setter of the urlPattern property */
void RouterCondition_set_urlPattern(RouterCondition* self, jb_Any * value);

/** @brief Getter of the requestMethod property */
jb_String RouterCondition_requestMethod(const RouterCondition *self);

/** @brief Setter of the requestMethod property */
void RouterCondition_set_requestMethod(RouterCondition* self, jb_String * value);

/** @brief Getter of the requestMode property */
RequestMode RouterCondition_requestMode(const RouterCondition *self);

/** @brief Setter of the requestMode property */
void RouterCondition_set_requestMode(RouterCondition* self, RequestMode * value);

/** @brief Getter of the requestDestination property */
RequestDestination RouterCondition_requestDestination(const RouterCondition *self);

/** @brief Setter of the requestDestination property */
void RouterCondition_set_requestDestination(RouterCondition* self, RequestDestination * value);

/** @brief Getter of the runningStatus property */
RunningStatus RouterCondition_runningStatus(const RouterCondition *self);

/** @brief Setter of the runningStatus property */
void RouterCondition_set_runningStatus(RouterCondition* self, RunningStatus * value);

/** @brief Getter of the or property */
jb_Array RouterCondition_or_(const RouterCondition *self);

/** @brief Setter of the or property */
void RouterCondition_set_or_(RouterCondition* self, jb_Array * value);

/** @brief Getter of the not property */
RouterCondition RouterCondition_not_(const RouterCondition *self);

/** @brief Setter of the not property */
void RouterCondition_set_not_(RouterCondition* self, RouterCondition * value);

/** @brief Constructor of the RouterCondition dictionary type */
RouterCondition RouterCondition_new();

#ifdef __cplusplus
}
#endif
