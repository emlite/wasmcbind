#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSRule.h"
#include "enums.h"


typedef struct {
  CSSRule inner;
} CSSNamespaceRule;


DECLARE_EMLITE_TYPE(CSSNamespaceRule, CSSRule);

jb_CSSOMString CSSNamespaceRule_namespaceURI( const CSSNamespaceRule *self);

jb_CSSOMString CSSNamespaceRule_prefix( const CSSNamespaceRule *self);
