#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} OES_draw_buffers_indexed;


DECLARE_EMLITE_TYPE(OES_draw_buffers_indexed, em_Val);

jb_Undefined OES_draw_buffers_indexed_enableiOES(OES_draw_buffers_indexed* self , const jb_Any* target, const jb_Any* index);

jb_Undefined OES_draw_buffers_indexed_disableiOES(OES_draw_buffers_indexed* self , const jb_Any* target, const jb_Any* index);

jb_Undefined OES_draw_buffers_indexed_blendEquationiOES(OES_draw_buffers_indexed* self , const jb_Any* buf, const jb_Any* mode);

jb_Undefined OES_draw_buffers_indexed_blendEquationSeparateiOES(OES_draw_buffers_indexed* self , const jb_Any* buf, const jb_Any* modeRGB, const jb_Any* modeAlpha);

jb_Undefined OES_draw_buffers_indexed_blendFunciOES(OES_draw_buffers_indexed* self , const jb_Any* buf, const jb_Any* src, const jb_Any* dst);

jb_Undefined OES_draw_buffers_indexed_blendFuncSeparateiOES(OES_draw_buffers_indexed* self , const jb_Any* buf, const jb_Any* srcRGB, const jb_Any* dstRGB, const jb_Any* srcAlpha, const jb_Any* dstAlpha);

jb_Undefined OES_draw_buffers_indexed_colorMaskiOES(OES_draw_buffers_indexed* self , const jb_Any* buf, const jb_Any* r, const jb_Any* g, const jb_Any* b, const jb_Any* a);
