#pragma once

#ifdef __cplusplus
extern "C" {
#endif

#define DECLARE_EMLITE_TYPE(name, parent)                                                          \
    typedef struct name {                                                                          \
        parent inner;                                                                              \
    } name;                                                                                        \
                                                                                                   \
    name name##_from_handle(Handle h);                                                             \
    name name##_from_val(void *val);                                                               \
    Handle name##_as_handle(name self);                                                            \
    em_Val name##_as_val(name self);

#define DEFINE_EMLITE_TYPE(name, parent)                                                           \
    name name##_from_handle(Handle h) { return (name){.inner = em_Val_from_handle(h)}; }           \
    name name##_from_val(void *val) { return (name){.inner = parent##_from_val(val)}; }            \
    Handle name##_as_handle(name self) { return parent##_as_handle(self.inner); }                  \
    em_Val name##_as_val(name self) { return parent##_as_val(self.inner); }

#ifdef __cplusplus
}
#endif