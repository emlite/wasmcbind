#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


typedef struct {
  HTMLElement inner;
} HTMLHeadElement;


DECLARE_EMLITE_TYPE(HTMLHeadElement, HTMLElement);

HTMLHeadElement HTMLHeadElement_new();
