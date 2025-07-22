#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSColorValue.h"
#include "enums.h"


typedef struct {
  CSSColorValue inner;
} CSSRGB;


DECLARE_EMLITE_TYPE(CSSRGB, CSSColorValue);

CSSRGB CSSRGB_new(const jb_Any* r, const jb_Any* g, const jb_Any* b);

CSSRGB CSSRGB_new(const jb_Any* r, const jb_Any* g, const jb_Any* b, const jb_Any* alpha);

jb_Any CSSRGB_r( const CSSRGB *self);

void CSSRGB_set_r(CSSRGB* self, const jb_Any* value);

jb_Any CSSRGB_g( const CSSRGB *self);

void CSSRGB_set_g(CSSRGB* self, const jb_Any* value);

jb_Any CSSRGB_b( const CSSRGB *self);

void CSSRGB_set_b(CSSRGB* self, const jb_Any* value);

jb_Any CSSRGB_alpha( const CSSRGB *self);

void CSSRGB_set_alpha(CSSRGB* self, const jb_Any* value);
