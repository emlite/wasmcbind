#include <webbind/PermissionsPolicy.h>


DEFINE_EMLITE_TYPE(PermissionsPolicy, em_Val);


bool PermissionsPolicy_allowsFeature0(PermissionsPolicy* self , jb_DOMString * feature) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "allowsFeature", em_Val_from(feature)));
}


bool PermissionsPolicy_allowsFeature1(PermissionsPolicy* self , jb_DOMString * feature, jb_DOMString * origin) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "allowsFeature", em_Val_from(feature), em_Val_from(origin)));
}


jb_Sequence PermissionsPolicy_features(PermissionsPolicy* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "features"));
}


jb_Sequence PermissionsPolicy_allowedFeatures(PermissionsPolicy* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "allowedFeatures"));
}


jb_Sequence PermissionsPolicy_getAllowlistForFeature(PermissionsPolicy* self , jb_DOMString * feature) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "getAllowlistForFeature", em_Val_from(feature)));
}

