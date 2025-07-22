#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "Event.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(IDBVersionChangeEvent, Event);

IDBVersionChangeEvent IDBVersionChangeEvent_new0(jb_DOMString * type);

IDBVersionChangeEvent IDBVersionChangeEvent_new1(jb_DOMString * type, jb_Any * eventInitDict);

long long IDBVersionChangeEvent_oldVersion( const IDBVersionChangeEvent *self);

long long IDBVersionChangeEvent_newVersion( const IDBVersionChangeEvent *self);
