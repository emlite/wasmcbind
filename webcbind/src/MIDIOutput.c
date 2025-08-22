#include <webcbind/MIDIOutput.h>

DEFINE_EMLITE_TYPE(MIDIOutput, MIDIPort);


jb_Undefined MIDIOutput_send0(MIDIOutput* self , jb_Array * data) {
    return em_Val_as(jb_Undefined, em_Val_call(MIDIPort_as_val(self->inner), "send", em_Val_from(data)));
}


jb_Undefined MIDIOutput_send1(MIDIOutput* self , jb_Array * data, jb_Any * timestamp) {
    return em_Val_as(jb_Undefined, em_Val_call(MIDIPort_as_val(self->inner), "send", em_Val_from(data), em_Val_from(timestamp)));
}


jb_Undefined MIDIOutput_clear(MIDIOutput* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(MIDIPort_as_val(self->inner), "clear"));
}

