#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(DisconnectedAccount, em_Val);

jb_String DisconnectedAccount_account_id(const DisconnectedAccount *self);

void DisconnectedAccount_set_account_id(DisconnectedAccount* self, jb_String * value);

DisconnectedAccount DisconnectedAccount_new();

#ifdef __cplusplus
}
#endif
