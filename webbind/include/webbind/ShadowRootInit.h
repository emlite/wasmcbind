#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CustomElementRegistry CustomElementRegistry;

DECLARE_EMLITE_TYPE(ShadowRootInit, em_Val);

ShadowRootMode ShadowRootInit_mode(const ShadowRootInit *self);

void ShadowRootInit_set_mode(ShadowRootInit* self, ShadowRootMode * value);

bool ShadowRootInit_delegatesFocus(const ShadowRootInit *self);

void ShadowRootInit_set_delegatesFocus(ShadowRootInit* self, bool value);

SlotAssignmentMode ShadowRootInit_slotAssignment(const ShadowRootInit *self);

void ShadowRootInit_set_slotAssignment(ShadowRootInit* self, SlotAssignmentMode * value);

bool ShadowRootInit_clonable(const ShadowRootInit *self);

void ShadowRootInit_set_clonable(ShadowRootInit* self, bool value);

bool ShadowRootInit_serializable(const ShadowRootInit *self);

void ShadowRootInit_set_serializable(ShadowRootInit* self, bool value);

CustomElementRegistry ShadowRootInit_customElementRegistry(const ShadowRootInit *self);

void ShadowRootInit_set_customElementRegistry(ShadowRootInit* self, CustomElementRegistry * value);

ShadowRootInit ShadowRootInit_new();

#ifdef __cplusplus
}
#endif
