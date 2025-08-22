#include <webcbind/WebTransportSendGroup.h>

#include <webcbind/WebTransportSendStreamStats.h>

DEFINE_EMLITE_TYPE(WebTransportSendGroup, em_Val);


jb_Promise WebTransportSendGroup_getStats(WebTransportSendGroup* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "getStats"));
}

