#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


typedef struct {
  Event inner;
} IDBVersionChangeEvent;


DECLARE_EMLITE_TYPE(IDBVersionChangeEvent, Event);

IDBVersionChangeEvent IDBVersionChangeEvent_new(const jb_DOMString* type);

IDBVersionChangeEvent IDBVersionChangeEvent_new(const jb_DOMString* type, const jb_Any* eventInitDict);

long long IDBVersionChangeEvent_oldVersion( const IDBVersionChangeEvent *self);

long long IDBVersionChangeEvent_newVersion( const IDBVersionChangeEvent *self);
