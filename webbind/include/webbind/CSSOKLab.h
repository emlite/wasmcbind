#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSColorValue.h"
#include "enums.h"


typedef struct {
  CSSColorValue inner;
} CSSOKLab;


DECLARE_EMLITE_TYPE(CSSOKLab, CSSColorValue);

CSSOKLab CSSOKLab_new(const jb_Any* l, const jb_Any* a, const jb_Any* b);

CSSOKLab CSSOKLab_new(const jb_Any* l, const jb_Any* a, const jb_Any* b, const jb_Any* alpha);

jb_Any CSSOKLab_l( const CSSOKLab *self);

void CSSOKLab_set_l(CSSOKLab* self, const jb_Any* value);

jb_Any CSSOKLab_a( const CSSOKLab *self);

void CSSOKLab_set_a(CSSOKLab* self, const jb_Any* value);

jb_Any CSSOKLab_b( const CSSOKLab *self);

void CSSOKLab_set_b(CSSOKLab* self, const jb_Any* value);

jb_Any CSSOKLab_alpha( const CSSOKLab *self);

void CSSOKLab_set_alpha(CSSOKLab* self, const jb_Any* value);
