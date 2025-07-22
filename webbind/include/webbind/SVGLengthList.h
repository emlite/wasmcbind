#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct SVGLength SVGLength;


typedef struct {
  em_Val inner;
} SVGLengthList;


DECLARE_EMLITE_TYPE(SVGLengthList, em_Val);

unsigned long SVGLengthList_length( const SVGLengthList *self);

unsigned long SVGLengthList_numberOfItems( const SVGLengthList *self);

jb_Undefined SVGLengthList_clear(SVGLengthList* self );

SVGLength SVGLengthList_initialize(SVGLengthList* self , const SVGLength* newItem);

SVGLength SVGLengthList_getItem(SVGLengthList* self , unsigned long index);

SVGLength SVGLengthList_insertItemBefore(SVGLengthList* self , const SVGLength* newItem, unsigned long index);

SVGLength SVGLengthList_replaceItem(SVGLengthList* self , const SVGLength* newItem, unsigned long index);

SVGLength SVGLengthList_removeItem(SVGLengthList* self , unsigned long index);

SVGLength SVGLengthList_appendItem(SVGLengthList* self , const SVGLength* newItem);
