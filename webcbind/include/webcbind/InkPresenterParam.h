#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Element Element;

/** @brief Dictionary type InkPresenterParam */
DECLARE_EMLITE_TYPE(InkPresenterParam, em_Val);

/** @brief Getter of the presentationArea property */
Element InkPresenterParam_presentationArea(const InkPresenterParam *self);

/** @brief Setter of the presentationArea property */
void InkPresenterParam_set_presentationArea(InkPresenterParam* self, Element * value);

/** @brief Constructor of the InkPresenterParam dictionary type */
InkPresenterParam InkPresenterParam_new();

#ifdef __cplusplus
}
#endif
