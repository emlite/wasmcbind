#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "HTMLElement.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface HTMLImageElement
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/HTMLImageElement)
 */
DECLARE_EMLITE_TYPE(HTMLImageElement, HTMLElement);

/**
 * @brief Creates a new `HTMLImageElement` object. 
*/
HTMLImageElement HTMLImageElement_new();

/**
 * @brief Gets the `alt` property. 
*/
jb_String HTMLImageElement_alt(const HTMLImageElement *self);

/**
 * @brief Sets the `alt` property. 
*/
void HTMLImageElement_set_alt(HTMLImageElement* self, jb_String * value);

/**
 * @brief Gets the `src` property. 
*/
jb_String HTMLImageElement_src(const HTMLImageElement *self);

/**
 * @brief Sets the `src` property. 
*/
void HTMLImageElement_set_src(HTMLImageElement* self, jb_String * value);

/**
 * @brief Gets the `srcset` property. 
*/
jb_String HTMLImageElement_srcset(const HTMLImageElement *self);

/**
 * @brief Sets the `srcset` property. 
*/
void HTMLImageElement_set_srcset(HTMLImageElement* self, jb_String * value);

/**
 * @brief Gets the `sizes` property. 
*/
jb_String HTMLImageElement_sizes(const HTMLImageElement *self);

/**
 * @brief Sets the `sizes` property. 
*/
void HTMLImageElement_set_sizes(HTMLImageElement* self, jb_String * value);

/**
 * @brief Gets the `crossOrigin` property. 
*/
jb_String HTMLImageElement_crossOrigin(const HTMLImageElement *self);

/**
 * @brief Sets the `crossOrigin` property. 
*/
void HTMLImageElement_set_crossOrigin(HTMLImageElement* self, jb_String * value);

/**
 * @brief Gets the `useMap` property. 
*/
jb_String HTMLImageElement_useMap(const HTMLImageElement *self);

/**
 * @brief Sets the `useMap` property. 
*/
void HTMLImageElement_set_useMap(HTMLImageElement* self, jb_String * value);

/**
 * @brief Gets the `isMap` property. 
*/
bool HTMLImageElement_isMap(const HTMLImageElement *self);

/**
 * @brief Sets the `isMap` property. 
*/
void HTMLImageElement_set_isMap(HTMLImageElement* self, bool value);

/**
 * @brief Gets the `width` property. 
*/
unsigned long HTMLImageElement_width(const HTMLImageElement *self);

/**
 * @brief Sets the `width` property. 
*/
void HTMLImageElement_set_width(HTMLImageElement* self, unsigned long value);

/**
 * @brief Gets the `height` property. 
*/
unsigned long HTMLImageElement_height(const HTMLImageElement *self);

/**
 * @brief Sets the `height` property. 
*/
void HTMLImageElement_set_height(HTMLImageElement* self, unsigned long value);

/**
 * @brief Gets the `naturalWidth` property. 
*/
unsigned long HTMLImageElement_naturalWidth(const HTMLImageElement *self);

/**
 * @brief Gets the `naturalHeight` property. 
*/
unsigned long HTMLImageElement_naturalHeight(const HTMLImageElement *self);

/**
 * @brief Gets the `complete` property. 
*/
bool HTMLImageElement_complete(const HTMLImageElement *self);

/**
 * @brief Gets the `currentSrc` property. 
*/
jb_String HTMLImageElement_currentSrc(const HTMLImageElement *self);

/**
 * @brief Gets the `referrerPolicy` property. 
*/
jb_String HTMLImageElement_referrerPolicy(const HTMLImageElement *self);

/**
 * @brief Sets the `referrerPolicy` property. 
*/
void HTMLImageElement_set_referrerPolicy(HTMLImageElement* self, jb_String * value);

/**
 * @brief Gets the `decoding` property. 
*/
jb_String HTMLImageElement_decoding(const HTMLImageElement *self);

/**
 * @brief Sets the `decoding` property. 
*/
void HTMLImageElement_set_decoding(HTMLImageElement* self, jb_String * value);

/**
 * @brief Gets the `loading` property. 
*/
jb_String HTMLImageElement_loading(const HTMLImageElement *self);

/**
 * @brief Sets the `loading` property. 
*/
void HTMLImageElement_set_loading(HTMLImageElement* self, jb_String * value);

/**
 * @brief Gets the `fetchPriority` property. 
*/
jb_String HTMLImageElement_fetchPriority(const HTMLImageElement *self);

/**
 * @brief Sets the `fetchPriority` property. 
*/
void HTMLImageElement_set_fetchPriority(HTMLImageElement* self, jb_String * value);

/**
 * @brief Calls the `decode` method. 
*/
jb_Promise HTMLImageElement_decode(HTMLImageElement* self );

/**
 * @brief Gets the `x` property. 
*/
long HTMLImageElement_x(const HTMLImageElement *self);

/**
 * @brief Gets the `y` property. 
*/
long HTMLImageElement_y(const HTMLImageElement *self);

/**
 * @brief Gets the `name` property. 
*/
jb_String HTMLImageElement_name(const HTMLImageElement *self);

/**
 * @brief Sets the `name` property. 
*/
void HTMLImageElement_set_name(HTMLImageElement* self, jb_String * value);

/**
 * @brief Gets the `lowsrc` property. 
*/
jb_String HTMLImageElement_lowsrc(const HTMLImageElement *self);

/**
 * @brief Sets the `lowsrc` property. 
*/
void HTMLImageElement_set_lowsrc(HTMLImageElement* self, jb_String * value);

/**
 * @brief Gets the `align` property. 
*/
jb_String HTMLImageElement_align(const HTMLImageElement *self);

/**
 * @brief Sets the `align` property. 
*/
void HTMLImageElement_set_align(HTMLImageElement* self, jb_String * value);

/**
 * @brief Gets the `hspace` property. 
*/
unsigned long HTMLImageElement_hspace(const HTMLImageElement *self);

/**
 * @brief Sets the `hspace` property. 
*/
void HTMLImageElement_set_hspace(HTMLImageElement* self, unsigned long value);

/**
 * @brief Gets the `vspace` property. 
*/
unsigned long HTMLImageElement_vspace(const HTMLImageElement *self);

/**
 * @brief Sets the `vspace` property. 
*/
void HTMLImageElement_set_vspace(HTMLImageElement* self, unsigned long value);

/**
 * @brief Gets the `longDesc` property. 
*/
jb_String HTMLImageElement_longDesc(const HTMLImageElement *self);

/**
 * @brief Sets the `longDesc` property. 
*/
void HTMLImageElement_set_longDesc(HTMLImageElement* self, jb_String * value);

/**
 * @brief Gets the `border` property. 
*/
jb_String HTMLImageElement_border(const HTMLImageElement *self);

/**
 * @brief Sets the `border` property. 
*/
void HTMLImageElement_set_border(HTMLImageElement* self, jb_String * value);

/**
 * @brief Gets the `attributionSrc` property. 
*/
jb_String HTMLImageElement_attributionSrc(const HTMLImageElement *self);

/**
 * @brief Sets the `attributionSrc` property. 
*/
void HTMLImageElement_set_attributionSrc(HTMLImageElement* self, jb_String * value);

/**
 * @brief Gets the `sharedStorageWritable` property. 
*/
bool HTMLImageElement_sharedStorageWritable(const HTMLImageElement *self);

/**
 * @brief Sets the `sharedStorageWritable` property. 
*/
void HTMLImageElement_set_sharedStorageWritable(HTMLImageElement* self, bool value);

#ifdef __cplusplus
}
#endif
