#pragma once

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @file utils.h
 * @brief Utility macros for creating and managing jscbind types.
 *
 * This file provides macros to simplify the creation of new jscbind types that
 * wrap `emlite` values. These macros help ensure consistency and reduce
 * boilerplate code when defining new types.
 */

/**
 * @brief Declares a new jscbind type.
 *
 * This macro generates the necessary declarations for a new jscbind type,
 * including the struct definition and function prototypes for converting
 * between the new type and other `emlite` types like `Handle` and `em_Val`.
 *
 * @param name The name of the new jscbind type (e.g., `jb_String`).
 * @param parent The underlying `emlite` type that this new type wraps (e.g.,
 * `em_Val`).
 */
#define DECLARE_EMLITE_TYPE(name, parent)                                                          \
    typedef struct name {                                                                          \
        parent inner;                                                                              \
    } name;                                                                                        \
                                                                                                   \
    name name##_from_handle(Handle h);                                                             \
    name name##_from_val(void *val);                                                               \
    Handle name##_as_handle(name self);                                                            \
    em_Val name##_as_val(name self);

/**
 * @brief Defines the implementation for a new jscbind type.
 *
 * This macro generates the function implementations for the jscbind type
 * declared with `DECLARE_EMLITE_TYPE`. These functions handle the conversions
 * between the new type and other `emlite` types.
 *
 * @param name The name of the jscbind type.
 * @param parent The underlying `emlite` type.
 */
#define DEFINE_EMLITE_TYPE(name, parent)                                                           \
    name name##_from_handle(Handle h) { return (name){.inner = em_Val_from_handle(h)}; }           \
    name name##_from_val(void *val) { return (name){.inner = parent##_from_val(val)}; }            \
    Handle name##_as_handle(name self) { return parent##_as_handle(self.inner); }                  \
    em_Val name##_as_val(name self) { return parent##_as_val(self.inner); }

#ifdef __cplusplus
}
#endif
