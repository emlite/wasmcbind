#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "AudioNodeOptions.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type PannerOptions */
DECLARE_EMLITE_TYPE(PannerOptions, AudioNodeOptions);

/** @brief Getter of the panningModel property */
PanningModelType PannerOptions_panningModel(const PannerOptions *self);

/** @brief Setter of the panningModel property */
void PannerOptions_set_panningModel(PannerOptions* self, PanningModelType * value);

/** @brief Getter of the distanceModel property */
DistanceModelType PannerOptions_distanceModel(const PannerOptions *self);

/** @brief Setter of the distanceModel property */
void PannerOptions_set_distanceModel(PannerOptions* self, DistanceModelType * value);

/** @brief Getter of the positionX property */
float PannerOptions_positionX(const PannerOptions *self);

/** @brief Setter of the positionX property */
void PannerOptions_set_positionX(PannerOptions* self, float value);

/** @brief Getter of the positionY property */
float PannerOptions_positionY(const PannerOptions *self);

/** @brief Setter of the positionY property */
void PannerOptions_set_positionY(PannerOptions* self, float value);

/** @brief Getter of the positionZ property */
float PannerOptions_positionZ(const PannerOptions *self);

/** @brief Setter of the positionZ property */
void PannerOptions_set_positionZ(PannerOptions* self, float value);

/** @brief Getter of the orientationX property */
float PannerOptions_orientationX(const PannerOptions *self);

/** @brief Setter of the orientationX property */
void PannerOptions_set_orientationX(PannerOptions* self, float value);

/** @brief Getter of the orientationY property */
float PannerOptions_orientationY(const PannerOptions *self);

/** @brief Setter of the orientationY property */
void PannerOptions_set_orientationY(PannerOptions* self, float value);

/** @brief Getter of the orientationZ property */
float PannerOptions_orientationZ(const PannerOptions *self);

/** @brief Setter of the orientationZ property */
void PannerOptions_set_orientationZ(PannerOptions* self, float value);

/** @brief Getter of the refDistance property */
double PannerOptions_refDistance(const PannerOptions *self);

/** @brief Setter of the refDistance property */
void PannerOptions_set_refDistance(PannerOptions* self, double value);

/** @brief Getter of the maxDistance property */
double PannerOptions_maxDistance(const PannerOptions *self);

/** @brief Setter of the maxDistance property */
void PannerOptions_set_maxDistance(PannerOptions* self, double value);

/** @brief Getter of the rolloffFactor property */
double PannerOptions_rolloffFactor(const PannerOptions *self);

/** @brief Setter of the rolloffFactor property */
void PannerOptions_set_rolloffFactor(PannerOptions* self, double value);

/** @brief Getter of the coneInnerAngle property */
double PannerOptions_coneInnerAngle(const PannerOptions *self);

/** @brief Setter of the coneInnerAngle property */
void PannerOptions_set_coneInnerAngle(PannerOptions* self, double value);

/** @brief Getter of the coneOuterAngle property */
double PannerOptions_coneOuterAngle(const PannerOptions *self);

/** @brief Setter of the coneOuterAngle property */
void PannerOptions_set_coneOuterAngle(PannerOptions* self, double value);

/** @brief Getter of the coneOuterGain property */
double PannerOptions_coneOuterGain(const PannerOptions *self);

/** @brief Setter of the coneOuterGain property */
void PannerOptions_set_coneOuterGain(PannerOptions* self, double value);

/** @brief Constructor of the PannerOptions dictionary type */
PannerOptions PannerOptions_new();

#ifdef __cplusplus
}
#endif
