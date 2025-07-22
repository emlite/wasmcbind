#include <webbind/ClipboardItem.h>
#include <webbind/Blob.h>


DEFINE_EMLITE_TYPE(ClipboardItem, em_Val);


ClipboardItem ClipboardItem_new0(jb_Record * items) {
        em_Val vv = em_Val_new(em_Val_global("ClipboardItem") , em_Val_from(items));
        return ClipboardItem_from_val(&vv);
      }


ClipboardItem ClipboardItem_new1(jb_Record * items, jb_Any * options) {
        em_Val vv = em_Val_new(em_Val_global("ClipboardItem") , em_Val_from(items), em_Val_from(options));
        return ClipboardItem_from_val(&vv);
      }


PresentationStyle ClipboardItem_presentationStyle(const ClipboardItem *self) {
    return em_Val_as(PresentationStyle, em_Val_get(em_Val_as_val(self->inner), em_Val_from("presentationStyle")));
}


jb_FrozenArray ClipboardItem_types(const ClipboardItem *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), em_Val_from("types")));
}


jb_Promise ClipboardItem_getType(ClipboardItem* self , jb_DOMString * type) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getType", em_Val_from(type)));
}


bool ClipboardItem_supports(ClipboardItem* self , jb_DOMString * type) {
    return em_Val_as(bool, em_Val_call(em_Val_global("clipboarditem"), "supports", em_Val_from(type)));
}

