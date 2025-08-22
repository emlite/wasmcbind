#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Interface WEBGL_multi_draw
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/WEBGL_multi_draw)
 */
DECLARE_EMLITE_TYPE(WEBGL_multi_draw, em_Val);

/**
 * @brief Calls the `multiDrawArraysWEBGL` method. 
*/
jb_Undefined WEBGL_multi_draw_multiDrawArraysWEBGL(WEBGL_multi_draw* self , jb_Any * mode, jb_Any * firstsList, long long firstsOffset, jb_Any * countsList, long long countsOffset, jb_Any * drawcount);

/**
 * @brief Calls the `multiDrawElementsWEBGL` method. 
*/
jb_Undefined WEBGL_multi_draw_multiDrawElementsWEBGL(WEBGL_multi_draw* self , jb_Any * mode, jb_Any * countsList, long long countsOffset, jb_Any * type, jb_Any * offsetsList, long long offsetsOffset, jb_Any * drawcount);

/**
 * @brief Calls the `multiDrawArraysInstancedWEBGL` method. 
*/
jb_Undefined WEBGL_multi_draw_multiDrawArraysInstancedWEBGL(WEBGL_multi_draw* self , jb_Any * mode, jb_Any * firstsList, long long firstsOffset, jb_Any * countsList, long long countsOffset, jb_Any * instanceCountsList, long long instanceCountsOffset, jb_Any * drawcount);

/**
 * @brief Calls the `multiDrawElementsInstancedWEBGL` method. 
*/
jb_Undefined WEBGL_multi_draw_multiDrawElementsInstancedWEBGL(WEBGL_multi_draw* self , jb_Any * mode, jb_Any * countsList, long long countsOffset, jb_Any * type, jb_Any * offsetsList, long long offsetsOffset, jb_Any * instanceCountsList, long long instanceCountsOffset, jb_Any * drawcount);

#ifdef __cplusplus
}
#endif
