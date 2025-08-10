#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSGroupingRule.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CSSConditionRule, CSSGroupingRule);

jb_String CSSConditionRule_conditionText(const CSSConditionRule *self);

#ifdef __cplusplus
}
#endif
