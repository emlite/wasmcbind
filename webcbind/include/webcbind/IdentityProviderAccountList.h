#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "IdentityProviderAccount.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type IdentityProviderAccountList */
DECLARE_EMLITE_TYPE(IdentityProviderAccountList, em_Val);

/** @brief Getter of the accounts property */
jb_Array IdentityProviderAccountList_accounts(const IdentityProviderAccountList *self);

/** @brief Setter of the accounts property */
void IdentityProviderAccountList_set_accounts(IdentityProviderAccountList* self, jb_Array * value);

/** @brief Constructor of the IdentityProviderAccountList dictionary type */
IdentityProviderAccountList IdentityProviderAccountList_new();

#ifdef __cplusplus
}
#endif
