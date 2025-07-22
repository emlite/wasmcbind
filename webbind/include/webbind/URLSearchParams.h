#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} URLSearchParams;


DECLARE_EMLITE_TYPE(URLSearchParams, em_Val);

URLSearchParams URLSearchParams_new();

URLSearchParams URLSearchParams_new(const jb_Any* init);

unsigned long URLSearchParams_size( const URLSearchParams *self);

jb_Undefined URLSearchParams_append(URLSearchParams* self , const jb_USVString* name, const jb_USVString* value);

jb_Undefined URLSearchParams_delete_(URLSearchParams* self , const jb_USVString* name);

jb_Undefined URLSearchParams_delete_(URLSearchParams* self , const jb_USVString* name, const jb_USVString* value);

jb_USVString URLSearchParams_get(URLSearchParams* self , const jb_USVString* name);

jb_Sequence URLSearchParams_getAll(URLSearchParams* self , const jb_USVString* name);

bool URLSearchParams_has(URLSearchParams* self , const jb_USVString* name);

bool URLSearchParams_has(URLSearchParams* self , const jb_USVString* name, const jb_USVString* value);

jb_Undefined URLSearchParams_set(URLSearchParams* self , const jb_USVString* name, const jb_USVString* value);

jb_Undefined URLSearchParams_sort(URLSearchParams* self );
