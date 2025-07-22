#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct PerformanceObserverInit PerformanceObserverInit;


typedef struct {
  em_Val inner;
} PerformanceObserverInit;


DECLARE_EMLITE_TYPE(PerformanceObserverInit, em_Val);

jb_Sequence PerformanceObserverInit_entryTypes( const PerformanceObserverInit *self);

void PerformanceObserverInit_set_entryTypes(PerformanceObserverInit* self, const jb_Sequence* value);

jb_DOMString PerformanceObserverInit_type( const PerformanceObserverInit *self);

void PerformanceObserverInit_set_type(PerformanceObserverInit* self, const jb_DOMString* value);

bool PerformanceObserverInit_buffered( const PerformanceObserverInit *self);

void PerformanceObserverInit_set_buffered(PerformanceObserverInit* self, bool value);
typedef struct {
  em_Val inner;
} PerformanceObserver;


DECLARE_EMLITE_TYPE(PerformanceObserver, em_Val);

PerformanceObserver PerformanceObserver_new(const jb_Function* callback);

jb_Undefined PerformanceObserver_observe(PerformanceObserver* self );

jb_Undefined PerformanceObserver_observe(PerformanceObserver* self , const PerformanceObserverInit* options);

jb_Undefined PerformanceObserver_disconnect(PerformanceObserver* self );

jb_Any PerformanceObserver_takeRecords(PerformanceObserver* self );

jb_FrozenArray PerformanceObserver_supportedEntryTypes( PerformanceObserver *self);
