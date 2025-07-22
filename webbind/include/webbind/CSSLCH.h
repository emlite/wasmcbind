#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSColorValue.h"
#include "enums.h"


typedef struct {
  CSSColorValue inner;
} CSSLCH;


DECLARE_EMLITE_TYPE(CSSLCH, CSSColorValue);

CSSLCH CSSLCH_new(const jb_Any* l, const jb_Any* c, const jb_Any* h);

CSSLCH CSSLCH_new(const jb_Any* l, const jb_Any* c, const jb_Any* h, const jb_Any* alpha);

jb_Any CSSLCH_l( const CSSLCH *self);

void CSSLCH_set_l(CSSLCH* self, const jb_Any* value);

jb_Any CSSLCH_c( const CSSLCH *self);

void CSSLCH_set_c(CSSLCH* self, const jb_Any* value);

jb_Any CSSLCH_h( const CSSLCH *self);

void CSSLCH_set_h(CSSLCH* self, const jb_Any* value);

jb_Any CSSLCH_alpha( const CSSLCH *self);

void CSSLCH_set_alpha(CSSLCH* self, const jb_Any* value);
