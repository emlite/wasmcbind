#include <webbind/MessageChannel.h>
#include <webbind/MessagePort.h>


DEFINE_EMLITE_TYPE(MessageChannel, em_Val);


MessageChannel MessageChannel_new() {
        em_Val vv = em_Val_new(em_Val_global("MessageChannel") );
        return MessageChannel_from_val(&vv);
      }


jb_Any MessageChannel_port1(const MessageChannel *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("port1")));
}


jb_Any MessageChannel_port2(const MessageChannel *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("port2")));
}

