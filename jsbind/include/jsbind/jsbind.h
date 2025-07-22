#pragma once

#include <emlite/emlite.h>

typedef struct {
  em_Val inner;
} jb_Any;

typedef struct {
  em_Val inner;
} jb_Undefined;

typedef struct {
  em_Val inner;
} jb_Object;

typedef struct {
  em_Val inner;
} jb_Sequence;

typedef struct {
  em_Val inner;
} jb_Record;

typedef struct {
  em_Val inner;
} jb_Function;

typedef struct {
  em_Val inner;
} jb_Promise;

typedef struct {
  em_Val inner;
} jb_Error;

typedef struct {
  em_Val inner;
} jb_Uint8Array;

typedef struct {
  em_Val inner;
} jb_Int8Array;

typedef struct {
  em_Val inner;
} jb_Uint32Array;

typedef struct {
  em_Val inner;
} jb_Int32Array;

typedef struct {
  em_Val inner;
} jb_Float32Array;

typedef struct {
  em_Val inner;
} jb_Float64Array;

typedef struct {
  em_Val inner;
} jb_ArrayBuffer;

typedef struct {
  em_Val inner;
} jb_DataView;

#define DECLARE_EMLITE_TYPE(name, parent)                                      \
  name name##_from_handle(Handle h);                                           \
  name name##_from_val(em_Val val);                                            \
  Handle name##_as_handle(name self);                                          \
  em_Val name##_as_val(name self);

#define DEFINE_EMLITE_TYPE(name, parent)                                       \
  name name##_from_handle(Handle h) {                                          \
    return (name){.inner = em_Val_from_handle(h)};                             \
  }                                                                            \
  name name##_from_val(em_Val val) {                                           \
    return (name){.inner = parent##_from_val(val)};                            \
  }                                                                            \
  Handle name##_as_handle(name self) {                                         \
    return parent##_as_handle(self.inner);                                     \
  }                                                                            \
  em_Val name##_as_val(name self) { return parent_as_val(self.inner); }