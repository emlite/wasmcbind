#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ElementDefinitionOptions ElementDefinitionOptions;
typedef struct Node Node;


/**
 * @brief Interface CustomElementRegistry
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CustomElementRegistry)
 */
DECLARE_EMLITE_TYPE(CustomElementRegistry, em_Val);

/**
 * @brief Creates a new `CustomElementRegistry` object. 
*/
CustomElementRegistry CustomElementRegistry_new();

/**
 * @brief Calls the `define` method. 
*/
jb_Undefined CustomElementRegistry_define0(CustomElementRegistry* self , jb_String * name, jb_Function * constructor);

/**
 * @brief Calls the `define` method. 
*/
jb_Undefined CustomElementRegistry_define1(CustomElementRegistry* self , jb_String * name, jb_Function * constructor, ElementDefinitionOptions * options);

/**
 * @brief Calls the `get` method. 
*/
jb_Any CustomElementRegistry_get(CustomElementRegistry* self , jb_String * name);

/**
 * @brief Calls the `getName` method. 
*/
jb_String CustomElementRegistry_getName(CustomElementRegistry* self , jb_Function * constructor);

/**
 * @brief Calls the `whenDefined` method. 
*/
jb_Promise CustomElementRegistry_whenDefined(CustomElementRegistry* self , jb_String * name);

/**
 * @brief Calls the `upgrade` method. 
*/
jb_Undefined CustomElementRegistry_upgrade(CustomElementRegistry* self , Node * root);

/**
 * @brief Calls the `initialize` method. 
*/
jb_Undefined CustomElementRegistry_initialize(CustomElementRegistry* self , Node * root);

#ifdef __cplusplus
}
#endif
