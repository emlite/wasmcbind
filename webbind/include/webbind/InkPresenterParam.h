#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Element Element;

DECLARE_EMLITE_TYPE(InkPresenterParam, em_Val);

Element InkPresenterParam_presentationArea(const InkPresenterParam *self);

void InkPresenterParam_set_presentationArea(InkPresenterParam* self, Element * value);

InkPresenterParam InkPresenterParam_new();

#ifdef __cplusplus
}
#endif
