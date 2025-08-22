#include <webcbind/FetchLaterResult.h>

DEFINE_EMLITE_TYPE(FetchLaterResult, em_Val);


bool FetchLaterResult_activated(const FetchLaterResult *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("activated")));
}

