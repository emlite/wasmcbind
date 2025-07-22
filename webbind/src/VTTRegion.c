#include <webbind/VTTRegion.h>


DEFINE_EMLITE_TYPE(VTTRegion, em_Val);


VTTRegion VTTRegion_new() : em_Val(em_Val_global("VTTRegion").new_()) {
        return VTTRegion(em_Val_new(em_Val_global("VTTRegion", ));
      }


jb_DOMString VTTRegion_id(const VTTRegion *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "id"));
}


void VTTRegion_set_id(VTTRegion* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "id", value);
}


double VTTRegion_width(const VTTRegion *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "width"));
}


void VTTRegion_set_width(VTTRegion* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "width", value);
}


unsigned long VTTRegion_lines(const VTTRegion *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "lines"));
}


void VTTRegion_set_lines(VTTRegion* self, unsigned long value) {
    em_Val_set(em_Val_as_val(self->inner), "lines", value);
}


double VTTRegion_regionAnchorX(const VTTRegion *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "regionAnchorX"));
}


void VTTRegion_set_regionAnchorX(VTTRegion* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "regionAnchorX", value);
}


double VTTRegion_regionAnchorY(const VTTRegion *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "regionAnchorY"));
}


void VTTRegion_set_regionAnchorY(VTTRegion* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "regionAnchorY", value);
}


double VTTRegion_viewportAnchorX(const VTTRegion *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "viewportAnchorX"));
}


void VTTRegion_set_viewportAnchorX(VTTRegion* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "viewportAnchorX", value);
}


double VTTRegion_viewportAnchorY(const VTTRegion *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "viewportAnchorY"));
}


void VTTRegion_set_viewportAnchorY(VTTRegion* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "viewportAnchorY", value);
}


ScrollSetting VTTRegion_scroll(const VTTRegion *self) {
    return em_Val_as(ScrollSetting, em_Val_get(em_Val_as_val(self->inner), "scroll"));
}


void VTTRegion_set_scroll(VTTRegion* self, const ScrollSetting* value) {
    em_Val_set(em_Val_as_val(self->inner), "scroll", value);
}

