#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AbstractRange.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Node Node;
typedef struct DocumentFragment DocumentFragment;
typedef struct DOMRectList DOMRectList;
typedef struct DOMRect DOMRect;


/**
 * @brief Interface Range
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Range)
 */
DECLARE_EMLITE_TYPE(Range, AbstractRange);

/**
 * @brief Creates a new `Range` object. 
*/
Range Range_new();

/**
 * @brief Gets the `commonAncestorContainer` property. 
*/
Node Range_commonAncestorContainer(const Range *self);

/**
 * @brief Calls the `setStart` method. 
*/
jb_Undefined Range_setStart(Range* self , Node * node, unsigned long offset);

/**
 * @brief Calls the `setEnd` method. 
*/
jb_Undefined Range_setEnd(Range* self , Node * node, unsigned long offset);

/**
 * @brief Calls the `setStartBefore` method. 
*/
jb_Undefined Range_setStartBefore(Range* self , Node * node);

/**
 * @brief Calls the `setStartAfter` method. 
*/
jb_Undefined Range_setStartAfter(Range* self , Node * node);

/**
 * @brief Calls the `setEndBefore` method. 
*/
jb_Undefined Range_setEndBefore(Range* self , Node * node);

/**
 * @brief Calls the `setEndAfter` method. 
*/
jb_Undefined Range_setEndAfter(Range* self , Node * node);

/**
 * @brief Calls the `collapse` method. 
*/
jb_Undefined Range_collapse0(Range* self );

/**
 * @brief Calls the `collapse` method. 
*/
jb_Undefined Range_collapse1(Range* self , bool toStart);

/**
 * @brief Calls the `selectNode` method. 
*/
jb_Undefined Range_selectNode(Range* self , Node * node);

/**
 * @brief Calls the `selectNodeContents` method. 
*/
jb_Undefined Range_selectNodeContents(Range* self , Node * node);

/**
 * @brief Calls the `compareBoundaryPoints` method. 
*/
short Range_compareBoundaryPoints(Range* self , unsigned short how, Range * sourceRange);

/**
 * @brief Calls the `deleteContents` method. 
*/
jb_Undefined Range_deleteContents(Range* self );

/**
 * @brief Calls the `extractContents` method. 
*/
DocumentFragment Range_extractContents(Range* self );

/**
 * @brief Calls the `cloneContents` method. 
*/
DocumentFragment Range_cloneContents(Range* self );

/**
 * @brief Calls the `insertNode` method. 
*/
jb_Undefined Range_insertNode(Range* self , Node * node);

/**
 * @brief Calls the `surroundContents` method. 
*/
jb_Undefined Range_surroundContents(Range* self , Node * newParent);

/**
 * @brief Calls the `cloneRange` method. 
*/
Range Range_cloneRange(Range* self );

/**
 * @brief Calls the `detach` method. 
*/
jb_Undefined Range_detach(Range* self );

/**
 * @brief Calls the `isPointInRange` method. 
*/
bool Range_isPointInRange(Range* self , Node * node, unsigned long offset);

/**
 * @brief Calls the `comparePoint` method. 
*/
short Range_comparePoint(Range* self , Node * node, unsigned long offset);

/**
 * @brief Calls the `intersectsNode` method. 
*/
bool Range_intersectsNode(Range* self , Node * node);

/**
 * @brief Calls the `getClientRects` method. 
*/
DOMRectList Range_getClientRects(Range* self );

/**
 * @brief Calls the `getBoundingClientRect` method. 
*/
DOMRect Range_getBoundingClientRect(Range* self );

/**
 * @brief Calls the `createContextualFragment` method. 
*/
DocumentFragment Range_createContextualFragment(Range* self , jb_Any * string);

#ifdef __cplusplus
}
#endif
