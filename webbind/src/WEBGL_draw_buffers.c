#include <webbind/WEBGL_draw_buffers.h>


DEFINE_EMLITE_TYPE(WEBGL_draw_buffers, em_Val);


jb_Undefined WEBGL_draw_buffers_drawBuffersWEBGL(WEBGL_draw_buffers* self , jb_Array * buffers) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawBuffersWEBGL", em_Val_from(buffers)));
}

