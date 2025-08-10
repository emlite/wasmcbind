#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(ErrorEventInit, EventInit);

jb_String ErrorEventInit_message(const ErrorEventInit *self);

void ErrorEventInit_set_message(ErrorEventInit* self, jb_String * value);

jb_String ErrorEventInit_filename(const ErrorEventInit *self);

void ErrorEventInit_set_filename(ErrorEventInit* self, jb_String * value);

unsigned long ErrorEventInit_lineno(const ErrorEventInit *self);

void ErrorEventInit_set_lineno(ErrorEventInit* self, unsigned long value);

unsigned long ErrorEventInit_colno(const ErrorEventInit *self);

void ErrorEventInit_set_colno(ErrorEventInit* self, unsigned long value);

jb_Any ErrorEventInit_error(const ErrorEventInit *self);

void ErrorEventInit_set_error(ErrorEventInit* self, jb_Any * value);

ErrorEventInit ErrorEventInit_new();

#ifdef __cplusplus
}
#endif
