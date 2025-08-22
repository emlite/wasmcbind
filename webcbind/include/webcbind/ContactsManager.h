#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ContactInfo ContactInfo;
typedef struct ContactsSelectOptions ContactsSelectOptions;


/**
 * @brief Interface ContactsManager
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ContactsManager)
 */
DECLARE_EMLITE_TYPE(ContactsManager, em_Val);

/**
 * @brief Calls the `getProperties` method. 
*/
jb_Promise ContactsManager_getProperties(ContactsManager* self );

/**
 * @brief Calls the `select` method. 
*/
jb_Promise ContactsManager_select0(ContactsManager* self , jb_Array * properties);

/**
 * @brief Calls the `select` method. 
*/
jb_Promise ContactsManager_select1(ContactsManager* self , jb_Array * properties, ContactsSelectOptions * options);

#ifdef __cplusplus
}
#endif
