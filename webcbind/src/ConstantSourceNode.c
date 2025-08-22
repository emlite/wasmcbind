#include <webcbind/ConstantSourceNode.h>

#include <webcbind/BaseAudioContext.h>
#include <webcbind/ConstantSourceOptions.h>
#include <webcbind/AudioParam.h>

DEFINE_EMLITE_TYPE(ConstantSourceNode, AudioScheduledSourceNode);


ConstantSourceNode ConstantSourceNode_new0(BaseAudioContext * context) {
        em_Val vv = em_Val_new(em_Val_global("ConstantSourceNode") , em_Val_from(context));
        return ConstantSourceNode_from_val(&vv);
      }


ConstantSourceNode ConstantSourceNode_new1(BaseAudioContext * context, ConstantSourceOptions * options) {
        em_Val vv = em_Val_new(em_Val_global("ConstantSourceNode") , em_Val_from(context), em_Val_from(options));
        return ConstantSourceNode_from_val(&vv);
      }


AudioParam ConstantSourceNode_offset(const ConstantSourceNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioScheduledSourceNode_as_val(self->inner), em_Val_from("offset")));
}

