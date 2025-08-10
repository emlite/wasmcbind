#include <webbind/AttributionImpressionResult.h>

DEFINE_EMLITE_TYPE(AttributionImpressionResult, em_Val);


AttributionImpressionResult AttributionImpressionResult_new() {
    em_Val obj = em_Val_object();
    return AttributionImpressionResult_from_val(&obj);
}

