#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(Font, em_Val);

jb_DOMString Font_name( const Font *self);

unsigned long Font_glyphsRendered( const Font *self);
