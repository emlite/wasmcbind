#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct ScreenOrientation ScreenOrientation;


typedef struct {
  em_Val inner;
} Screen;


DECLARE_EMLITE_TYPE(Screen, em_Val);

long Screen_availWidth( const Screen *self);

long Screen_availHeight( const Screen *self);

long Screen_width( const Screen *self);

long Screen_height( const Screen *self);

unsigned long Screen_colorDepth( const Screen *self);

unsigned long Screen_pixelDepth( const Screen *self);

ScreenOrientation Screen_orientation( const Screen *self);

bool Screen_isExtended( const Screen *self);

jb_Any Screen_onchange( const Screen *self);

void Screen_set_onchange(Screen* self, const jb_Any* value);
