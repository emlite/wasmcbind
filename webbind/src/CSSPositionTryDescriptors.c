#include <webbind/CSSPositionTryDescriptors.h>


DEFINE_EMLITE_TYPE(CSSPositionTryDescriptors, CSSStyleDeclaration);


jb_CSSOMString CSSPositionTryDescriptors_margin(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "margin"));
}


void CSSPositionTryDescriptors_set_margin(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "margin", value);
}


jb_CSSOMString CSSPositionTryDescriptors_marginTop(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "marginTop"));
}


void CSSPositionTryDescriptors_set_marginTop(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "marginTop", value);
}


jb_CSSOMString CSSPositionTryDescriptors_marginRight(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "marginRight"));
}


void CSSPositionTryDescriptors_set_marginRight(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "marginRight", value);
}


jb_CSSOMString CSSPositionTryDescriptors_marginBottom(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "marginBottom"));
}


void CSSPositionTryDescriptors_set_marginBottom(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "marginBottom", value);
}


jb_CSSOMString CSSPositionTryDescriptors_marginLeft(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "marginLeft"));
}


void CSSPositionTryDescriptors_set_marginLeft(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "marginLeft", value);
}


jb_CSSOMString CSSPositionTryDescriptors_marginBlock(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "marginBlock"));
}


void CSSPositionTryDescriptors_set_marginBlock(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "marginBlock", value);
}


jb_CSSOMString CSSPositionTryDescriptors_marginBlockStart(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "marginBlockStart"));
}


void CSSPositionTryDescriptors_set_marginBlockStart(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "marginBlockStart", value);
}


jb_CSSOMString CSSPositionTryDescriptors_marginBlockEnd(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "marginBlockEnd"));
}


void CSSPositionTryDescriptors_set_marginBlockEnd(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "marginBlockEnd", value);
}


jb_CSSOMString CSSPositionTryDescriptors_marginInline(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "marginInline"));
}


void CSSPositionTryDescriptors_set_marginInline(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "marginInline", value);
}


jb_CSSOMString CSSPositionTryDescriptors_marginInlineStart(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "marginInlineStart"));
}


void CSSPositionTryDescriptors_set_marginInlineStart(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "marginInlineStart", value);
}


jb_CSSOMString CSSPositionTryDescriptors_marginInlineEnd(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "marginInlineEnd"));
}


void CSSPositionTryDescriptors_set_marginInlineEnd(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "marginInlineEnd", value);
}


jb_CSSOMString CSSPositionTryDescriptors_margin_top(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "margin-top"));
}


void CSSPositionTryDescriptors_set_margin_top(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "margin-top", value);
}


jb_CSSOMString CSSPositionTryDescriptors_margin_right(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "margin-right"));
}


void CSSPositionTryDescriptors_set_margin_right(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "margin-right", value);
}


jb_CSSOMString CSSPositionTryDescriptors_margin_bottom(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "margin-bottom"));
}


void CSSPositionTryDescriptors_set_margin_bottom(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "margin-bottom", value);
}


jb_CSSOMString CSSPositionTryDescriptors_margin_left(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "margin-left"));
}


void CSSPositionTryDescriptors_set_margin_left(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "margin-left", value);
}


jb_CSSOMString CSSPositionTryDescriptors_margin_block(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "margin-block"));
}


void CSSPositionTryDescriptors_set_margin_block(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "margin-block", value);
}


jb_CSSOMString CSSPositionTryDescriptors_margin_block_start(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "margin-block-start"));
}


void CSSPositionTryDescriptors_set_margin_block_start(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "margin-block-start", value);
}


jb_CSSOMString CSSPositionTryDescriptors_margin_block_end(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "margin-block-end"));
}


void CSSPositionTryDescriptors_set_margin_block_end(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "margin-block-end", value);
}


jb_CSSOMString CSSPositionTryDescriptors_margin_inline(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "margin-inline"));
}


void CSSPositionTryDescriptors_set_margin_inline(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "margin-inline", value);
}


jb_CSSOMString CSSPositionTryDescriptors_margin_inline_start(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "margin-inline-start"));
}


void CSSPositionTryDescriptors_set_margin_inline_start(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "margin-inline-start", value);
}


jb_CSSOMString CSSPositionTryDescriptors_margin_inline_end(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "margin-inline-end"));
}


void CSSPositionTryDescriptors_set_margin_inline_end(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "margin-inline-end", value);
}


jb_CSSOMString CSSPositionTryDescriptors_inset(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "inset"));
}


void CSSPositionTryDescriptors_set_inset(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "inset", value);
}


jb_CSSOMString CSSPositionTryDescriptors_insetBlock(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "insetBlock"));
}


void CSSPositionTryDescriptors_set_insetBlock(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "insetBlock", value);
}


jb_CSSOMString CSSPositionTryDescriptors_insetBlockStart(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "insetBlockStart"));
}


void CSSPositionTryDescriptors_set_insetBlockStart(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "insetBlockStart", value);
}


jb_CSSOMString CSSPositionTryDescriptors_insetBlockEnd(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "insetBlockEnd"));
}


void CSSPositionTryDescriptors_set_insetBlockEnd(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "insetBlockEnd", value);
}


jb_CSSOMString CSSPositionTryDescriptors_insetInline(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "insetInline"));
}


void CSSPositionTryDescriptors_set_insetInline(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "insetInline", value);
}


jb_CSSOMString CSSPositionTryDescriptors_insetInlineStart(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "insetInlineStart"));
}


void CSSPositionTryDescriptors_set_insetInlineStart(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "insetInlineStart", value);
}


jb_CSSOMString CSSPositionTryDescriptors_insetInlineEnd(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "insetInlineEnd"));
}


void CSSPositionTryDescriptors_set_insetInlineEnd(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "insetInlineEnd", value);
}


jb_CSSOMString CSSPositionTryDescriptors_top(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "top"));
}


void CSSPositionTryDescriptors_set_top(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "top", value);
}


jb_CSSOMString CSSPositionTryDescriptors_left(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "left"));
}


void CSSPositionTryDescriptors_set_left(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "left", value);
}


jb_CSSOMString CSSPositionTryDescriptors_right(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "right"));
}


void CSSPositionTryDescriptors_set_right(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "right", value);
}


jb_CSSOMString CSSPositionTryDescriptors_bottom(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "bottom"));
}


void CSSPositionTryDescriptors_set_bottom(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "bottom", value);
}


jb_CSSOMString CSSPositionTryDescriptors_inset_block(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "inset-block"));
}


void CSSPositionTryDescriptors_set_inset_block(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "inset-block", value);
}


jb_CSSOMString CSSPositionTryDescriptors_inset_block_start(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "inset-block-start"));
}


void CSSPositionTryDescriptors_set_inset_block_start(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "inset-block-start", value);
}


jb_CSSOMString CSSPositionTryDescriptors_inset_block_end(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "inset-block-end"));
}


void CSSPositionTryDescriptors_set_inset_block_end(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "inset-block-end", value);
}


jb_CSSOMString CSSPositionTryDescriptors_inset_inline(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "inset-inline"));
}


void CSSPositionTryDescriptors_set_inset_inline(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "inset-inline", value);
}


jb_CSSOMString CSSPositionTryDescriptors_inset_inline_start(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "inset-inline-start"));
}


void CSSPositionTryDescriptors_set_inset_inline_start(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "inset-inline-start", value);
}


jb_CSSOMString CSSPositionTryDescriptors_inset_inline_end(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "inset-inline-end"));
}


void CSSPositionTryDescriptors_set_inset_inline_end(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "inset-inline-end", value);
}


jb_CSSOMString CSSPositionTryDescriptors_width(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "width"));
}


void CSSPositionTryDescriptors_set_width(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "width", value);
}


jb_CSSOMString CSSPositionTryDescriptors_minWidth(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "minWidth"));
}


void CSSPositionTryDescriptors_set_minWidth(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "minWidth", value);
}


jb_CSSOMString CSSPositionTryDescriptors_maxWidth(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "maxWidth"));
}


void CSSPositionTryDescriptors_set_maxWidth(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "maxWidth", value);
}


jb_CSSOMString CSSPositionTryDescriptors_height(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "height"));
}


void CSSPositionTryDescriptors_set_height(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "height", value);
}


jb_CSSOMString CSSPositionTryDescriptors_minHeight(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "minHeight"));
}


void CSSPositionTryDescriptors_set_minHeight(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "minHeight", value);
}


jb_CSSOMString CSSPositionTryDescriptors_maxHeight(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "maxHeight"));
}


void CSSPositionTryDescriptors_set_maxHeight(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "maxHeight", value);
}


jb_CSSOMString CSSPositionTryDescriptors_blockSize(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "blockSize"));
}


void CSSPositionTryDescriptors_set_blockSize(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "blockSize", value);
}


jb_CSSOMString CSSPositionTryDescriptors_minBlockSize(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "minBlockSize"));
}


void CSSPositionTryDescriptors_set_minBlockSize(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "minBlockSize", value);
}


jb_CSSOMString CSSPositionTryDescriptors_maxBlockSize(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "maxBlockSize"));
}


void CSSPositionTryDescriptors_set_maxBlockSize(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "maxBlockSize", value);
}


jb_CSSOMString CSSPositionTryDescriptors_inlineSize(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "inlineSize"));
}


void CSSPositionTryDescriptors_set_inlineSize(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "inlineSize", value);
}


jb_CSSOMString CSSPositionTryDescriptors_minInlineSize(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "minInlineSize"));
}


void CSSPositionTryDescriptors_set_minInlineSize(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "minInlineSize", value);
}


jb_CSSOMString CSSPositionTryDescriptors_maxInlineSize(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "maxInlineSize"));
}


void CSSPositionTryDescriptors_set_maxInlineSize(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "maxInlineSize", value);
}


jb_CSSOMString CSSPositionTryDescriptors_min_width(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "min-width"));
}


void CSSPositionTryDescriptors_set_min_width(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "min-width", value);
}


jb_CSSOMString CSSPositionTryDescriptors_max_width(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "max-width"));
}


void CSSPositionTryDescriptors_set_max_width(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "max-width", value);
}


jb_CSSOMString CSSPositionTryDescriptors_min_height(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "min-height"));
}


void CSSPositionTryDescriptors_set_min_height(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "min-height", value);
}


jb_CSSOMString CSSPositionTryDescriptors_max_height(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "max-height"));
}


void CSSPositionTryDescriptors_set_max_height(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "max-height", value);
}


jb_CSSOMString CSSPositionTryDescriptors_block_size(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "block-size"));
}


void CSSPositionTryDescriptors_set_block_size(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "block-size", value);
}


jb_CSSOMString CSSPositionTryDescriptors_min_block_size(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "min-block-size"));
}


void CSSPositionTryDescriptors_set_min_block_size(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "min-block-size", value);
}


jb_CSSOMString CSSPositionTryDescriptors_max_block_size(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "max-block-size"));
}


void CSSPositionTryDescriptors_set_max_block_size(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "max-block-size", value);
}


jb_CSSOMString CSSPositionTryDescriptors_inline_size(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "inline-size"));
}


void CSSPositionTryDescriptors_set_inline_size(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "inline-size", value);
}


jb_CSSOMString CSSPositionTryDescriptors_min_inline_size(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "min-inline-size"));
}


void CSSPositionTryDescriptors_set_min_inline_size(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "min-inline-size", value);
}


jb_CSSOMString CSSPositionTryDescriptors_max_inline_size(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "max-inline-size"));
}


void CSSPositionTryDescriptors_set_max_inline_size(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "max-inline-size", value);
}


jb_CSSOMString CSSPositionTryDescriptors_placeSelf(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "placeSelf"));
}


void CSSPositionTryDescriptors_set_placeSelf(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "placeSelf", value);
}


jb_CSSOMString CSSPositionTryDescriptors_alignSelf(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "alignSelf"));
}


void CSSPositionTryDescriptors_set_alignSelf(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "alignSelf", value);
}


jb_CSSOMString CSSPositionTryDescriptors_justifySelf(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "justifySelf"));
}


void CSSPositionTryDescriptors_set_justifySelf(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "justifySelf", value);
}


jb_CSSOMString CSSPositionTryDescriptors_place_self(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "place-self"));
}


void CSSPositionTryDescriptors_set_place_self(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "place-self", value);
}


jb_CSSOMString CSSPositionTryDescriptors_align_self(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "align-self"));
}


void CSSPositionTryDescriptors_set_align_self(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "align-self", value);
}


jb_CSSOMString CSSPositionTryDescriptors_justify_self(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "justify-self"));
}


void CSSPositionTryDescriptors_set_justify_self(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "justify-self", value);
}


jb_CSSOMString CSSPositionTryDescriptors_positionAnchor(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "positionAnchor"));
}


void CSSPositionTryDescriptors_set_positionAnchor(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "positionAnchor", value);
}


jb_CSSOMString CSSPositionTryDescriptors_position_anchor(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "position-anchor"));
}


void CSSPositionTryDescriptors_set_position_anchor(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "position-anchor", value);
}


jb_CSSOMString CSSPositionTryDescriptors_positionArea(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "positionArea"));
}


void CSSPositionTryDescriptors_set_positionArea(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "positionArea", value);
}


jb_CSSOMString CSSPositionTryDescriptors_position_area(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSStyleDeclaration_as_val(self->inner), "position-area"));
}


void CSSPositionTryDescriptors_set_position_area(CSSPositionTryDescriptors* self, const jb_CSSOMString* value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), "position-area", value);
}

