#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "SVGSVGElement.h"
#include "enums.h"

typedef struct SVGTransform SVGTransform;


typedef struct {
  em_Val inner;
} SVGTransformList;


DECLARE_EMLITE_TYPE(SVGTransformList, em_Val);

unsigned long SVGTransformList_length( const SVGTransformList *self);

unsigned long SVGTransformList_numberOfItems( const SVGTransformList *self);

jb_Undefined SVGTransformList_clear(SVGTransformList* self );

SVGTransform SVGTransformList_initialize(SVGTransformList* self , const SVGTransform* newItem);

SVGTransform SVGTransformList_getItem(SVGTransformList* self , unsigned long index);

SVGTransform SVGTransformList_insertItemBefore(SVGTransformList* self , const SVGTransform* newItem, unsigned long index);

SVGTransform SVGTransformList_replaceItem(SVGTransformList* self , const SVGTransform* newItem, unsigned long index);

SVGTransform SVGTransformList_removeItem(SVGTransformList* self , unsigned long index);

SVGTransform SVGTransformList_appendItem(SVGTransformList* self , const SVGTransform* newItem);

SVGTransform SVGTransformList_createSVGTransformFromMatrix(SVGTransformList* self );

SVGTransform SVGTransformList_createSVGTransformFromMatrix(SVGTransformList* self , const DOMMatrix2DInit* matrix);

SVGTransform SVGTransformList_consolidate(SVGTransformList* self );
