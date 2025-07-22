#include <webbind/BackgroundFetchRegistration.h>
#include <webbind/BackgroundFetchRecord.h>


DEFINE_EMLITE_TYPE(CacheQueryOptions, em_Val);


bool CacheQueryOptions_ignoreSearch(const CacheQueryOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "ignoreSearch"));
}


void CacheQueryOptions_set_ignoreSearch(CacheQueryOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "ignoreSearch", value);
}


bool CacheQueryOptions_ignoreMethod(const CacheQueryOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "ignoreMethod"));
}


void CacheQueryOptions_set_ignoreMethod(CacheQueryOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "ignoreMethod", value);
}


bool CacheQueryOptions_ignoreVary(const CacheQueryOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "ignoreVary"));
}


void CacheQueryOptions_set_ignoreVary(CacheQueryOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "ignoreVary", value);
}

DEFINE_EMLITE_TYPE(BackgroundFetchRegistration, EventTarget);


jb_DOMString BackgroundFetchRegistration_id(const BackgroundFetchRegistration *self) {
    return em_Val_as(jb_DOMString, em_Val_get(EventTarget_as_val(self->inner), "id"));
}


long long BackgroundFetchRegistration_uploadTotal(const BackgroundFetchRegistration *self) {
    return em_Val_as(long long, em_Val_get(EventTarget_as_val(self->inner), "uploadTotal"));
}


long long BackgroundFetchRegistration_uploaded(const BackgroundFetchRegistration *self) {
    return em_Val_as(long long, em_Val_get(EventTarget_as_val(self->inner), "uploaded"));
}


long long BackgroundFetchRegistration_downloadTotal(const BackgroundFetchRegistration *self) {
    return em_Val_as(long long, em_Val_get(EventTarget_as_val(self->inner), "downloadTotal"));
}


long long BackgroundFetchRegistration_downloaded(const BackgroundFetchRegistration *self) {
    return em_Val_as(long long, em_Val_get(EventTarget_as_val(self->inner), "downloaded"));
}


BackgroundFetchResult BackgroundFetchRegistration_result(const BackgroundFetchRegistration *self) {
    return em_Val_as(BackgroundFetchResult, em_Val_get(EventTarget_as_val(self->inner), "result"));
}


BackgroundFetchFailureReason BackgroundFetchRegistration_failureReason(const BackgroundFetchRegistration *self) {
    return em_Val_as(BackgroundFetchFailureReason, em_Val_get(EventTarget_as_val(self->inner), "failureReason"));
}


bool BackgroundFetchRegistration_recordsAvailable(const BackgroundFetchRegistration *self) {
    return em_Val_as(bool, em_Val_get(EventTarget_as_val(self->inner), "recordsAvailable"));
}


jb_Any BackgroundFetchRegistration_onprogress(const BackgroundFetchRegistration *self) {
    return em_Val_as(jb_Any, em_Val_get(EventTarget_as_val(self->inner), "onprogress"));
}


void BackgroundFetchRegistration_set_onprogress(BackgroundFetchRegistration* self, const jb_Any* value) {
    em_Val_set(EventTarget_as_val(self->inner), "onprogress", value);
}


jb_Promise BackgroundFetchRegistration_abort(BackgroundFetchRegistration* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "abort"));
}


jb_Promise BackgroundFetchRegistration_match(BackgroundFetchRegistration* self , const jb_Any* request) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "match", em_Val_from(request)));
}


jb_Promise BackgroundFetchRegistration_match(BackgroundFetchRegistration* self , const jb_Any* request, const CacheQueryOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "match", em_Val_from(request), em_Val_from(options)));
}


jb_Promise BackgroundFetchRegistration_matchAll(BackgroundFetchRegistration* self ) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "matchAll"));
}


jb_Promise BackgroundFetchRegistration_matchAll(BackgroundFetchRegistration* self , const jb_Any* request) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "matchAll", em_Val_from(request)));
}


jb_Promise BackgroundFetchRegistration_matchAll(BackgroundFetchRegistration* self , const jb_Any* request, const CacheQueryOptions* options) {
    return em_Val_as(jb_Promise, em_Val_call(EventTarget_as_val(self->inner), "matchAll", em_Val_from(request), em_Val_from(options)));
}

