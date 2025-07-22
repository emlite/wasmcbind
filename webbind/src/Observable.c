#include <webbind/Observable.h>
#include <webbind/AbortSignal.h>


DEFINE_EMLITE_TYPE(SubscribeOptions, em_Val);


AbortSignal SubscribeOptions_signal(const SubscribeOptions *self) {
    return em_Val_as(AbortSignal, em_Val_get(em_Val_as_val(self->inner), em_Val_from("signal")));
}


void SubscribeOptions_set_signal(SubscribeOptions* self, AbortSignal * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("signal"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(Observable, em_Val);


Observable Observable_new(jb_Function * callback) {
        em_Val vv = em_Val_new(em_Val_global("Observable") , em_Val_from(callback));
        return Observable_from_val(&vv);
      }


jb_Undefined Observable_subscribe0(Observable* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "subscribe"));
}


jb_Undefined Observable_subscribe1(Observable* self , jb_Any * observer) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "subscribe", em_Val_from(observer)));
}


jb_Undefined Observable_subscribe2(Observable* self , jb_Any * observer, SubscribeOptions * options) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "subscribe", em_Val_from(observer), em_Val_from(options)));
}


Observable Observable_from(Observable* self , jb_Any * value) {
    return em_Val_as(Observable, em_Val_call(em_Val_global("observable"), "from", em_Val_from(value)));
}


Observable Observable_takeUntil(Observable* self , jb_Any * value) {
    return em_Val_as(Observable, em_Val_call(em_Val_as_val(self->inner), "takeUntil", em_Val_from(value)));
}


Observable Observable_map(Observable* self , jb_Function * mapper) {
    return em_Val_as(Observable, em_Val_call(em_Val_as_val(self->inner), "map", em_Val_from(mapper)));
}


Observable Observable_filter(Observable* self , jb_Function * predicate) {
    return em_Val_as(Observable, em_Val_call(em_Val_as_val(self->inner), "filter", em_Val_from(predicate)));
}


Observable Observable_take(Observable* self , long long amount) {
    return em_Val_as(Observable, em_Val_call(em_Val_as_val(self->inner), "take", em_Val_from(amount)));
}


Observable Observable_drop(Observable* self , long long amount) {
    return em_Val_as(Observable, em_Val_call(em_Val_as_val(self->inner), "drop", em_Val_from(amount)));
}


Observable Observable_flatMap(Observable* self , jb_Function * mapper) {
    return em_Val_as(Observable, em_Val_call(em_Val_as_val(self->inner), "flatMap", em_Val_from(mapper)));
}


Observable Observable_switchMap(Observable* self , jb_Function * mapper) {
    return em_Val_as(Observable, em_Val_call(em_Val_as_val(self->inner), "switchMap", em_Val_from(mapper)));
}


Observable Observable_inspect0(Observable* self ) {
    return em_Val_as(Observable, em_Val_call(em_Val_as_val(self->inner), "inspect"));
}


Observable Observable_inspect1(Observable* self , jb_Any * inspectorUnion) {
    return em_Val_as(Observable, em_Val_call(em_Val_as_val(self->inner), "inspect", em_Val_from(inspectorUnion)));
}


Observable Observable_catch_(Observable* self , jb_Function * callback) {
    return em_Val_as(Observable, em_Val_call(em_Val_as_val(self->inner), "catch", em_Val_from(callback)));
}


Observable Observable_finally(Observable* self , jb_Any * callback) {
    return em_Val_as(Observable, em_Val_call(em_Val_as_val(self->inner), "finally", em_Val_from(callback)));
}


jb_Promise Observable_toArray0(Observable* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "toArray"));
}


jb_Promise Observable_toArray1(Observable* self , SubscribeOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "toArray", em_Val_from(options)));
}


jb_Promise Observable_forEach0(Observable* self , jb_Function * callback) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "forEach", em_Val_from(callback)));
}


jb_Promise Observable_forEach1(Observable* self , jb_Function * callback, SubscribeOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "forEach", em_Val_from(callback), em_Val_from(options)));
}


jb_Promise Observable_every0(Observable* self , jb_Function * predicate) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "every", em_Val_from(predicate)));
}


jb_Promise Observable_every1(Observable* self , jb_Function * predicate, SubscribeOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "every", em_Val_from(predicate), em_Val_from(options)));
}


jb_Promise Observable_first0(Observable* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "first"));
}


jb_Promise Observable_first1(Observable* self , SubscribeOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "first", em_Val_from(options)));
}


jb_Promise Observable_last0(Observable* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "last"));
}


jb_Promise Observable_last1(Observable* self , SubscribeOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "last", em_Val_from(options)));
}


jb_Promise Observable_find0(Observable* self , jb_Function * predicate) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "find", em_Val_from(predicate)));
}


jb_Promise Observable_find1(Observable* self , jb_Function * predicate, SubscribeOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "find", em_Val_from(predicate), em_Val_from(options)));
}


jb_Promise Observable_some0(Observable* self , jb_Function * predicate) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "some", em_Val_from(predicate)));
}


jb_Promise Observable_some1(Observable* self , jb_Function * predicate, SubscribeOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "some", em_Val_from(predicate), em_Val_from(options)));
}


jb_Promise Observable_reduce0(Observable* self , jb_Function * reducer) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "reduce", em_Val_from(reducer)));
}


jb_Promise Observable_reduce1(Observable* self , jb_Function * reducer, jb_Any * initialValue) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "reduce", em_Val_from(reducer), em_Val_from(initialValue)));
}


jb_Promise Observable_reduce2(Observable* self , jb_Function * reducer, jb_Any * initialValue, SubscribeOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "reduce", em_Val_from(reducer), em_Val_from(initialValue), em_Val_from(options)));
}

