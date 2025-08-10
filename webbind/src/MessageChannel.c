#include <webbind/MessageChannel.h>

#include <webbind/MessagePort.h>

DEFINE_EMLITE_TYPE(MessageChannel, em_Val);


MessageChannel MessageChannel_new() {
        em_Val vv = em_Val_new(em_Val_global("MessageChannel") );
        return MessageChannel_from_val(&vv);
      }


MessagePort MessageChannel_port1(const MessageChannel *self) {
    return em_Val_as(MessagePort, em_Val_get(em_Val_as_val(self->inner), em_Val_from("port1")));
}


MessagePort MessageChannel_port2(const MessageChannel *self) {
    return em_Val_as(MessagePort, em_Val_get(em_Val_as_val(self->inner), em_Val_from("port2")));
}

