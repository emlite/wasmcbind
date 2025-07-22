#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSColorValue.h"
#include "enums.h"


typedef struct {
  CSSColorValue inner;
} CSSHSL;


DECLARE_EMLITE_TYPE(CSSHSL, CSSColorValue);

CSSHSL CSSHSL_new(const jb_Any* h, const jb_Any* s, const jb_Any* l);

CSSHSL CSSHSL_new(const jb_Any* h, const jb_Any* s, const jb_Any* l, const jb_Any* alpha);

jb_Any CSSHSL_h( const CSSHSL *self);

void CSSHSL_set_h(CSSHSL* self, const jb_Any* value);

jb_Any CSSHSL_s( const CSSHSL *self);

void CSSHSL_set_s(CSSHSL* self, const jb_Any* value);

jb_Any CSSHSL_l( const CSSHSL *self);

void CSSHSL_set_l(CSSHSL* self, const jb_Any* value);

jb_Any CSSHSL_alpha( const CSSHSL *self);

void CSSHSL_set_alpha(CSSHSL* self, const jb_Any* value);
