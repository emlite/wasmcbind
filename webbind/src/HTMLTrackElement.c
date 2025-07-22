#include <webbind/HTMLTrackElement.h>
#include <webbind/TextTrack.h>


DEFINE_EMLITE_TYPE(HTMLTrackElement, HTMLElement);


HTMLTrackElement HTMLTrackElement_new() : HTMLElement(em_Val_global("HTMLTrackElement").new_()) {
        return HTMLTrackElement(em_Val_new(em_Val_global("HTMLTrackElement", ));
      }


jb_DOMString HTMLTrackElement_kind(const HTMLTrackElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "kind"));
}


void HTMLTrackElement_set_kind(HTMLTrackElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "kind", value);
}


jb_USVString HTMLTrackElement_src(const HTMLTrackElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "src"));
}


void HTMLTrackElement_set_src(HTMLTrackElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "src", value);
}


jb_DOMString HTMLTrackElement_srclang(const HTMLTrackElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "srclang"));
}


void HTMLTrackElement_set_srclang(HTMLTrackElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "srclang", value);
}


jb_DOMString HTMLTrackElement_label(const HTMLTrackElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "label"));
}


void HTMLTrackElement_set_label(HTMLTrackElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "label", value);
}


bool HTMLTrackElement_default_(const HTMLTrackElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "default"));
}


void HTMLTrackElement_set_default_(HTMLTrackElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "default", value);
}


unsigned short HTMLTrackElement_readyState(const HTMLTrackElement *self) {
    return em_Val_as(unsigned short, em_Val_get(HTMLElement_as_val(self->inner), "readyState"));
}


TextTrack HTMLTrackElement_track(const HTMLTrackElement *self) {
    return em_Val_as(TextTrack, em_Val_get(HTMLElement_as_val(self->inner), "track"));
}

