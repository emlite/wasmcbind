#include <webbind/CSSImportRule.h>
#include <webbind/MediaList.h>
#include <webbind/CSSStyleSheet.h>


DEFINE_EMLITE_TYPE(CSSImportRule, CSSRule);


jb_USVString CSSImportRule_href(const CSSImportRule *self) {
    return em_Val_as(jb_USVString, em_Val_get(CSSRule_as_val(self->inner), "href"));
}


MediaList CSSImportRule_media(const CSSImportRule *self) {
    return em_Val_as(MediaList, em_Val_get(CSSRule_as_val(self->inner), "media"));
}


CSSStyleSheet CSSImportRule_styleSheet(const CSSImportRule *self) {
    return em_Val_as(CSSStyleSheet, em_Val_get(CSSRule_as_val(self->inner), "styleSheet"));
}


jb_CSSOMString CSSImportRule_layerName(const CSSImportRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), "layerName"));
}


jb_CSSOMString CSSImportRule_supportsText(const CSSImportRule *self) {
    return em_Val_as(jb_CSSOMString, em_Val_get(CSSRule_as_val(self->inner), "supportsText"));
}

