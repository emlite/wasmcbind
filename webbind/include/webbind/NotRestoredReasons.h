#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NotRestoredReasonDetails NotRestoredReasonDetails;


/**
 * @brief Interface NotRestoredReasons
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/NotRestoredReasons)
 */
DECLARE_EMLITE_TYPE(NotRestoredReasons, em_Val);

/**
 * @brief Gets the `src` property. 
*/
jb_String NotRestoredReasons_src(const NotRestoredReasons *self);

/**
 * @brief Gets the `id` property. 
*/
jb_String NotRestoredReasons_id(const NotRestoredReasons *self);

/**
 * @brief Gets the `name` property. 
*/
jb_String NotRestoredReasons_name(const NotRestoredReasons *self);

/**
 * @brief Gets the `url` property. 
*/
jb_String NotRestoredReasons_url(const NotRestoredReasons *self);

/**
 * @brief Gets the `reasons` property. 
*/
jb_Array NotRestoredReasons_reasons(const NotRestoredReasons *self);

/**
 * @brief Gets the `children` property. 
*/
jb_Array NotRestoredReasons_children(const NotRestoredReasons *self);

/**
 * @brief Calls the `toJSON` method. 
*/
jb_Object NotRestoredReasons_toJSON(NotRestoredReasons* self );

#ifdef __cplusplus
}
#endif
