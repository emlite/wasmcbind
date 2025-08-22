#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Module.h"
#include "Instance.h"
#include "Response.h"
#include "WebAssemblyInstantiatedSource.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Module Module;
typedef struct Instance Instance;
typedef struct Response Response;


/**
 * @brief Namespace WebAssembly
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WebAssembly)
 */

/**
 * @brief Calls the \`validate\` method. 
*/
bool WebAssembly_validate(jb_Any * bytes);

/**
 * @brief Calls the \`compile\` method. 
*/
jb_Promise WebAssembly_compile(jb_Any * bytes);

/**
 * @brief Calls the \`instantiate\` method. 
*/
jb_Promise WebAssembly_instantiate0(Module * moduleObject);

/**
 * @brief Calls the \`instantiate\` method. 
*/
jb_Promise WebAssembly_instantiate1(Module * moduleObject, jb_Object * importObject);

/**
 * @brief Calls the \`compileStreaming\` method. 
*/
jb_Promise WebAssembly_compileStreaming(jb_Promise * source);

/**
 * @brief Calls the \`instantiateStreaming\` method. 
*/
jb_Promise WebAssembly_instantiateStreaming0(jb_Promise * source);

/**
 * @brief Calls the \`instantiateStreaming\` method. 
*/
jb_Promise WebAssembly_instantiateStreaming1(jb_Promise * source, jb_Object * importObject);

#ifdef __cplusplus
}
#endif
