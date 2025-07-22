#include <webbind/HTMLIFrameElement.h>
#include <webbind/DOMTokenList.h>
#include <webbind/Document.h>
#include <webbind/PermissionsPolicy.h>


DEFINE_EMLITE_TYPE(HTMLIFrameElement, HTMLElement);


HTMLIFrameElement HTMLIFrameElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLIFrameElement") );
        return HTMLIFrameElement_from_val(&vv);
      }


jb_USVString HTMLIFrameElement_src(const HTMLIFrameElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("src")));
}


void HTMLIFrameElement_set_src(HTMLIFrameElement* self, jb_USVString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("src"), em_Val_from(value));
}


jb_Any HTMLIFrameElement_srcdoc(const HTMLIFrameElement *self) {
    return em_Val_as(jb_Any, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("srcdoc")));
}


void HTMLIFrameElement_set_srcdoc(HTMLIFrameElement* self, jb_Any * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("srcdoc"), em_Val_from(value));
}


jb_DOMString HTMLIFrameElement_name(const HTMLIFrameElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("name")));
}


void HTMLIFrameElement_set_name(HTMLIFrameElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("name"), em_Val_from(value));
}


DOMTokenList HTMLIFrameElement_sandbox(const HTMLIFrameElement *self) {
    return em_Val_as(DOMTokenList, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("sandbox")));
}


jb_DOMString HTMLIFrameElement_allow(const HTMLIFrameElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("allow")));
}


void HTMLIFrameElement_set_allow(HTMLIFrameElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("allow"), em_Val_from(value));
}


bool HTMLIFrameElement_allowFullscreen(const HTMLIFrameElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("allowFullscreen")));
}


void HTMLIFrameElement_set_allowFullscreen(HTMLIFrameElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("allowFullscreen"), em_Val_from(value));
}


jb_DOMString HTMLIFrameElement_width(const HTMLIFrameElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("width")));
}


void HTMLIFrameElement_set_width(HTMLIFrameElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("width"), em_Val_from(value));
}


jb_DOMString HTMLIFrameElement_height(const HTMLIFrameElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("height")));
}


void HTMLIFrameElement_set_height(HTMLIFrameElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("height"), em_Val_from(value));
}


jb_DOMString HTMLIFrameElement_referrerPolicy(const HTMLIFrameElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("referrerPolicy")));
}


void HTMLIFrameElement_set_referrerPolicy(HTMLIFrameElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("referrerPolicy"), em_Val_from(value));
}


jb_DOMString HTMLIFrameElement_loading(const HTMLIFrameElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("loading")));
}


void HTMLIFrameElement_set_loading(HTMLIFrameElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("loading"), em_Val_from(value));
}


Document HTMLIFrameElement_contentDocument(const HTMLIFrameElement *self) {
    return em_Val_as(Document, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("contentDocument")));
}


jb_Any HTMLIFrameElement_contentWindow(const HTMLIFrameElement *self) {
    return em_Val_as(jb_Any, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("contentWindow")));
}


Document HTMLIFrameElement_getSVGDocument(HTMLIFrameElement* self ) {
    return em_Val_as(Document, em_Val_call(HTMLElement_as_val(self->inner), "getSVGDocument"));
}


bool HTMLIFrameElement_credentialless(const HTMLIFrameElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("credentialless")));
}


void HTMLIFrameElement_set_credentialless(HTMLIFrameElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("credentialless"), em_Val_from(value));
}


jb_DOMString HTMLIFrameElement_csp(const HTMLIFrameElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("csp")));
}


void HTMLIFrameElement_set_csp(HTMLIFrameElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("csp"), em_Val_from(value));
}


jb_DOMString HTMLIFrameElement_align(const HTMLIFrameElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("align")));
}


void HTMLIFrameElement_set_align(HTMLIFrameElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("align"), em_Val_from(value));
}


jb_DOMString HTMLIFrameElement_scrolling(const HTMLIFrameElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("scrolling")));
}


void HTMLIFrameElement_set_scrolling(HTMLIFrameElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("scrolling"), em_Val_from(value));
}


jb_DOMString HTMLIFrameElement_frameBorder(const HTMLIFrameElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("frameBorder")));
}


void HTMLIFrameElement_set_frameBorder(HTMLIFrameElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("frameBorder"), em_Val_from(value));
}


jb_USVString HTMLIFrameElement_longDesc(const HTMLIFrameElement *self) {
    return em_Val_as(jb_USVString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("longDesc")));
}


void HTMLIFrameElement_set_longDesc(HTMLIFrameElement* self, jb_USVString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("longDesc"), em_Val_from(value));
}


jb_DOMString HTMLIFrameElement_marginHeight(const HTMLIFrameElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("marginHeight")));
}


void HTMLIFrameElement_set_marginHeight(HTMLIFrameElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("marginHeight"), em_Val_from(value));
}


jb_DOMString HTMLIFrameElement_marginWidth(const HTMLIFrameElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("marginWidth")));
}


void HTMLIFrameElement_set_marginWidth(HTMLIFrameElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("marginWidth"), em_Val_from(value));
}


PermissionsPolicy HTMLIFrameElement_permissionsPolicy(const HTMLIFrameElement *self) {
    return em_Val_as(PermissionsPolicy, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("permissionsPolicy")));
}


jb_DOMString HTMLIFrameElement_privateToken(const HTMLIFrameElement *self) {
    return em_Val_as(jb_DOMString, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("privateToken")));
}


void HTMLIFrameElement_set_privateToken(HTMLIFrameElement* self, jb_DOMString * value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("privateToken"), em_Val_from(value));
}


bool HTMLIFrameElement_adAuctionHeaders(const HTMLIFrameElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("adAuctionHeaders")));
}


void HTMLIFrameElement_set_adAuctionHeaders(HTMLIFrameElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("adAuctionHeaders"), em_Val_from(value));
}


bool HTMLIFrameElement_sharedStorageWritable(const HTMLIFrameElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("sharedStorageWritable")));
}


void HTMLIFrameElement_set_sharedStorageWritable(HTMLIFrameElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("sharedStorageWritable"), em_Val_from(value));
}

