#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "WritableStreamDefaultWriter.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface WebTransportWriter
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WebTransportWriter)
 */
DECLARE_EMLITE_TYPE(WebTransportWriter, WritableStreamDefaultWriter);

/**
 * @brief Calls the `atomicWrite` method. 
*/
jb_Promise WebTransportWriter_atomicWrite0(WebTransportWriter* self );

/**
 * @brief Calls the `atomicWrite` method. 
*/
jb_Promise WebTransportWriter_atomicWrite1(WebTransportWriter* self , jb_Any * chunk);

/**
 * @brief Calls the `commit` method. 
*/
jb_Undefined WebTransportWriter_commit(WebTransportWriter* self );

#ifdef __cplusplus
}
#endif
