#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface OES_draw_buffers_indexed
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/OES_draw_buffers_indexed)
 */
DECLARE_EMLITE_TYPE(OES_draw_buffers_indexed, em_Val);

/**
 * @brief Calls the `enableiOES` method. 
*/
jb_Undefined OES_draw_buffers_indexed_enableiOES(OES_draw_buffers_indexed* self , jb_Any * target, jb_Any * index);

/**
 * @brief Calls the `disableiOES` method. 
*/
jb_Undefined OES_draw_buffers_indexed_disableiOES(OES_draw_buffers_indexed* self , jb_Any * target, jb_Any * index);

/**
 * @brief Calls the `blendEquationiOES` method. 
*/
jb_Undefined OES_draw_buffers_indexed_blendEquationiOES(OES_draw_buffers_indexed* self , jb_Any * buf, jb_Any * mode);

/**
 * @brief Calls the `blendEquationSeparateiOES` method. 
*/
jb_Undefined OES_draw_buffers_indexed_blendEquationSeparateiOES(OES_draw_buffers_indexed* self , jb_Any * buf, jb_Any * modeRGB, jb_Any * modeAlpha);

/**
 * @brief Calls the `blendFunciOES` method. 
*/
jb_Undefined OES_draw_buffers_indexed_blendFunciOES(OES_draw_buffers_indexed* self , jb_Any * buf, jb_Any * src, jb_Any * dst);

/**
 * @brief Calls the `blendFuncSeparateiOES` method. 
*/
jb_Undefined OES_draw_buffers_indexed_blendFuncSeparateiOES(OES_draw_buffers_indexed* self , jb_Any * buf, jb_Any * srcRGB, jb_Any * dstRGB, jb_Any * srcAlpha, jb_Any * dstAlpha);

/**
 * @brief Calls the `colorMaskiOES` method. 
*/
jb_Undefined OES_draw_buffers_indexed_colorMaskiOES(OES_draw_buffers_indexed* self , jb_Any * buf, jb_Any * r, jb_Any * g, jb_Any * b, jb_Any * a);

#ifdef __cplusplus
}
#endif
