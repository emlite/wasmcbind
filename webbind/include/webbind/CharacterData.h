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
 * @brief Interface CharacterData
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CharacterData)
 */
DECLARE_EMLITE_TYPE(CharacterData, Node);

/**
 * @brief Gets the `data` property. 
*/
jb_String CharacterData_data(const CharacterData *self);

/**
 * @brief Sets the `data` property. 
*/
void CharacterData_set_data(CharacterData* self, jb_String * value);

/**
 * @brief Gets the `length` property. 
*/
unsigned long CharacterData_length(const CharacterData *self);

/**
 * @brief Calls the `substringData` method. 
*/
jb_String CharacterData_substringData(CharacterData* self , unsigned long offset, unsigned long count);

/**
 * @brief Calls the `appendData` method. 
*/
jb_Undefined CharacterData_appendData(CharacterData* self , jb_String * data);

/**
 * @brief Calls the `insertData` method. 
*/
jb_Undefined CharacterData_insertData(CharacterData* self , unsigned long offset, jb_String * data);

/**
 * @brief Calls the `deleteData` method. 
*/
jb_Undefined CharacterData_deleteData(CharacterData* self , unsigned long offset, unsigned long count);

/**
 * @brief Calls the `replaceData` method. 
*/
jb_Undefined CharacterData_replaceData(CharacterData* self , unsigned long offset, unsigned long count, jb_String * data);

/**
 * @brief Gets the `previousElementSibling` property. 
*/
Element CharacterData_previousElementSibling(const CharacterData *self);

/**
 * @brief Gets the `nextElementSibling` property. 
*/
Element CharacterData_nextElementSibling(const CharacterData *self);

/**
 * @brief Calls the `before` method. 
*/
jb_Undefined CharacterData_before(CharacterData* self , jb_Any * nodes);

/**
 * @brief Calls the `after` method. 
*/
jb_Undefined CharacterData_after(CharacterData* self , jb_Any * nodes);

/**
 * @brief Calls the `replaceWith` method. 
*/
jb_Undefined CharacterData_replaceWith(CharacterData* self , jb_Any * nodes);

/**
 * @brief Calls the `remove` method. 
*/
jb_Undefined CharacterData_remove(CharacterData* self );

#ifdef __cplusplus
}
#endif
