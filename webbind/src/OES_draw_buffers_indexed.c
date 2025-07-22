#include <webbind/OES_draw_buffers_indexed.h>


DEFINE_EMLITE_TYPE(OES_draw_buffers_indexed, em_Val);


jb_Undefined OES_draw_buffers_indexed_enableiOES(OES_draw_buffers_indexed* self , const jb_Any* target, const jb_Any* index) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "enableiOES", em_Val_from(target), em_Val_from(index)));
}


jb_Undefined OES_draw_buffers_indexed_disableiOES(OES_draw_buffers_indexed* self , const jb_Any* target, const jb_Any* index) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "disableiOES", em_Val_from(target), em_Val_from(index)));
}


jb_Undefined OES_draw_buffers_indexed_blendEquationiOES(OES_draw_buffers_indexed* self , const jb_Any* buf, const jb_Any* mode) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "blendEquationiOES", em_Val_from(buf), em_Val_from(mode)));
}


jb_Undefined OES_draw_buffers_indexed_blendEquationSeparateiOES(OES_draw_buffers_indexed* self , const jb_Any* buf, const jb_Any* modeRGB, const jb_Any* modeAlpha) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "blendEquationSeparateiOES", em_Val_from(buf), em_Val_from(modeRGB), em_Val_from(modeAlpha)));
}


jb_Undefined OES_draw_buffers_indexed_blendFunciOES(OES_draw_buffers_indexed* self , const jb_Any* buf, const jb_Any* src, const jb_Any* dst) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "blendFunciOES", em_Val_from(buf), em_Val_from(src), em_Val_from(dst)));
}


jb_Undefined OES_draw_buffers_indexed_blendFuncSeparateiOES(OES_draw_buffers_indexed* self , const jb_Any* buf, const jb_Any* srcRGB, const jb_Any* dstRGB, const jb_Any* srcAlpha, const jb_Any* dstAlpha) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "blendFuncSeparateiOES", em_Val_from(buf), em_Val_from(srcRGB), em_Val_from(dstRGB), em_Val_from(srcAlpha), em_Val_from(dstAlpha)));
}


jb_Undefined OES_draw_buffers_indexed_colorMaskiOES(OES_draw_buffers_indexed* self , const jb_Any* buf, const jb_Any* r, const jb_Any* g, const jb_Any* b, const jb_Any* a) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "colorMaskiOES", em_Val_from(buf), em_Val_from(r), em_Val_from(g), em_Val_from(b), em_Val_from(a)));
}

