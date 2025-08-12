#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type EditContextInit */
DECLARE_EMLITE_TYPE(EditContextInit, em_Val);

/** @brief Getter of the text property */
jb_String EditContextInit_text(const EditContextInit *self);

/** @brief Setter of the text property */
void EditContextInit_set_text(EditContextInit* self, jb_String * value);

/** @brief Getter of the selectionStart property */
unsigned long EditContextInit_selectionStart(const EditContextInit *self);

/** @brief Setter of the selectionStart property */
void EditContextInit_set_selectionStart(EditContextInit* self, unsigned long value);

/** @brief Getter of the selectionEnd property */
unsigned long EditContextInit_selectionEnd(const EditContextInit *self);

/** @brief Setter of the selectionEnd property */
void EditContextInit_set_selectionEnd(EditContextInit* self, unsigned long value);

/** @brief Constructor of the EditContextInit dictionary type */
EditContextInit EditContextInit_new();

#ifdef __cplusplus
}
#endif
