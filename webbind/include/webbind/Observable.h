#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct SubscribeOptions SubscribeOptions;
typedef struct Observable Observable;
typedef struct AbortSignal AbortSignal;


typedef struct {
  em_Val inner;
} SubscribeOptions;


DECLARE_EMLITE_TYPE(SubscribeOptions, em_Val);

AbortSignal SubscribeOptions_signal( const SubscribeOptions *self);

void SubscribeOptions_set_signal(SubscribeOptions* self, const AbortSignal* value);
typedef struct {
  em_Val inner;
} Observable;


DECLARE_EMLITE_TYPE(Observable, em_Val);

Observable Observable_new(const jb_Function* callback);

jb_Undefined Observable_subscribe(Observable* self );

jb_Undefined Observable_subscribe(Observable* self , const jb_Any* observer);

jb_Undefined Observable_subscribe(Observable* self , const jb_Any* observer, const SubscribeOptions* options);

Observable Observable_from(Observable* self , const jb_Any* value);

Observable Observable_takeUntil(Observable* self , const jb_Any* value);

Observable Observable_map(Observable* self , const jb_Function* mapper);

Observable Observable_filter(Observable* self , const jb_Function* predicate);

Observable Observable_take(Observable* self , long long amount);

Observable Observable_drop(Observable* self , long long amount);

Observable Observable_flatMap(Observable* self , const jb_Function* mapper);

Observable Observable_switchMap(Observable* self , const jb_Function* mapper);

Observable Observable_inspect(Observable* self );

Observable Observable_inspect(Observable* self , const jb_Any* inspectorUnion);

Observable Observable_catch_(Observable* self , const jb_Function* callback);

Observable Observable_finally(Observable* self , const jb_Any* callback);

jb_Promise Observable_toArray(Observable* self );

jb_Promise Observable_toArray(Observable* self , const SubscribeOptions* options);

jb_Promise Observable_forEach(Observable* self , const jb_Function* callback);

jb_Promise Observable_forEach(Observable* self , const jb_Function* callback, const SubscribeOptions* options);

jb_Promise Observable_every(Observable* self , const jb_Function* predicate);

jb_Promise Observable_every(Observable* self , const jb_Function* predicate, const SubscribeOptions* options);

jb_Promise Observable_first(Observable* self );

jb_Promise Observable_first(Observable* self , const SubscribeOptions* options);

jb_Promise Observable_last(Observable* self );

jb_Promise Observable_last(Observable* self , const SubscribeOptions* options);

jb_Promise Observable_find(Observable* self , const jb_Function* predicate);

jb_Promise Observable_find(Observable* self , const jb_Function* predicate, const SubscribeOptions* options);

jb_Promise Observable_some(Observable* self , const jb_Function* predicate);

jb_Promise Observable_some(Observable* self , const jb_Function* predicate, const SubscribeOptions* options);

jb_Promise Observable_reduce(Observable* self , const jb_Function* reducer);

jb_Promise Observable_reduce(Observable* self , const jb_Function* reducer, const jb_Any* initialValue);

jb_Promise Observable_reduce(Observable* self , const jb_Function* reducer, const jb_Any* initialValue, const SubscribeOptions* options);
