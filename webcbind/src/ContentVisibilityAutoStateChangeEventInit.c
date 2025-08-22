#include <webcbind/ContentVisibilityAutoStateChangeEventInit.h>

DEFINE_EMLITE_TYPE(ContentVisibilityAutoStateChangeEventInit, EventInit);


bool ContentVisibilityAutoStateChangeEventInit_skipped(const ContentVisibilityAutoStateChangeEventInit *self) {
    return em_Val_as(bool, em_Val_get(EventInit_as_val(self->inner), em_Val_from("skipped")));
}


void ContentVisibilityAutoStateChangeEventInit_set_skipped(ContentVisibilityAutoStateChangeEventInit* self, bool value) {
    em_Val_set(EventInit_as_val(self->inner), em_Val_from("skipped"), em_Val_from(value));
}


ContentVisibilityAutoStateChangeEventInit ContentVisibilityAutoStateChangeEventInit_new() {
    em_Val obj = em_Val_object();
    return ContentVisibilityAutoStateChangeEventInit_from_val(&obj);
}

