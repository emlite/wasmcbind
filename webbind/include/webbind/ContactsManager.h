#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ContactInfo ContactInfo;
typedef struct ContactsSelectOptions ContactsSelectOptions;

DECLARE_EMLITE_TYPE(ContactsManager, em_Val);

jb_Promise ContactsManager_getProperties(ContactsManager* self );

jb_Promise ContactsManager_select0(ContactsManager* self , jb_Array * properties);

jb_Promise ContactsManager_select1(ContactsManager* self , jb_Array * properties, ContactsSelectOptions * options);

#ifdef __cplusplus
}
#endif
