#include <webbind/BackgroundFetchRegistration.h>
#include <webbind/BackgroundFetchRecord.h>


DEFINE_EMLITE_TYPE(CacheQueryOptions, em_Val);


bool CacheQueryOptions_ignoreSearch(const CacheQueryOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ignoreSearch")));
}


void CacheQueryOptions_set_ignoreSearch(CacheQueryOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ignoreSearch"), em_Val_from(value));
}


bool CacheQueryOptions_ignoreMethod(const CacheQueryOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ignoreMethod")));
}


void CacheQueryOptions_set_ignoreMethod(CacheQueryOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ignoreMethod"), em_Val_from(value));
}


bool CacheQueryOptions_ignoreVary(const CacheQueryOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ignoreVary")));
}


void CacheQueryOptions_set_ignoreVary(CacheQueryOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ignoreVary"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(BackgroundFetchRegistration, EventTarget);


jb_String BackgroundFetchRegistration_id(const BackgroundFetchRegistration *self) {
    return em_Val_as(jb_String, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("id")));
}


long long BackgroundFetchRegistration_uploadTotal(const BackgroundFetchRegistration *self) {
    return em_Val_as(long long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("uploadTotal")));
}


long long BackgroundFetchRegistration_uploaded(const BackgroundFetchRegistration *self) {
    return em_Val_as(long long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("uploaded")));
}


long long BackgroundFetchRegistration_downloadTotal(const BackgroundFetchRegistration *self) {
    return em_Val_as(long long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("downloadTotal")));
}


long long BackgroundFetchRegistration_downloaded(const BackgroundFetchRegistration *self) {
    return em_Val_as(long long, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("downloaded")));
}


BackgroundFetchResult BackgroundFetchRegistration_result(const BackgroundFetchRegistration *self) {
    return em_Val_as(BackgroundFetchResult, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("result")));
}


BackgroundFetchFailureReason BackgroundFetchRegistration_failureReason(const BackgroundFetchRegistration *self) {
    return em_Val_as(BackgroundFetchFailureReason, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("failureReason")));
}


bool BackgroundFetchRegistration_recordsAvailable(const BackgroundFetchRegistration *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("recordsAvailable")));
}


jb_Any BackgroundFetchRegistration_onprogress(const BackgroundFetchRegistration *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), em_Val_from("onprogress")));
}


void BackgroundFetchRegistration_set_onprogress(BackgroundFetchRegistration* self, jb_Any * value) {
    em_Val_set(EventTarget_as_val(self->inner), em_Val_from("onprogress"), em_Val_from(value));
}


jb_Promise BackgroundFetchRegistration_abort(BackgroundFetchRegistration* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "abort"));
}


jb_Promise BackgroundFetchRegistration_match0(BackgroundFetchRegistration* self , jb_Any * request) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "match", em_Val_from(request)));
}


jb_Promise BackgroundFetchRegistration_match1(BackgroundFetchRegistration* self , jb_Any * request, CacheQueryOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "match", em_Val_from(request), em_Val_from(options)));
}


jb_Promise BackgroundFetchRegistration_matchAll0(BackgroundFetchRegistration* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "matchAll"));
}


jb_Promise BackgroundFetchRegistration_matchAll1(BackgroundFetchRegistration* self , jb_Any * request) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "matchAll", em_Val_from(request)));
}


jb_Promise BackgroundFetchRegistration_matchAll2(BackgroundFetchRegistration* self , jb_Any * request, CacheQueryOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "matchAll", em_Val_from(request), em_Val_from(options)));
}

