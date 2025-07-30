#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSConditionRule.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(CSSContainerRule, CSSConditionRule);

jb_String CSSContainerRule_containerName(const CSSContainerRule *self);

jb_String CSSContainerRule_containerQuery(const CSSContainerRule *self);
