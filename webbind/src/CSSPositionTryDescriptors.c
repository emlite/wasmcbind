#include <webbind/CSSPositionTryDescriptors.h>


DEFINE_EMLITE_TYPE(CSSPositionTryDescriptors, CSSStyleDeclaration);


jb_String CSSPositionTryDescriptors_margin(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("margin")));
}


void CSSPositionTryDescriptors_set_margin(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("margin"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_marginTop(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("marginTop")));
}


void CSSPositionTryDescriptors_set_marginTop(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("marginTop"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_marginRight(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("marginRight")));
}


void CSSPositionTryDescriptors_set_marginRight(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("marginRight"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_marginBottom(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("marginBottom")));
}


void CSSPositionTryDescriptors_set_marginBottom(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("marginBottom"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_marginLeft(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("marginLeft")));
}


void CSSPositionTryDescriptors_set_marginLeft(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("marginLeft"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_marginBlock(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("marginBlock")));
}


void CSSPositionTryDescriptors_set_marginBlock(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("marginBlock"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_marginBlockStart(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("marginBlockStart")));
}


void CSSPositionTryDescriptors_set_marginBlockStart(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("marginBlockStart"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_marginBlockEnd(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("marginBlockEnd")));
}


void CSSPositionTryDescriptors_set_marginBlockEnd(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("marginBlockEnd"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_marginInline(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("marginInline")));
}


void CSSPositionTryDescriptors_set_marginInline(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("marginInline"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_marginInlineStart(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("marginInlineStart")));
}


void CSSPositionTryDescriptors_set_marginInlineStart(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("marginInlineStart"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_marginInlineEnd(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("marginInlineEnd")));
}


void CSSPositionTryDescriptors_set_marginInlineEnd(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("marginInlineEnd"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_margin_top(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("margin-top")));
}


void CSSPositionTryDescriptors_set_margin_top(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("margin-top"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_margin_right(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("margin-right")));
}


void CSSPositionTryDescriptors_set_margin_right(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("margin-right"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_margin_bottom(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("margin-bottom")));
}


void CSSPositionTryDescriptors_set_margin_bottom(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("margin-bottom"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_margin_left(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("margin-left")));
}


void CSSPositionTryDescriptors_set_margin_left(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("margin-left"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_margin_block(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("margin-block")));
}


void CSSPositionTryDescriptors_set_margin_block(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("margin-block"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_margin_block_start(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("margin-block-start")));
}


void CSSPositionTryDescriptors_set_margin_block_start(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("margin-block-start"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_margin_block_end(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("margin-block-end")));
}


void CSSPositionTryDescriptors_set_margin_block_end(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("margin-block-end"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_margin_inline(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("margin-inline")));
}


void CSSPositionTryDescriptors_set_margin_inline(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("margin-inline"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_margin_inline_start(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("margin-inline-start")));
}


void CSSPositionTryDescriptors_set_margin_inline_start(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("margin-inline-start"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_margin_inline_end(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("margin-inline-end")));
}


void CSSPositionTryDescriptors_set_margin_inline_end(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("margin-inline-end"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_inset(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("inset")));
}


void CSSPositionTryDescriptors_set_inset(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("inset"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_insetBlock(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("insetBlock")));
}


void CSSPositionTryDescriptors_set_insetBlock(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("insetBlock"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_insetBlockStart(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("insetBlockStart")));
}


void CSSPositionTryDescriptors_set_insetBlockStart(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("insetBlockStart"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_insetBlockEnd(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("insetBlockEnd")));
}


void CSSPositionTryDescriptors_set_insetBlockEnd(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("insetBlockEnd"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_insetInline(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("insetInline")));
}


void CSSPositionTryDescriptors_set_insetInline(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("insetInline"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_insetInlineStart(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("insetInlineStart")));
}


void CSSPositionTryDescriptors_set_insetInlineStart(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("insetInlineStart"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_insetInlineEnd(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("insetInlineEnd")));
}


void CSSPositionTryDescriptors_set_insetInlineEnd(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("insetInlineEnd"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_top(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("top")));
}


void CSSPositionTryDescriptors_set_top(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("top"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_left(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("left")));
}


void CSSPositionTryDescriptors_set_left(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("left"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_right(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("right")));
}


void CSSPositionTryDescriptors_set_right(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("right"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_bottom(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("bottom")));
}


void CSSPositionTryDescriptors_set_bottom(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("bottom"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_inset_block(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("inset-block")));
}


void CSSPositionTryDescriptors_set_inset_block(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("inset-block"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_inset_block_start(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("inset-block-start")));
}


void CSSPositionTryDescriptors_set_inset_block_start(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("inset-block-start"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_inset_block_end(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("inset-block-end")));
}


void CSSPositionTryDescriptors_set_inset_block_end(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("inset-block-end"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_inset_inline(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("inset-inline")));
}


void CSSPositionTryDescriptors_set_inset_inline(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("inset-inline"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_inset_inline_start(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("inset-inline-start")));
}


void CSSPositionTryDescriptors_set_inset_inline_start(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("inset-inline-start"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_inset_inline_end(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("inset-inline-end")));
}


void CSSPositionTryDescriptors_set_inset_inline_end(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("inset-inline-end"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_width(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("width")));
}


void CSSPositionTryDescriptors_set_width(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("width"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_minWidth(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("minWidth")));
}


void CSSPositionTryDescriptors_set_minWidth(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("minWidth"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_maxWidth(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("maxWidth")));
}


void CSSPositionTryDescriptors_set_maxWidth(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("maxWidth"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_height(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("height")));
}


void CSSPositionTryDescriptors_set_height(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("height"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_minHeight(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("minHeight")));
}


void CSSPositionTryDescriptors_set_minHeight(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("minHeight"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_maxHeight(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("maxHeight")));
}


void CSSPositionTryDescriptors_set_maxHeight(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("maxHeight"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_blockSize(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("blockSize")));
}


void CSSPositionTryDescriptors_set_blockSize(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("blockSize"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_minBlockSize(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("minBlockSize")));
}


void CSSPositionTryDescriptors_set_minBlockSize(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("minBlockSize"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_maxBlockSize(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("maxBlockSize")));
}


void CSSPositionTryDescriptors_set_maxBlockSize(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("maxBlockSize"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_inlineSize(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("inlineSize")));
}


void CSSPositionTryDescriptors_set_inlineSize(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("inlineSize"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_minInlineSize(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("minInlineSize")));
}


void CSSPositionTryDescriptors_set_minInlineSize(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("minInlineSize"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_maxInlineSize(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("maxInlineSize")));
}


void CSSPositionTryDescriptors_set_maxInlineSize(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("maxInlineSize"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_min_width(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("min-width")));
}


void CSSPositionTryDescriptors_set_min_width(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("min-width"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_max_width(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("max-width")));
}


void CSSPositionTryDescriptors_set_max_width(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("max-width"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_min_height(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("min-height")));
}


void CSSPositionTryDescriptors_set_min_height(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("min-height"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_max_height(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("max-height")));
}


void CSSPositionTryDescriptors_set_max_height(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("max-height"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_block_size(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("block-size")));
}


void CSSPositionTryDescriptors_set_block_size(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("block-size"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_min_block_size(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("min-block-size")));
}


void CSSPositionTryDescriptors_set_min_block_size(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("min-block-size"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_max_block_size(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("max-block-size")));
}


void CSSPositionTryDescriptors_set_max_block_size(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("max-block-size"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_inline_size(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("inline-size")));
}


void CSSPositionTryDescriptors_set_inline_size(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("inline-size"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_min_inline_size(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("min-inline-size")));
}


void CSSPositionTryDescriptors_set_min_inline_size(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("min-inline-size"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_max_inline_size(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("max-inline-size")));
}


void CSSPositionTryDescriptors_set_max_inline_size(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("max-inline-size"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_placeSelf(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("placeSelf")));
}


void CSSPositionTryDescriptors_set_placeSelf(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("placeSelf"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_alignSelf(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("alignSelf")));
}


void CSSPositionTryDescriptors_set_alignSelf(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("alignSelf"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_justifySelf(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("justifySelf")));
}


void CSSPositionTryDescriptors_set_justifySelf(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("justifySelf"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_place_self(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("place-self")));
}


void CSSPositionTryDescriptors_set_place_self(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("place-self"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_align_self(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("align-self")));
}


void CSSPositionTryDescriptors_set_align_self(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("align-self"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_justify_self(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("justify-self")));
}


void CSSPositionTryDescriptors_set_justify_self(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("justify-self"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_positionAnchor(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("positionAnchor")));
}


void CSSPositionTryDescriptors_set_positionAnchor(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("positionAnchor"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_position_anchor(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("position-anchor")));
}


void CSSPositionTryDescriptors_set_position_anchor(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("position-anchor"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_positionArea(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("positionArea")));
}


void CSSPositionTryDescriptors_set_positionArea(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("positionArea"), em_Val_from(value));
}


jb_String CSSPositionTryDescriptors_position_area(const CSSPositionTryDescriptors *self) {
    return em_Val_as(jb_String, em_Val_get(CSSStyleDeclaration_as_val(self->inner), em_Val_from("position-area")));
}


void CSSPositionTryDescriptors_set_position_area(CSSPositionTryDescriptors* self, jb_String * value) {
    em_Val_set(CSSStyleDeclaration_as_val(self->inner), em_Val_from("position-area"), em_Val_from(value));
}

