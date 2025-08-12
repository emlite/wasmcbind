#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSStyleSheet CSSStyleSheet;
typedef struct MediaList MediaList;


/**
 * @brief Interface StyleSheet
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/StyleSheet)
 */
DECLARE_EMLITE_TYPE(StyleSheet, em_Val);

/**
 * @brief Gets the `type` property. 
*/
jb_String StyleSheet_type(const StyleSheet *self);

/**
 * @brief Gets the `href` property. 
*/
jb_String StyleSheet_href(const StyleSheet *self);

/**
 * @brief Gets the `ownerNode` property. 
*/
jb_Any StyleSheet_ownerNode(const StyleSheet *self);

/**
 * @brief Gets the `parentStyleSheet` property. 
*/
CSSStyleSheet StyleSheet_parentStyleSheet(const StyleSheet *self);

/**
 * @brief Gets the `title` property. 
*/
jb_String StyleSheet_title(const StyleSheet *self);

/**
 * @brief Gets the `media` property. 
*/
MediaList StyleSheet_media(const StyleSheet *self);

/**
 * @brief Gets the `disabled` property. 
*/
bool StyleSheet_disabled(const StyleSheet *self);

/**
 * @brief Sets the `disabled` property. 
*/
void StyleSheet_set_disabled(StyleSheet* self, bool value);

#ifdef __cplusplus
}
#endif
