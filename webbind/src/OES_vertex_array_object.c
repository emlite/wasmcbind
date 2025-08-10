#include <webbind/OES_vertex_array_object.h>

#include <webbind/WebGLVertexArrayObjectOES.h>

DEFINE_EMLITE_TYPE(OES_vertex_array_object, em_Val);


WebGLVertexArrayObjectOES OES_vertex_array_object_createVertexArrayOES(OES_vertex_array_object* self ) {
    return em_Val_as(WebGLVertexArrayObjectOES, em_Val_call(em_Val_as_val(self->inner), "createVertexArrayOES"));
}


jb_Undefined OES_vertex_array_object_deleteVertexArrayOES(OES_vertex_array_object* self , WebGLVertexArrayObjectOES * arrayObject) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "deleteVertexArrayOES", em_Val_from(arrayObject)));
}


jb_Any OES_vertex_array_object_isVertexArrayOES(OES_vertex_array_object* self , WebGLVertexArrayObjectOES * arrayObject) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "isVertexArrayOES", em_Val_from(arrayObject)));
}


jb_Undefined OES_vertex_array_object_bindVertexArrayOES(OES_vertex_array_object* self , WebGLVertexArrayObjectOES * arrayObject) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "bindVertexArrayOES", em_Val_from(arrayObject)));
}

