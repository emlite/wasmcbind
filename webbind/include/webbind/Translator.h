#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Translator Translator;
typedef struct TranslatorCreateOptions TranslatorCreateOptions;
typedef struct TranslatorCreateCoreOptions TranslatorCreateCoreOptions;
typedef struct TranslatorTranslateOptions TranslatorTranslateOptions;
typedef struct ReadableStream ReadableStream;
typedef struct AbortSignal AbortSignal;


typedef struct {
  em_Val inner;
} TranslatorCreateOptions;


DECLARE_EMLITE_TYPE(TranslatorCreateOptions, em_Val);

AbortSignal TranslatorCreateOptions_signal( const TranslatorCreateOptions *self);

void TranslatorCreateOptions_set_signal(TranslatorCreateOptions* self, const AbortSignal* value);

jb_Function TranslatorCreateOptions_monitor( const TranslatorCreateOptions *self);

void TranslatorCreateOptions_set_monitor(TranslatorCreateOptions* self, const jb_Function* value);
typedef struct {
  em_Val inner;
} TranslatorCreateCoreOptions;


DECLARE_EMLITE_TYPE(TranslatorCreateCoreOptions, em_Val);

jb_DOMString TranslatorCreateCoreOptions_sourceLanguage( const TranslatorCreateCoreOptions *self);

void TranslatorCreateCoreOptions_set_sourceLanguage(TranslatorCreateCoreOptions* self, const jb_DOMString* value);

jb_DOMString TranslatorCreateCoreOptions_targetLanguage( const TranslatorCreateCoreOptions *self);

void TranslatorCreateCoreOptions_set_targetLanguage(TranslatorCreateCoreOptions* self, const jb_DOMString* value);
typedef struct {
  em_Val inner;
} TranslatorTranslateOptions;


DECLARE_EMLITE_TYPE(TranslatorTranslateOptions, em_Val);

AbortSignal TranslatorTranslateOptions_signal( const TranslatorTranslateOptions *self);

void TranslatorTranslateOptions_set_signal(TranslatorTranslateOptions* self, const AbortSignal* value);
typedef struct {
  em_Val inner;
} Translator;


DECLARE_EMLITE_TYPE(Translator, em_Val);

jb_Promise Translator_create(Translator* self , const TranslatorCreateOptions* options);

jb_Promise Translator_availability(Translator* self , const TranslatorCreateCoreOptions* options);

jb_Promise Translator_translate(Translator* self , const jb_DOMString* input);

jb_Promise Translator_translate(Translator* self , const jb_DOMString* input, const TranslatorTranslateOptions* options);

ReadableStream Translator_translateStreaming(Translator* self , const jb_DOMString* input);

ReadableStream Translator_translateStreaming(Translator* self , const jb_DOMString* input, const TranslatorTranslateOptions* options);

jb_DOMString Translator_sourceLanguage( const Translator *self);

jb_DOMString Translator_targetLanguage( const Translator *self);

jb_Promise Translator_measureInputUsage(Translator* self , const jb_DOMString* input);

jb_Promise Translator_measureInputUsage(Translator* self , const jb_DOMString* input, const TranslatorTranslateOptions* options);

double Translator_inputQuota( const Translator *self);

jb_Undefined Translator_destroy(Translator* self );
