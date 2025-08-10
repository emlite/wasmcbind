#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSRule.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSFunctionDescriptors CSSFunctionDescriptors;

DECLARE_EMLITE_TYPE(CSSFunctionDeclarations, CSSRule);

CSSFunctionDescriptors CSSFunctionDeclarations_style(const CSSFunctionDeclarations *self);

#ifdef __cplusplus
}
#endif
