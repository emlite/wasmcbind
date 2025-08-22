#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type CSSParserOptions */
DECLARE_EMLITE_TYPE(CSSParserOptions, em_Val);

/** @brief Getter of the atRules property */
jb_Object CSSParserOptions_atRules(const CSSParserOptions *self);

/** @brief Setter of the atRules property */
void CSSParserOptions_set_atRules(CSSParserOptions* self, jb_Object * value);

/** @brief Constructor of the CSSParserOptions dictionary type */
CSSParserOptions CSSParserOptions_new();

#ifdef __cplusplus
}
#endif
