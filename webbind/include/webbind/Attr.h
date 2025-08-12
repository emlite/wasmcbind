#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "Node.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Element Element;


/**
 * @brief Interface Attr
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Attr)
 */
DECLARE_EMLITE_TYPE(Attr, Node);

/**
 * @brief Gets the `namespaceURI` property. 
*/
jb_String Attr_namespaceURI(const Attr *self);

/**
 * @brief Gets the `prefix` property. 
*/
jb_String Attr_prefix(const Attr *self);

/**
 * @brief Gets the `localName` property. 
*/
jb_String Attr_localName(const Attr *self);

/**
 * @brief Gets the `name` property. 
*/
jb_String Attr_name(const Attr *self);

/**
 * @brief Gets the `value` property. 
*/
jb_String Attr_value(const Attr *self);

/**
 * @brief Sets the `value` property. 
*/
void Attr_set_value(Attr* self, jb_String * value);

/**
 * @brief Gets the `ownerElement` property. 
*/
Element Attr_ownerElement(const Attr *self);

/**
 * @brief Gets the `specified` property. 
*/
bool Attr_specified(const Attr *self);

#ifdef __cplusplus
}
#endif
