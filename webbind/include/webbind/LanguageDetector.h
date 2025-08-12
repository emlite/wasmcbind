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


/**
 * @brief Interface LanguageDetector
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/LanguageDetector)
 */
DECLARE_EMLITE_TYPE(LanguageDetector, em_Val);

/**
 * @brief Calls the `create` method. 
*/
jb_Promise LanguageDetector_create0(LanguageDetector* self );

/**
 * @brief Calls the `create` method. 
*/
jb_Promise LanguageDetector_create1(LanguageDetector* self , LanguageDetectorCreateOptions * options);

/**
 * @brief Calls the `availability` method. 
*/
jb_Promise LanguageDetector_availability0(LanguageDetector* self );

/**
 * @brief Calls the `availability` method. 
*/
jb_Promise LanguageDetector_availability1(LanguageDetector* self , LanguageDetectorCreateCoreOptions * options);

/**
 * @brief Calls the `detect` method. 
*/
jb_Promise LanguageDetector_detect0(LanguageDetector* self , jb_String * input);

/**
 * @brief Calls the `detect` method. 
*/
jb_Promise LanguageDetector_detect1(LanguageDetector* self , jb_String * input, LanguageDetectorDetectOptions * options);

/**
 * @brief Gets the `expectedInputLanguages` property. 
*/
jb_Array LanguageDetector_expectedInputLanguages(const LanguageDetector *self);

/**
 * @brief Calls the `measureInputUsage` method. 
*/
jb_Promise LanguageDetector_measureInputUsage0(LanguageDetector* self , jb_String * input);

/**
 * @brief Calls the `measureInputUsage` method. 
*/
jb_Promise LanguageDetector_measureInputUsage1(LanguageDetector* self , jb_String * input, LanguageDetectorDetectOptions * options);

/**
 * @brief Gets the `inputQuota` property. 
*/
double LanguageDetector_inputQuota(const LanguageDetector *self);

/**
 * @brief Calls the `destroy` method. 
*/
jb_Undefined LanguageDetector_destroy(LanguageDetector* self );

#ifdef __cplusplus
}
#endif
