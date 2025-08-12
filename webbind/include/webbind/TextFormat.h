#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TextFormatInit TextFormatInit;


/**
 * @brief Interface TextFormat
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/TextFormat)
 */
DECLARE_EMLITE_TYPE(TextFormat, em_Val);

/**
 * @brief Creates a new `TextFormat` object. 
*/
TextFormat TextFormat_new0();

/**
 * @brief Creates a new `TextFormat` object. 
*/
TextFormat TextFormat_new1(TextFormatInit * options);

/**
 * @brief Gets the `rangeStart` property. 
*/
unsigned long TextFormat_rangeStart(const TextFormat *self);

/**
 * @brief Gets the `rangeEnd` property. 
*/
unsigned long TextFormat_rangeEnd(const TextFormat *self);

/**
 * @brief Gets the `underlineStyle` property. 
*/
UnderlineStyle TextFormat_underlineStyle(const TextFormat *self);

/**
 * @brief Gets the `underlineThickness` property. 
*/
UnderlineThickness TextFormat_underlineThickness(const TextFormat *self);

#ifdef __cplusplus
}
#endif
