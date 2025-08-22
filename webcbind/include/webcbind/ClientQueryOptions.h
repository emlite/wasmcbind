#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ClientQueryOptions */
DECLARE_EMLITE_TYPE(ClientQueryOptions, em_Val);

/** @brief Getter of the includeUncontrolled property */
bool ClientQueryOptions_includeUncontrolled(const ClientQueryOptions *self);

/** @brief Setter of the includeUncontrolled property */
void ClientQueryOptions_set_includeUncontrolled(ClientQueryOptions* self, bool value);

/** @brief Getter of the type property */
ClientType ClientQueryOptions_type(const ClientQueryOptions *self);

/** @brief Setter of the type property */
void ClientQueryOptions_set_type(ClientQueryOptions* self, ClientType * value);

/** @brief Constructor of the ClientQueryOptions dictionary type */
ClientQueryOptions ClientQueryOptions_new();

#ifdef __cplusplus
}
#endif
