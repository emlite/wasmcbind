#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct URLPatternOptions URLPatternOptions;
typedef struct URLPatternResult URLPatternResult;


/**
 * @brief Interface URLPattern
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/URLPattern)
 */
DECLARE_EMLITE_TYPE(URLPattern, em_Val);

/**
 * @brief Creates a new `URLPattern` object. 
*/
URLPattern URLPattern_new0();

/**
 * @brief Creates a new `URLPattern` object. 
*/
URLPattern URLPattern_new1(jb_Any * input);

/**
 * @brief Creates a new `URLPattern` object. 
*/
URLPattern URLPattern_new2(jb_Any * input, URLPatternOptions * options);

/**
 * @brief Calls the `test` method. 
*/
bool URLPattern_test0(URLPattern* self );

/**
 * @brief Calls the `test` method. 
*/
bool URLPattern_test1(URLPattern* self , jb_Any * input);

/**
 * @brief Calls the `test` method. 
*/
bool URLPattern_test2(URLPattern* self , jb_Any * input, jb_String * baseURL);

/**
 * @brief Calls the `exec` method. 
*/
URLPatternResult URLPattern_exec0(URLPattern* self );

/**
 * @brief Calls the `exec` method. 
*/
URLPatternResult URLPattern_exec1(URLPattern* self , jb_Any * input);

/**
 * @brief Calls the `exec` method. 
*/
URLPatternResult URLPattern_exec2(URLPattern* self , jb_Any * input, jb_String * baseURL);

/**
 * @brief Gets the `protocol` property. 
*/
jb_String URLPattern_protocol(const URLPattern *self);

/**
 * @brief Gets the `username` property. 
*/
jb_String URLPattern_username(const URLPattern *self);

/**
 * @brief Gets the `password` property. 
*/
jb_String URLPattern_password(const URLPattern *self);

/**
 * @brief Gets the `hostname` property. 
*/
jb_String URLPattern_hostname(const URLPattern *self);

/**
 * @brief Gets the `port` property. 
*/
jb_String URLPattern_port(const URLPattern *self);

/**
 * @brief Gets the `pathname` property. 
*/
jb_String URLPattern_pathname(const URLPattern *self);

/**
 * @brief Gets the `search` property. 
*/
jb_String URLPattern_search(const URLPattern *self);

/**
 * @brief Gets the `hash` property. 
*/
jb_String URLPattern_hash(const URLPattern *self);

/**
 * @brief Gets the `hasRegExpGroups` property. 
*/
bool URLPattern_hasRegExpGroups(const URLPattern *self);

#ifdef __cplusplus
}
#endif
