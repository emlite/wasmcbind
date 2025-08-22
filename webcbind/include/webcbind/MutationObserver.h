#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Node Node;
typedef struct MutationObserverInit MutationObserverInit;
typedef struct MutationRecord MutationRecord;


/**
 * @brief Interface MutationObserver
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/MutationObserver)
 */
DECLARE_EMLITE_TYPE(MutationObserver, em_Val);

/**
 * @brief Creates a new `MutationObserver` object. 
*/
MutationObserver MutationObserver_new(jb_Function * callback);

/**
 * @brief Calls the `observe` method. 
*/
jb_Undefined MutationObserver_observe0(MutationObserver* self , Node * target);

/**
 * @brief Calls the `observe` method. 
*/
jb_Undefined MutationObserver_observe1(MutationObserver* self , Node * target, MutationObserverInit * options);

/**
 * @brief Calls the `disconnect` method. 
*/
jb_Undefined MutationObserver_disconnect(MutationObserver* self );

/**
 * @brief Calls the `takeRecords` method. 
*/
jb_Array MutationObserver_takeRecords(MutationObserver* self );

#ifdef __cplusplus
}
#endif
