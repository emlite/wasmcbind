#pragma once

#include "Any.h"
#include "String.h"
#include "utils.h"
#include <emlite/emlite.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @file Symbol.h
 * @brief Bindings for the JavaScript `Symbol` object.
 *
 * This file provides functions for creating and interacting with JavaScript
 * `Symbol` objects, including well-known symbols and the global symbol registry.
 */

/**
 * @brief An opaque type representing a JavaScript `Symbol` object.
 */
DECLARE_EMLITE_TYPE(jb_Symbol, em_Val);

// Factory methods

/**
 * @brief Creates a new, unique `Symbol` object.
 *
 * @return A new `jb_Symbol` instance.
 */
jb_Symbol jb_Symbol_create(void); // Symbol()

/**
 * @brief Creates a new `Symbol` object with a description.
 *
 * @param description The description for the symbol.
 * @return A new `jb_Symbol` instance.
 */
jb_Symbol jb_Symbol_create_with_description(const jb_String *description);

/**
 * @brief Creates a new `Symbol` object with a C-string description.
 *
 * @param description The description for the symbol.
 * @return A new `jb_Symbol` instance.
 */
jb_Symbol jb_Symbol_create_with_cstring(const char *description);

// Clone/copy

/**
 * @brief Clones a `Symbol` object.
 *
 * @param sym A pointer to the `jb_Symbol` to clone.
 * @return A new `jb_Symbol` instance.
 */
jb_Symbol jb_Symbol_clone(const jb_Symbol *sym);

// Properties

/**
 * @brief Gets the description of a symbol.
 *
 * @param sym A pointer to the `jb_Symbol` instance.
 * @return A `jb_Any` that is either a `jb_String` or `jb_Undefined`.
 */
jb_Any jb_Symbol_description(const jb_Symbol *sym); // Returns String or Undefined

// Static well-known symbols

/** @brief Returns the well-known `Symbol.iterator` symbol. */
jb_Symbol jb_Symbol_iterator(void);
/** @brief Returns the well-known `Symbol.asyncIterator` symbol. */
jb_Symbol jb_Symbol_asyncIterator(void);
/** @brief Returns the well-known `Symbol.hasInstance` symbol. */
jb_Symbol jb_Symbol_hasInstance(void);
/** @brief Returns the well-known `Symbol.isConcatSpreadable` symbol. */
jb_Symbol jb_Symbol_isConcatSpreadable(void);
/** @brief Returns the well-known `Symbol.match` symbol. */
jb_Symbol jb_Symbol_match(void);
/** @brief Returns the well-known `Symbol.matchAll` symbol. */
jb_Symbol jb_Symbol_matchAll(void);
/** @brief Returns the well-known `Symbol.replace` symbol. */
jb_Symbol jb_Symbol_replace(void);
/** @brief Returns the well-known `Symbol.search` symbol. */
jb_Symbol jb_Symbol_search(void);
/** @brief Returns the well-known `Symbol.species` symbol. */
jb_Symbol jb_Symbol_species(void);
/** @brief Returns the well-known `Symbol.split` symbol. */
jb_Symbol jb_Symbol_split(void);
/** @brief Returns the well-known `Symbol.toPrimitive` symbol. */
jb_Symbol jb_Symbol_toPrimitive(void);
/** @brief Returns the well-known `Symbol.toStringTag` symbol. */
jb_Symbol jb_Symbol_toStringTag(void);
/** @brief Returns the well-known `Symbol.unscopables` symbol. */
jb_Symbol jb_Symbol_unscopables(void);

// Static registry methods

/**
 * @brief Searches for a symbol in the global symbol registry.
 *
 * @param key The key for the symbol.
 * @return The symbol if found, or a new symbol if not.
 */
jb_Symbol jb_Symbol_for(const jb_String *key); // Symbol.for()

/**
 * @brief Searches for a symbol in the global symbol registry using a C-string key.
 *
 * @param key The key for the symbol.
 * @return The symbol if found, or a new symbol if not.
 */
jb_Symbol jb_Symbol_for_cstring(const char *key);

/**
 * @brief Retrieves a key from the global symbol registry for a given symbol.
 *
 * @param symbol A pointer to the `jb_Symbol` instance.
 * @return A `jb_Any` that is a `jb_String` key or `jb_Undefined`.
 */
jb_Any jb_Symbol_keyFor(const jb_Symbol *symbol); // Returns String or Undefined

// Utility methods

/**
 * @brief Returns a string representation of the symbol.
 *
 * @param sym A pointer to the `jb_Symbol` instance.
 * @return The string representation.
 */
jb_String jb_Symbol_toString(const jb_Symbol *sym);

/**
 * @brief Returns the primitive value of the symbol.
 *
 * @param sym A pointer to the `jb_Symbol` instance.
 * @return The symbol itself.
 */
jb_String jb_Symbol_valueOf(const jb_Symbol *sym);

/**
 * @brief Checks if the symbol has no description.
 *
 * @param sym A pointer to the `jb_Symbol` instance.
 * @return `true` if the symbol has no description, `false` otherwise.
 */
bool jb_Symbol_empty(const jb_Symbol *sym); // Has no description

/**
 * @brief Computes a hash for the symbol.
 *
 * @param sym A pointer to the `jb_Symbol` instance.
 * @return The hash value.
 */
size_t jb_Symbol_hash(const jb_Symbol *sym);

// Comparison operations (for ordering in containers)

/** @brief Compares if symbol `a` is less than `b`. */
bool jb_Symbol_less_than(const jb_Symbol *a, const jb_Symbol *b);
/** @brief Compares if symbol `a` is greater than `b`. */
bool jb_Symbol_greater_than(const jb_Symbol *a, const jb_Symbol *b);
/** @brief Compares if symbol `a` is less than or equal to `b`. */
bool jb_Symbol_less_equal(const jb_Symbol *a, const jb_Symbol *b);
/** @brief Compares if symbol `a` is greater than or equal to `b`. */
bool jb_Symbol_greater_equal(const jb_Symbol *a, const jb_Symbol *b);
/** @brief Compares if symbol `a` is equal to `b`. */
bool jb_Symbol_equals(const jb_Symbol *a, const jb_Symbol *b);

#ifdef __cplusplus
}
#endif
