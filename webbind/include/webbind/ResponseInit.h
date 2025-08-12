#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ResponseInit */
DECLARE_EMLITE_TYPE(ResponseInit, em_Val);

/** @brief Getter of the status property */
unsigned short ResponseInit_status(const ResponseInit *self);

/** @brief Setter of the status property */
void ResponseInit_set_status(ResponseInit* self, unsigned short value);

/** @brief Getter of the statusText property */
jb_String ResponseInit_statusText(const ResponseInit *self);

/** @brief Setter of the statusText property */
void ResponseInit_set_statusText(ResponseInit* self, jb_String * value);

/** @brief Getter of the headers property */
jb_Any ResponseInit_headers(const ResponseInit *self);

/** @brief Setter of the headers property */
void ResponseInit_set_headers(ResponseInit* self, jb_Any * value);

/** @brief Constructor of the ResponseInit dictionary type */
ResponseInit ResponseInit_new();

#ifdef __cplusplus
}
#endif
