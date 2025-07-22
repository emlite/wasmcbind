#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct CSSRule CSSRule;


DECLARE_EMLITE_TYPE(CSSStyleDeclaration, em_Val);

jb_CSSOMString CSSStyleDeclaration_cssText( const CSSStyleDeclaration *self);

void CSSStyleDeclaration_set_cssText(CSSStyleDeclaration* self, jb_CSSOMString * value);

unsigned long CSSStyleDeclaration_length( const CSSStyleDeclaration *self);

jb_CSSOMString CSSStyleDeclaration_item(CSSStyleDeclaration* self , unsigned long index);

jb_CSSOMString CSSStyleDeclaration_getPropertyValue(CSSStyleDeclaration* self , jb_CSSOMString * property);

jb_CSSOMString CSSStyleDeclaration_getPropertyPriority(CSSStyleDeclaration* self , jb_CSSOMString * property);

jb_Undefined CSSStyleDeclaration_setProperty0(CSSStyleDeclaration* self , jb_CSSOMString * property, jb_CSSOMString * value);

jb_Undefined CSSStyleDeclaration_setProperty1(CSSStyleDeclaration* self , jb_CSSOMString * property, jb_CSSOMString * value, jb_CSSOMString * priority);

jb_CSSOMString CSSStyleDeclaration_removeProperty(CSSStyleDeclaration* self , jb_CSSOMString * property);

CSSRule CSSStyleDeclaration_parentRule( const CSSStyleDeclaration *self);
