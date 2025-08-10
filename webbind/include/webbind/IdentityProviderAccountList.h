#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "IdentityProviderAccount.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(IdentityProviderAccountList, em_Val);

jb_Array IdentityProviderAccountList_accounts(const IdentityProviderAccountList *self);

void IdentityProviderAccountList_set_accounts(IdentityProviderAccountList* self, jb_Array * value);

IdentityProviderAccountList IdentityProviderAccountList_new();

#ifdef __cplusplus
}
#endif
