#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct CustomElementRegistry CustomElementRegistry;

/** @brief Dictionary type ShadowRootInit */
DECLARE_EMLITE_TYPE(ShadowRootInit, em_Val);

/** @brief Getter of the mode property */
ShadowRootMode ShadowRootInit_mode(const ShadowRootInit *self);

/** @brief Setter of the mode property */
void ShadowRootInit_set_mode(ShadowRootInit* self, ShadowRootMode * value);

/** @brief Getter of the delegatesFocus property */
bool ShadowRootInit_delegatesFocus(const ShadowRootInit *self);

/** @brief Setter of the delegatesFocus property */
void ShadowRootInit_set_delegatesFocus(ShadowRootInit* self, bool value);

/** @brief Getter of the slotAssignment property */
SlotAssignmentMode ShadowRootInit_slotAssignment(const ShadowRootInit *self);

/** @brief Setter of the slotAssignment property */
void ShadowRootInit_set_slotAssignment(ShadowRootInit* self, SlotAssignmentMode * value);

/** @brief Getter of the clonable property */
bool ShadowRootInit_clonable(const ShadowRootInit *self);

/** @brief Setter of the clonable property */
void ShadowRootInit_set_clonable(ShadowRootInit* self, bool value);

/** @brief Getter of the serializable property */
bool ShadowRootInit_serializable(const ShadowRootInit *self);

/** @brief Setter of the serializable property */
void ShadowRootInit_set_serializable(ShadowRootInit* self, bool value);

/** @brief Getter of the customElementRegistry property */
CustomElementRegistry ShadowRootInit_customElementRegistry(const ShadowRootInit *self);

/** @brief Setter of the customElementRegistry property */
void ShadowRootInit_set_customElementRegistry(ShadowRootInit* self, CustomElementRegistry * value);

/** @brief Constructor of the ShadowRootInit dictionary type */
ShadowRootInit ShadowRootInit_new();

#ifdef __cplusplus
}
#endif
