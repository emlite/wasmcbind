#include <webbind/BackgroundFetchRecord.h>
#include <webbind/Request.h>
#include <webbind/Response.h>


DEFINE_EMLITE_TYPE(BackgroundFetchRecord, em_Val);


Request BackgroundFetchRecord_request(const BackgroundFetchRecord *self) {
    return em_Val_as(Request, em_Val_get(em_Val_as_val(self->inner), "request"));
}


jb_Promise BackgroundFetchRecord_responseReady(const BackgroundFetchRecord *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), "responseReady"));
}

