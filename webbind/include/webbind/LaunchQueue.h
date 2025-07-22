#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} LaunchQueue;


DECLARE_EMLITE_TYPE(LaunchQueue, em_Val);

jb_Undefined LaunchQueue_setConsumer(LaunchQueue* self , const jb_Function* consumer);
