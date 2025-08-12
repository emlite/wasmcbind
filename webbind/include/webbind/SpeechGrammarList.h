#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SpeechGrammar SpeechGrammar;


/**
 * @brief Interface SpeechGrammarList
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/SpeechGrammarList)
 */
DECLARE_EMLITE_TYPE(SpeechGrammarList, em_Val);

/**
 * @brief Creates a new `SpeechGrammarList` object. 
*/
SpeechGrammarList SpeechGrammarList_new();

/**
 * @brief Gets the `length` property. 
*/
unsigned long SpeechGrammarList_length(const SpeechGrammarList *self);

/**
 * @brief Calls the `item` method. 
*/
SpeechGrammar SpeechGrammarList_item(SpeechGrammarList* self , unsigned long index);

/**
 * @brief Calls the `addFromURI` method. 
*/
jb_Undefined SpeechGrammarList_addFromURI0(SpeechGrammarList* self , jb_String * src);

/**
 * @brief Calls the `addFromURI` method. 
*/
jb_Undefined SpeechGrammarList_addFromURI1(SpeechGrammarList* self , jb_String * src, float weight);

/**
 * @brief Calls the `addFromString` method. 
*/
jb_Undefined SpeechGrammarList_addFromString0(SpeechGrammarList* self , jb_String * string);

/**
 * @brief Calls the `addFromString` method. 
*/
jb_Undefined SpeechGrammarList_addFromString1(SpeechGrammarList* self , jb_String * string, float weight);

#ifdef __cplusplus
}
#endif
