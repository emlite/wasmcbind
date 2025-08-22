#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MutationObserverInit */
DECLARE_EMLITE_TYPE(MutationObserverInit, em_Val);

/** @brief Getter of the childList property */
bool MutationObserverInit_childList(const MutationObserverInit *self);

/** @brief Setter of the childList property */
void MutationObserverInit_set_childList(MutationObserverInit* self, bool value);

/** @brief Getter of the attributes property */
bool MutationObserverInit_attributes(const MutationObserverInit *self);

/** @brief Setter of the attributes property */
void MutationObserverInit_set_attributes(MutationObserverInit* self, bool value);

/** @brief Getter of the characterData property */
bool MutationObserverInit_characterData(const MutationObserverInit *self);

/** @brief Setter of the characterData property */
void MutationObserverInit_set_characterData(MutationObserverInit* self, bool value);

/** @brief Getter of the subtree property */
bool MutationObserverInit_subtree(const MutationObserverInit *self);

/** @brief Setter of the subtree property */
void MutationObserverInit_set_subtree(MutationObserverInit* self, bool value);

/** @brief Getter of the attributeOldValue property */
bool MutationObserverInit_attributeOldValue(const MutationObserverInit *self);

/** @brief Setter of the attributeOldValue property */
void MutationObserverInit_set_attributeOldValue(MutationObserverInit* self, bool value);

/** @brief Getter of the characterDataOldValue property */
bool MutationObserverInit_characterDataOldValue(const MutationObserverInit *self);

/** @brief Setter of the characterDataOldValue property */
void MutationObserverInit_set_characterDataOldValue(MutationObserverInit* self, bool value);

/** @brief Getter of the attributeFilter property */
jb_Array MutationObserverInit_attributeFilter(const MutationObserverInit *self);

/** @brief Setter of the attributeFilter property */
void MutationObserverInit_set_attributeFilter(MutationObserverInit* self, jb_Array * value);

/** @brief Constructor of the MutationObserverInit dictionary type */
MutationObserverInit MutationObserverInit_new();

#ifdef __cplusplus
}
#endif
