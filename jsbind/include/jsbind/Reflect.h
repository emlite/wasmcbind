#pragma once

#include "Any.h"
#include "Function.h"
#include "utils.h"
#include <emlite/emlite.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @file Reflect.h
 * @brief Bindings for the JavaScript `Reflect` object.
 *
 * This file provides functions for the methods of the `Reflect` object, which
 * provides methods for interceptable JavaScript operations.
 */

/**
 * @brief Calls a function with a specified `this` value and arguments.
 *
 * @param target The target function to call.
 * @param thisArg The value to be used as `this` when calling the target.
 * @param argumentsList An array-like object specifying the arguments.
 * @return The result of calling the function.
 */
jb_Any Reflect_apply(
    const jb_Function *target, const jb_Any *thisArg, const jb_Array *argumentsList
);

/**
 * @brief Constructs a new object.
 *
 * @param target The target function to construct.
 * @param args An array-like object specifying the arguments.
 * @param newTarget The constructor that was originally called.
 * @return A new instance of `target` (or `newTarget` if specified).
 */
jb_Any Reflect_construct(const jb_Function *target, const jb_Array *args, const jb_Any *newTarget);

/**
 * @brief Defines a property on an object.
 *
 * @param target The target object.
 * @param key The name of the property to define.
 * @param attributes The attributes for the property.
 * @return `true` if the property was successfully defined, `false` otherwise.
 */
bool Reflect_defineProperty(const jb_Any *target, const jb_Any *key, const jb_Any *attributes);

/**
 * @brief Deletes a property from an object.
 *
 * @param target The target object.
 * @param key The name of the property to delete.
 * @return `true` if the property was successfully deleted, `false` otherwise.
 */
bool Reflect_deleteProperty(const jb_Any *target, const jb_Any *key);

/**
 * @brief Gets a property from an object.
 *
 * @param target The target object.
 * @param key The name of the property to get.
 * @param receiver The value of `this` provided for the call to `target`.
 * @return The value of the property.
 */
jb_Any Reflect_get(const jb_Any *target, const jb_Any *key, const jb_Any *receiver);

/**
 * @brief Gets the own property descriptor of an object.
 *
 * @param target The target object.
 * @param key The name of the property.
 * @return The property descriptor, or `undefined` if not found.
 */
jb_Any Reflect_getOwnPropertyDescriptor(const jb_Any *target, const jb_Any *key);

/**
 * @brief Gets the prototype of an object.
 *
 * @param target The target object.
 * @return The prototype of the object.
 */
jb_Any Reflect_getPrototypeOf(const jb_Any *target);

/**
 * @brief Checks if an object has a property.
 *
 * @param target The target object.
 * @param key The name of the property to check.
 * @return `true` if the property exists, `false` otherwise.
 */
bool Reflect_has(const jb_Any *target, const jb_Any *key);

/**
 * @brief Checks if an object is extensible.
 *
 * @param target The target object.
 * @return `true` if the object is extensible, `false` otherwise.
 */
bool Reflect_isExtensible(const jb_Any *target);

/**
 * @brief Gets the own keys of an object.
 *
 * @param target The target object.
 * @return An array of the object's own keys.
 */
jb_Array ownKeys(const jb_Any *target);

/**
 * @brief Prevents extensions on an object.
 *
 * @param target The target object.
 * @return `true` if the object was successfully made non-extensible.
 */
bool Reflect_preventExtensions(const jb_Any *target);

/**
 * @brief Sets a property on an object.
 *
 * @param target The target object.
 * @param key The name of the property to set.
 * @param value The new value of the property.
 * @param receiver The value of `this` provided for the call to `target`.
 * @return `true` if the property was successfully set, `false` otherwise.
 */
bool Reflect_set(
    const jb_Any *target, const jb_Any *key, const jb_Any *value, const jb_Any *receiver
);

/**
 * @brief Sets the prototype of an object.
 *
 * @param target The target object.
 * @param proto The new prototype.
 * @return `true` if the prototype was successfully set, `false` otherwise.
 */
bool Reflect_setPrototypeOf(const jb_Any *target, const jb_Any *proto);

#ifdef __cplusplus
}
#endif