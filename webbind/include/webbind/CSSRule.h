#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct CSSRule CSSRule;
typedef struct CSSStyleSheet CSSStyleSheet;


DECLARE_EMLITE_TYPE(CSSRule, em_Val);

jb_CSSOMString CSSRule_cssText( const CSSRule *self);

void CSSRule_set_cssText(CSSRule* self, jb_CSSOMString * value);

CSSRule CSSRule_parentRule( const CSSRule *self);

CSSStyleSheet CSSRule_parentStyleSheet( const CSSRule *self);

unsigned short CSSRule_type( const CSSRule *self);
