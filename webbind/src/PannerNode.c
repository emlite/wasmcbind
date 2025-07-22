#include <webbind/PannerNode.h>
#include <webbind/AudioParam.h>
#include <webbind/BaseAudioContext.h>


DEFINE_EMLITE_TYPE(PannerNode, AudioNode);


PannerNode PannerNode_new(const BaseAudioContext* context) : AudioNode(em_Val_global("PannerNode").new_(em_Val_from(context))) {
        return PannerNode(em_Val_new(em_Val_global("PannerNode", em_Val_from(context)));
      }


PannerNode PannerNode_new(const BaseAudioContext* context, const jb_Any* options) : AudioNode(em_Val_global("PannerNode").new_(em_Val_from(context), em_Val_from(options))) {
        return PannerNode(em_Val_new(em_Val_global("PannerNode", em_Val_from(context), em_Val_from(options)));
      }


PanningModelType PannerNode_panningModel(const PannerNode *self) {
    return em_Val_as(PanningModelType, em_Val_get(AudioNode_as_val(self->inner), "panningModel"));
}


void PannerNode_set_panningModel(PannerNode* self, const PanningModelType* value) {
    em_Val_set(AudioNode_as_val(self->inner), "panningModel", value);
}


AudioParam PannerNode_positionX(const PannerNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), "positionX"));
}


AudioParam PannerNode_positionY(const PannerNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), "positionY"));
}


AudioParam PannerNode_positionZ(const PannerNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), "positionZ"));
}


AudioParam PannerNode_orientationX(const PannerNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), "orientationX"));
}


AudioParam PannerNode_orientationY(const PannerNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), "orientationY"));
}


AudioParam PannerNode_orientationZ(const PannerNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), "orientationZ"));
}


DistanceModelType PannerNode_distanceModel(const PannerNode *self) {
    return em_Val_as(DistanceModelType, em_Val_get(AudioNode_as_val(self->inner), "distanceModel"));
}


void PannerNode_set_distanceModel(PannerNode* self, const DistanceModelType* value) {
    em_Val_set(AudioNode_as_val(self->inner), "distanceModel", value);
}


double PannerNode_refDistance(const PannerNode *self) {
    return em_Val_as(double, em_Val_get(AudioNode_as_val(self->inner), "refDistance"));
}


void PannerNode_set_refDistance(PannerNode* self, double value) {
    em_Val_set(AudioNode_as_val(self->inner), "refDistance", value);
}


double PannerNode_maxDistance(const PannerNode *self) {
    return em_Val_as(double, em_Val_get(AudioNode_as_val(self->inner), "maxDistance"));
}


void PannerNode_set_maxDistance(PannerNode* self, double value) {
    em_Val_set(AudioNode_as_val(self->inner), "maxDistance", value);
}


double PannerNode_rolloffFactor(const PannerNode *self) {
    return em_Val_as(double, em_Val_get(AudioNode_as_val(self->inner), "rolloffFactor"));
}


void PannerNode_set_rolloffFactor(PannerNode* self, double value) {
    em_Val_set(AudioNode_as_val(self->inner), "rolloffFactor", value);
}


double PannerNode_coneInnerAngle(const PannerNode *self) {
    return em_Val_as(double, em_Val_get(AudioNode_as_val(self->inner), "coneInnerAngle"));
}


void PannerNode_set_coneInnerAngle(PannerNode* self, double value) {
    em_Val_set(AudioNode_as_val(self->inner), "coneInnerAngle", value);
}


double PannerNode_coneOuterAngle(const PannerNode *self) {
    return em_Val_as(double, em_Val_get(AudioNode_as_val(self->inner), "coneOuterAngle"));
}


void PannerNode_set_coneOuterAngle(PannerNode* self, double value) {
    em_Val_set(AudioNode_as_val(self->inner), "coneOuterAngle", value);
}


double PannerNode_coneOuterGain(const PannerNode *self) {
    return em_Val_as(double, em_Val_get(AudioNode_as_val(self->inner), "coneOuterGain"));
}


void PannerNode_set_coneOuterGain(PannerNode* self, double value) {
    em_Val_set(AudioNode_as_val(self->inner), "coneOuterGain", value);
}


jb_Undefined PannerNode_setPosition(PannerNode* self , float x, float y, float z) {
    return em_Val_as(jb_Undefined, em_Val_call(AudioNode_as_val(self->inner), "setPosition", em_Val_from(x), em_Val_from(y), em_Val_from(z)));
}


jb_Undefined PannerNode_setOrientation(PannerNode* self , float x, float y, float z) {
    return em_Val_as(jb_Undefined, em_Val_call(AudioNode_as_val(self->inner), "setOrientation", em_Val_from(x), em_Val_from(y), em_Val_from(z)));
}

