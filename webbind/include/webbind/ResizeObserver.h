#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Element Element;
typedef struct ResizeObserverOptions ResizeObserverOptions;


/**
 * @brief Interface ResizeObserver
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/ResizeObserver)
 */
DECLARE_EMLITE_TYPE(ResizeObserver, em_Val);

/**
 * @brief Creates a new `ResizeObserver` object. 
*/
ResizeObserver ResizeObserver_new(jb_Function * callback);

/**
 * @brief Calls the `observe` method. 
*/
jb_Undefined ResizeObserver_observe0(ResizeObserver* self , Element * target);

/**
 * @brief Calls the `observe` method. 
*/
jb_Undefined ResizeObserver_observe1(ResizeObserver* self , Element * target, ResizeObserverOptions * options);

/**
 * @brief Calls the `unobserve` method. 
*/
jb_Undefined ResizeObserver_unobserve(ResizeObserver* self , Element * target);

/**
 * @brief Calls the `disconnect` method. 
*/
jb_Undefined ResizeObserver_disconnect(ResizeObserver* self );

#ifdef __cplusplus
}
#endif
