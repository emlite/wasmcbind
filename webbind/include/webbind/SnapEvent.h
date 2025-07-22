#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct Node Node;


DECLARE_EMLITE_TYPE(SnapEvent, Event);

SnapEvent SnapEvent_new0(jb_DOMString * type);

SnapEvent SnapEvent_new1(jb_DOMString * type, jb_Any * eventInitDict);

Node SnapEvent_snapTargetBlock( const SnapEvent *self);

Node SnapEvent_snapTargetInline( const SnapEvent *self);
