#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct CSSUnparsedValue CSSUnparsedValue;


typedef struct {
  em_Val inner;
} CSSVariableReferenceValue;


DECLARE_EMLITE_TYPE(CSSVariableReferenceValue, em_Val);

CSSVariableReferenceValue CSSVariableReferenceValue_new(const jb_USVString* variable);

CSSVariableReferenceValue CSSVariableReferenceValue_new(const jb_USVString* variable, const CSSUnparsedValue* fallback);

jb_USVString CSSVariableReferenceValue_variable( const CSSVariableReferenceValue *self);

void CSSVariableReferenceValue_set_variable(CSSVariableReferenceValue* self, const jb_USVString* value);

CSSUnparsedValue CSSVariableReferenceValue_fallback( const CSSVariableReferenceValue *self);
