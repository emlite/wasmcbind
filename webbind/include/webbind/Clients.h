#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Client Client;
typedef struct ClientQueryOptions ClientQueryOptions;
typedef struct WindowClient WindowClient;


/**
 * @brief Interface Clients
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Clients)
 */
DECLARE_EMLITE_TYPE(Clients, em_Val);

/**
 * @brief Calls the `get` method. 
*/
jb_Promise Clients_get(Clients* self , jb_String * id);

/**
 * @brief Calls the `matchAll` method. 
*/
jb_Promise Clients_matchAll0(Clients* self );

/**
 * @brief Calls the `matchAll` method. 
*/
jb_Promise Clients_matchAll1(Clients* self , ClientQueryOptions * options);

/**
 * @brief Calls the `openWindow` method. 
*/
jb_Promise Clients_openWindow(Clients* self , jb_String * url);

/**
 * @brief Calls the `claim` method. 
*/
jb_Promise Clients_claim(Clients* self );

#ifdef __cplusplus
}
#endif
