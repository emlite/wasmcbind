#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLElement.h"
#include "enums.h"


typedef struct {
  HTMLElement inner;
} HTMLPictureElement;


DECLARE_EMLITE_TYPE(HTMLPictureElement, HTMLElement);

HTMLPictureElement HTMLPictureElement_new();
