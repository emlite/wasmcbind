#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSColorValue.h"
#include "enums.h"


typedef struct {
  CSSColorValue inner;
} CSSLab;


DECLARE_EMLITE_TYPE(CSSLab, CSSColorValue);

CSSLab CSSLab_new(const jb_Any* l, const jb_Any* a, const jb_Any* b);

CSSLab CSSLab_new(const jb_Any* l, const jb_Any* a, const jb_Any* b, const jb_Any* alpha);

jb_Any CSSLab_l( const CSSLab *self);

void CSSLab_set_l(CSSLab* self, const jb_Any* value);

jb_Any CSSLab_a( const CSSLab *self);

void CSSLab_set_a(CSSLab* self, const jb_Any* value);

jb_Any CSSLab_b( const CSSLab *self);

void CSSLab_set_b(CSSLab* self, const jb_Any* value);

jb_Any CSSLab_alpha( const CSSLab *self);

void CSSLab_set_alpha(CSSLab* self, const jb_Any* value);
