#include <webbind/MIDIOutput.h>


DEFINE_EMLITE_TYPE(MIDIOutput, MIDIPort);


jb_Undefined MIDIOutput_send(MIDIOutput* self , const jb_Sequence* data) {
    return em_Val_as(jb_Undefined, em_Val_call(MIDIPort_as_val(self->inner), "send", em_Val_from(data)));
}


jb_Undefined MIDIOutput_send(MIDIOutput* self , const jb_Sequence* data, const jb_Any* timestamp) {
    return em_Val_as(jb_Undefined, em_Val_call(MIDIPort_as_val(self->inner), "send", em_Val_from(data), em_Val_from(timestamp)));
}


jb_Undefined MIDIOutput_clear(MIDIOutput* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(MIDIPort_as_val(self->inner), "clear"));
}

