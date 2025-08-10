#include <webbind/GetRootNodeOptions.h>

DEFINE_EMLITE_TYPE(GetRootNodeOptions, em_Val);


bool GetRootNodeOptions_composed(const GetRootNodeOptions *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("composed")));
}


void GetRootNodeOptions_set_composed(GetRootNodeOptions* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("composed"), em_Val_from(value));
}


GetRootNodeOptions GetRootNodeOptions_new() {
    em_Val obj = em_Val_object();
    return GetRootNodeOptions_from_val(&obj);
}

