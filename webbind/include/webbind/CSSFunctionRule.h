#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSGroupingRule.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct FunctionParameter FunctionParameter;

DECLARE_EMLITE_TYPE(CSSFunctionRule, CSSGroupingRule);

jb_String CSSFunctionRule_name(const CSSFunctionRule *self);

jb_Array CSSFunctionRule_getParameters(CSSFunctionRule* self );

jb_String CSSFunctionRule_returnType(const CSSFunctionRule *self);

#ifdef __cplusplus
}
#endif
