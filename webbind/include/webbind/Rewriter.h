#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct RewriterCreateOptions RewriterCreateOptions;
typedef struct RewriterCreateCoreOptions RewriterCreateCoreOptions;
typedef struct RewriterRewriteOptions RewriterRewriteOptions;
typedef struct ReadableStream ReadableStream;


/**
 * @brief Interface Rewriter
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Rewriter)
 */
DECLARE_EMLITE_TYPE(Rewriter, em_Val);

/**
 * @brief Calls the `create` method. 
*/
jb_Promise Rewriter_create0(Rewriter* self );

/**
 * @brief Calls the `create` method. 
*/
jb_Promise Rewriter_create1(Rewriter* self , RewriterCreateOptions * options);

/**
 * @brief Calls the `availability` method. 
*/
jb_Promise Rewriter_availability0(Rewriter* self );

/**
 * @brief Calls the `availability` method. 
*/
jb_Promise Rewriter_availability1(Rewriter* self , RewriterCreateCoreOptions * options);

/**
 * @brief Calls the `rewrite` method. 
*/
jb_Promise Rewriter_rewrite0(Rewriter* self , jb_String * input);

/**
 * @brief Calls the `rewrite` method. 
*/
jb_Promise Rewriter_rewrite1(Rewriter* self , jb_String * input, RewriterRewriteOptions * options);

/**
 * @brief Calls the `rewriteStreaming` method. 
*/
ReadableStream Rewriter_rewriteStreaming0(Rewriter* self , jb_String * input);

/**
 * @brief Calls the `rewriteStreaming` method. 
*/
ReadableStream Rewriter_rewriteStreaming1(Rewriter* self , jb_String * input, RewriterRewriteOptions * options);

/**
 * @brief Gets the `sharedContext` property. 
*/
jb_String Rewriter_sharedContext(const Rewriter *self);

/**
 * @brief Gets the `tone` property. 
*/
RewriterTone Rewriter_tone(const Rewriter *self);

/**
 * @brief Gets the `format` property. 
*/
RewriterFormat Rewriter_format(const Rewriter *self);

/**
 * @brief Gets the `length` property. 
*/
RewriterLength Rewriter_length(const Rewriter *self);

/**
 * @brief Gets the `expectedInputLanguages` property. 
*/
jb_Array Rewriter_expectedInputLanguages(const Rewriter *self);

/**
 * @brief Gets the `expectedContextLanguages` property. 
*/
jb_Array Rewriter_expectedContextLanguages(const Rewriter *self);

/**
 * @brief Gets the `outputLanguage` property. 
*/
jb_String Rewriter_outputLanguage(const Rewriter *self);

/**
 * @brief Calls the `measureInputUsage` method. 
*/
jb_Promise Rewriter_measureInputUsage0(Rewriter* self , jb_String * input);

/**
 * @brief Calls the `measureInputUsage` method. 
*/
jb_Promise Rewriter_measureInputUsage1(Rewriter* self , jb_String * input, RewriterRewriteOptions * options);

/**
 * @brief Gets the `inputQuota` property. 
*/
double Rewriter_inputQuota(const Rewriter *self);

/**
 * @brief Calls the `destroy` method. 
*/
jb_Undefined Rewriter_destroy(Rewriter* self );

#ifdef __cplusplus
}
#endif
