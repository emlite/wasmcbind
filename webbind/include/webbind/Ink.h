#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct DelegatedInkTrailPresenter DelegatedInkTrailPresenter;
typedef struct InkPresenterParam InkPresenterParam;
typedef struct Element Element;


typedef struct {
  em_Val inner;
} InkPresenterParam;


DECLARE_EMLITE_TYPE(InkPresenterParam, em_Val);

Element InkPresenterParam_presentationArea( const InkPresenterParam *self);

void InkPresenterParam_set_presentationArea(InkPresenterParam* self, const Element* value);
typedef struct {
  em_Val inner;
} Ink;


DECLARE_EMLITE_TYPE(Ink, em_Val);

jb_Promise Ink_requestPresenter(Ink* self );

jb_Promise Ink_requestPresenter(Ink* self , const InkPresenterParam* param);
