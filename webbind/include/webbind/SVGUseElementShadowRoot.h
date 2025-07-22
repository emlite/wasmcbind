#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "ShadowRoot.h"
#include "enums.h"


typedef struct {
  ShadowRoot inner;
} SVGUseElementShadowRoot;


DECLARE_EMLITE_TYPE(SVGUseElementShadowRoot, ShadowRoot);
