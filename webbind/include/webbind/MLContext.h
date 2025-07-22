#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct MLGraph MLGraph;
typedef struct MLTensor MLTensor;
typedef struct MLTensorDescriptor MLTensorDescriptor;
typedef struct MLOperandDescriptor MLOperandDescriptor;
typedef struct MLOpSupportLimits MLOpSupportLimits;
typedef struct MLContextLostInfo MLContextLostInfo;


typedef struct {
  em_Val inner;
} MLTensorDescriptor;


DECLARE_EMLITE_TYPE(MLTensorDescriptor, em_Val);

bool MLTensorDescriptor_readable( const MLTensorDescriptor *self);

void MLTensorDescriptor_set_readable(MLTensorDescriptor* self, bool value);

bool MLTensorDescriptor_writable( const MLTensorDescriptor *self);

void MLTensorDescriptor_set_writable(MLTensorDescriptor* self, bool value);
typedef struct {
  em_Val inner;
} MLOperandDescriptor;


DECLARE_EMLITE_TYPE(MLOperandDescriptor, em_Val);

MLOperandDataType MLOperandDescriptor_dataType( const MLOperandDescriptor *self);

void MLOperandDescriptor_set_dataType(MLOperandDescriptor* self, const MLOperandDataType* value);

jb_Sequence MLOperandDescriptor_shape( const MLOperandDescriptor *self);

void MLOperandDescriptor_set_shape(MLOperandDescriptor* self, const jb_Sequence* value);
typedef struct {
  em_Val inner;
} MLOpSupportLimits;


DECLARE_EMLITE_TYPE(MLOpSupportLimits, em_Val);

jb_Any MLOpSupportLimits_where( const MLOpSupportLimits *self);

void MLOpSupportLimits_set_where(MLOpSupportLimits* self, const jb_Any* value);
typedef struct {
  em_Val inner;
} MLContextLostInfo;


DECLARE_EMLITE_TYPE(MLContextLostInfo, em_Val);

jb_DOMString MLContextLostInfo_message( const MLContextLostInfo *self);

void MLContextLostInfo_set_message(MLContextLostInfo* self, const jb_DOMString* value);
typedef struct {
  em_Val inner;
} MLContext;


DECLARE_EMLITE_TYPE(MLContext, em_Val);

jb_Undefined MLContext_dispatch(MLContext* self , const MLGraph* graph, const jb_Any* inputs, const jb_Any* outputs);

jb_Promise MLContext_createTensor(MLContext* self , const MLTensorDescriptor* descriptor);

jb_Promise MLContext_createConstantTensor(MLContext* self , const MLOperandDescriptor* descriptor, const jb_Any* inputData);

jb_Promise MLContext_readTensor(MLContext* self , const MLTensor* tensor, const jb_Any* outputData);

jb_Undefined MLContext_writeTensor(MLContext* self , const MLTensor* tensor, const jb_Any* inputData);

MLOpSupportLimits MLContext_opSupportLimits(MLContext* self );

jb_Undefined MLContext_destroy(MLContext* self );

jb_Promise MLContext_lost( const MLContext *self);
