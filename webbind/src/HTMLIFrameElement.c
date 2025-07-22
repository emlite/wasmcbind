#include <webbind/HTMLIFrameElement.h>
#include <webbind/DOMTokenList.h>
#include <webbind/Document.h>
#include <webbind/PermissionsPolicy.h>


DEFINE_EMLITE_TYPE(HTMLIFrameElement, HTMLElement);


HTMLIFrameElement HTMLIFrameElement_new() : HTMLElement(em_Val_global("HTMLIFrameElement").new_()) {
        return HTMLIFrameElement(em_Val_new(em_Val_global("HTMLIFrameElement", ));
      }


jb_USVString HTMLIFrameElement_src(const HTMLIFrameElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "src"));
}


void HTMLIFrameElement_set_src(HTMLIFrameElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "src", value);
}


jb_Any HTMLIFrameElement_srcdoc(const HTMLIFrameElement *self) {
    return em_Val_as(jb_Any, em_Val_get(HTMLElement_as_val(self->inner), "srcdoc"));
}


void HTMLIFrameElement_set_srcdoc(HTMLIFrameElement* self, const jb_Any* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "srcdoc", value);
}


jb_DOMString HTMLIFrameElement_name(const HTMLIFrameElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "name"));
}


void HTMLIFrameElement_set_name(HTMLIFrameElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "name", value);
}


DOMTokenList HTMLIFrameElement_sandbox(const HTMLIFrameElement *self) {
    return em_Val_as(DOMTokenList, em_Val_get(HTMLElement_as_val(self->inner), "sandbox"));
}


jb_DOMString HTMLIFrameElement_allow(const HTMLIFrameElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "allow"));
}


void HTMLIFrameElement_set_allow(HTMLIFrameElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "allow", value);
}


bool HTMLIFrameElement_allowFullscreen(const HTMLIFrameElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "allowFullscreen"));
}


void HTMLIFrameElement_set_allowFullscreen(HTMLIFrameElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "allowFullscreen", value);
}


jb_DOMString HTMLIFrameElement_width(const HTMLIFrameElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "width"));
}


void HTMLIFrameElement_set_width(HTMLIFrameElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "width", value);
}


jb_DOMString HTMLIFrameElement_height(const HTMLIFrameElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "height"));
}


void HTMLIFrameElement_set_height(HTMLIFrameElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "height", value);
}


jb_DOMString HTMLIFrameElement_referrerPolicy(const HTMLIFrameElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "referrerPolicy"));
}


void HTMLIFrameElement_set_referrerPolicy(HTMLIFrameElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "referrerPolicy", value);
}


jb_DOMString HTMLIFrameElement_loading(const HTMLIFrameElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "loading"));
}


void HTMLIFrameElement_set_loading(HTMLIFrameElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "loading", value);
}


Document HTMLIFrameElement_contentDocument(const HTMLIFrameElement *self) {
    return em_Val_as(Document, em_Val_get(HTMLElement_as_val(self->inner), "contentDocument"));
}


jb_Any HTMLIFrameElement_contentWindow(const HTMLIFrameElement *self) {
    return em_Val_as(jb_Any, em_Val_get(HTMLElement_as_val(self->inner), "contentWindow"));
}


Document HTMLIFrameElement_getSVGDocument(HTMLIFrameElement* self ) {
    return em_Val_as(Document, em_Val_call(HTMLElement_as_val(self->inner), "getSVGDocument"));
}


bool HTMLIFrameElement_credentialless(const HTMLIFrameElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "credentialless"));
}


void HTMLIFrameElement_set_credentialless(HTMLIFrameElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "credentialless", value);
}


jb_DOMString HTMLIFrameElement_csp(const HTMLIFrameElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "csp"));
}


void HTMLIFrameElement_set_csp(HTMLIFrameElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "csp", value);
}


jb_DOMString HTMLIFrameElement_align(const HTMLIFrameElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "align"));
}


void HTMLIFrameElement_set_align(HTMLIFrameElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "align", value);
}


jb_DOMString HTMLIFrameElement_scrolling(const HTMLIFrameElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "scrolling"));
}


void HTMLIFrameElement_set_scrolling(HTMLIFrameElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "scrolling", value);
}


jb_DOMString HTMLIFrameElement_frameBorder(const HTMLIFrameElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "frameBorder"));
}


void HTMLIFrameElement_set_frameBorder(HTMLIFrameElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "frameBorder", value);
}


jb_USVString HTMLIFrameElement_longDesc(const HTMLIFrameElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), "longDesc"));
}


void HTMLIFrameElement_set_longDesc(HTMLIFrameElement* self, const jb_USVString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "longDesc", value);
}


jb_DOMString HTMLIFrameElement_marginHeight(const HTMLIFrameElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "marginHeight"));
}


void HTMLIFrameElement_set_marginHeight(HTMLIFrameElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "marginHeight", value);
}


jb_DOMString HTMLIFrameElement_marginWidth(const HTMLIFrameElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "marginWidth"));
}


void HTMLIFrameElement_set_marginWidth(HTMLIFrameElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "marginWidth", value);
}


PermissionsPolicy HTMLIFrameElement_permissionsPolicy(const HTMLIFrameElement *self) {
    return em_Val_as(PermissionsPolicy, em_Val_get(HTMLElement_as_val(self->inner), "permissionsPolicy"));
}


jb_DOMString HTMLIFrameElement_privateToken(const HTMLIFrameElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), "privateToken"));
}


void HTMLIFrameElement_set_privateToken(HTMLIFrameElement* self, const jb_DOMString* value) {
    em_Val_set(HTMLElement_as_val(self->inner), "privateToken", value);
}


bool HTMLIFrameElement_adAuctionHeaders(const HTMLIFrameElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "adAuctionHeaders"));
}


void HTMLIFrameElement_set_adAuctionHeaders(HTMLIFrameElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "adAuctionHeaders", value);
}


bool HTMLIFrameElement_sharedStorageWritable(const HTMLIFrameElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "sharedStorageWritable"));
}


void HTMLIFrameElement_set_sharedStorageWritable(HTMLIFrameElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "sharedStorageWritable", value);
}

