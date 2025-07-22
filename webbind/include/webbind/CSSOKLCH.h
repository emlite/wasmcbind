#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSColorValue.h"
#include "enums.h"


typedef struct {
  CSSColorValue inner;
} CSSOKLCH;


DECLARE_EMLITE_TYPE(CSSOKLCH, CSSColorValue);

CSSOKLCH CSSOKLCH_new(const jb_Any* l, const jb_Any* c, const jb_Any* h);

CSSOKLCH CSSOKLCH_new(const jb_Any* l, const jb_Any* c, const jb_Any* h, const jb_Any* alpha);

jb_Any CSSOKLCH_l( const CSSOKLCH *self);

void CSSOKLCH_set_l(CSSOKLCH* self, const jb_Any* value);

jb_Any CSSOKLCH_c( const CSSOKLCH *self);

void CSSOKLCH_set_c(CSSOKLCH* self, const jb_Any* value);

jb_Any CSSOKLCH_h( const CSSOKLCH *self);

void CSSOKLCH_set_h(CSSOKLCH* self, const jb_Any* value);

jb_Any CSSOKLCH_alpha( const CSSOKLCH *self);

void CSSOKLCH_set_alpha(CSSOKLCH* self, const jb_Any* value);
