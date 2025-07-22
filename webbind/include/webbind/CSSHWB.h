#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSColorValue.h"
#include "enums.h"

typedef struct CSSNumericValue CSSNumericValue;


typedef struct {
  CSSColorValue inner;
} CSSHWB;


DECLARE_EMLITE_TYPE(CSSHWB, CSSColorValue);

CSSHWB CSSHWB_new(const CSSNumericValue* h, const jb_Any* w, const jb_Any* b);

CSSHWB CSSHWB_new(const CSSNumericValue* h, const jb_Any* w, const jb_Any* b, const jb_Any* alpha);

CSSNumericValue CSSHWB_h( const CSSHWB *self);

void CSSHWB_set_h(CSSHWB* self, const CSSNumericValue* value);

jb_Any CSSHWB_w( const CSSHWB *self);

void CSSHWB_set_w(CSSHWB* self, const jb_Any* value);

jb_Any CSSHWB_b( const CSSHWB *self);

void CSSHWB_set_b(CSSHWB* self, const jb_Any* value);

jb_Any CSSHWB_alpha( const CSSHWB *self);

void CSSHWB_set_alpha(CSSHWB* self, const jb_Any* value);
