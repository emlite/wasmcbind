#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSRule.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(CSSColorProfileRule, CSSRule);

jb_CSSOMString CSSColorProfileRule_name(const CSSColorProfileRule *self);

jb_CSSOMString CSSColorProfileRule_src(const CSSColorProfileRule *self);

jb_CSSOMString CSSColorProfileRule_renderingIntent(const CSSColorProfileRule *self);

jb_CSSOMString CSSColorProfileRule_components(const CSSColorProfileRule *self);
