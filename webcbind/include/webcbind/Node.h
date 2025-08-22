#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventTarget.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Document Document;
typedef struct GetRootNodeOptions GetRootNodeOptions;
typedef struct Element Element;
typedef struct NodeList NodeList;


/**
 * @brief Interface Node
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Node)
 */
DECLARE_EMLITE_TYPE(Node, EventTarget);

/**
 * @brief Gets the `nodeType` property. 
*/
unsigned short Node_nodeType(const Node *self);

/**
 * @brief Gets the `nodeName` property. 
*/
jb_String Node_nodeName(const Node *self);

/**
 * @brief Gets the `baseURI` property. 
*/
jb_String Node_baseURI(const Node *self);

/**
 * @brief Gets the `isConnected` property. 
*/
bool Node_isConnected(const Node *self);

/**
 * @brief Gets the `ownerDocument` property. 
*/
Document Node_ownerDocument(const Node *self);

/**
 * @brief Calls the `getRootNode` method. 
*/
Node Node_getRootNode0(Node* self );

/**
 * @brief Calls the `getRootNode` method. 
*/
Node Node_getRootNode1(Node* self , GetRootNodeOptions * options);

/**
 * @brief Gets the `parentNode` property. 
*/
Node Node_parentNode(const Node *self);

/**
 * @brief Gets the `parentElement` property. 
*/
Element Node_parentElement(const Node *self);

/**
 * @brief Calls the `hasChildNodes` method. 
*/
bool Node_hasChildNodes(Node* self );

/**
 * @brief Gets the `childNodes` property. 
*/
NodeList Node_childNodes(const Node *self);

/**
 * @brief Gets the `firstChild` property. 
*/
Node Node_firstChild(const Node *self);

/**
 * @brief Gets the `lastChild` property. 
*/
Node Node_lastChild(const Node *self);

/**
 * @brief Gets the `previousSibling` property. 
*/
Node Node_previousSibling(const Node *self);

/**
 * @brief Gets the `nextSibling` property. 
*/
Node Node_nextSibling(const Node *self);

/**
 * @brief Gets the `nodeValue` property. 
*/
jb_String Node_nodeValue(const Node *self);

/**
 * @brief Sets the `nodeValue` property. 
*/
void Node_set_nodeValue(Node* self, jb_String * value);

/**
 * @brief Gets the `textContent` property. 
*/
jb_String Node_textContent(const Node *self);

/**
 * @brief Sets the `textContent` property. 
*/
void Node_set_textContent(Node* self, jb_String * value);

/**
 * @brief Calls the `normalize` method. 
*/
jb_Undefined Node_normalize(Node* self );

/**
 * @brief Calls the `cloneNode` method. 
*/
Node Node_cloneNode0(Node* self );

/**
 * @brief Calls the `cloneNode` method. 
*/
Node Node_cloneNode1(Node* self , bool subtree);

/**
 * @brief Calls the `isEqualNode` method. 
*/
bool Node_isEqualNode(Node* self , Node * otherNode);

/**
 * @brief Calls the `isSameNode` method. 
*/
bool Node_isSameNode(Node* self , Node * otherNode);

/**
 * @brief Calls the `compareDocumentPosition` method. 
*/
unsigned short Node_compareDocumentPosition(Node* self , Node * other);

/**
 * @brief Calls the `contains` method. 
*/
bool Node_contains(Node* self , Node * other);

/**
 * @brief Calls the `lookupPrefix` method. 
*/
jb_String Node_lookupPrefix(Node* self , jb_String * namespace_);

/**
 * @brief Calls the `lookupNamespaceURI` method. 
*/
jb_String Node_lookupNamespaceURI(Node* self , jb_String * prefix);

/**
 * @brief Calls the `isDefaultNamespace` method. 
*/
bool Node_isDefaultNamespace(Node* self , jb_String * namespace_);

/**
 * @brief Calls the `insertBefore` method. 
*/
Node Node_insertBefore(Node* self , Node * node, Node * child);

/**
 * @brief Calls the `appendChild` method. 
*/
Node Node_appendChild(Node* self , Node * node);

/**
 * @brief Calls the `replaceChild` method. 
*/
Node Node_replaceChild(Node* self , Node * node, Node * child);

/**
 * @brief Calls the `removeChild` method. 
*/
Node Node_removeChild(Node* self , Node * child);

#ifdef __cplusplus
}
#endif
