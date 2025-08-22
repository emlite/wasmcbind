#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "CharacterData.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CSSStyleSheet CSSStyleSheet;


/**
 * @brief Interface ProcessingInstruction
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ProcessingInstruction)
 */
DECLARE_EMLITE_TYPE(ProcessingInstruction, CharacterData);

/**
 * @brief Gets the `target` property. 
*/
jb_String ProcessingInstruction_target(const ProcessingInstruction *self);

/**
 * @brief Gets the `sheet` property. 
*/
CSSStyleSheet ProcessingInstruction_sheet(const ProcessingInstruction *self);

#ifdef __cplusplus
}
#endif
