#pragma once

#include "Any.h"
#include "utils.h"
#include <emlite/emlite.h>

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @file Object.h
 * @brief Bindings for the JavaScript `Object` object.
 *
 * This file provides functions for creating and interacting with JavaScript
 * objects.
 */

/**
 * @brief An opaque type representing a JavaScript `Object` object.
 */
DECLARE_EMLITE_TYPE(jb_Object, em_Val);

/**
 * @brief Creates a new, empty `Object`.
 *
 * @return A new `jb_Object` instance.
 */
jb_Object jb_Object_new();

/**
 * @brief Checks if an object has a property.
 *
 * @param o A pointer to the `jb_Object` instance.
 * @param prop The name of the property to check.
 * @return 1 if the property exists, 0 otherwise.
 */
int jb_Object_has(const jb_Object *o, const char *prop);

/**
 * @brief Gets a property from an object.
 *
 * @param o A pointer to the `jb_Object` instance.
 * @param prop The name of the property to get.
 * @return The value of the property.
 */
jb_Any jb_Object_get(const jb_Object *o, const char *prop);

/**
 * @brief Sets a property on an object.
 *
 * @param o A pointer to the `jb_Object` instance.
 * @param prop The name of the property to set.
 * @param v A pointer to the value to set.
 */
void jb_Object_set(jb_Object *o, const char *prop, const jb_Any *v);

/**
 * @brief Checks if an object has an own property.
 *
 * @param o A pointer to the `jb_Object` instance.
 * @param prop The name of the property to check.
 * @return 1 if the object has the own property, 0 otherwise.
 */
int jb_Object_has_own_property(const jb_Object *o, const char *prop);

/**
 * @brief Gets the Object constructor function.
 *
 * @return The Object constructor function as em_Val.
 */
em_Val jb_Object_instance();

/**
 * @brief Creates an object with the specified prototype object.
 *
 * @param prototype The object to use as the prototype, or null for no prototype.
 * @return A new object with the specified prototype.
 */
em_Val jb_Object_create(em_Val prototype);

/**
 * @brief Creates an object with the specified prototype object and properties.
 *
 * @param prototype The object to use as the prototype, or null for no prototype.
 * @param properties An object whose enumerable own properties specify property descriptors.
 * @return A new object with the specified prototype and properties.
 */
em_Val jb_Object_create_with_properties(em_Val prototype, em_Val properties);

/**
 * @brief Sets the prototype (i.e., the internal [[Prototype]] property) of a specified object.
 *
 * @param obj The object which is to have its prototype set.
 * @param prototype The object's new prototype (an object or null).
 * @return The specified object.
 */
em_Val jb_Object_setPrototypeOf(em_Val obj, em_Val prototype);

#ifdef __cplusplus
}
#endif