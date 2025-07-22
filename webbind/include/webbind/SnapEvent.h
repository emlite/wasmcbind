#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"

typedef struct Node Node;


typedef struct {
  Event inner;
} SnapEvent;


DECLARE_EMLITE_TYPE(SnapEvent, Event);

SnapEvent SnapEvent_new(const jb_DOMString* type);

SnapEvent SnapEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

Node SnapEvent_snapTargetBlock( const SnapEvent *self);

Node SnapEvent_snapTargetInline( const SnapEvent *self);
