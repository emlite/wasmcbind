#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct WakeLockSentinel WakeLockSentinel;


typedef struct {
  em_Val inner;
} WakeLock;


DECLARE_EMLITE_TYPE(WakeLock, em_Val);

jb_Promise WakeLock_request(WakeLock* self );

jb_Promise WakeLock_request(WakeLock* self , const WakeLockType* type);
