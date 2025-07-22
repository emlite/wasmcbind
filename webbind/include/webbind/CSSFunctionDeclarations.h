#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSRule.h"
#include "enums.h"

typedef struct CSSFunctionDescriptors CSSFunctionDescriptors;


typedef struct {
  CSSRule inner;
} CSSFunctionDeclarations;


DECLARE_EMLITE_TYPE(CSSFunctionDeclarations, CSSRule);

CSSFunctionDescriptors CSSFunctionDeclarations_style( const CSSFunctionDeclarations *self);
