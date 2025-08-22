#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "URLPatternComponentResult.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type URLPatternResult */
DECLARE_EMLITE_TYPE(URLPatternResult, em_Val);

/** @brief Getter of the inputs property */
jb_Array URLPatternResult_inputs(const URLPatternResult *self);

/** @brief Setter of the inputs property */
void URLPatternResult_set_inputs(URLPatternResult* self, jb_Array * value);

/** @brief Getter of the protocol property */
URLPatternComponentResult URLPatternResult_protocol(const URLPatternResult *self);

/** @brief Setter of the protocol property */
void URLPatternResult_set_protocol(URLPatternResult* self, URLPatternComponentResult * value);

/** @brief Getter of the username property */
URLPatternComponentResult URLPatternResult_username(const URLPatternResult *self);

/** @brief Setter of the username property */
void URLPatternResult_set_username(URLPatternResult* self, URLPatternComponentResult * value);

/** @brief Getter of the password property */
URLPatternComponentResult URLPatternResult_password(const URLPatternResult *self);

/** @brief Setter of the password property */
void URLPatternResult_set_password(URLPatternResult* self, URLPatternComponentResult * value);

/** @brief Getter of the hostname property */
URLPatternComponentResult URLPatternResult_hostname(const URLPatternResult *self);

/** @brief Setter of the hostname property */
void URLPatternResult_set_hostname(URLPatternResult* self, URLPatternComponentResult * value);

/** @brief Getter of the port property */
URLPatternComponentResult URLPatternResult_port(const URLPatternResult *self);

/** @brief Setter of the port property */
void URLPatternResult_set_port(URLPatternResult* self, URLPatternComponentResult * value);

/** @brief Getter of the pathname property */
URLPatternComponentResult URLPatternResult_pathname(const URLPatternResult *self);

/** @brief Setter of the pathname property */
void URLPatternResult_set_pathname(URLPatternResult* self, URLPatternComponentResult * value);

/** @brief Getter of the search property */
URLPatternComponentResult URLPatternResult_search(const URLPatternResult *self);

/** @brief Setter of the search property */
void URLPatternResult_set_search(URLPatternResult* self, URLPatternComponentResult * value);

/** @brief Getter of the hash property */
URLPatternComponentResult URLPatternResult_hash(const URLPatternResult *self);

/** @brief Setter of the hash property */
void URLPatternResult_set_hash(URLPatternResult* self, URLPatternComponentResult * value);

/** @brief Constructor of the URLPatternResult dictionary type */
URLPatternResult URLPatternResult_new();

#ifdef __cplusplus
}
#endif
