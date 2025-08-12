#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface SpeechGrammar
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SpeechGrammar)
 */
DECLARE_EMLITE_TYPE(SpeechGrammar, em_Val);

/**
 * @brief Gets the `src` property. 
*/
jb_String SpeechGrammar_src(const SpeechGrammar *self);

/**
 * @brief Sets the `src` property. 
*/
void SpeechGrammar_set_src(SpeechGrammar* self, jb_String * value);

/**
 * @brief Gets the `weight` property. 
*/
float SpeechGrammar_weight(const SpeechGrammar *self);

/**
 * @brief Sets the `weight` property. 
*/
void SpeechGrammar_set_weight(SpeechGrammar* self, float value);

#ifdef __cplusplus
}
#endif
