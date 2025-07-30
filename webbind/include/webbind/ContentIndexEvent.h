#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "ExtendableEvent.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(ContentIndexEvent, ExtendableEvent);

ContentIndexEvent ContentIndexEvent_new(jb_String * type, jb_Any * init);

jb_String ContentIndexEvent_id(const ContentIndexEvent *self);
