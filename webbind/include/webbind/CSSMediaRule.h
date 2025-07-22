#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSConditionRule.h"
#include "enums.h"

typedef struct MediaList MediaList;


DECLARE_EMLITE_TYPE(CSSMediaRule, CSSConditionRule);

MediaList CSSMediaRule_media( const CSSMediaRule *self);

bool CSSMediaRule_matches( const CSSMediaRule *self);
