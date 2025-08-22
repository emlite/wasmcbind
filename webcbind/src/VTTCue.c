#include <webcbind/VTTCue.h>

#include <webcbind/VTTRegion.h>
#include <webcbind/DocumentFragment.h>

DEFINE_EMLITE_TYPE(VTTCue, TextTrackCue);


VTTCue VTTCue_new(double startTime, double endTime, jb_String * text) {
        em_Val vv = em_Val_new(em_Val_global("VTTCue") , em_Val_from(startTime), em_Val_from(endTime), em_Val_from(text));
        return VTTCue_from_val(&vv);
      }


VTTRegion VTTCue_region(const VTTCue *self) {
    return em_Val_as(VTTRegion, em_Val_get(TextTrackCue_as_val(self->inner), em_Val_from("region")));
}


void VTTCue_set_region(VTTCue* self, VTTRegion * value) {
    em_Val_set(TextTrackCue_as_val(self->inner), em_Val_from("region"), em_Val_from(value));
}


DirectionSetting VTTCue_vertical(const VTTCue *self) {
    return em_Val_as(DirectionSetting, em_Val_get(TextTrackCue_as_val(self->inner), em_Val_from("vertical")));
}


void VTTCue_set_vertical(VTTCue* self, DirectionSetting * value) {
    em_Val_set(TextTrackCue_as_val(self->inner), em_Val_from("vertical"), em_Val_from(value));
}


bool VTTCue_snapToLines(const VTTCue *self) {
    return em_Val_as(bool, em_Val_get(TextTrackCue_as_val(self->inner), em_Val_from("snapToLines")));
}


void VTTCue_set_snapToLines(VTTCue* self, bool value) {
    em_Val_set(TextTrackCue_as_val(self->inner), em_Val_from("snapToLines"), em_Val_from(value));
}


jb_Any VTTCue_line(const VTTCue *self) {
    return em_Val_as(jb_Any, em_Val_get(TextTrackCue_as_val(self->inner), em_Val_from("line")));
}


void VTTCue_set_line(VTTCue* self, jb_Any * value) {
    em_Val_set(TextTrackCue_as_val(self->inner), em_Val_from("line"), em_Val_from(value));
}


LineAlignSetting VTTCue_lineAlign(const VTTCue *self) {
    return em_Val_as(LineAlignSetting, em_Val_get(TextTrackCue_as_val(self->inner), em_Val_from("lineAlign")));
}


void VTTCue_set_lineAlign(VTTCue* self, LineAlignSetting * value) {
    em_Val_set(TextTrackCue_as_val(self->inner), em_Val_from("lineAlign"), em_Val_from(value));
}


jb_Any VTTCue_position(const VTTCue *self) {
    return em_Val_as(jb_Any, em_Val_get(TextTrackCue_as_val(self->inner), em_Val_from("position")));
}


void VTTCue_set_position(VTTCue* self, jb_Any * value) {
    em_Val_set(TextTrackCue_as_val(self->inner), em_Val_from("position"), em_Val_from(value));
}


PositionAlignSetting VTTCue_positionAlign(const VTTCue *self) {
    return em_Val_as(PositionAlignSetting, em_Val_get(TextTrackCue_as_val(self->inner), em_Val_from("positionAlign")));
}


void VTTCue_set_positionAlign(VTTCue* self, PositionAlignSetting * value) {
    em_Val_set(TextTrackCue_as_val(self->inner), em_Val_from("positionAlign"), em_Val_from(value));
}


double VTTCue_size(const VTTCue *self) {
    return em_Val_as(double, em_Val_get(TextTrackCue_as_val(self->inner), em_Val_from("size")));
}


void VTTCue_set_size(VTTCue* self, double value) {
    em_Val_set(TextTrackCue_as_val(self->inner), em_Val_from("size"), em_Val_from(value));
}


AlignSetting VTTCue_align(const VTTCue *self) {
    return em_Val_as(AlignSetting, em_Val_get(TextTrackCue_as_val(self->inner), em_Val_from("align")));
}


void VTTCue_set_align(VTTCue* self, AlignSetting * value) {
    em_Val_set(TextTrackCue_as_val(self->inner), em_Val_from("align"), em_Val_from(value));
}


jb_String VTTCue_text(const VTTCue *self) {
    return em_Val_as(jb_String, em_Val_get(TextTrackCue_as_val(self->inner), em_Val_from("text")));
}


void VTTCue_set_text(VTTCue* self, jb_String * value) {
    em_Val_set(TextTrackCue_as_val(self->inner), em_Val_from("text"), em_Val_from(value));
}


DocumentFragment VTTCue_getCueAsHTML(VTTCue* self ) {
    return em_Val_as(DocumentFragment, em_Val_call(TextTrackCue_as_val(self->inner), "getCueAsHTML"));
}

