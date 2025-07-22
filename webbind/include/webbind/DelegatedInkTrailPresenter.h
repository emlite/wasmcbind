#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Element Element;
typedef struct PointerEvent PointerEvent;
typedef struct InkTrailStyle InkTrailStyle;


typedef struct {
  em_Val inner;
} InkTrailStyle;


DECLARE_EMLITE_TYPE(InkTrailStyle, em_Val);

jb_DOMString InkTrailStyle_color( const InkTrailStyle *self);

void InkTrailStyle_set_color(InkTrailStyle* self, const jb_DOMString* value);

double InkTrailStyle_diameter( const InkTrailStyle *self);

void InkTrailStyle_set_diameter(InkTrailStyle* self, double value);
typedef struct {
  em_Val inner;
} DelegatedInkTrailPresenter;


DECLARE_EMLITE_TYPE(DelegatedInkTrailPresenter, em_Val);

Element DelegatedInkTrailPresenter_presentationArea( const DelegatedInkTrailPresenter *self);

jb_Undefined DelegatedInkTrailPresenter_updateInkTrailStartPoint(DelegatedInkTrailPresenter* self , const PointerEvent* event, const InkTrailStyle* style);
