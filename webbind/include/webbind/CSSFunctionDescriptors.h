#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSStyleDeclaration.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(CSSFunctionDescriptors, CSSStyleDeclaration);

jb_CSSOMString CSSFunctionDescriptors_result(const CSSFunctionDescriptors *self);

void CSSFunctionDescriptors_set_result(CSSFunctionDescriptors* self, jb_CSSOMString * value);
