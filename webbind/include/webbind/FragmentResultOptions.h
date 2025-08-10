#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "BreakTokenOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct LayoutFragment LayoutFragment;

DECLARE_EMLITE_TYPE(FragmentResultOptions, em_Val);

double FragmentResultOptions_inlineSize(const FragmentResultOptions *self);

void FragmentResultOptions_set_inlineSize(FragmentResultOptions* self, double value);

double FragmentResultOptions_blockSize(const FragmentResultOptions *self);

void FragmentResultOptions_set_blockSize(FragmentResultOptions* self, double value);

double FragmentResultOptions_autoBlockSize(const FragmentResultOptions *self);

void FragmentResultOptions_set_autoBlockSize(FragmentResultOptions* self, double value);

jb_Array FragmentResultOptions_childFragments(const FragmentResultOptions *self);

void FragmentResultOptions_set_childFragments(FragmentResultOptions* self, jb_Array * value);

jb_Any FragmentResultOptions_data(const FragmentResultOptions *self);

void FragmentResultOptions_set_data(FragmentResultOptions* self, jb_Any * value);

BreakTokenOptions FragmentResultOptions_breakToken(const FragmentResultOptions *self);

void FragmentResultOptions_set_breakToken(FragmentResultOptions* self, BreakTokenOptions * value);

FragmentResultOptions FragmentResultOptions_new();

#ifdef __cplusplus
}
#endif
