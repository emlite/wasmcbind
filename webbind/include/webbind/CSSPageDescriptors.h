#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSStyleDeclaration.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(CSSPageDescriptors, CSSStyleDeclaration);

jb_CSSOMString CSSPageDescriptors_margin(const CSSPageDescriptors *self);

void CSSPageDescriptors_set_margin(CSSPageDescriptors* self, jb_CSSOMString * value);

jb_CSSOMString CSSPageDescriptors_marginTop(const CSSPageDescriptors *self);

void CSSPageDescriptors_set_marginTop(CSSPageDescriptors* self, jb_CSSOMString * value);

jb_CSSOMString CSSPageDescriptors_marginRight(const CSSPageDescriptors *self);

void CSSPageDescriptors_set_marginRight(CSSPageDescriptors* self, jb_CSSOMString * value);

jb_CSSOMString CSSPageDescriptors_marginBottom(const CSSPageDescriptors *self);

void CSSPageDescriptors_set_marginBottom(CSSPageDescriptors* self, jb_CSSOMString * value);

jb_CSSOMString CSSPageDescriptors_marginLeft(const CSSPageDescriptors *self);

void CSSPageDescriptors_set_marginLeft(CSSPageDescriptors* self, jb_CSSOMString * value);

jb_CSSOMString CSSPageDescriptors_margin_top(const CSSPageDescriptors *self);

void CSSPageDescriptors_set_margin_top(CSSPageDescriptors* self, jb_CSSOMString * value);

jb_CSSOMString CSSPageDescriptors_margin_right(const CSSPageDescriptors *self);

void CSSPageDescriptors_set_margin_right(CSSPageDescriptors* self, jb_CSSOMString * value);

jb_CSSOMString CSSPageDescriptors_margin_bottom(const CSSPageDescriptors *self);

void CSSPageDescriptors_set_margin_bottom(CSSPageDescriptors* self, jb_CSSOMString * value);

jb_CSSOMString CSSPageDescriptors_margin_left(const CSSPageDescriptors *self);

void CSSPageDescriptors_set_margin_left(CSSPageDescriptors* self, jb_CSSOMString * value);

jb_CSSOMString CSSPageDescriptors_size(const CSSPageDescriptors *self);

void CSSPageDescriptors_set_size(CSSPageDescriptors* self, jb_CSSOMString * value);

jb_CSSOMString CSSPageDescriptors_pageOrientation(const CSSPageDescriptors *self);

void CSSPageDescriptors_set_pageOrientation(CSSPageDescriptors* self, jb_CSSOMString * value);

jb_CSSOMString CSSPageDescriptors_page_orientation(const CSSPageDescriptors *self);

void CSSPageDescriptors_set_page_orientation(CSSPageDescriptors* self, jb_CSSOMString * value);

jb_CSSOMString CSSPageDescriptors_marks(const CSSPageDescriptors *self);

void CSSPageDescriptors_set_marks(CSSPageDescriptors* self, jb_CSSOMString * value);

jb_CSSOMString CSSPageDescriptors_bleed(const CSSPageDescriptors *self);

void CSSPageDescriptors_set_bleed(CSSPageDescriptors* self, jb_CSSOMString * value);
