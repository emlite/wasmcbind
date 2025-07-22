#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct NDEFRecord NDEFRecord;


typedef struct {
  em_Val inner;
} NDEFMessage;


DECLARE_EMLITE_TYPE(NDEFMessage, em_Val);

NDEFMessage NDEFMessage_new(const jb_Any* messageInit);

jb_FrozenArray NDEFMessage_records( const NDEFMessage *self);
