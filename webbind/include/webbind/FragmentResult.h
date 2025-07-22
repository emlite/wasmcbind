#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} FragmentResult;


DECLARE_EMLITE_TYPE(FragmentResult, em_Val);

FragmentResult FragmentResult_new();

FragmentResult FragmentResult_new(const jb_Any* options);

double FragmentResult_inlineSize( const FragmentResult *self);

double FragmentResult_blockSize( const FragmentResult *self);
