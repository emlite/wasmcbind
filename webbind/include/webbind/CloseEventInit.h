#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type CloseEventInit */
DECLARE_EMLITE_TYPE(CloseEventInit, EventInit);

/** @brief Getter of the wasClean property */
bool CloseEventInit_wasClean(const CloseEventInit *self);

/** @brief Setter of the wasClean property */
void CloseEventInit_set_wasClean(CloseEventInit* self, bool value);

/** @brief Getter of the code property */
unsigned short CloseEventInit_code(const CloseEventInit *self);

/** @brief Setter of the code property */
void CloseEventInit_set_code(CloseEventInit* self, unsigned short value);

/** @brief Getter of the reason property */
jb_String CloseEventInit_reason(const CloseEventInit *self);

/** @brief Setter of the reason property */
void CloseEventInit_set_reason(CloseEventInit* self, jb_String * value);

/** @brief Constructor of the CloseEventInit dictionary type */
CloseEventInit CloseEventInit_new();

#ifdef __cplusplus
}
#endif
