#include <webcbind/PannerNode.h>

#include <webcbind/BaseAudioContext.h>
#include <webcbind/PannerOptions.h>
#include <webcbind/AudioParam.h>

DEFINE_EMLITE_TYPE(PannerNode, AudioNode);


PannerNode PannerNode_new0(BaseAudioContext * context) {
        em_Val vv = em_Val_new(em_Val_global("PannerNode") , em_Val_from(context));
        return PannerNode_from_val(&vv);
      }


PannerNode PannerNode_new1(BaseAudioContext * context, PannerOptions * options) {
        em_Val vv = em_Val_new(em_Val_global("PannerNode") , em_Val_from(context), em_Val_from(options));
        return PannerNode_from_val(&vv);
      }


PanningModelType PannerNode_panningModel(const PannerNode *self) {
    return em_Val_as(PanningModelType, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("panningModel")));
}


void PannerNode_set_panningModel(PannerNode* self, PanningModelType * value) {
    em_Val_set(AudioNode_as_val(self->inner), em_Val_from("panningModel"), em_Val_from(value));
}


AudioParam PannerNode_positionX(const PannerNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("positionX")));
}


AudioParam PannerNode_positionY(const PannerNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("positionY")));
}


AudioParam PannerNode_positionZ(const PannerNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("positionZ")));
}


AudioParam PannerNode_orientationX(const PannerNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("orientationX")));
}


AudioParam PannerNode_orientationY(const PannerNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("orientationY")));
}


AudioParam PannerNode_orientationZ(const PannerNode *self) {
    return em_Val_as(AudioParam, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("orientationZ")));
}


DistanceModelType PannerNode_distanceModel(const PannerNode *self) {
    return em_Val_as(DistanceModelType, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("distanceModel")));
}


void PannerNode_set_distanceModel(PannerNode* self, DistanceModelType * value) {
    em_Val_set(AudioNode_as_val(self->inner), em_Val_from("distanceModel"), em_Val_from(value));
}


double PannerNode_refDistance(const PannerNode *self) {
    return em_Val_as(double, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("refDistance")));
}


void PannerNode_set_refDistance(PannerNode* self, double value) {
    em_Val_set(AudioNode_as_val(self->inner), em_Val_from("refDistance"), em_Val_from(value));
}


double PannerNode_maxDistance(const PannerNode *self) {
    return em_Val_as(double, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("maxDistance")));
}


void PannerNode_set_maxDistance(PannerNode* self, double value) {
    em_Val_set(AudioNode_as_val(self->inner), em_Val_from("maxDistance"), em_Val_from(value));
}


double PannerNode_rolloffFactor(const PannerNode *self) {
    return em_Val_as(double, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("rolloffFactor")));
}


void PannerNode_set_rolloffFactor(PannerNode* self, double value) {
    em_Val_set(AudioNode_as_val(self->inner), em_Val_from("rolloffFactor"), em_Val_from(value));
}


double PannerNode_coneInnerAngle(const PannerNode *self) {
    return em_Val_as(double, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("coneInnerAngle")));
}


void PannerNode_set_coneInnerAngle(PannerNode* self, double value) {
    em_Val_set(AudioNode_as_val(self->inner), em_Val_from("coneInnerAngle"), em_Val_from(value));
}


double PannerNode_coneOuterAngle(const PannerNode *self) {
    return em_Val_as(double, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("coneOuterAngle")));
}


void PannerNode_set_coneOuterAngle(PannerNode* self, double value) {
    em_Val_set(AudioNode_as_val(self->inner), em_Val_from("coneOuterAngle"), em_Val_from(value));
}


double PannerNode_coneOuterGain(const PannerNode *self) {
    return em_Val_as(double, em_Val_get(AudioNode_as_val(self->inner), em_Val_from("coneOuterGain")));
}


void PannerNode_set_coneOuterGain(PannerNode* self, double value) {
    em_Val_set(AudioNode_as_val(self->inner), em_Val_from("coneOuterGain"), em_Val_from(value));
}


jb_Undefined PannerNode_setPosition(PannerNode* self , float x, float y, float z) {
    return em_Val_as(jb_Undefined, em_Val_call(AudioNode_as_val(self->inner), "setPosition", em_Val_from(x), em_Val_from(y), em_Val_from(z)));
}


jb_Undefined PannerNode_setOrientation(PannerNode* self , float x, float y, float z) {
    return em_Val_as(jb_Undefined, em_Val_call(AudioNode_as_val(self->inner), "setOrientation", em_Val_from(x), em_Val_from(y), em_Val_from(z)));
}

