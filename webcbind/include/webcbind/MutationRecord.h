#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Node Node;
typedef struct NodeList NodeList;


/**
 * @brief Interface MutationRecord
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MutationRecord)
 */
DECLARE_EMLITE_TYPE(MutationRecord, em_Val);

/**
 * @brief Gets the `type` property. 
*/
jb_String MutationRecord_type(const MutationRecord *self);

/**
 * @brief Gets the `target` property. 
*/
Node MutationRecord_target(const MutationRecord *self);

/**
 * @brief Gets the `addedNodes` property. 
*/
NodeList MutationRecord_addedNodes(const MutationRecord *self);

/**
 * @brief Gets the `removedNodes` property. 
*/
NodeList MutationRecord_removedNodes(const MutationRecord *self);

/**
 * @brief Gets the `previousSibling` property. 
*/
Node MutationRecord_previousSibling(const MutationRecord *self);

/**
 * @brief Gets the `nextSibling` property. 
*/
Node MutationRecord_nextSibling(const MutationRecord *self);

/**
 * @brief Gets the `attributeName` property. 
*/
jb_String MutationRecord_attributeName(const MutationRecord *self);

/**
 * @brief Gets the `attributeNamespace` property. 
*/
jb_String MutationRecord_attributeNamespace(const MutationRecord *self);

/**
 * @brief Gets the `oldValue` property. 
*/
jb_String MutationRecord_oldValue(const MutationRecord *self);

#ifdef __cplusplus
}
#endif
