#include <webcbind/ProtectedAudience.h>

DEFINE_EMLITE_TYPE(ProtectedAudience, em_Val);


jb_Any ProtectedAudience_queryFeatureSupport(ProtectedAudience* self , jb_String * feature) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "queryFeatureSupport", em_Val_from(feature)));
}

