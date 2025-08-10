#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(EditContextInit, em_Val);

jb_String EditContextInit_text(const EditContextInit *self);

void EditContextInit_set_text(EditContextInit* self, jb_String * value);

unsigned long EditContextInit_selectionStart(const EditContextInit *self);

void EditContextInit_set_selectionStart(EditContextInit* self, unsigned long value);

unsigned long EditContextInit_selectionEnd(const EditContextInit *self);

void EditContextInit_set_selectionEnd(EditContextInit* self, unsigned long value);

EditContextInit EditContextInit_new();

#ifdef __cplusplus
}
#endif
