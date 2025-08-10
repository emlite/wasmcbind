#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNodeOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(PannerOptions, AudioNodeOptions);

PanningModelType PannerOptions_panningModel(const PannerOptions *self);

void PannerOptions_set_panningModel(PannerOptions* self, PanningModelType * value);

DistanceModelType PannerOptions_distanceModel(const PannerOptions *self);

void PannerOptions_set_distanceModel(PannerOptions* self, DistanceModelType * value);

float PannerOptions_positionX(const PannerOptions *self);

void PannerOptions_set_positionX(PannerOptions* self, float value);

float PannerOptions_positionY(const PannerOptions *self);

void PannerOptions_set_positionY(PannerOptions* self, float value);

float PannerOptions_positionZ(const PannerOptions *self);

void PannerOptions_set_positionZ(PannerOptions* self, float value);

float PannerOptions_orientationX(const PannerOptions *self);

void PannerOptions_set_orientationX(PannerOptions* self, float value);

float PannerOptions_orientationY(const PannerOptions *self);

void PannerOptions_set_orientationY(PannerOptions* self, float value);

float PannerOptions_orientationZ(const PannerOptions *self);

void PannerOptions_set_orientationZ(PannerOptions* self, float value);

double PannerOptions_refDistance(const PannerOptions *self);

void PannerOptions_set_refDistance(PannerOptions* self, double value);

double PannerOptions_maxDistance(const PannerOptions *self);

void PannerOptions_set_maxDistance(PannerOptions* self, double value);

double PannerOptions_rolloffFactor(const PannerOptions *self);

void PannerOptions_set_rolloffFactor(PannerOptions* self, double value);

double PannerOptions_coneInnerAngle(const PannerOptions *self);

void PannerOptions_set_coneInnerAngle(PannerOptions* self, double value);

double PannerOptions_coneOuterAngle(const PannerOptions *self);

void PannerOptions_set_coneOuterAngle(PannerOptions* self, double value);

double PannerOptions_coneOuterGain(const PannerOptions *self);

void PannerOptions_set_coneOuterGain(PannerOptions* self, double value);

PannerOptions PannerOptions_new();

#ifdef __cplusplus
}
#endif
