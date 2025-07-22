#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct AbstractRange AbstractRange;


typedef struct {
  em_Val inner;
} Highlight;


DECLARE_EMLITE_TYPE(Highlight, em_Val);

Highlight Highlight_new(const AbstractRange* initialRanges);

long Highlight_priority( const Highlight *self);

void Highlight_set_priority(Highlight* self, long value);

HighlightType Highlight_type( const Highlight *self);

void Highlight_set_type(Highlight* self, const HighlightType* value);
