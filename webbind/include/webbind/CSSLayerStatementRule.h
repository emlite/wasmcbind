#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSRule.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(CSSLayerStatementRule, CSSRule);

jb_FrozenArray CSSLayerStatementRule_nameList( const CSSLayerStatementRule *self);
