#include <webbind/ScriptProcessorNode.h>


DEFINE_EMLITE_TYPE(ScriptProcessorNode, AudioNode);


jb_Any ScriptProcessorNode_onaudioprocess(const ScriptProcessorNode *self) {
    return em_Val_as(jb_Any, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("onaudioprocess")));
}


void ScriptProcessorNode_set_onaudioprocess(ScriptProcessorNode* self, jb_Any * value) {
    em_Val_set(AudioNode_as_val(self->inner), em_Val_from("onaudioprocess"), em_Val_from(value));
}


long ScriptProcessorNode_bufferSize(const ScriptProcessorNode *self) {
    return em_Val_as(long, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("bufferSize")));
}

