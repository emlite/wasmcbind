#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Plugin Plugin;


typedef struct {
  em_Val inner;
} PluginArray;


DECLARE_EMLITE_TYPE(PluginArray, em_Val);

jb_Undefined PluginArray_refresh(PluginArray* self );

unsigned long PluginArray_length( const PluginArray *self);

Plugin PluginArray_item(PluginArray* self , unsigned long index);

Plugin PluginArray_namedItem(PluginArray* self , const jb_DOMString* name);
