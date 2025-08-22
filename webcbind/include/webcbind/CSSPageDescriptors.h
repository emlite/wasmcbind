#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "CSSStyleDeclaration.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface CSSPageDescriptors
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSSPageDescriptors)
 */
DECLARE_EMLITE_TYPE(CSSPageDescriptors, CSSStyleDeclaration);

/**
 * @brief Gets the `margin` property. 
*/
jb_String CSSPageDescriptors_margin(const CSSPageDescriptors *self);

/**
 * @brief Sets the `margin` property. 
*/
void CSSPageDescriptors_set_margin(CSSPageDescriptors* self, jb_String * value);

/**
 * @brief Gets the `marginTop` property. 
*/
jb_String CSSPageDescriptors_marginTop(const CSSPageDescriptors *self);

/**
 * @brief Sets the `marginTop` property. 
*/
void CSSPageDescriptors_set_marginTop(CSSPageDescriptors* self, jb_String * value);

/**
 * @brief Gets the `marginRight` property. 
*/
jb_String CSSPageDescriptors_marginRight(const CSSPageDescriptors *self);

/**
 * @brief Sets the `marginRight` property. 
*/
void CSSPageDescriptors_set_marginRight(CSSPageDescriptors* self, jb_String * value);

/**
 * @brief Gets the `marginBottom` property. 
*/
jb_String CSSPageDescriptors_marginBottom(const CSSPageDescriptors *self);

/**
 * @brief Sets the `marginBottom` property. 
*/
void CSSPageDescriptors_set_marginBottom(CSSPageDescriptors* self, jb_String * value);

/**
 * @brief Gets the `marginLeft` property. 
*/
jb_String CSSPageDescriptors_marginLeft(const CSSPageDescriptors *self);

/**
 * @brief Sets the `marginLeft` property. 
*/
void CSSPageDescriptors_set_marginLeft(CSSPageDescriptors* self, jb_String * value);

/**
 * @brief Gets the `margin-top` property. 
*/
jb_String CSSPageDescriptors_margin_top(const CSSPageDescriptors *self);

/**
 * @brief Sets the `margin-top` property. 
*/
void CSSPageDescriptors_set_margin_top(CSSPageDescriptors* self, jb_String * value);

/**
 * @brief Gets the `margin-right` property. 
*/
jb_String CSSPageDescriptors_margin_right(const CSSPageDescriptors *self);

/**
 * @brief Sets the `margin-right` property. 
*/
void CSSPageDescriptors_set_margin_right(CSSPageDescriptors* self, jb_String * value);

/**
 * @brief Gets the `margin-bottom` property. 
*/
jb_String CSSPageDescriptors_margin_bottom(const CSSPageDescriptors *self);

/**
 * @brief Sets the `margin-bottom` property. 
*/
void CSSPageDescriptors_set_margin_bottom(CSSPageDescriptors* self, jb_String * value);

/**
 * @brief Gets the `margin-left` property. 
*/
jb_String CSSPageDescriptors_margin_left(const CSSPageDescriptors *self);

/**
 * @brief Sets the `margin-left` property. 
*/
void CSSPageDescriptors_set_margin_left(CSSPageDescriptors* self, jb_String * value);

/**
 * @brief Gets the `size` property. 
*/
jb_String CSSPageDescriptors_size(const CSSPageDescriptors *self);

/**
 * @brief Sets the `size` property. 
*/
void CSSPageDescriptors_set_size(CSSPageDescriptors* self, jb_String * value);

/**
 * @brief Gets the `pageOrientation` property. 
*/
jb_String CSSPageDescriptors_pageOrientation(const CSSPageDescriptors *self);

/**
 * @brief Sets the `pageOrientation` property. 
*/
void CSSPageDescriptors_set_pageOrientation(CSSPageDescriptors* self, jb_String * value);

/**
 * @brief Gets the `page-orientation` property. 
*/
jb_String CSSPageDescriptors_page_orientation(const CSSPageDescriptors *self);

/**
 * @brief Sets the `page-orientation` property. 
*/
void CSSPageDescriptors_set_page_orientation(CSSPageDescriptors* self, jb_String * value);

/**
 * @brief Gets the `marks` property. 
*/
jb_String CSSPageDescriptors_marks(const CSSPageDescriptors *self);

/**
 * @brief Sets the `marks` property. 
*/
void CSSPageDescriptors_set_marks(CSSPageDescriptors* self, jb_String * value);

/**
 * @brief Gets the `bleed` property. 
*/
jb_String CSSPageDescriptors_bleed(const CSSPageDescriptors *self);

/**
 * @brief Sets the `bleed` property. 
*/
void CSSPageDescriptors_set_bleed(CSSPageDescriptors* self, jb_String * value);

#ifdef __cplusplus
}
#endif
