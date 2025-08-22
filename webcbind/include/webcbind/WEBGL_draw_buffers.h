#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface WEBGL_draw_buffers
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_draw_buffers)
 */
DECLARE_EMLITE_TYPE(WEBGL_draw_buffers, em_Val);

/**
 * @brief Calls the `drawBuffersWEBGL` method. 
*/
jb_Undefined WEBGL_draw_buffers_drawBuffersWEBGL(WEBGL_draw_buffers* self , jb_Array * buffers);

#ifdef __cplusplus
}
#endif
