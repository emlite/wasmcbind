#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} WEBGL_multi_draw;


DECLARE_EMLITE_TYPE(WEBGL_multi_draw, em_Val);

jb_Undefined WEBGL_multi_draw_multiDrawArraysWEBGL(WEBGL_multi_draw* self , const jb_Any* mode, const jb_Any* firstsList, long long firstsOffset, const jb_Any* countsList, long long countsOffset, const jb_Any* drawcount);

jb_Undefined WEBGL_multi_draw_multiDrawElementsWEBGL(WEBGL_multi_draw* self , const jb_Any* mode, const jb_Any* countsList, long long countsOffset, const jb_Any* type, const jb_Any* offsetsList, long long offsetsOffset, const jb_Any* drawcount);

jb_Undefined WEBGL_multi_draw_multiDrawArraysInstancedWEBGL(WEBGL_multi_draw* self , const jb_Any* mode, const jb_Any* firstsList, long long firstsOffset, const jb_Any* countsList, long long countsOffset, const jb_Any* instanceCountsList, long long instanceCountsOffset, const jb_Any* drawcount);

jb_Undefined WEBGL_multi_draw_multiDrawElementsInstancedWEBGL(WEBGL_multi_draw* self , const jb_Any* mode, const jb_Any* countsList, long long countsOffset, const jb_Any* type, const jb_Any* offsetsList, long long offsetsOffset, const jb_Any* instanceCountsList, long long instanceCountsOffset, const jb_Any* drawcount);
