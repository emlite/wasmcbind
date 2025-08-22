#include <webcbind/Attribution.h>

#include <webcbind/AttributionAggregationServices.h>
#include <webcbind/AttributionImpressionResult.h>
#include <webcbind/AttributionImpressionOptions.h>
#include <webcbind/AttributionConversionResult.h>
#include <webcbind/AttributionConversionOptions.h>

DEFINE_EMLITE_TYPE(Attribution, em_Val);


AttributionAggregationServices Attribution_aggregationServices(const Attribution *self) {
    return em_Val_as(AttributionAggregationServices, em_Val_get(em_Val_as_val(self->inner), em_Val_from("aggregationServices")));
}


jb_Promise Attribution_saveImpression(Attribution* self , AttributionImpressionOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "saveImpression", em_Val_from(options)));
}


jb_Promise Attribution_measureConversion(Attribution* self , AttributionConversionOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "measureConversion", em_Val_from(options)));
}

