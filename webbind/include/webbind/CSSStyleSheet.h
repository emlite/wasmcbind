#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "StyleSheet.h"
#include "enums.h"

typedef struct CSSRule CSSRule;
typedef struct CSSRuleList CSSRuleList;
typedef struct CSSStyleSheet CSSStyleSheet;


typedef struct {
  StyleSheet inner;
} CSSStyleSheet;


DECLARE_EMLITE_TYPE(CSSStyleSheet, StyleSheet);

CSSStyleSheet CSSStyleSheet_new();

CSSStyleSheet CSSStyleSheet_new(const jb_Any* options);

CSSRule CSSStyleSheet_ownerRule( const CSSStyleSheet *self);

CSSRuleList CSSStyleSheet_cssRules( const CSSStyleSheet *self);

unsigned long CSSStyleSheet_insertRule(CSSStyleSheet* self , const jb_CSSOMString* rule);

unsigned long CSSStyleSheet_insertRule(CSSStyleSheet* self , const jb_CSSOMString* rule, unsigned long index);

jb_Undefined CSSStyleSheet_deleteRule(CSSStyleSheet* self , unsigned long index);

jb_Promise CSSStyleSheet_replace(CSSStyleSheet* self , const jb_USVString* text);

jb_Undefined CSSStyleSheet_replaceSync(CSSStyleSheet* self , const jb_USVString* text);

CSSRuleList CSSStyleSheet_rules( const CSSStyleSheet *self);

long CSSStyleSheet_addRule(CSSStyleSheet* self );

long CSSStyleSheet_addRule(CSSStyleSheet* self , const jb_DOMString* selector);

long CSSStyleSheet_addRule(CSSStyleSheet* self , const jb_DOMString* selector, const jb_DOMString* style);

long CSSStyleSheet_addRule(CSSStyleSheet* self , const jb_DOMString* selector, const jb_DOMString* style, unsigned long index);

jb_Undefined CSSStyleSheet_removeRule(CSSStyleSheet* self );

jb_Undefined CSSStyleSheet_removeRule(CSSStyleSheet* self , unsigned long index);
