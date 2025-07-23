#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(URLSearchParams, em_Val);

URLSearchParams URLSearchParams_new0();

URLSearchParams URLSearchParams_new1(jb_Any * init);

unsigned long URLSearchParams_size(const URLSearchParams *self);

jb_Undefined URLSearchParams_append(URLSearchParams* self , jb_USVString * name, jb_USVString * value);

jb_Undefined URLSearchParams_delete_0(URLSearchParams* self , jb_USVString * name);

jb_Undefined URLSearchParams_delete_1(URLSearchParams* self , jb_USVString * name, jb_USVString * value);

jb_USVString URLSearchParams_get(URLSearchParams* self , jb_USVString * name);

jb_Sequence URLSearchParams_getAll(URLSearchParams* self , jb_USVString * name);

bool URLSearchParams_has0(URLSearchParams* self , jb_USVString * name);

bool URLSearchParams_has1(URLSearchParams* self , jb_USVString * name, jb_USVString * value);

jb_Undefined URLSearchParams_set(URLSearchParams* self , jb_USVString * name, jb_USVString * value);

jb_Undefined URLSearchParams_sort(URLSearchParams* self );
