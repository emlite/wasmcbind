#include <webbind/ClipboardItem.h>
#include <webbind/Blob.h>


DEFINE_EMLITE_TYPE(ClipboardItem, em_Val);


ClipboardItem ClipboardItem_new(const jb_Record* items) : em_Val(em_Val_global("ClipboardItem").new_(em_Val_from(items))) {
        return ClipboardItem(em_Val_new(em_Val_global("ClipboardItem", em_Val_from(items)));
      }


ClipboardItem ClipboardItem_new(const jb_Record* items, const jb_Any* options) : em_Val(em_Val_global("ClipboardItem").new_(em_Val_from(items), em_Val_from(options))) {
        return ClipboardItem(em_Val_new(em_Val_global("ClipboardItem", em_Val_from(items), em_Val_from(options)));
      }


PresentationStyle ClipboardItem_presentationStyle(const ClipboardItem *self) {
    return em_Val_as(PresentationStyle, em_Val_get(em_Val_as_val(self->inner), "presentationStyle"));
}


jb_FrozenArray ClipboardItem_types(const ClipboardItem *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "types"));
}


jb_Promise ClipboardItem_getType(ClipboardItem* self , const jb_DOMString* type) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getType", em_Val_from(type)));
}


bool ClipboardItem_supports(ClipboardItem* self , const jb_DOMString* type) {
    return em_Val_as(bool, em_Val_call(em_Val_global("clipboarditem"), "supports", em_Val_from(type)));
}

