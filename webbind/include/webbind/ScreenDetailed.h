#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Screen.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(ScreenDetailed, Screen);

long ScreenDetailed_availLeft(const ScreenDetailed *self);

long ScreenDetailed_availTop(const ScreenDetailed *self);

long ScreenDetailed_left(const ScreenDetailed *self);

long ScreenDetailed_top(const ScreenDetailed *self);

bool ScreenDetailed_isPrimary(const ScreenDetailed *self);

bool ScreenDetailed_isInternal(const ScreenDetailed *self);

float ScreenDetailed_devicePixelRatio(const ScreenDetailed *self);

jb_DOMString ScreenDetailed_label(const ScreenDetailed *self);
