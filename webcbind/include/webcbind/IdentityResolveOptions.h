#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type IdentityResolveOptions */
DECLARE_EMLITE_TYPE(IdentityResolveOptions, em_Val);

/** @brief Getter of the accountId property */
jb_String IdentityResolveOptions_accountId(const IdentityResolveOptions *self);

/** @brief Setter of the accountId property */
void IdentityResolveOptions_set_accountId(IdentityResolveOptions* self, jb_String * value);

/** @brief Constructor of the IdentityResolveOptions dictionary type */
IdentityResolveOptions IdentityResolveOptions_new();

#ifdef __cplusplus
}
#endif
