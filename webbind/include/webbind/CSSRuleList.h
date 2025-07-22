#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct CSSRule CSSRule;


typedef struct {
  em_Val inner;
} CSSRuleList;


DECLARE_EMLITE_TYPE(CSSRuleList, em_Val);

CSSRule CSSRuleList_item(CSSRuleList* self , unsigned long index);

unsigned long CSSRuleList_length( const CSSRuleList *self);
