#include <webbind/ConvolverNode.h>
#include <webbind/AudioBuffer.h>
#include <webbind/BaseAudioContext.h>


DEFINE_EMLITE_TYPE(ConvolverNode, AudioNode);


ConvolverNode ConvolverNode_new0(BaseAudioContext * context) {
        em_Val vv = em_Val_new(em_Val_global("ConvolverNode") , em_Val_from(context));
        return ConvolverNode_from_val(&vv);
      }


ConvolverNode ConvolverNode_new1(BaseAudioContext * context, jb_Any * options) {
        em_Val vv = em_Val_new(em_Val_global("ConvolverNode") , em_Val_from(context), em_Val_from(options));
        return ConvolverNode_from_val(&vv);
      }


AudioBuffer ConvolverNode_buffer(const ConvolverNode *self) {
    return em_Val_as(AudioBuffer, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("buffer")));
}


void ConvolverNode_set_buffer(ConvolverNode* self, AudioBuffer * value) {
    em_Val_set(AudioNode_as_val(self->inner), em_Val_from("buffer"), em_Val_from(value));
}


bool ConvolverNode_normalize(const ConvolverNode *self) {
    return em_Val_as(bool, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("normalize")));
}


void ConvolverNode_set_normalize(ConvolverNode* self, bool value) {
    em_Val_set(AudioNode_as_val(self->inner), em_Val_from("normalize"), em_Val_from(value));
}

