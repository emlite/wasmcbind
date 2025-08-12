#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PropertyDefinition */
DECLARE_EMLITE_TYPE(PropertyDefinition, em_Val);

/** @brief Getter of the name property */
jb_String PropertyDefinition_name(const PropertyDefinition *self);

/** @brief Setter of the name property */
void PropertyDefinition_set_name(PropertyDefinition* self, jb_String * value);

/** @brief Getter of the syntax property */
jb_String PropertyDefinition_syntax(const PropertyDefinition *self);

/** @brief Setter of the syntax property */
void PropertyDefinition_set_syntax(PropertyDefinition* self, jb_String * value);

/** @brief Getter of the inherits property */
bool PropertyDefinition_inherits(const PropertyDefinition *self);

/** @brief Setter of the inherits property */
void PropertyDefinition_set_inherits(PropertyDefinition* self, bool value);

/** @brief Getter of the initialValue property */
jb_String PropertyDefinition_initialValue(const PropertyDefinition *self);

/** @brief Setter of the initialValue property */
void PropertyDefinition_set_initialValue(PropertyDefinition* self, jb_String * value);

/** @brief Constructor of the PropertyDefinition dictionary type */
PropertyDefinition PropertyDefinition_new();

#ifdef __cplusplus
}
#endif
