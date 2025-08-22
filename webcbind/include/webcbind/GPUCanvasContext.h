#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct GPUCanvasConfiguration GPUCanvasConfiguration;
typedef struct GPUTexture GPUTexture;


/**
 * @brief Interface GPUCanvasContext
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/GPUCanvasContext)
 */
DECLARE_EMLITE_TYPE(GPUCanvasContext, em_Val);

/**
 * @brief Gets the `canvas` property. 
*/
jb_Any GPUCanvasContext_canvas(const GPUCanvasContext *self);

/**
 * @brief Calls the `configure` method. 
*/
jb_Undefined GPUCanvasContext_configure(GPUCanvasContext* self , GPUCanvasConfiguration * configuration);

/**
 * @brief Calls the `unconfigure` method. 
*/
jb_Undefined GPUCanvasContext_unconfigure(GPUCanvasContext* self );

/**
 * @brief Calls the `getConfiguration` method. 
*/
GPUCanvasConfiguration GPUCanvasContext_getConfiguration(GPUCanvasContext* self );

/**
 * @brief Calls the `getCurrentTexture` method. 
*/
GPUTexture GPUCanvasContext_getCurrentTexture(GPUCanvasContext* self );

#ifdef __cplusplus
}
#endif
