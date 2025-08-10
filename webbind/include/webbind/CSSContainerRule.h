#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSConditionRule.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CSSContainerRule, CSSConditionRule);

jb_String CSSContainerRule_containerName(const CSSContainerRule *self);

jb_String CSSContainerRule_containerQuery(const CSSContainerRule *self);

#ifdef __cplusplus
}
#endif
