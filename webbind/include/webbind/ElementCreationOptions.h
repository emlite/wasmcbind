#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CustomElementRegistry CustomElementRegistry;

/** @brief Dictionary type ElementCreationOptions */
DECLARE_EMLITE_TYPE(ElementCreationOptions, em_Val);

/** @brief Getter of the customElementRegistry property */
CustomElementRegistry ElementCreationOptions_customElementRegistry(const ElementCreationOptions *self);

/** @brief Setter of the customElementRegistry property */
void ElementCreationOptions_set_customElementRegistry(ElementCreationOptions* self, CustomElementRegistry * value);

/** @brief Getter of the is property */
jb_String ElementCreationOptions_is(const ElementCreationOptions *self);

/** @brief Setter of the is property */
void ElementCreationOptions_set_is(ElementCreationOptions* self, jb_String * value);

/** @brief Constructor of the ElementCreationOptions dictionary type */
ElementCreationOptions ElementCreationOptions_new();

#ifdef __cplusplus
}
#endif
