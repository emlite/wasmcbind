#include <webbind/ConvolverNode.h>
#include <webbind/AudioBuffer.h>
#include <webbind/BaseAudioContext.h>


DEFINE_EMLITE_TYPE(ConvolverNode, AudioNode);


ConvolverNode ConvolverNode_new(const BaseAudioContext* context) : AudioNode(em_Val_global("ConvolverNode").new_(em_Val_from(context))) {
        return ConvolverNode(em_Val_new(em_Val_global("ConvolverNode", em_Val_from(context)));
      }


ConvolverNode ConvolverNode_new(const BaseAudioContext* context, const jb_Any* options) : AudioNode(em_Val_global("ConvolverNode").new_(em_Val_from(context), em_Val_from(options))) {
        return ConvolverNode(em_Val_new(em_Val_global("ConvolverNode", em_Val_from(context), em_Val_from(options)));
      }


AudioBuffer ConvolverNode_buffer(const ConvolverNode *self) {
    return em_Val_as(AudioBuffer, em_Val_get(AudioNode_as_val(self->inner), "buffer"));
}


void ConvolverNode_set_buffer(ConvolverNode* self, const AudioBuffer* value) {
    em_Val_set(AudioNode_as_val(self->inner), "buffer", value);
}


bool ConvolverNode_normalize(const ConvolverNode *self) {
    return em_Val_as(bool, em_Val_get(AudioNode_as_val(self->inner), "normalize"));
}


void ConvolverNode_set_normalize(ConvolverNode* self, bool value) {
    em_Val_set(AudioNode_as_val(self->inner), "normalize", value);
}

