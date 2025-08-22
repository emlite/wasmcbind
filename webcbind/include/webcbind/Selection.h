#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Node Node;
typedef struct Range Range;
typedef struct StaticRange StaticRange;
typedef struct GetComposedRangesOptions GetComposedRangesOptions;


/**
 * @brief Interface Selection
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Selection)
 */
DECLARE_EMLITE_TYPE(Selection, em_Val);

/**
 * @brief Gets the `anchorNode` property. 
*/
Node Selection_anchorNode(const Selection *self);

/**
 * @brief Gets the `anchorOffset` property. 
*/
unsigned long Selection_anchorOffset(const Selection *self);

/**
 * @brief Gets the `focusNode` property. 
*/
Node Selection_focusNode(const Selection *self);

/**
 * @brief Gets the `focusOffset` property. 
*/
unsigned long Selection_focusOffset(const Selection *self);

/**
 * @brief Gets the `isCollapsed` property. 
*/
bool Selection_isCollapsed(const Selection *self);

/**
 * @brief Gets the `rangeCount` property. 
*/
unsigned long Selection_rangeCount(const Selection *self);

/**
 * @brief Gets the `type` property. 
*/
jb_String Selection_type(const Selection *self);

/**
 * @brief Gets the `direction` property. 
*/
jb_String Selection_direction(const Selection *self);

/**
 * @brief Calls the `getRangeAt` method. 
*/
Range Selection_getRangeAt(Selection* self , unsigned long index);

/**
 * @brief Calls the `addRange` method. 
*/
jb_Undefined Selection_addRange(Selection* self , Range * range);

/**
 * @brief Calls the `removeRange` method. 
*/
jb_Undefined Selection_removeRange(Selection* self , Range * range);

/**
 * @brief Calls the `removeAllRanges` method. 
*/
jb_Undefined Selection_removeAllRanges(Selection* self );

/**
 * @brief Calls the `empty` method. 
*/
jb_Undefined Selection_empty(Selection* self );

/**
 * @brief Calls the `getComposedRanges` method. 
*/
jb_Array Selection_getComposedRanges0(Selection* self );

/**
 * @brief Calls the `getComposedRanges` method. 
*/
jb_Array Selection_getComposedRanges1(Selection* self , GetComposedRangesOptions * options);

/**
 * @brief Calls the `collapse` method. 
*/
jb_Undefined Selection_collapse0(Selection* self , Node * node);

/**
 * @brief Calls the `collapse` method. 
*/
jb_Undefined Selection_collapse1(Selection* self , Node * node, unsigned long offset);

/**
 * @brief Calls the `setPosition` method. 
*/
jb_Undefined Selection_setPosition0(Selection* self , Node * node);

/**
 * @brief Calls the `setPosition` method. 
*/
jb_Undefined Selection_setPosition1(Selection* self , Node * node, unsigned long offset);

/**
 * @brief Calls the `collapseToStart` method. 
*/
jb_Undefined Selection_collapseToStart(Selection* self );

/**
 * @brief Calls the `collapseToEnd` method. 
*/
jb_Undefined Selection_collapseToEnd(Selection* self );

/**
 * @brief Calls the `extend` method. 
*/
jb_Undefined Selection_extend0(Selection* self , Node * node);

/**
 * @brief Calls the `extend` method. 
*/
jb_Undefined Selection_extend1(Selection* self , Node * node, unsigned long offset);

/**
 * @brief Calls the `setBaseAndExtent` method. 
*/
jb_Undefined Selection_setBaseAndExtent(Selection* self , Node * anchorNode, unsigned long anchorOffset, Node * focusNode, unsigned long focusOffset);

/**
 * @brief Calls the `selectAllChildren` method. 
*/
jb_Undefined Selection_selectAllChildren(Selection* self , Node * node);

/**
 * @brief Calls the `modify` method. 
*/
jb_Undefined Selection_modify0(Selection* self );

/**
 * @brief Calls the `modify` method. 
*/
jb_Undefined Selection_modify1(Selection* self , jb_String * alter);

/**
 * @brief Calls the `modify` method. 
*/
jb_Undefined Selection_modify2(Selection* self , jb_String * alter, jb_String * direction);

/**
 * @brief Calls the `modify` method. 
*/
jb_Undefined Selection_modify3(Selection* self , jb_String * alter, jb_String * direction, jb_String * granularity);

/**
 * @brief Calls the `deleteFromDocument` method. 
*/
jb_Undefined Selection_deleteFromDocument(Selection* self );

/**
 * @brief Calls the `containsNode` method. 
*/
bool Selection_containsNode0(Selection* self , Node * node);

/**
 * @brief Calls the `containsNode` method. 
*/
bool Selection_containsNode1(Selection* self , Node * node, bool allowPartialContainment);

#ifdef __cplusplus
}
#endif
