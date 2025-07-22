#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct PresentationConnectionList PresentationConnectionList;


typedef struct {
  em_Val inner;
} PresentationReceiver;


DECLARE_EMLITE_TYPE(PresentationReceiver, em_Val);

jb_Promise PresentationReceiver_connectionList( const PresentationReceiver *self);
