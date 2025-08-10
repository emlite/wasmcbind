#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSGroupingRule.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CSSLayerBlockRule, CSSGroupingRule);

jb_String CSSLayerBlockRule_name(const CSSLayerBlockRule *self);

#ifdef __cplusplus
}
#endif
