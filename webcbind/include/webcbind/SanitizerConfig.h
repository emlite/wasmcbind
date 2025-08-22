#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type SanitizerConfig */
DECLARE_EMLITE_TYPE(SanitizerConfig, em_Val);

/** @brief Getter of the elements property */
jb_Array SanitizerConfig_elements(const SanitizerConfig *self);

/** @brief Setter of the elements property */
void SanitizerConfig_set_elements(SanitizerConfig* self, jb_Array * value);

/** @brief Getter of the removeElements property */
jb_Array SanitizerConfig_removeElements(const SanitizerConfig *self);

/** @brief Setter of the removeElements property */
void SanitizerConfig_set_removeElements(SanitizerConfig* self, jb_Array * value);

/** @brief Getter of the replaceWithChildrenElements property */
jb_Array SanitizerConfig_replaceWithChildrenElements(const SanitizerConfig *self);

/** @brief Setter of the replaceWithChildrenElements property */
void SanitizerConfig_set_replaceWithChildrenElements(SanitizerConfig* self, jb_Array * value);

/** @brief Getter of the attributes property */
jb_Array SanitizerConfig_attributes(const SanitizerConfig *self);

/** @brief Setter of the attributes property */
void SanitizerConfig_set_attributes(SanitizerConfig* self, jb_Array * value);

/** @brief Getter of the removeAttributes property */
jb_Array SanitizerConfig_removeAttributes(const SanitizerConfig *self);

/** @brief Setter of the removeAttributes property */
void SanitizerConfig_set_removeAttributes(SanitizerConfig* self, jb_Array * value);

/** @brief Getter of the comments property */
bool SanitizerConfig_comments(const SanitizerConfig *self);

/** @brief Setter of the comments property */
void SanitizerConfig_set_comments(SanitizerConfig* self, bool value);

/** @brief Getter of the dataAttributes property */
bool SanitizerConfig_dataAttributes(const SanitizerConfig *self);

/** @brief Setter of the dataAttributes property */
void SanitizerConfig_set_dataAttributes(SanitizerConfig* self, bool value);

/** @brief Constructor of the SanitizerConfig dictionary type */
SanitizerConfig SanitizerConfig_new();

#ifdef __cplusplus
}
#endif
