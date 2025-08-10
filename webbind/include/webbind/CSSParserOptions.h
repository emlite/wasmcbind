#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CSSParserOptions, em_Val);

jb_Object CSSParserOptions_atRules(const CSSParserOptions *self);

void CSSParserOptions_set_atRules(CSSParserOptions* self, jb_Object * value);

CSSParserOptions CSSParserOptions_new();

#ifdef __cplusplus
}
#endif
