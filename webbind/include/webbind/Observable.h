#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct SubscribeOptions SubscribeOptions;


/**
 * @brief Interface Observable
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Observable)
 */
DECLARE_EMLITE_TYPE(Observable, em_Val);

/**
 * @brief Creates a new `Observable` object. 
*/
Observable Observable_new(jb_Function * callback);

/**
 * @brief Calls the `subscribe` method. 
*/
jb_Undefined Observable_subscribe0(Observable* self );

/**
 * @brief Calls the `subscribe` method. 
*/
jb_Undefined Observable_subscribe1(Observable* self , jb_Any * observer);

/**
 * @brief Calls the `subscribe` method. 
*/
jb_Undefined Observable_subscribe2(Observable* self , jb_Any * observer, SubscribeOptions * options);

/**
 * @brief Calls the `from` method. 
*/
Observable Observable_from(Observable* self , jb_Any * value);

/**
 * @brief Calls the `takeUntil` method. 
*/
Observable Observable_takeUntil(Observable* self , jb_Any * value);

/**
 * @brief Calls the `map` method. 
*/
Observable Observable_map(Observable* self , jb_Function * mapper);

/**
 * @brief Calls the `filter` method. 
*/
Observable Observable_filter(Observable* self , jb_Function * predicate);

/**
 * @brief Calls the `take` method. 
*/
Observable Observable_take(Observable* self , long long amount);

/**
 * @brief Calls the `drop` method. 
*/
Observable Observable_drop(Observable* self , long long amount);

/**
 * @brief Calls the `flatMap` method. 
*/
Observable Observable_flatMap(Observable* self , jb_Function * mapper);

/**
 * @brief Calls the `switchMap` method. 
*/
Observable Observable_switchMap(Observable* self , jb_Function * mapper);

/**
 * @brief Calls the `inspect` method. 
*/
Observable Observable_inspect0(Observable* self );

/**
 * @brief Calls the `inspect` method. 
*/
Observable Observable_inspect1(Observable* self , jb_Any * inspectorUnion);

/**
 * @brief Calls the `catch` method. 
*/
Observable Observable_catch_(Observable* self , jb_Function * callback);

/**
 * @brief Calls the `finally` method. 
*/
Observable Observable_finally(Observable* self , jb_Function * callback);

/**
 * @brief Calls the `toArray` method. 
*/
jb_Promise Observable_toArray0(Observable* self );

/**
 * @brief Calls the `toArray` method. 
*/
jb_Promise Observable_toArray1(Observable* self , SubscribeOptions * options);

/**
 * @brief Calls the `forEach` method. 
*/
jb_Promise Observable_forEach0(Observable* self , jb_Function * callback);

/**
 * @brief Calls the `forEach` method. 
*/
jb_Promise Observable_forEach1(Observable* self , jb_Function * callback, SubscribeOptions * options);

/**
 * @brief Calls the `every` method. 
*/
jb_Promise Observable_every0(Observable* self , jb_Function * predicate);

/**
 * @brief Calls the `every` method. 
*/
jb_Promise Observable_every1(Observable* self , jb_Function * predicate, SubscribeOptions * options);

/**
 * @brief Calls the `first` method. 
*/
jb_Promise Observable_first0(Observable* self );

/**
 * @brief Calls the `first` method. 
*/
jb_Promise Observable_first1(Observable* self , SubscribeOptions * options);

/**
 * @brief Calls the `last` method. 
*/
jb_Promise Observable_last0(Observable* self );

/**
 * @brief Calls the `last` method. 
*/
jb_Promise Observable_last1(Observable* self , SubscribeOptions * options);

/**
 * @brief Calls the `find` method. 
*/
jb_Promise Observable_find0(Observable* self , jb_Function * predicate);

/**
 * @brief Calls the `find` method. 
*/
jb_Promise Observable_find1(Observable* self , jb_Function * predicate, SubscribeOptions * options);

/**
 * @brief Calls the `some` method. 
*/
jb_Promise Observable_some0(Observable* self , jb_Function * predicate);

/**
 * @brief Calls the `some` method. 
*/
jb_Promise Observable_some1(Observable* self , jb_Function * predicate, SubscribeOptions * options);

/**
 * @brief Calls the `reduce` method. 
*/
jb_Promise Observable_reduce0(Observable* self , jb_Function * reducer);

/**
 * @brief Calls the `reduce` method. 
*/
jb_Promise Observable_reduce1(Observable* self , jb_Function * reducer, jb_Any * initialValue);

/**
 * @brief Calls the `reduce` method. 
*/
jb_Promise Observable_reduce2(Observable* self , jb_Function * reducer, jb_Any * initialValue, SubscribeOptions * options);

#ifdef __cplusplus
}
#endif
