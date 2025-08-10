#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ProgressEventInit, EventInit);

bool ProgressEventInit_lengthComputable(const ProgressEventInit *self);

void ProgressEventInit_set_lengthComputable(ProgressEventInit* self, bool value);

double ProgressEventInit_loaded(const ProgressEventInit *self);

void ProgressEventInit_set_loaded(ProgressEventInit* self, double value);

double ProgressEventInit_total(const ProgressEventInit *self);

void ProgressEventInit_set_total(ProgressEventInit* self, double value);

ProgressEventInit ProgressEventInit_new();

#ifdef __cplusplus
}
#endif
