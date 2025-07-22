#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct NDEFRecord NDEFRecord;


DECLARE_EMLITE_TYPE(NDEFMessage, em_Val);

NDEFMessage NDEFMessage_new(jb_Any * messageInit);

jb_FrozenArray NDEFMessage_records( const NDEFMessage *self);
