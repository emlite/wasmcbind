#include <webbind/HTMLTrackElement.h>
#include <webbind/TextTrack.h>


DEFINE_EMLITE_TYPE(HTMLTrackElement, HTMLElement);


HTMLTrackElement HTMLTrackElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLTrackElement") );
        return HTMLTrackElement_from_val(&vv);
      }


jb_String HTMLTrackElement_kind(const HTMLTrackElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("kind")));
}


void HTMLTrackElement_set_kind(HTMLTrackElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("kind"), em_Val_from(value));
}


jb_String HTMLTrackElement_src(const HTMLTrackElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("src")));
}


void HTMLTrackElement_set_src(HTMLTrackElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("src"), em_Val_from(value));
}


jb_String HTMLTrackElement_srclang(const HTMLTrackElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("srclang")));
}


void HTMLTrackElement_set_srclang(HTMLTrackElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("srclang"), em_Val_from(value));
}


jb_String HTMLTrackElement_label(const HTMLTrackElement *self) {
    return em_Val_as(jb_String, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("label")));
}


void HTMLTrackElement_set_label(HTMLTrackElement* self, jb_String * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("label"), em_Val_from(value));
}


bool HTMLTrackElement_default_(const HTMLTrackElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("default")));
}


void HTMLTrackElement_set_default_(HTMLTrackElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("default"), em_Val_from(value));
}


unsigned short HTMLTrackElement_readyState(const HTMLTrackElement *self) {
    return em_Val_as(unsigned short, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("readyState")));
}


TextTrack HTMLTrackElement_track(const HTMLTrackElement *self) {
    return em_Val_as(TextTrack, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("track")));
}

