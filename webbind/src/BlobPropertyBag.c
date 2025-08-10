#include <webbind/BlobPropertyBag.h>

DEFINE_EMLITE_TYPE(BlobPropertyBag, em_Val);


jb_String BlobPropertyBag_type(const BlobPropertyBag *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("type")));
}


void BlobPropertyBag_set_type(BlobPropertyBag* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("type"), em_Val_from(value));
}


EndingType BlobPropertyBag_endings(const BlobPropertyBag *self) {
    return em_Val_as(EndingType, em_Val_get(em_Val_as_val(self->inner), em_Val_from("endings")));
}


void BlobPropertyBag_set_endings(BlobPropertyBag* self, EndingType * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("endings"), em_Val_from(value));
}


BlobPropertyBag BlobPropertyBag_new() {
    em_Val obj = em_Val_object();
    return BlobPropertyBag_from_val(&obj);
}

