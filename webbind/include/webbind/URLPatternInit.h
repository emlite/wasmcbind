#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(URLPatternInit, em_Val);

jb_String URLPatternInit_protocol(const URLPatternInit *self);

void URLPatternInit_set_protocol(URLPatternInit* self, jb_String * value);

jb_String URLPatternInit_username(const URLPatternInit *self);

void URLPatternInit_set_username(URLPatternInit* self, jb_String * value);

jb_String URLPatternInit_password(const URLPatternInit *self);

void URLPatternInit_set_password(URLPatternInit* self, jb_String * value);

jb_String URLPatternInit_hostname(const URLPatternInit *self);

void URLPatternInit_set_hostname(URLPatternInit* self, jb_String * value);

jb_String URLPatternInit_port(const URLPatternInit *self);

void URLPatternInit_set_port(URLPatternInit* self, jb_String * value);

jb_String URLPatternInit_pathname(const URLPatternInit *self);

void URLPatternInit_set_pathname(URLPatternInit* self, jb_String * value);

jb_String URLPatternInit_search(const URLPatternInit *self);

void URLPatternInit_set_search(URLPatternInit* self, jb_String * value);

jb_String URLPatternInit_hash(const URLPatternInit *self);

void URLPatternInit_set_hash(URLPatternInit* self, jb_String * value);

jb_String URLPatternInit_baseURL(const URLPatternInit *self);

void URLPatternInit_set_baseURL(URLPatternInit* self, jb_String * value);

URLPatternInit URLPatternInit_new();

#ifdef __cplusplus
}
#endif
