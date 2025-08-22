#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "CSSStyleDeclaration.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSPositionTryDescriptors
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSPositionTryDescriptors)
 */
DECLARE_EMLITE_TYPE(CSSPositionTryDescriptors, CSSStyleDeclaration);

/**
 * @brief Gets the `margin` property. 
*/
jb_String CSSPositionTryDescriptors_margin(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `margin` property. 
*/
void CSSPositionTryDescriptors_set_margin(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `marginTop` property. 
*/
jb_String CSSPositionTryDescriptors_marginTop(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `marginTop` property. 
*/
void CSSPositionTryDescriptors_set_marginTop(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `marginRight` property. 
*/
jb_String CSSPositionTryDescriptors_marginRight(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `marginRight` property. 
*/
void CSSPositionTryDescriptors_set_marginRight(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `marginBottom` property. 
*/
jb_String CSSPositionTryDescriptors_marginBottom(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `marginBottom` property. 
*/
void CSSPositionTryDescriptors_set_marginBottom(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `marginLeft` property. 
*/
jb_String CSSPositionTryDescriptors_marginLeft(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `marginLeft` property. 
*/
void CSSPositionTryDescriptors_set_marginLeft(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `marginBlock` property. 
*/
jb_String CSSPositionTryDescriptors_marginBlock(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `marginBlock` property. 
*/
void CSSPositionTryDescriptors_set_marginBlock(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `marginBlockStart` property. 
*/
jb_String CSSPositionTryDescriptors_marginBlockStart(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `marginBlockStart` property. 
*/
void CSSPositionTryDescriptors_set_marginBlockStart(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `marginBlockEnd` property. 
*/
jb_String CSSPositionTryDescriptors_marginBlockEnd(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `marginBlockEnd` property. 
*/
void CSSPositionTryDescriptors_set_marginBlockEnd(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `marginInline` property. 
*/
jb_String CSSPositionTryDescriptors_marginInline(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `marginInline` property. 
*/
void CSSPositionTryDescriptors_set_marginInline(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `marginInlineStart` property. 
*/
jb_String CSSPositionTryDescriptors_marginInlineStart(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `marginInlineStart` property. 
*/
void CSSPositionTryDescriptors_set_marginInlineStart(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `marginInlineEnd` property. 
*/
jb_String CSSPositionTryDescriptors_marginInlineEnd(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `marginInlineEnd` property. 
*/
void CSSPositionTryDescriptors_set_marginInlineEnd(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `margin-top` property. 
*/
jb_String CSSPositionTryDescriptors_margin_top(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `margin-top` property. 
*/
void CSSPositionTryDescriptors_set_margin_top(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `margin-right` property. 
*/
jb_String CSSPositionTryDescriptors_margin_right(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `margin-right` property. 
*/
void CSSPositionTryDescriptors_set_margin_right(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `margin-bottom` property. 
*/
jb_String CSSPositionTryDescriptors_margin_bottom(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `margin-bottom` property. 
*/
void CSSPositionTryDescriptors_set_margin_bottom(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `margin-left` property. 
*/
jb_String CSSPositionTryDescriptors_margin_left(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `margin-left` property. 
*/
void CSSPositionTryDescriptors_set_margin_left(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `margin-block` property. 
*/
jb_String CSSPositionTryDescriptors_margin_block(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `margin-block` property. 
*/
void CSSPositionTryDescriptors_set_margin_block(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `margin-block-start` property. 
*/
jb_String CSSPositionTryDescriptors_margin_block_start(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `margin-block-start` property. 
*/
void CSSPositionTryDescriptors_set_margin_block_start(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `margin-block-end` property. 
*/
jb_String CSSPositionTryDescriptors_margin_block_end(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `margin-block-end` property. 
*/
void CSSPositionTryDescriptors_set_margin_block_end(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `margin-inline` property. 
*/
jb_String CSSPositionTryDescriptors_margin_inline(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `margin-inline` property. 
*/
void CSSPositionTryDescriptors_set_margin_inline(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `margin-inline-start` property. 
*/
jb_String CSSPositionTryDescriptors_margin_inline_start(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `margin-inline-start` property. 
*/
void CSSPositionTryDescriptors_set_margin_inline_start(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `margin-inline-end` property. 
*/
jb_String CSSPositionTryDescriptors_margin_inline_end(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `margin-inline-end` property. 
*/
void CSSPositionTryDescriptors_set_margin_inline_end(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `inset` property. 
*/
jb_String CSSPositionTryDescriptors_inset(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `inset` property. 
*/
void CSSPositionTryDescriptors_set_inset(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `insetBlock` property. 
*/
jb_String CSSPositionTryDescriptors_insetBlock(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `insetBlock` property. 
*/
void CSSPositionTryDescriptors_set_insetBlock(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `insetBlockStart` property. 
*/
jb_String CSSPositionTryDescriptors_insetBlockStart(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `insetBlockStart` property. 
*/
void CSSPositionTryDescriptors_set_insetBlockStart(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `insetBlockEnd` property. 
*/
jb_String CSSPositionTryDescriptors_insetBlockEnd(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `insetBlockEnd` property. 
*/
void CSSPositionTryDescriptors_set_insetBlockEnd(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `insetInline` property. 
*/
jb_String CSSPositionTryDescriptors_insetInline(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `insetInline` property. 
*/
void CSSPositionTryDescriptors_set_insetInline(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `insetInlineStart` property. 
*/
jb_String CSSPositionTryDescriptors_insetInlineStart(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `insetInlineStart` property. 
*/
void CSSPositionTryDescriptors_set_insetInlineStart(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `insetInlineEnd` property. 
*/
jb_String CSSPositionTryDescriptors_insetInlineEnd(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `insetInlineEnd` property. 
*/
void CSSPositionTryDescriptors_set_insetInlineEnd(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `top` property. 
*/
jb_String CSSPositionTryDescriptors_top(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `top` property. 
*/
void CSSPositionTryDescriptors_set_top(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `left` property. 
*/
jb_String CSSPositionTryDescriptors_left(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `left` property. 
*/
void CSSPositionTryDescriptors_set_left(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `right` property. 
*/
jb_String CSSPositionTryDescriptors_right(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `right` property. 
*/
void CSSPositionTryDescriptors_set_right(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `bottom` property. 
*/
jb_String CSSPositionTryDescriptors_bottom(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `bottom` property. 
*/
void CSSPositionTryDescriptors_set_bottom(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `inset-block` property. 
*/
jb_String CSSPositionTryDescriptors_inset_block(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `inset-block` property. 
*/
void CSSPositionTryDescriptors_set_inset_block(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `inset-block-start` property. 
*/
jb_String CSSPositionTryDescriptors_inset_block_start(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `inset-block-start` property. 
*/
void CSSPositionTryDescriptors_set_inset_block_start(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `inset-block-end` property. 
*/
jb_String CSSPositionTryDescriptors_inset_block_end(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `inset-block-end` property. 
*/
void CSSPositionTryDescriptors_set_inset_block_end(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `inset-inline` property. 
*/
jb_String CSSPositionTryDescriptors_inset_inline(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `inset-inline` property. 
*/
void CSSPositionTryDescriptors_set_inset_inline(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `inset-inline-start` property. 
*/
jb_String CSSPositionTryDescriptors_inset_inline_start(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `inset-inline-start` property. 
*/
void CSSPositionTryDescriptors_set_inset_inline_start(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `inset-inline-end` property. 
*/
jb_String CSSPositionTryDescriptors_inset_inline_end(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `inset-inline-end` property. 
*/
void CSSPositionTryDescriptors_set_inset_inline_end(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `width` property. 
*/
jb_String CSSPositionTryDescriptors_width(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `width` property. 
*/
void CSSPositionTryDescriptors_set_width(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `minWidth` property. 
*/
jb_String CSSPositionTryDescriptors_minWidth(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `minWidth` property. 
*/
void CSSPositionTryDescriptors_set_minWidth(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `maxWidth` property. 
*/
jb_String CSSPositionTryDescriptors_maxWidth(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `maxWidth` property. 
*/
void CSSPositionTryDescriptors_set_maxWidth(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `height` property. 
*/
jb_String CSSPositionTryDescriptors_height(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `height` property. 
*/
void CSSPositionTryDescriptors_set_height(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `minHeight` property. 
*/
jb_String CSSPositionTryDescriptors_minHeight(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `minHeight` property. 
*/
void CSSPositionTryDescriptors_set_minHeight(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `maxHeight` property. 
*/
jb_String CSSPositionTryDescriptors_maxHeight(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `maxHeight` property. 
*/
void CSSPositionTryDescriptors_set_maxHeight(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `blockSize` property. 
*/
jb_String CSSPositionTryDescriptors_blockSize(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `blockSize` property. 
*/
void CSSPositionTryDescriptors_set_blockSize(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `minBlockSize` property. 
*/
jb_String CSSPositionTryDescriptors_minBlockSize(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `minBlockSize` property. 
*/
void CSSPositionTryDescriptors_set_minBlockSize(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `maxBlockSize` property. 
*/
jb_String CSSPositionTryDescriptors_maxBlockSize(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `maxBlockSize` property. 
*/
void CSSPositionTryDescriptors_set_maxBlockSize(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `inlineSize` property. 
*/
jb_String CSSPositionTryDescriptors_inlineSize(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `inlineSize` property. 
*/
void CSSPositionTryDescriptors_set_inlineSize(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `minInlineSize` property. 
*/
jb_String CSSPositionTryDescriptors_minInlineSize(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `minInlineSize` property. 
*/
void CSSPositionTryDescriptors_set_minInlineSize(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `maxInlineSize` property. 
*/
jb_String CSSPositionTryDescriptors_maxInlineSize(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `maxInlineSize` property. 
*/
void CSSPositionTryDescriptors_set_maxInlineSize(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `min-width` property. 
*/
jb_String CSSPositionTryDescriptors_min_width(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `min-width` property. 
*/
void CSSPositionTryDescriptors_set_min_width(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `max-width` property. 
*/
jb_String CSSPositionTryDescriptors_max_width(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `max-width` property. 
*/
void CSSPositionTryDescriptors_set_max_width(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `min-height` property. 
*/
jb_String CSSPositionTryDescriptors_min_height(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `min-height` property. 
*/
void CSSPositionTryDescriptors_set_min_height(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `max-height` property. 
*/
jb_String CSSPositionTryDescriptors_max_height(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `max-height` property. 
*/
void CSSPositionTryDescriptors_set_max_height(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `block-size` property. 
*/
jb_String CSSPositionTryDescriptors_block_size(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `block-size` property. 
*/
void CSSPositionTryDescriptors_set_block_size(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `min-block-size` property. 
*/
jb_String CSSPositionTryDescriptors_min_block_size(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `min-block-size` property. 
*/
void CSSPositionTryDescriptors_set_min_block_size(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `max-block-size` property. 
*/
jb_String CSSPositionTryDescriptors_max_block_size(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `max-block-size` property. 
*/
void CSSPositionTryDescriptors_set_max_block_size(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `inline-size` property. 
*/
jb_String CSSPositionTryDescriptors_inline_size(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `inline-size` property. 
*/
void CSSPositionTryDescriptors_set_inline_size(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `min-inline-size` property. 
*/
jb_String CSSPositionTryDescriptors_min_inline_size(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `min-inline-size` property. 
*/
void CSSPositionTryDescriptors_set_min_inline_size(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `max-inline-size` property. 
*/
jb_String CSSPositionTryDescriptors_max_inline_size(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `max-inline-size` property. 
*/
void CSSPositionTryDescriptors_set_max_inline_size(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `placeSelf` property. 
*/
jb_String CSSPositionTryDescriptors_placeSelf(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `placeSelf` property. 
*/
void CSSPositionTryDescriptors_set_placeSelf(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `alignSelf` property. 
*/
jb_String CSSPositionTryDescriptors_alignSelf(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `alignSelf` property. 
*/
void CSSPositionTryDescriptors_set_alignSelf(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `justifySelf` property. 
*/
jb_String CSSPositionTryDescriptors_justifySelf(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `justifySelf` property. 
*/
void CSSPositionTryDescriptors_set_justifySelf(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `place-self` property. 
*/
jb_String CSSPositionTryDescriptors_place_self(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `place-self` property. 
*/
void CSSPositionTryDescriptors_set_place_self(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `align-self` property. 
*/
jb_String CSSPositionTryDescriptors_align_self(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `align-self` property. 
*/
void CSSPositionTryDescriptors_set_align_self(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `justify-self` property. 
*/
jb_String CSSPositionTryDescriptors_justify_self(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `justify-self` property. 
*/
void CSSPositionTryDescriptors_set_justify_self(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `positionAnchor` property. 
*/
jb_String CSSPositionTryDescriptors_positionAnchor(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `positionAnchor` property. 
*/
void CSSPositionTryDescriptors_set_positionAnchor(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `position-anchor` property. 
*/
jb_String CSSPositionTryDescriptors_position_anchor(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `position-anchor` property. 
*/
void CSSPositionTryDescriptors_set_position_anchor(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `positionArea` property. 
*/
jb_String CSSPositionTryDescriptors_positionArea(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `positionArea` property. 
*/
void CSSPositionTryDescriptors_set_positionArea(CSSPositionTryDescriptors* self, jb_String * value);

/**
 * @brief Gets the `position-area` property. 
*/
jb_String CSSPositionTryDescriptors_position_area(const CSSPositionTryDescriptors *self);

/**
 * @brief Sets the `position-area` property. 
*/
void CSSPositionTryDescriptors_set_position_area(CSSPositionTryDescriptors* self, jb_String * value);

#ifdef __cplusplus
}
#endif
