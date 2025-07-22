#include <webbind/MessageChannel.h>
#include <webbind/MessagePort.h>


DEFINE_EMLITE_TYPE(MessageChannel, em_Val);


MessageChannel MessageChannel_new() : em_Val(em_Val_global("MessageChannel").new_()) {
        return MessageChannel(em_Val_new(em_Val_global("MessageChannel", ));
      }


jb_Any MessageChannel_port1(const MessageChannel *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "port1"));
}


jb_Any MessageChannel_port2(const MessageChannel *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "port2"));
}

