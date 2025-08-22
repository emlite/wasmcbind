#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PrivateToken */
DECLARE_EMLITE_TYPE(PrivateToken, em_Val);

/** @brief Getter of the version property */
TokenVersion PrivateToken_version(const PrivateToken *self);

/** @brief Setter of the version property */
void PrivateToken_set_version(PrivateToken* self, TokenVersion * value);

/** @brief Getter of the operation property */
OperationType PrivateToken_operation(const PrivateToken *self);

/** @brief Setter of the operation property */
void PrivateToken_set_operation(PrivateToken* self, OperationType * value);

/** @brief Getter of the refreshPolicy property */
RefreshPolicy PrivateToken_refreshPolicy(const PrivateToken *self);

/** @brief Setter of the refreshPolicy property */
void PrivateToken_set_refreshPolicy(PrivateToken* self, RefreshPolicy * value);

/** @brief Getter of the issuers property */
jb_Array PrivateToken_issuers(const PrivateToken *self);

/** @brief Setter of the issuers property */
void PrivateToken_set_issuers(PrivateToken* self, jb_Array * value);

/** @brief Constructor of the PrivateToken dictionary type */
PrivateToken PrivateToken_new();

#ifdef __cplusplus
}
#endif
