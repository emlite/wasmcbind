#include <webcbind/XRMesh.h>

#include <webcbind/XRSpace.h>

DEFINE_EMLITE_TYPE(XRMesh, em_Val);


XRSpace XRMesh_meshSpace(const XRMesh *self) {
    return em_Val_as(XRSpace, em_Val_get(em_Val_as_val(self->inner), em_Val_from("meshSpace")));
}


jb_Array XRMesh_vertices(const XRMesh *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("vertices")));
}


jb_Uint32Array XRMesh_indices(const XRMesh *self) {
    return em_Val_as(jb_Uint32Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("indices")));
}


jb_Any XRMesh_lastChangedTime(const XRMesh *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("lastChangedTime")));
}


jb_String XRMesh_semanticLabel(const XRMesh *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("semanticLabel")));
}

