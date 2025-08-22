#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Node Node;
typedef struct DocumentFragment DocumentFragment;
typedef struct Document Document;


/**
 * @brief Interface XSLTProcessor
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XSLTProcessor)
 */
DECLARE_EMLITE_TYPE(XSLTProcessor, em_Val);

/**
 * @brief Creates a new `XSLTProcessor` object. 
*/
XSLTProcessor XSLTProcessor_new();

/**
 * @brief Calls the `importStylesheet` method. 
*/
jb_Undefined XSLTProcessor_importStylesheet(XSLTProcessor* self , Node * style);

/**
 * @brief Calls the `transformToFragment` method. 
*/
DocumentFragment XSLTProcessor_transformToFragment(XSLTProcessor* self , Node * source, Document * output);

/**
 * @brief Calls the `transformToDocument` method. 
*/
Document XSLTProcessor_transformToDocument(XSLTProcessor* self , Node * source);

/**
 * @brief Calls the `setParameter` method. 
*/
jb_Undefined XSLTProcessor_setParameter(XSLTProcessor* self , jb_String * namespaceURI, jb_String * localName, jb_Any * value);

/**
 * @brief Calls the `getParameter` method. 
*/
jb_Any XSLTProcessor_getParameter(XSLTProcessor* self , jb_String * namespaceURI, jb_String * localName);

/**
 * @brief Calls the `removeParameter` method. 
*/
jb_Undefined XSLTProcessor_removeParameter(XSLTProcessor* self , jb_String * namespaceURI, jb_String * localName);

/**
 * @brief Calls the `clearParameters` method. 
*/
jb_Undefined XSLTProcessor_clearParameters(XSLTProcessor* self );

/**
 * @brief Calls the `reset` method. 
*/
jb_Undefined XSLTProcessor_reset(XSLTProcessor* self );

#ifdef __cplusplus
}
#endif
