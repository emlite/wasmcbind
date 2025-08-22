#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "MemoryAttributionContainer.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type MemoryAttribution */
DECLARE_EMLITE_TYPE(MemoryAttribution, em_Val);

/** @brief Getter of the url property */
jb_String MemoryAttribution_url(const MemoryAttribution *self);

/** @brief Setter of the url property */
void MemoryAttribution_set_url(MemoryAttribution* self, jb_String * value);

/** @brief Getter of the container property */
MemoryAttributionContainer MemoryAttribution_container(const MemoryAttribution *self);

/** @brief Setter of the container property */
void MemoryAttribution_set_container(MemoryAttribution* self, MemoryAttributionContainer * value);

/** @brief Getter of the scope property */
jb_String MemoryAttribution_scope(const MemoryAttribution *self);

/** @brief Setter of the scope property */
void MemoryAttribution_set_scope(MemoryAttribution* self, jb_String * value);

/** @brief Constructor of the MemoryAttribution dictionary type */
MemoryAttribution MemoryAttribution_new();

#ifdef __cplusplus
}
#endif
