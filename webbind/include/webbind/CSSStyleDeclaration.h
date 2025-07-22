#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct CSSRule CSSRule;


typedef struct {
  em_Val inner;
} CSSStyleDeclaration;


DECLARE_EMLITE_TYPE(CSSStyleDeclaration, em_Val);

jb_CSSOMString CSSStyleDeclaration_cssText( const CSSStyleDeclaration *self);

void CSSStyleDeclaration_set_cssText(CSSStyleDeclaration* self, const jb_CSSOMString* value);

unsigned long CSSStyleDeclaration_length( const CSSStyleDeclaration *self);

jb_CSSOMString CSSStyleDeclaration_item(CSSStyleDeclaration* self , unsigned long index);

jb_CSSOMString CSSStyleDeclaration_getPropertyValue(CSSStyleDeclaration* self , const jb_CSSOMString* property);

jb_CSSOMString CSSStyleDeclaration_getPropertyPriority(CSSStyleDeclaration* self , const jb_CSSOMString* property);

jb_Undefined CSSStyleDeclaration_setProperty(CSSStyleDeclaration* self , const jb_CSSOMString* property, const jb_CSSOMString* value);

jb_Undefined CSSStyleDeclaration_setProperty(CSSStyleDeclaration* self , const jb_CSSOMString* property, const jb_CSSOMString* value, const jb_CSSOMString* priority);

jb_CSSOMString CSSStyleDeclaration_removeProperty(CSSStyleDeclaration* self , const jb_CSSOMString* property);

CSSRule CSSStyleDeclaration_parentRule( const CSSStyleDeclaration *self);
