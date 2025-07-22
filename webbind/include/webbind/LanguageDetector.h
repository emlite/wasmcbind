#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct LanguageDetector LanguageDetector;
typedef struct LanguageDetectorCreateOptions LanguageDetectorCreateOptions;
typedef struct LanguageDetectorCreateCoreOptions LanguageDetectorCreateCoreOptions;
typedef struct LanguageDetectionResult LanguageDetectionResult;
typedef struct LanguageDetectorDetectOptions LanguageDetectorDetectOptions;
typedef struct AbortSignal AbortSignal;


typedef struct {
  em_Val inner;
} LanguageDetectorCreateOptions;


DECLARE_EMLITE_TYPE(LanguageDetectorCreateOptions, em_Val);

AbortSignal LanguageDetectorCreateOptions_signal( const LanguageDetectorCreateOptions *self);

void LanguageDetectorCreateOptions_set_signal(LanguageDetectorCreateOptions* self, const AbortSignal* value);

jb_Function LanguageDetectorCreateOptions_monitor( const LanguageDetectorCreateOptions *self);

void LanguageDetectorCreateOptions_set_monitor(LanguageDetectorCreateOptions* self, const jb_Function* value);
typedef struct {
  em_Val inner;
} LanguageDetectorCreateCoreOptions;


DECLARE_EMLITE_TYPE(LanguageDetectorCreateCoreOptions, em_Val);

jb_Sequence LanguageDetectorCreateCoreOptions_expectedInputLanguages( const LanguageDetectorCreateCoreOptions *self);

void LanguageDetectorCreateCoreOptions_set_expectedInputLanguages(LanguageDetectorCreateCoreOptions* self, const jb_Sequence* value);
typedef struct {
  em_Val inner;
} LanguageDetectionResult;


DECLARE_EMLITE_TYPE(LanguageDetectionResult, em_Val);

jb_DOMString LanguageDetectionResult_detectedLanguage( const LanguageDetectionResult *self);

void LanguageDetectionResult_set_detectedLanguage(LanguageDetectionResult* self, const jb_DOMString* value);

double LanguageDetectionResult_confidence( const LanguageDetectionResult *self);

void LanguageDetectionResult_set_confidence(LanguageDetectionResult* self, double value);
typedef struct {
  em_Val inner;
} LanguageDetectorDetectOptions;


DECLARE_EMLITE_TYPE(LanguageDetectorDetectOptions, em_Val);

AbortSignal LanguageDetectorDetectOptions_signal( const LanguageDetectorDetectOptions *self);

void LanguageDetectorDetectOptions_set_signal(LanguageDetectorDetectOptions* self, const AbortSignal* value);
typedef struct {
  em_Val inner;
} LanguageDetector;


DECLARE_EMLITE_TYPE(LanguageDetector, em_Val);

jb_Promise LanguageDetector_create(LanguageDetector* self );

jb_Promise LanguageDetector_create(LanguageDetector* self , const LanguageDetectorCreateOptions* options);

jb_Promise LanguageDetector_availability(LanguageDetector* self );

jb_Promise LanguageDetector_availability(LanguageDetector* self , const LanguageDetectorCreateCoreOptions* options);

jb_Promise LanguageDetector_detect(LanguageDetector* self , const jb_DOMString* input);

jb_Promise LanguageDetector_detect(LanguageDetector* self , const jb_DOMString* input, const LanguageDetectorDetectOptions* options);

jb_FrozenArray LanguageDetector_expectedInputLanguages( const LanguageDetector *self);

jb_Promise LanguageDetector_measureInputUsage(LanguageDetector* self , const jb_DOMString* input);

jb_Promise LanguageDetector_measureInputUsage(LanguageDetector* self , const jb_DOMString* input, const LanguageDetectorDetectOptions* options);

double LanguageDetector_inputQuota( const LanguageDetector *self);

jb_Undefined LanguageDetector_destroy(LanguageDetector* self );
