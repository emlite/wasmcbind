#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct URLSearchParams URLSearchParams;


/**
 * @brief Interface URL
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/URL)
 */
DECLARE_EMLITE_TYPE(URL, em_Val);

/**
 * @brief Creates a new `URL` object. 
*/
URL URL_new0(jb_String * url);

/**
 * @brief Creates a new `URL` object. 
*/
URL URL_new1(jb_String * url, jb_String * base);

/**
 * @brief Calls the `parse` method. 
*/
URL URL_parse0(URL* self , jb_String * url);

/**
 * @brief Calls the `parse` method. 
*/
URL URL_parse1(URL* self , jb_String * url, jb_String * base);

/**
 * @brief Calls the `canParse` method. 
*/
bool URL_canParse0(URL* self , jb_String * url);

/**
 * @brief Calls the `canParse` method. 
*/
bool URL_canParse1(URL* self , jb_String * url, jb_String * base);

/**
 * @brief Gets the `href` property. 
*/
jb_String URL_href(const URL *self);

/**
 * @brief Sets the `href` property. 
*/
void URL_set_href(URL* self, jb_String * value);

/**
 * @brief Gets the `origin` property. 
*/
jb_String URL_origin(const URL *self);

/**
 * @brief Gets the `protocol` property. 
*/
jb_String URL_protocol(const URL *self);

/**
 * @brief Sets the `protocol` property. 
*/
void URL_set_protocol(URL* self, jb_String * value);

/**
 * @brief Gets the `username` property. 
*/
jb_String URL_username(const URL *self);

/**
 * @brief Sets the `username` property. 
*/
void URL_set_username(URL* self, jb_String * value);

/**
 * @brief Gets the `password` property. 
*/
jb_String URL_password(const URL *self);

/**
 * @brief Sets the `password` property. 
*/
void URL_set_password(URL* self, jb_String * value);

/**
 * @brief Gets the `host` property. 
*/
jb_String URL_host(const URL *self);

/**
 * @brief Sets the `host` property. 
*/
void URL_set_host(URL* self, jb_String * value);

/**
 * @brief Gets the `hostname` property. 
*/
jb_String URL_hostname(const URL *self);

/**
 * @brief Sets the `hostname` property. 
*/
void URL_set_hostname(URL* self, jb_String * value);

/**
 * @brief Gets the `port` property. 
*/
jb_String URL_port(const URL *self);

/**
 * @brief Sets the `port` property. 
*/
void URL_set_port(URL* self, jb_String * value);

/**
 * @brief Gets the `pathname` property. 
*/
jb_String URL_pathname(const URL *self);

/**
 * @brief Sets the `pathname` property. 
*/
void URL_set_pathname(URL* self, jb_String * value);

/**
 * @brief Gets the `search` property. 
*/
jb_String URL_search(const URL *self);

/**
 * @brief Sets the `search` property. 
*/
void URL_set_search(URL* self, jb_String * value);

/**
 * @brief Gets the `searchParams` property. 
*/
URLSearchParams URL_searchParams(const URL *self);

/**
 * @brief Gets the `hash` property. 
*/
jb_String URL_hash(const URL *self);

/**
 * @brief Sets the `hash` property. 
*/
void URL_set_hash(URL* self, jb_String * value);

/**
 * @brief Calls the `toJSON` method. 
*/
jb_String URL_toJSON(URL* self );

/**
 * @brief Calls the `createObjectURL` method. 
*/
jb_String URL_createObjectURL(URL* self , jb_Any * obj);

/**
 * @brief Calls the `revokeObjectURL` method. 
*/
jb_Undefined URL_revokeObjectURL(URL* self , jb_String * url);

#ifdef __cplusplus
}
#endif
