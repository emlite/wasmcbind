#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSRule.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(CSSViewTransitionRule, CSSRule);

jb_String CSSViewTransitionRule_navigation(const CSSViewTransitionRule *self);

jb_Array CSSViewTransitionRule_types(const CSSViewTransitionRule *self);

#ifdef __cplusplus
}
#endif
