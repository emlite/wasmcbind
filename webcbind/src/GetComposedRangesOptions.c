#include <webcbind/GetComposedRangesOptions.h>

#include <webcbind/ShadowRoot.h>

DEFINE_EMLITE_TYPE(GetComposedRangesOptions, em_Val);


jb_Array GetComposedRangesOptions_shadowRoots(const GetComposedRangesOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("shadowRoots")));
}


void GetComposedRangesOptions_set_shadowRoots(GetComposedRangesOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("shadowRoots"), em_Val_from(value));
}


GetComposedRangesOptions GetComposedRangesOptions_new() {
    em_Val obj = em_Val_object();
    return GetComposedRangesOptions_from_val(&obj);
}

