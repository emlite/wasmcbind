#include <webcbind/MutationObserver.h>

#include <webcbind/Node.h>
#include <webcbind/MutationObserverInit.h>
#include <webcbind/MutationRecord.h>

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


jb_Array MutationObserver_takeRecords(MutationObserver* self ) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_as_val(self->inner), "takeRecords"));
}

