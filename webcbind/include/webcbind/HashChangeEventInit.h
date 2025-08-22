#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type HashChangeEventInit */
DECLARE_EMLITE_TYPE(HashChangeEventInit, EventInit);

/** @brief Getter of the oldURL property */
jb_String HashChangeEventInit_oldURL(const HashChangeEventInit *self);

/** @brief Setter of the oldURL property */
void HashChangeEventInit_set_oldURL(HashChangeEventInit* self, jb_String * value);

/** @brief Getter of the newURL property */
jb_String HashChangeEventInit_newURL(const HashChangeEventInit *self);

/** @brief Setter of the newURL property */
void HashChangeEventInit_set_newURL(HashChangeEventInit* self, jb_String * value);

/** @brief Constructor of the HashChangeEventInit dictionary type */
HashChangeEventInit HashChangeEventInit_new();

#ifdef __cplusplus
}
#endif
