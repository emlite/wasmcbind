#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "MIDIPort.h"
#include "enums.h"


typedef struct {
  MIDIPort inner;
} MIDIOutput;


DECLARE_EMLITE_TYPE(MIDIOutput, MIDIPort);

jb_Undefined MIDIOutput_send(MIDIOutput* self , const jb_Sequence* data);

jb_Undefined MIDIOutput_send(MIDIOutput* self , const jb_Sequence* data, const jb_Any* timestamp);

jb_Undefined MIDIOutput_clear(MIDIOutput* self );
