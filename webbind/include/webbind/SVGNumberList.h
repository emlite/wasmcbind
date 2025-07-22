#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct SVGNumber SVGNumber;


typedef struct {
  em_Val inner;
} SVGNumberList;


DECLARE_EMLITE_TYPE(SVGNumberList, em_Val);

unsigned long SVGNumberList_length( const SVGNumberList *self);

unsigned long SVGNumberList_numberOfItems( const SVGNumberList *self);

jb_Undefined SVGNumberList_clear(SVGNumberList* self );

SVGNumber SVGNumberList_initialize(SVGNumberList* self , const SVGNumber* newItem);

SVGNumber SVGNumberList_getItem(SVGNumberList* self , unsigned long index);

SVGNumber SVGNumberList_insertItemBefore(SVGNumberList* self , const SVGNumber* newItem, unsigned long index);

SVGNumber SVGNumberList_replaceItem(SVGNumberList* self , const SVGNumber* newItem, unsigned long index);

SVGNumber SVGNumberList_removeItem(SVGNumberList* self , unsigned long index);

SVGNumber SVGNumberList_appendItem(SVGNumberList* self , const SVGNumber* newItem);
