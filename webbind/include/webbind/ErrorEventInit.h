#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ErrorEventInit */
DECLARE_EMLITE_TYPE(ErrorEventInit, EventInit);

/** @brief Getter of the message property */
jb_String ErrorEventInit_message(const ErrorEventInit *self);

/** @brief Setter of the message property */
void ErrorEventInit_set_message(ErrorEventInit* self, jb_String * value);

/** @brief Getter of the filename property */
jb_String ErrorEventInit_filename(const ErrorEventInit *self);

/** @brief Setter of the filename property */
void ErrorEventInit_set_filename(ErrorEventInit* self, jb_String * value);

/** @brief Getter of the lineno property */
unsigned long ErrorEventInit_lineno(const ErrorEventInit *self);

/** @brief Setter of the lineno property */
void ErrorEventInit_set_lineno(ErrorEventInit* self, unsigned long value);

/** @brief Getter of the colno property */
unsigned long ErrorEventInit_colno(const ErrorEventInit *self);

/** @brief Setter of the colno property */
void ErrorEventInit_set_colno(ErrorEventInit* self, unsigned long value);

/** @brief Getter of the error property */
jb_Any ErrorEventInit_error(const ErrorEventInit *self);

/** @brief Setter of the error property */
void ErrorEventInit_set_error(ErrorEventInit* self, jb_Any * value);

/** @brief Constructor of the ErrorEventInit dictionary type */
ErrorEventInit ErrorEventInit_new();

#ifdef __cplusplus
}
#endif
