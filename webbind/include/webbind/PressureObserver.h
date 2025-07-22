#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct PressureObserverOptions PressureObserverOptions;
typedef struct PressureRecord PressureRecord;


typedef struct {
  em_Val inner;
} PressureObserverOptions;


DECLARE_EMLITE_TYPE(PressureObserverOptions, em_Val);

unsigned long PressureObserverOptions_sampleInterval( const PressureObserverOptions *self);

void PressureObserverOptions_set_sampleInterval(PressureObserverOptions* self, unsigned long value);
typedef struct {
  em_Val inner;
} PressureObserver;


DECLARE_EMLITE_TYPE(PressureObserver, em_Val);

PressureObserver PressureObserver_new(const jb_Function* callback);

jb_Promise PressureObserver_observe(PressureObserver* self , const PressureSource* source);

jb_Promise PressureObserver_observe(PressureObserver* self , const PressureSource* source, const PressureObserverOptions* options);

jb_Undefined PressureObserver_unobserve(PressureObserver* self , const PressureSource* source);

jb_Undefined PressureObserver_disconnect(PressureObserver* self );

jb_Sequence PressureObserver_takeRecords(PressureObserver* self );

jb_FrozenArray PressureObserver_knownSources( PressureObserver *self);
