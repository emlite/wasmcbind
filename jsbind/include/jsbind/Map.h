#pragma once

#include <jsbind/jsbind.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @file Map.h
 * @brief Bindings for the JavaScript `Map` and `WeakMap` objects.
 *
 * This file provides functions for creating and manipulating JavaScript `Map` and
 * `WeakMap` objects.
 */

/**
 * @brief An opaque type representing a JavaScript `Map` object.
 */
DECLARE_EMLITE_TYPE(jb_Map, em_Val);

/**
 * @brief Creates a new `Map` object.
 *
 * @return A new `jb_Map` instance.
 */
jb_Map jb_Map_new();

/**
 * @brief Gets the number of elements in the map.
 *
 * @param map A pointer to the `jb_Map` instance.
 * @return The number of elements in the map.
 */
size_t jb_Map_size(const jb_Map *map);

/**
 * @brief Checks if a key is in the map.
 *
 * @param map A pointer to the `jb_Map` instance.
 * @param key The key to check for.
 * @return `true` if the key is in the map, `false` otherwise.
 */
bool jb_Map_has(const jb_Map *map, const jb_Any *key);

/**
 * @brief Gets the value associated with a key.
 *
 * @param map A pointer to the `jb_Map` instance.
 * @param key The key to get the value for.
 * @return The value associated with the key, or `undefined` if the key is not
 * in the map.
 */
jb_Any jb_Map_get(const jb_Map *map, const jb_Any *key);

/**
 * @brief Sets the value for a key in the map.
 *
 * @param map A pointer to the `jb_Map` instance.
 * @param key The key to set the value for.
 * @param value The value to set.
 */
void jb_Map_set(jb_Map *map, const jb_Any *key, const jb_Any *value);

/**
 * @brief Removes a key and its associated value from the map.
 *
 * @param map A pointer to the `jb_Map` instance.
 * @param key The key to remove.
 * @return `true` if the key was in the map and has been removed, `false`
 * otherwise.
 */
bool jb_Map_delete(jb_Map *map, const jb_Any *key);

/**
 * @brief Removes all elements from the map.
 *
 * @param map A pointer to the `jb_Map` instance.
 */
void jb_Map_clear(jb_Map *map);

/**
 * @brief An opaque type representing a JavaScript `WeakMap` object.
 */
DECLARE_EMLITE_TYPE(jb_WeakMap, em_Val);

/**
 * @brief Creates a new `WeakMap` object.
 *
 * @return A new `jb_WeakMap` instance.
 */
jb_WeakMap jb_WeakMap_new();

/**
 * @brief Gets the number of elements in the weak map.
 *
 * @param map A pointer to the `jb_WeakMap` instance.
 * @return The number of elements in the weak map.
 */
size_t jb_WeakMap_size(const jb_WeakMap *map);

/**
 * @brief Checks if a key is in the weak map.
 *
 * @param map A pointer to the `jb_WeakMap` instance.
 * @param key The key to check for.
 * @return `true` if the key is in the weak map, `false` otherwise.
 */
bool jb_WeakMap_has(const jb_WeakMap *map, const jb_Any *key);

/**
 * @brief Gets the value associated with a key in the weak map.
 *
 * @param map A pointer to the `jb_WeakMap` instance.
 * @param key The key to get the value for.
 * @return The value associated with the key, or `undefined` if the key is not
 * in the weak map.
 */
jb_Any jb_WeakMap_get(const jb_WeakMap *map, const jb_Any *key);

/**
 * @brief Sets the value for a key in the weak map.
 *
 * @param map A pointer to the `jb_WeakMap` instance.
 * @param key The key to set the value for.
 * @param value The value to set.
 */
void jb_WeakMap_set(jb_WeakMap *map, const jb_Any *key, const jb_Any *value);

/**
 * @brief Removes a key and its associated value from the weak map.
 *
 * @param map A pointer to the `jb_WeakMap` instance.
 * @param key The key to remove.
 * @return `true` if the key was in the weak map and has been removed, `false`
 * otherwise.
 */
bool jb_WeakMap_delete(jb_WeakMap *map, const jb_Any *key);

/**
 * @brief Removes all elements from the weak map.
 *
 * @param map A pointer to the `jb_WeakMap` instance.
 */
void jb_WeakMap_clear(jb_WeakMap *map);

#ifdef __cplusplus
}
#endif