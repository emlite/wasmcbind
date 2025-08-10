#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PrivateToken, em_Val);

TokenVersion PrivateToken_version(const PrivateToken *self);

void PrivateToken_set_version(PrivateToken* self, TokenVersion * value);

OperationType PrivateToken_operation(const PrivateToken *self);

void PrivateToken_set_operation(PrivateToken* self, OperationType * value);

RefreshPolicy PrivateToken_refreshPolicy(const PrivateToken *self);

void PrivateToken_set_refreshPolicy(PrivateToken* self, RefreshPolicy * value);

jb_Array PrivateToken_issuers(const PrivateToken *self);

void PrivateToken_set_issuers(PrivateToken* self, jb_Array * value);

PrivateToken PrivateToken_new();

#ifdef __cplusplus
}
#endif
