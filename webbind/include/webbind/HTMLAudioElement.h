#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "HTMLMediaElement.h"
#include "enums.h"


typedef struct {
  HTMLMediaElement inner;
} HTMLAudioElement;


DECLARE_EMLITE_TYPE(HTMLAudioElement, HTMLMediaElement);

HTMLAudioElement HTMLAudioElement_new();
