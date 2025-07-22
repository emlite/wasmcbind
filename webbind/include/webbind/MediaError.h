#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} MediaError;


DECLARE_EMLITE_TYPE(MediaError, em_Val);

unsigned short MediaError_code( const MediaError *self);

jb_DOMString MediaError_message( const MediaError *self);
