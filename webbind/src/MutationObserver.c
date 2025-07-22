#include <webbind/MutationObserver.h>
#include <webbind/Node.h>
#include <webbind/MutationRecord.h>


DEFINE_EMLITE_TYPE(MutationObserverInit, em_Val);


bool MutationObserverInit_childList(const MutationObserverInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("childList")));
}


void MutationObserverInit_set_childList(MutationObserverInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("childList"), em_Val_from(value));
}


bool MutationObserverInit_attributes(const MutationObserverInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("attributes")));
}


void MutationObserverInit_set_attributes(MutationObserverInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("attributes"), em_Val_from(value));
}


bool MutationObserverInit_characterData(const MutationObserverInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("characterData")));
}


void MutationObserverInit_set_characterData(MutationObserverInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("characterData"), em_Val_from(value));
}


bool MutationObserverInit_subtree(const MutationObserverInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("subtree")));
}


void MutationObserverInit_set_subtree(MutationObserverInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("subtree"), em_Val_from(value));
}


bool MutationObserverInit_attributeOldValue(const MutationObserverInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("attributeOldValue")));
}


void MutationObserverInit_set_attributeOldValue(MutationObserverInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("attributeOldValue"), em_Val_from(value));
}


bool MutationObserverInit_characterDataOldValue(const MutationObserverInit *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("characterDataOldValue")));
}


void MutationObserverInit_set_characterDataOldValue(MutationObserverInit* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("characterDataOldValue"), em_Val_from(value));
}


jb_Sequence MutationObserverInit_attributeFilter(const MutationObserverInit *self) {
    return em_Val_as(jb_Sequence, em_Val_get(em_Val_as_val(self->inner), em_Val_from("attributeFilter")));
}


void MutationObserverInit_set_attributeFilter(MutationObserverInit* self, jb_Sequence * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("attributeFilter"), em_Val_from(value));
}

DEFINE_EMLITE_TYPE(MutationObserver, em_Val);


MutationObserver MutationObserver_new(jb_Function * callback) {
        em_Val vv = em_Val_new(em_Val_global("MutationObserver") , em_Val_from(callback));
        return MutationObserver_from_val(&vv);
      }


jb_Undefined MutationObserver_observe0(MutationObserver* self , Node * target) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "observe", em_Val_from(target)));
}


jb_Undefined MutationObserver_observe1(MutationObserver* self , Node * target, MutationObserverInit * options) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "observe", em_Val_from(target), em_Val_from(options)));
}


jb_Undefined MutationObserver_disconnect(MutationObserver* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "disconnect"));
}


jb_Sequence MutationObserver_takeRecords(MutationObserver* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "takeRecords"));
}

