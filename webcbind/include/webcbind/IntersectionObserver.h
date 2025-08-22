#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct IntersectionObserverInit IntersectionObserverInit;
typedef struct Element Element;
typedef struct IntersectionObserverEntry IntersectionObserverEntry;


/**
 * @brief Interface IntersectionObserver
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/IntersectionObserver)
 */
DECLARE_EMLITE_TYPE(IntersectionObserver, em_Val);

/**
 * @brief Creates a new `IntersectionObserver` object. 
*/
IntersectionObserver IntersectionObserver_new0(jb_Function * callback);

/**
 * @brief Creates a new `IntersectionObserver` object. 
*/
IntersectionObserver IntersectionObserver_new1(jb_Function * callback, IntersectionObserverInit * options);

/**
 * @brief Gets the `root` property. 
*/
jb_Any IntersectionObserver_root(const IntersectionObserver *self);

/**
 * @brief Gets the `rootMargin` property. 
*/
jb_String IntersectionObserver_rootMargin(const IntersectionObserver *self);

/**
 * @brief Gets the `scrollMargin` property. 
*/
jb_String IntersectionObserver_scrollMargin(const IntersectionObserver *self);

/**
 * @brief Gets the `thresholds` property. 
*/
jb_Array IntersectionObserver_thresholds(const IntersectionObserver *self);

/**
 * @brief Gets the `delay` property. 
*/
long IntersectionObserver_delay(const IntersectionObserver *self);

/**
 * @brief Gets the `trackVisibility` property. 
*/
bool IntersectionObserver_trackVisibility(const IntersectionObserver *self);

/**
 * @brief Calls the `observe` method. 
*/
jb_Undefined IntersectionObserver_observe(IntersectionObserver* self , Element * target);

/**
 * @brief Calls the `unobserve` method. 
*/
jb_Undefined IntersectionObserver_unobserve(IntersectionObserver* self , Element * target);

/**
 * @brief Calls the `disconnect` method. 
*/
jb_Undefined IntersectionObserver_disconnect(IntersectionObserver* self );

/**
 * @brief Calls the `takeRecords` method. 
*/
jb_Array IntersectionObserver_takeRecords(IntersectionObserver* self );

#ifdef __cplusplus
}
#endif
