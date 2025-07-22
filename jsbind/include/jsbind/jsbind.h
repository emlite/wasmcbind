#pragma once

#include <emlite/emlite.h>

#define DECLARE_EMLITE_TYPE(name, parent)                                      \
  typedef struct name {                                                        \
    parent inner;                                                              \
  } name;                                                                      \
                                                                               \
  name name##_from_handle(Handle h);                                           \
  name name##_from_val(void *val);                                             \
  Handle name##_as_handle(name self);                                          \
  em_Val name##_as_val(name self);

#define DEFINE_EMLITE_TYPE(name, parent)                                       \
  name name##_from_handle(Handle h) {                                          \
    return (name){.inner = em_Val_from_handle(h)};                             \
  }                                                                            \
  name name##_from_val(void *val) {                                            \
    return (name){.inner = parent##_from_val(val)};                            \
  }                                                                            \
  Handle name##_as_handle(name self) {                                         \
    return parent##_as_handle(self.inner);                                     \
  }                                                                            \
  em_Val name##_as_val(name self) { return parent##_as_val(self.inner); }

DECLARE_EMLITE_TYPE(jb_Any, em_Val);

DECLARE_EMLITE_TYPE(jb_Undefined, em_Val);

DECLARE_EMLITE_TYPE(jb_Object, em_Val);

DECLARE_EMLITE_TYPE(jb_Sequence, em_Val);

DECLARE_EMLITE_TYPE(jb_Record, em_Val);

DECLARE_EMLITE_TYPE(jb_Function, em_Val);

DECLARE_EMLITE_TYPE(jb_Promise, em_Val);

DECLARE_EMLITE_TYPE(jb_Error, em_Val);

DECLARE_EMLITE_TYPE(jb_Uint8Array, em_Val);

DECLARE_EMLITE_TYPE(jb_Int8Array, em_Val);

DECLARE_EMLITE_TYPE(jb_Uint32Array, em_Val);

DECLARE_EMLITE_TYPE(jb_Int32Array, em_Val);

DECLARE_EMLITE_TYPE(jb_Float32Array, em_Val);

DECLARE_EMLITE_TYPE(jb_Float64Array, em_Val);

DECLARE_EMLITE_TYPE(jb_FrozenArray, em_Val);

DECLARE_EMLITE_TYPE(jb_ObservableArray, em_Val);

DECLARE_EMLITE_TYPE(jb_ArrayBuffer, em_Val);

DECLARE_EMLITE_TYPE(jb_DataView, em_Val);

DECLARE_EMLITE_TYPE(jb_DOMString, em_Val);

DECLARE_EMLITE_TYPE(jb_CSSOMString, em_Val);

DECLARE_EMLITE_TYPE(jb_USVString, em_Val);

DECLARE_EMLITE_TYPE(jb_ByteString, em_Val);
