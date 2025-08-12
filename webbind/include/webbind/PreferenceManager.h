#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct PreferenceObject PreferenceObject;


/**
 * @brief Interface PreferenceManager
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PreferenceManager)
 */
DECLARE_EMLITE_TYPE(PreferenceManager, em_Val);

/**
 * @brief Gets the `colorScheme` property. 
*/
PreferenceObject PreferenceManager_colorScheme(const PreferenceManager *self);

/**
 * @brief Gets the `contrast` property. 
*/
PreferenceObject PreferenceManager_contrast(const PreferenceManager *self);

/**
 * @brief Gets the `reducedMotion` property. 
*/
PreferenceObject PreferenceManager_reducedMotion(const PreferenceManager *self);

/**
 * @brief Gets the `reducedTransparency` property. 
*/
PreferenceObject PreferenceManager_reducedTransparency(const PreferenceManager *self);

/**
 * @brief Gets the `reducedData` property. 
*/
PreferenceObject PreferenceManager_reducedData(const PreferenceManager *self);

#ifdef __cplusplus
}
#endif
