#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Node Node;
typedef struct DOMRectReadOnly DOMRectReadOnly;


typedef struct {
  em_Val inner;
} LayoutShiftAttribution;


DECLARE_EMLITE_TYPE(LayoutShiftAttribution, em_Val);

Node LayoutShiftAttribution_node( const LayoutShiftAttribution *self);

DOMRectReadOnly LayoutShiftAttribution_previousRect( const LayoutShiftAttribution *self);

DOMRectReadOnly LayoutShiftAttribution_currentRect( const LayoutShiftAttribution *self);
