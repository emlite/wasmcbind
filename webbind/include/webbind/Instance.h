#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Module Module;


typedef struct {
  em_Val inner;
} Instance;


DECLARE_EMLITE_TYPE(Instance, em_Val);

Instance Instance_new(const Module* module_);

Instance Instance_new(const Module* module_, const jb_Object* importObject);

jb_Object Instance_exports( const Instance *self);
