#include <webbind/ConstantSourceNode.h>
#include <webbind/AudioParam.h>
#include <webbind/BaseAudioContext.h>


DEFINE_EMLITE_TYPE(ConstantSourceNode, AudioScheduledSourceNode);


ConstantSourceNode ConstantSourceNode_new(const BaseAudioContext* context) : AudioScheduledSourceNode(em_Val_global("ConstantSourceNode").new_(em_Val_from(context))) {
        return ConstantSourceNode(em_Val_new(em_Val_global("ConstantSourceNode", em_Val_from(context)));
      }


ConstantSourceNode ConstantSourceNode_new(const BaseAudioContext* context, const jb_Any* options) : AudioScheduledSourceNode(em_Val_global("ConstantSourceNode").new_(em_Val_from(context), em_Val_from(options))) {
        return ConstantSourceNode(em_Val_new(em_Val_global("ConstantSourceNode", em_Val_from(context), em_Val_from(options)));
      }


AudioParam ConstantSourceNode_offset(const ConstantSourceNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioScheduledSourceNode_as_val(self->inner), "offset"));
}

