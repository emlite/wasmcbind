#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(SVGStringList, em_Val);

unsigned long SVGStringList_length(const SVGStringList *self);

unsigned long SVGStringList_numberOfItems(const SVGStringList *self);

jb_Undefined SVGStringList_clear(SVGStringList* self );

jb_DOMString SVGStringList_initialize(SVGStringList* self , jb_DOMString * newItem);

jb_DOMString SVGStringList_getItem(SVGStringList* self , unsigned long index);

jb_DOMString SVGStringList_insertItemBefore(SVGStringList* self , jb_DOMString * newItem, unsigned long index);

jb_DOMString SVGStringList_replaceItem(SVGStringList* self , jb_DOMString * newItem, unsigned long index);

jb_DOMString SVGStringList_removeItem(SVGStringList* self , unsigned long index);

jb_DOMString SVGStringList_appendItem(SVGStringList* self , jb_DOMString * newItem);
