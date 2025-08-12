#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CharacterData.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMQuad DOMQuad;
typedef struct BoxQuadOptions BoxQuadOptions;
typedef struct DOMQuadInit DOMQuadInit;
typedef struct ConvertCoordinateOptions ConvertCoordinateOptions;
typedef struct DOMRectReadOnly DOMRectReadOnly;
typedef struct DOMPoint DOMPoint;
typedef struct DOMPointInit DOMPointInit;
typedef struct HTMLSlotElement HTMLSlotElement;


/**
 * @brief Interface Text
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Text)
 */
DECLARE_EMLITE_TYPE(Text, CharacterData);

/**
 * @brief Creates a new `Text` object. 
*/
Text Text_new0();

/**
 * @brief Creates a new `Text` object. 
*/
Text Text_new1(jb_String * data);

/**
 * @brief Calls the `splitText` method. 
*/
Text Text_splitText(Text* self , unsigned long offset);

/**
 * @brief Gets the `wholeText` property. 
*/
jb_String Text_wholeText(const Text *self);

/**
 * @brief Calls the `getBoxQuads` method. 
*/
jb_Array Text_getBoxQuads0(Text* self );

/**
 * @brief Calls the `getBoxQuads` method. 
*/
jb_Array Text_getBoxQuads1(Text* self , BoxQuadOptions * options);

/**
 * @brief Calls the `convertQuadFromNode` method. 
*/
DOMQuad Text_convertQuadFromNode0(Text* self , DOMQuadInit * quad, jb_Any * from);

/**
 * @brief Calls the `convertQuadFromNode` method. 
*/
DOMQuad Text_convertQuadFromNode1(Text* self , DOMQuadInit * quad, jb_Any * from, ConvertCoordinateOptions * options);

/**
 * @brief Calls the `convertRectFromNode` method. 
*/
DOMQuad Text_convertRectFromNode0(Text* self , DOMRectReadOnly * rect, jb_Any * from);

/**
 * @brief Calls the `convertRectFromNode` method. 
*/
DOMQuad Text_convertRectFromNode1(Text* self , DOMRectReadOnly * rect, jb_Any * from, ConvertCoordinateOptions * options);

/**
 * @brief Calls the `convertPointFromNode` method. 
*/
DOMPoint Text_convertPointFromNode0(Text* self , DOMPointInit * point, jb_Any * from);

/**
 * @brief Calls the `convertPointFromNode` method. 
*/
DOMPoint Text_convertPointFromNode1(Text* self , DOMPointInit * point, jb_Any * from, ConvertCoordinateOptions * options);

/**
 * @brief Gets the `assignedSlot` property. 
*/
HTMLSlotElement Text_assignedSlot(const Text *self);

#ifdef __cplusplus
}
#endif
