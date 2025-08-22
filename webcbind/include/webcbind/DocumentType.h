#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Node.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface DocumentType
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DocumentType)
 */
DECLARE_EMLITE_TYPE(DocumentType, Node);

/**
 * @brief Gets the `name` property. 
*/
jb_String DocumentType_name(const DocumentType *self);

/**
 * @brief Gets the `publicId` property. 
*/
jb_String DocumentType_publicId(const DocumentType *self);

/**
 * @brief Gets the `systemId` property. 
*/
jb_String DocumentType_systemId(const DocumentType *self);

/**
 * @brief Calls the `before` method. 
*/
jb_Undefined DocumentType_before(DocumentType* self , jb_Any * nodes);

/**
 * @brief Calls the `after` method. 
*/
jb_Undefined DocumentType_after(DocumentType* self , jb_Any * nodes);

/**
 * @brief Calls the `replaceWith` method. 
*/
jb_Undefined DocumentType_replaceWith(DocumentType* self , jb_Any * nodes);

/**
 * @brief Calls the `remove` method. 
*/
jb_Undefined DocumentType_remove(DocumentType* self );

#ifdef __cplusplus
}
#endif
