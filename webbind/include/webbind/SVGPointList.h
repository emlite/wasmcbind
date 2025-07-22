#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct DOMPoint DOMPoint;


typedef struct {
  em_Val inner;
} SVGPointList;


DECLARE_EMLITE_TYPE(SVGPointList, em_Val);

unsigned long SVGPointList_length( const SVGPointList *self);

unsigned long SVGPointList_numberOfItems( const SVGPointList *self);

jb_Undefined SVGPointList_clear(SVGPointList* self );

DOMPoint SVGPointList_initialize(SVGPointList* self , const DOMPoint* newItem);

DOMPoint SVGPointList_getItem(SVGPointList* self , unsigned long index);

DOMPoint SVGPointList_insertItemBefore(SVGPointList* self , const DOMPoint* newItem, unsigned long index);

DOMPoint SVGPointList_replaceItem(SVGPointList* self , const DOMPoint* newItem, unsigned long index);

DOMPoint SVGPointList_removeItem(SVGPointList* self , unsigned long index);

DOMPoint SVGPointList_appendItem(SVGPointList* self , const DOMPoint* newItem);
