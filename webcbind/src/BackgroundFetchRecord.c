#include <webcbind/BackgroundFetchRecord.h>

#include <webcbind/Request.h>
#include <webcbind/Response.h>

DEFINE_EMLITE_TYPE(BackgroundFetchRecord, em_Val);


Request BackgroundFetchRecord_request(const BackgroundFetchRecord *self) {
    return em_Val_as(Request, em_Val_get(em_Val_as_val(self->inner), em_Val_from("request")));
}


jb_Promise BackgroundFetchRecord_responseReady(const BackgroundFetchRecord *self) {
    return em_Val_as(jb_Promise, em_Val_get(em_Val_as_val(self->inner), em_Val_from("responseReady")));
}

