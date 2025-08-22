#include <webcbind/AudioDestinationNode.h>

DEFINE_EMLITE_TYPE(AudioDestinationNode, AudioNode);


unsigned long AudioDestinationNode_maxChannelCount(const AudioDestinationNode *self) {
    return em_Val_as(unsigned long, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("maxChannelCount")));
}

