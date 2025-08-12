#pragma once

#include "Any.h"
#include "utils.h"
#include <emlite/emlite.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @file Set.h
 * @brief Bindings for the JavaScript `Set` and `WeakSet` objects.
 *
 * This file provides functions for creating and manipulating JavaScript `Set` and
 * `WeakSet` objects.
 */

/**
 * @brief An opaque type representing a JavaScript `Set` object.
 */
DECLARE_EMLITE_TYPE(jb_Set, em_Val);

/**
 * @brief Creates a new `Set` object.
 *
 * @return A new `jb_Set` instance.
 */
jb_Set jb_Set_new();

/**
 * @brief Gets the number of elements in the set.
 *
 * @param set A pointer to the `jb_Set` instance.
 * @return The number of elements in the set.
 */
size_t jb_Set_size(const jb_Set *set);

/**
 * @brief Checks if a value is in the set.
 *
 * @param set A pointer to the `jb_Set` instance.
 * @param value The value to check for.
 * @return `true` if the value is in the set, `false` otherwise.
 */
bool jb_Set_has(const jb_Set *set, const jb_Any *value);

/**
 * @brief Adds a value to the set.
 *
 * @param set A pointer to the `jb_Set` instance.
 * @param value The value to add.
 */
void jb_Set_add(jb_Set *set, const jb_Any *value);

/**
 * @brief Removes a value from the set.
 *
 * @param set A pointer to the `jb_Set` instance.
 * @param value The value to remove.
 * @return `true` if the value was in the set and has been removed, `false`
 * otherwise.
 */
bool jb_Set_delete(jb_Set *set, const jb_Any *value);

/**
 * @brief Removes all elements from the set.
 *
 * @param set A pointer to the `jb_Set` instance.
 */
void jb_Set_clear(jb_Set *set);

/**
 * @brief An opaque type representing a JavaScript `WeakSet` object.
 */
DECLARE_EMLITE_TYPE(jb_WeakSet, em_Val);

/**
 * @brief Creates a new `WeakSet` object.
 *
 * @return A new `jb_WeakSet` instance.
 */
jb_WeakSet jb_WeakSet_new();

/**
 * @brief Gets the number of elements in the weak set.
 *
 * @param set A pointer to the `jb_WeakSet` instance.
 * @return The number of elements in the weak set.
 */
size_t jb_WeakSet_size(const jb_WeakSet *set);

/**
 * @brief Checks if a value is in the weak set.
 *
 * @param set A pointer to the `jb_WeakSet` instance.
 * @param value The value to check for.
 * @return `true` if the value is in the weak set, `false` otherwise.
 */
bool jb_WeakSet_has(const jb_WeakSet *set, const jb_Any *value);

/**
 * @brief Adds a value to the weak set.
 *
 * @param set A pointer to the `jb_WeakSet` instance.
 * @param value The value to add.
 */
void jb_WeakSet_add(jb_WeakSet *set, const jb_Any *value);

/**
 * @brief Removes a value from the weak set.
 *
 * @param set A pointer to the `jb_WeakSet` instance.
 * @param value The value to remove.
 * @return `true` if the value was in the weak set and has been removed, `false`
 * otherwise.
 */
bool jb_WeakSet_delete(jb_WeakSet *set, const jb_Any *value);

/**
 * @brief Removes all elements from the weak set.
 *
 * @param set A pointer to the `jb_WeakSet` instance.
 */
void jb_WeakSet_clear(jb_WeakSet *set);

#ifdef __cplusplus
}
#endif