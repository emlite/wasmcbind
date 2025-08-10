#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ClientQueryOptions, em_Val);

bool ClientQueryOptions_includeUncontrolled(const ClientQueryOptions *self);

void ClientQueryOptions_set_includeUncontrolled(ClientQueryOptions* self, bool value);

ClientType ClientQueryOptions_type(const ClientQueryOptions *self);

void ClientQueryOptions_set_type(ClientQueryOptions* self, ClientType * value);

ClientQueryOptions ClientQueryOptions_new();

#ifdef __cplusplus
}
#endif
