#include <webbind/VTTCue.h>
#include <webbind/VTTRegion.h>
#include <webbind/DocumentFragment.h>


DEFINE_EMLITE_TYPE(VTTCue, TextTrackCue);


VTTCue VTTCue_new(double startTime, double endTime, const jb_DOMString* text) : TextTrackCue(em_Val_global("VTTCue").new_(em_Val_from(startTime), em_Val_from(endTime), em_Val_from(text))) {
        return VTTCue(em_Val_new(em_Val_global("VTTCue", em_Val_from(startTime), em_Val_from(endTime), em_Val_from(text)));
      }


VTTRegion VTTCue_region(const VTTCue *self) {
    return em_Val_as(VTTRegion, em_Val_get(TextTrackCue_as_val(self->inner), "region"));
}


void VTTCue_set_region(VTTCue* self, const VTTRegion* value) {
    em_Val_set(TextTrackCue_as_val(self->inner), "region", value);
}


DirectionSetting VTTCue_vertical(const VTTCue *self) {
    return em_Val_as(DirectionSetting, em_Val_get(TextTrackCue_as_val(self->inner), "vertical"));
}


void VTTCue_set_vertical(VTTCue* self, const DirectionSetting* value) {
    em_Val_set(TextTrackCue_as_val(self->inner), "vertical", value);
}


bool VTTCue_snapToLines(const VTTCue *self) {
    return em_Val_as(bool, em_Val_get(TextTrackCue_as_val(self->inner), "snapToLines"));
}


void VTTCue_set_snapToLines(VTTCue* self, bool value) {
    em_Val_set(TextTrackCue_as_val(self->inner), "snapToLines", value);
}


jb_Any VTTCue_line(const VTTCue *self) {
    return em_Val_as(jb_Any, em_Val_get(TextTrackCue_as_val(self->inner), "line"));
}


void VTTCue_set_line(VTTCue* self, const jb_Any* value) {
    em_Val_set(TextTrackCue_as_val(self->inner), "line", value);
}


LineAlignSetting VTTCue_lineAlign(const VTTCue *self) {
    return em_Val_as(LineAlignSetting, em_Val_get(TextTrackCue_as_val(self->inner), "lineAlign"));
}


void VTTCue_set_lineAlign(VTTCue* self, const LineAlignSetting* value) {
    em_Val_set(TextTrackCue_as_val(self->inner), "lineAlign", value);
}


jb_Any VTTCue_position(const VTTCue *self) {
    return em_Val_as(jb_Any, em_Val_get(TextTrackCue_as_val(self->inner), "position"));
}


void VTTCue_set_position(VTTCue* self, const jb_Any* value) {
    em_Val_set(TextTrackCue_as_val(self->inner), "position", value);
}


PositionAlignSetting VTTCue_positionAlign(const VTTCue *self) {
    return em_Val_as(PositionAlignSetting, em_Val_get(TextTrackCue_as_val(self->inner), "positionAlign"));
}


void VTTCue_set_positionAlign(VTTCue* self, const PositionAlignSetting* value) {
    em_Val_set(TextTrackCue_as_val(self->inner), "positionAlign", value);
}


double VTTCue_size(const VTTCue *self) {
    return em_Val_as(double, em_Val_get(TextTrackCue_as_val(self->inner), "size"));
}


void VTTCue_set_size(VTTCue* self, double value) {
    em_Val_set(TextTrackCue_as_val(self->inner), "size", value);
}


AlignSetting VTTCue_align(const VTTCue *self) {
    return em_Val_as(AlignSetting, em_Val_get(TextTrackCue_as_val(self->inner), "align"));
}


void VTTCue_set_align(VTTCue* self, const AlignSetting* value) {
    em_Val_set(TextTrackCue_as_val(self->inner), "align", value);
}


jb_DOMString VTTCue_text(const VTTCue *self) {
    return em_Val_as(jb_DOMString, em_Val_get(TextTrackCue_as_val(self->inner), "text"));
}


void VTTCue_set_text(VTTCue* self, const jb_DOMString* value) {
    em_Val_set(TextTrackCue_as_val(self->inner), "text", value);
}


DocumentFragment VTTCue_getCueAsHTML(VTTCue* self ) {
    return em_Val_as(DocumentFragment, em_Val_call(TextTrackCue_as_val(self->inner), "getCueAsHTML"));
}

