#include <webcbind/VTTRegion.h>

DEFINE_EMLITE_TYPE(VTTRegion, em_Val);


VTTRegion VTTRegion_new() {
        em_Val vv = em_Val_new(em_Val_global("VTTRegion") );
        return VTTRegion_from_val(&vv);
      }


jb_String VTTRegion_id(const VTTRegion *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("id")));
}


void VTTRegion_set_id(VTTRegion* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("id"), em_Val_from(value));
}


double VTTRegion_width(const VTTRegion *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("width")));
}


void VTTRegion_set_width(VTTRegion* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("width"), em_Val_from(value));
}


unsigned long VTTRegion_lines(const VTTRegion *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("lines")));
}


void VTTRegion_set_lines(VTTRegion* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("lines"), em_Val_from(value));
}


double VTTRegion_regionAnchorX(const VTTRegion *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("regionAnchorX")));
}


void VTTRegion_set_regionAnchorX(VTTRegion* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("regionAnchorX"), em_Val_from(value));
}


double VTTRegion_regionAnchorY(const VTTRegion *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("regionAnchorY")));
}


void VTTRegion_set_regionAnchorY(VTTRegion* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("regionAnchorY"), em_Val_from(value));
}


double VTTRegion_viewportAnchorX(const VTTRegion *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("viewportAnchorX")));
}


void VTTRegion_set_viewportAnchorX(VTTRegion* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("viewportAnchorX"), em_Val_from(value));
}


double VTTRegion_viewportAnchorY(const VTTRegion *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("viewportAnchorY")));
}


void VTTRegion_set_viewportAnchorY(VTTRegion* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("viewportAnchorY"), em_Val_from(value));
}


ScrollSetting VTTRegion_scroll(const VTTRegion *self) {
    return em_Val_as(ScrollSetting, em_Val_get(em_Val_as_val(self->inner), em_Val_from("scroll")));
}


void VTTRegion_set_scroll(VTTRegion* self, ScrollSetting * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("scroll"), em_Val_from(value));
}

