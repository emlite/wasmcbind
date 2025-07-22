#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} Global;


DECLARE_EMLITE_TYPE(Global, em_Val);

Global Global_new(const jb_Any* descriptor);

Global Global_new(const jb_Any* descriptor, const jb_Any* v);

jb_Any Global_valueOf(Global* self );

jb_Any Global_value( const Global *self);

void Global_set_value(Global* self, const jb_Any* value);
