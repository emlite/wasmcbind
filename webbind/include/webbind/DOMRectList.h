#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct DOMRect DOMRect;


typedef struct {
  em_Val inner;
} DOMRectList;


DECLARE_EMLITE_TYPE(DOMRectList, em_Val);

unsigned long DOMRectList_length( const DOMRectList *self);

DOMRect DOMRectList_item(DOMRectList* self , unsigned long index);
