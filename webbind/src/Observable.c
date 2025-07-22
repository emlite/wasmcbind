#include <webbind/Observable.h>
#include <webbind/AbortSignal.h>


DEFINE_EMLITE_TYPE(SubscribeOptions, em_Val);


AbortSignal SubscribeOptions_signal(const SubscribeOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), "signal"));
}


void SubscribeOptions_set_signal(SubscribeOptions* self, const AbortSignal* value) {
    em_Val_set(em_Val_as_val(self->inner), "signal", value);
}

DEFINE_EMLITE_TYPE(Observable, em_Val);


Observable Observable_new(const jb_Function* callback) : em_Val(em_Val_global("Observable").new_(em_Val_from(callback))) {
        return Observable(em_Val_new(em_Val_global("Observable", em_Val_from(callback)));
      }


jb_Undefined Observable_subscribe(Observable* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "subscribe"));
}


jb_Undefined Observable_subscribe(Observable* self , const jb_Any* observer) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "subscribe", em_Val_from(observer)));
}


jb_Undefined Observable_subscribe(Observable* self , const jb_Any* observer, const SubscribeOptions* options) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "subscribe", em_Val_from(observer), em_Val_from(options)));
}


Observable Observable_from(Observable* self , const jb_Any* value) {
    return em_Val_as(Observable, em_Val_call(em_Val_global("observable"), "from", em_Val_from(value)));
}


Observable Observable_takeUntil(Observable* self , const jb_Any* value) {
    return em_Val_as(Observable, em_Val_call(em_Val_as_val(self->inner), "takeUntil", em_Val_from(value)));
}


Observable Observable_map(Observable* self , const jb_Function* mapper) {
    return em_Val_as(Observable, em_Val_call(em_Val_as_val(self->inner), "map", em_Val_from(mapper)));
}


Observable Observable_filter(Observable* self , const jb_Function* predicate) {
    return em_Val_as(Observable, em_Val_call(em_Val_as_val(self->inner), "filter", em_Val_from(predicate)));
}


Observable Observable_take(Observable* self , long long amount) {
    return em_Val_as(Observable, em_Val_call(em_Val_as_val(self->inner), "take", em_Val_from(amount)));
}


Observable Observable_drop(Observable* self , long long amount) {
    return em_Val_as(Observable, em_Val_call(em_Val_as_val(self->inner), "drop", em_Val_from(amount)));
}


Observable Observable_flatMap(Observable* self , const jb_Function* mapper) {
    return em_Val_as(Observable, em_Val_call(em_Val_as_val(self->inner), "flatMap", em_Val_from(mapper)));
}


Observable Observable_switchMap(Observable* self , const jb_Function* mapper) {
    return em_Val_as(Observable, em_Val_call(em_Val_as_val(self->inner), "switchMap", em_Val_from(mapper)));
}


Observable Observable_inspect(Observable* self ) {
    return em_Val_as(Observable, em_Val_call(em_Val_as_val(self->inner), "inspect"));
}


Observable Observable_inspect(Observable* self , const jb_Any* inspectorUnion) {
    return em_Val_as(Observable, em_Val_call(em_Val_as_val(self->inner), "inspect", em_Val_from(inspectorUnion)));
}


Observable Observable_catch_(Observable* self , const jb_Function* callback) {
    return em_Val_as(Observable, em_Val_call(em_Val_as_val(self->inner), "catch", em_Val_from(callback)));
}


Observable Observable_finally(Observable* self , const jb_Any* callback) {
    return em_Val_as(Observable, em_Val_call(em_Val_as_val(self->inner), "finally", em_Val_from(callback)));
}


jb_Promise Observable_toArray(Observable* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "toArray"));
}


jb_Promise Observable_toArray(Observable* self , const SubscribeOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "toArray", em_Val_from(options)));
}


jb_Promise Observable_forEach(Observable* self , const jb_Function* callback) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "forEach", em_Val_from(callback)));
}


jb_Promise Observable_forEach(Observable* self , const jb_Function* callback, const SubscribeOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "forEach", em_Val_from(callback), em_Val_from(options)));
}


jb_Promise Observable_every(Observable* self , const jb_Function* predicate) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "every", em_Val_from(predicate)));
}


jb_Promise Observable_every(Observable* self , const jb_Function* predicate, const SubscribeOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "every", em_Val_from(predicate), em_Val_from(options)));
}


jb_Promise Observable_first(Observable* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "first"));
}


jb_Promise Observable_first(Observable* self , const SubscribeOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "first", em_Val_from(options)));
}


jb_Promise Observable_last(Observable* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "last"));
}


jb_Promise Observable_last(Observable* self , const SubscribeOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "last", em_Val_from(options)));
}


jb_Promise Observable_find(Observable* self , const jb_Function* predicate) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "find", em_Val_from(predicate)));
}


jb_Promise Observable_find(Observable* self , const jb_Function* predicate, const SubscribeOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "find", em_Val_from(predicate), em_Val_from(options)));
}


jb_Promise Observable_some(Observable* self , const jb_Function* predicate) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "some", em_Val_from(predicate)));
}


jb_Promise Observable_some(Observable* self , const jb_Function* predicate, const SubscribeOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "some", em_Val_from(predicate), em_Val_from(options)));
}


jb_Promise Observable_reduce(Observable* self , const jb_Function* reducer) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "reduce", em_Val_from(reducer)));
}


jb_Promise Observable_reduce(Observable* self , const jb_Function* reducer, const jb_Any* initialValue) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "reduce", em_Val_from(reducer), em_Val_from(initialValue)));
}


jb_Promise Observable_reduce(Observable* self , const jb_Function* reducer, const jb_Any* initialValue, const SubscribeOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "reduce", em_Val_from(reducer), em_Val_from(initialValue), em_Val_from(options)));
}

