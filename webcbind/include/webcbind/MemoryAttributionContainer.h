#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MemoryAttributionContainer */
DECLARE_EMLITE_TYPE(MemoryAttributionContainer, em_Val);

/** @brief Getter of the id property */
jb_String MemoryAttributionContainer_id(const MemoryAttributionContainer *self);

/** @brief Setter of the id property */
void MemoryAttributionContainer_set_id(MemoryAttributionContainer* self, jb_String * value);

/** @brief Getter of the src property */
jb_String MemoryAttributionContainer_src(const MemoryAttributionContainer *self);

/** @brief Setter of the src property */
void MemoryAttributionContainer_set_src(MemoryAttributionContainer* self, jb_String * value);

/** @brief Constructor of the MemoryAttributionContainer dictionary type */
MemoryAttributionContainer MemoryAttributionContainer_new();

#ifdef __cplusplus
}
#endif
