#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} Table;


DECLARE_EMLITE_TYPE(Table, em_Val);

Table Table_new(const jb_Any* descriptor);

Table Table_new(const jb_Any* descriptor, const jb_Any* value);

unsigned long Table_grow(Table* self , unsigned long delta);

unsigned long Table_grow(Table* self , unsigned long delta, const jb_Any* value);

jb_Any Table_get(Table* self , unsigned long index);

jb_Undefined Table_set(Table* self , unsigned long index);

jb_Undefined Table_set(Table* self , unsigned long index, const jb_Any* value);

unsigned long Table_length( const Table *self);
