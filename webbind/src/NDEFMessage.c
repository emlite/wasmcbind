#include <webbind/NDEFMessage.h>
#include <webbind/NDEFRecord.h>


DEFINE_EMLITE_TYPE(NDEFMessage, em_Val);


NDEFMessage NDEFMessage_new(const jb_Any* messageInit) : em_Val(em_Val_global("NDEFMessage").new_(em_Val_from(messageInit))) {
        return NDEFMessage(em_Val_new(em_Val_global("NDEFMessage", em_Val_from(messageInit)));
      }


jb_FrozenArray NDEFMessage_records(const NDEFMessage *self) {
    return em_Val_as(jb_FrozenArray, em_Val_get(em_Val_as_val(self->inner), "records"));
}

