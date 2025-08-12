#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DocumentType DocumentType;
typedef struct XMLDocument XMLDocument;
typedef struct Document Document;


/**
 * @brief Interface DOMImplementation
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/DOMImplementation)
 */
DECLARE_EMLITE_TYPE(DOMImplementation, em_Val);

/**
 * @brief Calls the `createDocumentType` method. 
*/
DocumentType DOMImplementation_createDocumentType(DOMImplementation* self , jb_String * name, jb_String * publicId, jb_String * systemId);

/**
 * @brief Calls the `createDocument` method. 
*/
XMLDocument DOMImplementation_createDocument0(DOMImplementation* self , jb_String * namespace_, jb_String * qualifiedName);

/**
 * @brief Calls the `createDocument` method. 
*/
XMLDocument DOMImplementation_createDocument1(DOMImplementation* self , jb_String * namespace_, jb_String * qualifiedName, DocumentType * doctype);

/**
 * @brief Calls the `createHTMLDocument` method. 
*/
Document DOMImplementation_createHTMLDocument0(DOMImplementation* self );

/**
 * @brief Calls the `createHTMLDocument` method. 
*/
Document DOMImplementation_createHTMLDocument1(DOMImplementation* self , jb_String * title);

/**
 * @brief Calls the `hasFeature` method. 
*/
bool DOMImplementation_hasFeature(DOMImplementation* self );

#ifdef __cplusplus
}
#endif
