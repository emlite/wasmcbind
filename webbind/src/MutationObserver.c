#include <webbind/MutationObserver.h>
#include <webbind/Node.h>
#include <webbind/MutationRecord.h>


DEFINE_EMLITE_TYPE(MutationObserverInit, em_Val);


bool MutationObserverInit_childList(const MutationObserverInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "childList"));
}


void MutationObserverInit_set_childList(MutationObserverInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "childList", value);
}


bool MutationObserverInit_attributes(const MutationObserverInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "attributes"));
}


void MutationObserverInit_set_attributes(MutationObserverInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "attributes", value);
}


bool MutationObserverInit_characterData(const MutationObserverInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "characterData"));
}


void MutationObserverInit_set_characterData(MutationObserverInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "characterData", value);
}


bool MutationObserverInit_subtree(const MutationObserverInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "subtree"));
}


void MutationObserverInit_set_subtree(MutationObserverInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "subtree", value);
}


bool MutationObserverInit_attributeOldValue(const MutationObserverInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "attributeOldValue"));
}


void MutationObserverInit_set_attributeOldValue(MutationObserverInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "attributeOldValue", value);
}


bool MutationObserverInit_characterDataOldValue(const MutationObserverInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "characterDataOldValue"));
}


void MutationObserverInit_set_characterDataOldValue(MutationObserverInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "characterDataOldValue", value);
}


jb_Sequence MutationObserverInit_attributeFilter(const MutationObserverInit *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), "attributeFilter"));
}


void MutationObserverInit_set_attributeFilter(MutationObserverInit* self, const jb_Sequence* value) {
    em_Val_set(em_Val_as_val(self->inner), "attributeFilter", value);
}

DEFINE_EMLITE_TYPE(MutationObserver, em_Val);


MutationObserver MutationObserver_new(const jb_Function* callback) : em_Val(em_Val_global("MutationObserver").new_(em_Val_from(callback))) {
        return MutationObserver(em_Val_new(em_Val_global("MutationObserver", em_Val_from(callback)));
      }


jb_Undefined MutationObserver_observe(MutationObserver* self , const Node* target) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "observe", em_Val_from(target)));
}


jb_Undefined MutationObserver_observe(MutationObserver* self , const Node* target, const MutationObserverInit* options) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "observe", em_Val_from(target), em_Val_from(options)));
}


jb_Undefined MutationObserver_disconnect(MutationObserver* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "disconnect"));
}


jb_Sequence MutationObserver_takeRecords(MutationObserver* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "takeRecords"));
}

