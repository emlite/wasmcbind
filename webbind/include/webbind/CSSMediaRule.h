#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "CSSConditionRule.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MediaList MediaList;

DECLARE_EMLITE_TYPE(CSSMediaRule, CSSConditionRule);

MediaList CSSMediaRule_media(const CSSMediaRule *self);

bool CSSMediaRule_matches(const CSSMediaRule *self);

#ifdef __cplusplus
}
#endif
