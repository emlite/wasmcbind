#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct DOMException DOMException;
typedef struct IDBTransaction IDBTransaction;


typedef struct {
  EventTarget inner;
} IDBRequest;


DECLARE_EMLITE_TYPE(IDBRequest, EventTarget);

jb_Any IDBRequest_result( const IDBRequest *self);

DOMException IDBRequest_error( const IDBRequest *self);

jb_Any IDBRequest_source( const IDBRequest *self);

IDBTransaction IDBRequest_transaction( const IDBRequest *self);

IDBRequestReadyState IDBRequest_readyState( const IDBRequest *self);

jb_Any IDBRequest_onsuccess( const IDBRequest *self);

void IDBRequest_set_onsuccess(IDBRequest* self, const jb_Any* value);

jb_Any IDBRequest_onerror( const IDBRequest *self);

void IDBRequest_set_onerror(IDBRequest* self, const jb_Any* value);
