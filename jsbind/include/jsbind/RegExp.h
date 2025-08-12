#pragma once

#include "Any.h"
#include "Array.h"
#include "Error.h"
#include "String.h"
#include "utils.h"
#include <emlite/emlite.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @file RegExp.h
 * @brief Bindings for the JavaScript `RegExp` object.
 *
 * This file provides functions for creating and using regular expressions.
 */

/**
 * @brief An opaque type representing a JavaScript `RegExp` object.
 */
DECLARE_EMLITE_TYPE(jb_RegExp, em_Val);

// Factory methods

/**
 * @brief Creates an empty `RegExp` object.
 *
 * @return A new `jb_RegExp` instance.
 */
jb_RegExp jb_RegExp_create(void); // Empty RegExp

/**
 * @brief Creates a `RegExp` object from a pattern.
 *
 * @param pattern The regular expression pattern.
 * @return A `jb_Any` that is either a `jb_RegExp` or a `jb_Error`.
 */
jb_Any jb_RegExp_create_from_pattern(const jb_String *pattern); // Returns RegExp or Error

/**
 * @brief Creates a `RegExp` object from a pattern and flags.
 *
 * @param pattern The regular expression pattern.
 * @param flags The regular expression flags.
 * @return A `jb_Any` that is either a `jb_RegExp` or a `jb_Error`.
 */
jb_Any jb_RegExp_create_from_pattern_flags(
    const jb_String *pattern, const jb_String *flags
); // Returns RegExp or Error

/**
 * @brief Creates a `RegExp` object from a C-string pattern.
 *
 * @param pattern The regular expression pattern.
 * @return A `jb_Any` that is either a `jb_RegExp` or a `jb_Error`.
 */
jb_Any jb_RegExp_create_from_cstring(const char *pattern); // Returns RegExp or Error

/**
 * @brief Creates a `RegExp` object from a C-string pattern and flags.
 *
 * @param pattern The regular expression pattern.
 * @param flags The regular expression flags.
 * @return A `jb_Any` that is either a `jb_RegExp` or a `jb_Error`.
 */
jb_Any jb_RegExp_create_from_cstring_flags(
    const char *pattern, const char *flags
); // Returns RegExp or Error

// Clone/copy

/**
 * @brief Clones a `RegExp` object.
 *
 * @param regex A pointer to the `jb_RegExp` to clone.
 * @return A new `jb_RegExp` instance.
 */
jb_RegExp jb_RegExp_clone(const jb_RegExp *regex);

// Properties

/** @brief Gets the source text of the regular expression. */
jb_String jb_RegExp_source(const jb_RegExp *regex);
/** @brief Gets the flags of the regular expression. */
jb_String jb_RegExp_flags(const jb_RegExp *regex);
/** @brief Checks if the `g` flag is set. */
bool jb_RegExp_global(const jb_RegExp *regex);
/** @brief Checks if the `i` flag is set. */
bool jb_RegExp_ignoreCase(const jb_RegExp *regex);
/** @brief Checks if the `m` flag is set. */
bool jb_RegExp_multiline(const jb_RegExp *regex);
/** @brief Checks if the `s` flag is set. */
bool jb_RegExp_dotAll(const jb_RegExp *regex);
/** @brief Checks if the `u` flag is set. */
bool jb_RegExp_unicode(const jb_RegExp *regex);
/** @brief Checks if the `y` flag is set. */
bool jb_RegExp_sticky(const jb_RegExp *regex);
/** @brief Gets the index at which to start the next match. */
size_t jb_RegExp_lastIndex(const jb_RegExp *regex);
/** @brief Sets the index at which to start the next match. */
void jb_RegExp_setLastIndex(jb_RegExp *regex, size_t index);

// Core methods

/**
 * @brief Tests for a match in a string.
 *
 * @param regex A pointer to the `jb_RegExp` instance.
 * @param str The string to test.
 * @return `true` if there is a match, `false` otherwise.
 */
bool jb_RegExp_test(const jb_RegExp *regex, const jb_String *str);

/**
 * @brief Executes a search for a match in a string.
 *
 * @param regex A pointer to the `jb_RegExp` instance.
 * @param str The string to search in.
 * @return A `jb_Any` that is an `Array` of results or `Null`.
 */
jb_Any jb_RegExp_exec(const jb_RegExp *regex, const jb_String *str); // Returns Array or Null

// STL-like methods

/**
 * @brief Checks if a string contains a match for the regular expression.
 *
 * @param regex A pointer to the `jb_RegExp` instance.
 * @param str The string to check.
 * @return `true` if a match is found, `false` otherwise.
 */
bool jb_RegExp_contains(const jb_RegExp *regex, const jb_String *str);

/**
 * @brief Finds the first match of the regular expression in a string.
 *
 * @param regex A pointer to the `jb_RegExp` instance.
 * @param str The string to search.
 * @return A `jb_Any` that is an `Array` of results or `Null`.
 */
jb_Any jb_RegExp_find(const jb_RegExp *regex, const jb_String *str); // Returns Array or Null

/**
 * @brief Finds all matches of the regular expression in a string.
 *
 * @param regex A pointer to the `jb_RegExp` instance (must have the global flag set).
 * @param str The string to search.
 * @return An `Array` of all matches.
 */
jb_Array jb_RegExp_findAll(const jb_RegExp *regex, const jb_String *str); // Requires global flag

// Static factory methods for common patterns

/** @brief Creates a `RegExp` that matches a literal string. */
jb_Any jb_RegExp_literal(const jb_String *text); // Returns RegExp or Error - escaped literal
/** @brief Creates a `RegExp` that matches a literal C-string. */
jb_Any jb_RegExp_literal_cstring(const char *text); // Returns RegExp or Error
/** @brief Creates a case-insensitive `RegExp`. */
jb_Any jb_RegExp_caseInsensitive(const jb_String *pattern); // Returns RegExp or Error
/** @brief Creates a case-insensitive `RegExp` from a C-string. */
jb_Any jb_RegExp_caseInsensitive_cstring(const char *pattern); // Returns RegExp or Error
/** @brief Creates a global `RegExp`. */
jb_Any jb_RegExp_global_pattern(const jb_String *pattern); // Returns RegExp or Error
/** @brief Creates a global `RegExp` from a C-string. */
jb_Any jb_RegExp_global_cstring(const char *pattern); // Returns RegExp or Error
/** @brief Creates a global, case-insensitive `RegExp`. */
jb_Any jb_RegExp_globalIgnoreCase(const jb_String *pattern); // Returns RegExp or Error
/** @brief Creates a global, case-insensitive `RegExp` from a C-string. */
jb_Any jb_RegExp_globalIgnoreCase_cstring(const char *pattern); // Returns RegExp or Error
/** @brief Creates a multiline `RegExp`. */
jb_Any jb_RegExp_multiline_pattern(const jb_String *pattern); // Returns RegExp or Error
/** @brief Creates a multiline `RegExp` from a C-string. */
jb_Any jb_RegExp_multiline_cstring(const char *pattern); // Returns RegExp or Error

// Iterator support for global matches

/**
 * @brief An iterator for `RegExp` matches.
 */
typedef struct {
    em_Val regexp;
    em_Val text;
    em_Val current_match;
    bool at_end;
} jb_RegExp_MatchIterator;

// Iterator methods

/** @brief Returns an iterator to the beginning of the matches. */
jb_RegExp_MatchIterator jb_RegExp_begin(const jb_RegExp *regex, const jb_String *text);
/** @brief Returns an iterator to the end of the matches. */
jb_RegExp_MatchIterator jb_RegExp_end(const jb_RegExp *regex, const jb_String *text);
/** @brief Compares two iterators for inequality. */
bool jb_RegExp_iterator_not_equal(
    const jb_RegExp_MatchIterator *a, const jb_RegExp_MatchIterator *b
);
/** @brief Compares two iterators for equality. */
bool jb_RegExp_iterator_equal(const jb_RegExp_MatchIterator *a, const jb_RegExp_MatchIterator *b);
/** @brief Dereferences an iterator to get the current match. */
jb_Array jb_RegExp_iterator_deref(const jb_RegExp_MatchIterator *iter);
/** @brief Advances the iterator to the next match. */
void jb_RegExp_iterator_next(jb_RegExp_MatchIterator *iter);

#ifdef __cplusplus
}
#endif
