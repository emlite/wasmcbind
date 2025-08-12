#pragma once

#include "Any.h"
#include "utils.h"
#include <emlite/emlite.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @file String.h
 * @brief Bindings for the JavaScript `String` object.
 *
 * This file provides functions for creating and manipulating JavaScript strings.
 */

/**
 * @brief An opaque type representing a JavaScript `String` object.
 */
DECLARE_EMLITE_TYPE(jb_String, em_Val);

/**
 * @brief A macro to create a `jb_String` from a C string literal.
 */
#define JSSTR(x) ((jb_String){.inner = em_Val_from(x)})

typedef struct jb_Array jb_Array;

/**
 * @brief Gets the byte length of the string.
 *
 * @param s A pointer to the `jb_String` instance.
 * @return The number of bytes in the string.
 */
size_t jb_String_byte_len(const jb_String *s);

/**
 * @brief Checks if the string is empty.
 *
 * @param s A pointer to the `jb_String` instance.
 * @return `true` if the string is empty, `false` otherwise.
 */
bool jb_String_is_empty(const jb_String *s);

/**
 * @brief Gets the character at a specific index.
 *
 * @param s A pointer to the `jb_String` instance.
 * @param i The index of the character.
 * @return The character at the specified index as a new `jb_String`.
 */
jb_String jb_String_char_at(const jb_String *s, size_t i);

/**
 * @brief Gets the string as a C-style string.
 *
 * @param s A pointer to the `jb_String` instance.
 * @return A pointer to the underlying C string.
 */
const char *jb_String_as_str(const jb_String *s);

/**
 * @brief Gets the length of the string.
 *
 * @param s A pointer to the `jb_String` instance.
 * @return The number of characters in the string.
 */
size_t jb_String_length(const jb_String *s);

/**
 * @brief Gets the Unicode value of the character at a specific index.
 *
 * @param s A pointer to the `jb_String` instance.
 * @param idx The index of the character.
 * @return The Unicode value of the character.
 */
int jb_String_char_code_at(const jb_String *s, size_t idx);

/**
 * @brief Sets the character at a specific index.
 *
 * @param s A pointer to the `jb_String` instance.
 * @param idx The index of the character to set.
 * @param val The new character value.
 */
void jb_String_set(jb_String *s, size_t idx, char val);

/**
 * @brief Gets the character at a specific index, allowing for negative indices.
 *
 * @param s A pointer to the `jb_String` instance.
 * @param idx The index of the character.
 * @return The character at the specified index as a new `jb_String`.
 */
jb_String jb_String_at(const jb_String *s, int idx);

/**
 * @brief Gets the Unicode code point at a specific index.
 *
 * @param s A pointer to the `jb_String` instance.
 * @param idx The index of the code point.
 * @return The Unicode code point.
 */
int jb_String_code_point_at(const jb_String *s, size_t idx);

/**
 * @brief Concatenates two strings.
 *
 * @param a The first string.
 * @param b The second string.
 * @return A new `jb_String` containing the concatenated result.
 */
jb_String jb_String_concat(const jb_String *a, const jb_String *b);

/**
 * @brief Checks if a string ends with a specific pattern.
 *
 * @param s The string to check.
 * @param pat The pattern to look for.
 * @return `true` if the string ends with the pattern, `false` otherwise.
 */
bool jb_String_ends_with(const jb_String *s, const char *pat);

/**
 * @brief Checks if a string includes a specific pattern.
 *
 * @param s The string to check.
 * @param pat The pattern to look for.
 * @return `true` if the string includes the pattern, `false` otherwise.
 */
bool jb_String_includes(const jb_String *s, const char *pat);

/**
 * @brief Finds the first index of a pattern in a string.
 *
 * @param s The string to search in.
 * @param pat The pattern to search for.
 * @return The index of the first occurrence, or -1 if not found.
 */
int jb_String_index_of(const jb_String *s, const char *pat);

/**
 * @brief Checks if the string is well-formed.
 *
 * @param s The string to check.
 * @return `true` if the string is well-formed, `false` otherwise.
 */
bool jb_String_is_well_formed(const jb_String *s);

/**
 * @brief Finds the last index of a pattern in a string.
 *
 * @param s The string to search in.
 * @param pat The pattern to search for.
 * @return The index of the last occurrence, or -1 if not found.
 */
int jb_String_last_index_of(const jb_String *s, const char *pat);

/**
 * @brief Compares two strings in the current locale.
 *
 * @param s The first string.
 * @param other The second string.
 * @return A negative, zero, or positive value indicating the sort order.
 */
int jb_String_locale_compare(const jb_String *s, const char *other);

/**
 * @brief Matches a string against a regular expression.
 *
 * @param s The string to match.
 * @param pat The regular expression pattern.
 * @return An `jb_Any` containing the result of the match.
 */
jb_Any jb_String_match(const jb_String *s, const jb_Any *pat);

/**
 * @brief Matches a string against a regular expression and returns all matches.
 *
 * @param s The string to match.
 * @param pat The regular expression pattern.
 * @return An `jb_Any` containing an iterator of all matches.
 */
jb_Any jb_String_match_all(const jb_String *s, const jb_Any *pat);

/**
 * @brief Normalizes the string.
 *
 * @param s The string to normalize.
 * @param form The normalization form (e.g., "NFC", "NFD").
 * @return The normalized string.
 */
jb_String jb_String_normalize(const jb_String *s, const char *form);

/**
 * @brief Pads the end of a string with a given pad string.
 *
 * @param s The string to pad.
 * @param target_len The target length of the padded string.
 * @param pad The string to pad with.
 * @return The padded string.
 */
jb_String jb_String_pad_end(const jb_String *s, size_t target_len, const char *pad);

/**
 * @brief Pads the start of a string with a given pad string.
 *
 * @param s The string to pad.
 * @param target_len The target length of the padded string.
 * @param pad The string to pad with.
 * @return The padded string.
 */
jb_String jb_String_pad_start(const jb_String *s, size_t target_len, const char *pad);

/**
 * @brief Repeats a string a specified number of times.
 *
 * @param s The string to repeat.
 * @param count The number of times to repeat the string.
 * @return The repeated string.
 */
jb_String jb_String_repeat(const jb_String *s, size_t count);

/**
 * @brief Replaces a pattern in a string.
 *
 * @param s The string to perform the replacement on.
 * @param pat The pattern to replace.
 * @param repl The replacement string.
 * @return The new string with the replacement.
 */
jb_String jb_String_replace(const jb_String *s, const jb_Any *pat, const jb_Any *repl);

/**
 * @brief Replaces all occurrences of a pattern in a string.
 *
 * @param s The string to perform the replacement on.
 * @param pat The pattern to replace.
 * @param repl The replacement string.
 * @return The new string with all replacements.
 */
jb_String jb_String_replace_all(const jb_String *s, const jb_Any *pat, const jb_Any *repl);

/**
 * @brief Searches for a pattern in a string.
 *
 * @param s The string to search in.
 * @param pat The pattern to search for.
 * @return The index of the first match, or -1 if not found.
 */
int jb_String_search(const jb_String *s, const jb_Any *pat);

/**
 * @brief Extracts a slice of a string.
 *
 * @param s The string to slice.
 * @param start The starting index.
 * @param end The ending index.
 * @return The extracted slice as a new string.
 */
jb_String jb_String_slice(const jb_String *s, int start, int end);

/**
 * @brief Splits a string into an array of substrings.
 *
 * @param s The string to split.
 * @param sep The separator to split by.
 * @return An array of substrings.
 */
jb_Array jb_String_split(const jb_String *s, const char *sep);

/**
 * @brief Checks if a string starts with a specific pattern.
 *
 * @param s The string to check.
 * @param pat The pattern to look for.
 * @return `true` if the string starts with the pattern, `false` otherwise.
 */
bool jb_String_starts_with(const jb_String *s, const char *pat);

/**
 * @brief Extracts a substring from a string.
 *
 * @param s The string to extract from.
 * @param start The starting index.
 * @param end The ending index.
 * @return The extracted substring.
 */
jb_String jb_String_substring(const jb_String *s, size_t start, int end);

/**
 * @brief Converts the string to lowercase, according to the host's locale.
 *
 * @param s The string to convert.
 * @return The lowercase string.
 */
jb_String jb_String_to_locale_lower_case(const jb_String *s);

/**
 * @brief Converts the string to uppercase, according to the host's locale.
 *
 * @param s The string to convert.
 * @return The uppercase string.
 */
jb_String jb_String_to_locale_upper_case(const jb_String *s);

/**
 * @brief Converts the string to lowercase.
 *
 * @param s The string to convert.
 * @return The lowercase string.
 */
jb_String jb_String_to_lower_case(const jb_String *s);

/**
 * @brief Converts the string to uppercase.
 *
 * @param s The string to convert.
 * @return The uppercase string.
 */
jb_String jb_String_to_upper_case(const jb_String *s);

/**
 * @brief Converts the string to a well-formed string.
 *
 * @param s The string to convert.
 * @return The well-formed string.
 */
jb_String jb_String_to_well_formed(const jb_String *s);

/**
 * @brief Removes whitespace from both ends of a string.
 *
 * @param s The string to trim.
 * @return The trimmed string.
 */
jb_String jb_String_trim(const jb_String *s);

/**
 * @brief Removes whitespace from the end of a string.
 *
 * @param s The string to trim.
 * @return The trimmed string.
 */
jb_String jb_String_trim_end(const jb_String *s);

/**
 * @brief Removes whitespace from the beginning of a string.
 *
 * @param s The string to trim.
 * @return The trimmed string.
 */
jb_String jb_String_trim_start(const jb_String *s);

/**
 * @brief Returns the string itself.
 *
 * @param s The string.
 * @return The string itself.
 */
jb_String jb_String_toString(const jb_String *s);

/**
 * @brief Extracts a substring from a string.
 *
 * @param s The string to extract from.
 * @param from The starting index.
 * @param length The length of the substring.
 * @return The extracted substring.
 */
jb_String jb_String_substr(const jb_String *s, int from, int length);

/**
 * @brief Returns the primitive value of the string.
 *
 * @param s The string.
 * @return The string itself.
 */
jb_String jb_String_valueOf(const jb_String *s);

/**
 * @brief Gets the string as a C-style string.
 *
 * @param s A pointer to the `jb_String` instance.
 * @return A pointer to the underlying C string.
 */
const char *jb_String_c_str(const jb_String *s);

/**
 * @brief Returns the string itself.
 *
 * @param s The string.
 * @return The string itself.
 */
jb_String jb_String_to_string(const jb_String *s);

#ifdef __cplusplus
}
#endif
