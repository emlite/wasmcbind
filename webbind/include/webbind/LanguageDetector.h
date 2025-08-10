#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct LanguageDetectorCreateOptions LanguageDetectorCreateOptions;
typedef struct LanguageDetectorCreateCoreOptions LanguageDetectorCreateCoreOptions;
typedef struct LanguageDetectionResult LanguageDetectionResult;
typedef struct LanguageDetectorDetectOptions LanguageDetectorDetectOptions;

DECLARE_EMLITE_TYPE(LanguageDetector, em_Val);

jb_Promise LanguageDetector_create0(LanguageDetector* self );

jb_Promise LanguageDetector_create1(LanguageDetector* self , LanguageDetectorCreateOptions * options);

jb_Promise LanguageDetector_availability0(LanguageDetector* self );

jb_Promise LanguageDetector_availability1(LanguageDetector* self , LanguageDetectorCreateCoreOptions * options);

jb_Promise LanguageDetector_detect0(LanguageDetector* self , jb_String * input);

jb_Promise LanguageDetector_detect1(LanguageDetector* self , jb_String * input, LanguageDetectorDetectOptions * options);

jb_Array LanguageDetector_expectedInputLanguages(const LanguageDetector *self);

jb_Promise LanguageDetector_measureInputUsage0(LanguageDetector* self , jb_String * input);

jb_Promise LanguageDetector_measureInputUsage1(LanguageDetector* self , jb_String * input, LanguageDetectorDetectOptions * options);

double LanguageDetector_inputQuota(const LanguageDetector *self);

jb_Undefined LanguageDetector_destroy(LanguageDetector* self );

#ifdef __cplusplus
}
#endif
