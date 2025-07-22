#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct PAHistogramContribution PAHistogramContribution;
typedef struct PADebugModeOptions PADebugModeOptions;


typedef struct {
  em_Val inner;
} PAHistogramContribution;


DECLARE_EMLITE_TYPE(PAHistogramContribution, em_Val);

long long PAHistogramContribution_bucket( const PAHistogramContribution *self);

void PAHistogramContribution_set_bucket(PAHistogramContribution* self, long long value);

long PAHistogramContribution_value( const PAHistogramContribution *self);

void PAHistogramContribution_set_value(PAHistogramContribution* self, long value);

long long PAHistogramContribution_filteringId( const PAHistogramContribution *self);

void PAHistogramContribution_set_filteringId(PAHistogramContribution* self, long long value);
typedef struct {
  em_Val inner;
} PADebugModeOptions;


DECLARE_EMLITE_TYPE(PADebugModeOptions, em_Val);

long long PADebugModeOptions_debugKey( const PADebugModeOptions *self);

void PADebugModeOptions_set_debugKey(PADebugModeOptions* self, long long value);
typedef struct {
  em_Val inner;
} PrivateAggregation;


DECLARE_EMLITE_TYPE(PrivateAggregation, em_Val);

jb_Undefined PrivateAggregation_contributeToHistogram(PrivateAggregation* self , const PAHistogramContribution* contribution);

jb_Undefined PrivateAggregation_contributeToHistogramOnEvent(PrivateAggregation* self , const jb_DOMString* event, const jb_Record* contribution);

jb_Undefined PrivateAggregation_enableDebugMode(PrivateAggregation* self );

jb_Undefined PrivateAggregation_enableDebugMode(PrivateAggregation* self , const PADebugModeOptions* options);
