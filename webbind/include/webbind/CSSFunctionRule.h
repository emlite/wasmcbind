#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSGroupingRule.h"
#include "enums.h"

typedef struct FunctionParameter FunctionParameter;


typedef struct {
  em_Val inner;
} FunctionParameter;


DECLARE_EMLITE_TYPE(FunctionParameter, em_Val);

jb_CSSOMString FunctionParameter_name( const FunctionParameter *self);

void FunctionParameter_set_name(FunctionParameter* self, const jb_CSSOMString* value);

jb_CSSOMString FunctionParameter_type( const FunctionParameter *self);

void FunctionParameter_set_type(FunctionParameter* self, const jb_CSSOMString* value);

jb_CSSOMString FunctionParameter_defaultValue( const FunctionParameter *self);

void FunctionParameter_set_defaultValue(FunctionParameter* self, const jb_CSSOMString* value);
typedef struct {
  CSSGroupingRule inner;
} CSSFunctionRule;


DECLARE_EMLITE_TYPE(CSSFunctionRule, CSSGroupingRule);

jb_CSSOMString CSSFunctionRule_name( const CSSFunctionRule *self);

jb_Sequence CSSFunctionRule_getParameters(CSSFunctionRule* self );

jb_CSSOMString CSSFunctionRule_returnType( const CSSFunctionRule *self);
