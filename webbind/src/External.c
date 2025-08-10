#include <webbind/External.h>

DEFINE_EMLITE_TYPE(External, em_Val);


jb_Undefined External_AddSearchProvider(External* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "AddSearchProvider"));
}


jb_Undefined External_IsSearchProviderInstalled(External* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "IsSearchProviderInstalled"));
}

