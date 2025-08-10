#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(HandwritingModelConstraint, em_Val);

jb_Array HandwritingModelConstraint_languages(const HandwritingModelConstraint *self);

void HandwritingModelConstraint_set_languages(HandwritingModelConstraint* self, jb_Array * value);

HandwritingModelConstraint HandwritingModelConstraint_new();

#ifdef __cplusplus
}
#endif
