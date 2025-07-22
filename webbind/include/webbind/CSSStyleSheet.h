#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "StyleSheet.h"
#include "enums.h"

typedef struct CSSRule CSSRule;
typedef struct CSSRuleList CSSRuleList;
typedef struct CSSStyleSheet CSSStyleSheet;


DECLARE_EMLITE_TYPE(CSSStyleSheet, StyleSheet);

CSSStyleSheet CSSStyleSheet_new0();

CSSStyleSheet CSSStyleSheet_new1(jb_Any * options);

CSSRule CSSStyleSheet_ownerRule( const CSSStyleSheet *self);

CSSRuleList CSSStyleSheet_cssRules( const CSSStyleSheet *self);

unsigned long CSSStyleSheet_insertRule0(CSSStyleSheet* self , jb_CSSOMString * rule);

unsigned long CSSStyleSheet_insertRule1(CSSStyleSheet* self , jb_CSSOMString * rule, unsigned long index);

jb_Undefined CSSStyleSheet_deleteRule(CSSStyleSheet* self , unsigned long index);

jb_Promise CSSStyleSheet_replace(CSSStyleSheet* self , jb_USVString * text);

jb_Undefined CSSStyleSheet_replaceSync(CSSStyleSheet* self , jb_USVString * text);

CSSRuleList CSSStyleSheet_rules( const CSSStyleSheet *self);

long CSSStyleSheet_addRule0(CSSStyleSheet* self );

long CSSStyleSheet_addRule1(CSSStyleSheet* self , jb_DOMString * selector);

long CSSStyleSheet_addRule2(CSSStyleSheet* self , jb_DOMString * selector, jb_DOMString * style);

long CSSStyleSheet_addRule3(CSSStyleSheet* self , jb_DOMString * selector, jb_DOMString * style, unsigned long index);

jb_Undefined CSSStyleSheet_removeRule0(CSSStyleSheet* self );

jb_Undefined CSSStyleSheet_removeRule1(CSSStyleSheet* self , unsigned long index);
