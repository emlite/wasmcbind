#include <webbind/ProtectedAudiencePrivateAggregationConfig.h>

DEFINE_EMLITE_TYPE(ProtectedAudiencePrivateAggregationConfig, em_Val);


jb_String ProtectedAudiencePrivateAggregationConfig_aggregationCoordinatorOrigin(const ProtectedAudiencePrivateAggregationConfig *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("aggregationCoordinatorOrigin")));
}


void ProtectedAudiencePrivateAggregationConfig_set_aggregationCoordinatorOrigin(ProtectedAudiencePrivateAggregationConfig* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("aggregationCoordinatorOrigin"), em_Val_from(value));
}


ProtectedAudiencePrivateAggregationConfig ProtectedAudiencePrivateAggregationConfig_new() {
    em_Val obj = em_Val_object();
    return ProtectedAudiencePrivateAggregationConfig_from_val(&obj);
}

