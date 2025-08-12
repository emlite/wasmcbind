#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type URLPatternInit */
DECLARE_EMLITE_TYPE(URLPatternInit, em_Val);

/** @brief Getter of the protocol property */
jb_String URLPatternInit_protocol(const URLPatternInit *self);

/** @brief Setter of the protocol property */
void URLPatternInit_set_protocol(URLPatternInit* self, jb_String * value);

/** @brief Getter of the username property */
jb_String URLPatternInit_username(const URLPatternInit *self);

/** @brief Setter of the username property */
void URLPatternInit_set_username(URLPatternInit* self, jb_String * value);

/** @brief Getter of the password property */
jb_String URLPatternInit_password(const URLPatternInit *self);

/** @brief Setter of the password property */
void URLPatternInit_set_password(URLPatternInit* self, jb_String * value);

/** @brief Getter of the hostname property */
jb_String URLPatternInit_hostname(const URLPatternInit *self);

/** @brief Setter of the hostname property */
void URLPatternInit_set_hostname(URLPatternInit* self, jb_String * value);

/** @brief Getter of the port property */
jb_String URLPatternInit_port(const URLPatternInit *self);

/** @brief Setter of the port property */
void URLPatternInit_set_port(URLPatternInit* self, jb_String * value);

/** @brief Getter of the pathname property */
jb_String URLPatternInit_pathname(const URLPatternInit *self);

/** @brief Setter of the pathname property */
void URLPatternInit_set_pathname(URLPatternInit* self, jb_String * value);

/** @brief Getter of the search property */
jb_String URLPatternInit_search(const URLPatternInit *self);

/** @brief Setter of the search property */
void URLPatternInit_set_search(URLPatternInit* self, jb_String * value);

/** @brief Getter of the hash property */
jb_String URLPatternInit_hash(const URLPatternInit *self);

/** @brief Setter of the hash property */
void URLPatternInit_set_hash(URLPatternInit* self, jb_String * value);

/** @brief Getter of the baseURL property */
jb_String URLPatternInit_baseURL(const URLPatternInit *self);

/** @brief Setter of the baseURL property */
void URLPatternInit_set_baseURL(URLPatternInit* self, jb_String * value);

/** @brief Constructor of the URLPatternInit dictionary type */
URLPatternInit URLPatternInit_new();

#ifdef __cplusplus
}
#endif
