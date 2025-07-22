#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSStyleDeclaration.h"
#include "enums.h"


typedef struct {
  CSSStyleDeclaration inner;
} CSSStyleProperties;


DECLARE_EMLITE_TYPE(CSSStyleProperties, CSSStyleDeclaration);

jb_CSSOMString CSSStyleProperties_cssFloat( const CSSStyleProperties *self);

void CSSStyleProperties_set_cssFloat(CSSStyleProperties* self, const jb_CSSOMString* value);
