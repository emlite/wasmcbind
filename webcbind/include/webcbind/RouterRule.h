#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "RouterCondition.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type RouterRule */
DECLARE_EMLITE_TYPE(RouterRule, em_Val);

/** @brief Getter of the condition property */
RouterCondition RouterRule_condition(const RouterRule *self);

/** @brief Setter of the condition property */
void RouterRule_set_condition(RouterRule* self, RouterCondition * value);

/** @brief Getter of the source property */
jb_Any RouterRule_source(const RouterRule *self);

/** @brief Setter of the source property */
void RouterRule_set_source(RouterRule* self, jb_Any * value);

/** @brief Constructor of the RouterRule dictionary type */
RouterRule RouterRule_new();

#ifdef __cplusplus
}
#endif
