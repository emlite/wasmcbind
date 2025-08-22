#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type DisconnectedAccount */
DECLARE_EMLITE_TYPE(DisconnectedAccount, em_Val);

/** @brief Getter of the account_id property */
jb_String DisconnectedAccount_account_id(const DisconnectedAccount *self);

/** @brief Setter of the account_id property */
void DisconnectedAccount_set_account_id(DisconnectedAccount* self, jb_String * value);

/** @brief Constructor of the DisconnectedAccount dictionary type */
DisconnectedAccount DisconnectedAccount_new();

#ifdef __cplusplus
}
#endif
