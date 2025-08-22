#include <webcbind/NDEFMessage.h>

#include <webcbind/NDEFMessageInit.h>
#include <webcbind/NDEFRecord.h>

DEFINE_EMLITE_TYPE(NDEFMessage, em_Val);


NDEFMessage NDEFMessage_new(NDEFMessageInit * messageInit) {
        em_Val vv = em_Val_new(em_Val_global("NDEFMessage") , em_Val_from(messageInit));
        return NDEFMessage_from_val(&vv);
      }


jb_Array NDEFMessage_records(const NDEFMessage *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("records")));
}

