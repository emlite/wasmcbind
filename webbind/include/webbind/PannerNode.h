#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#include "AudioNode.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BaseAudioContext BaseAudioContext;
typedef struct PannerOptions PannerOptions;
typedef struct AudioParam AudioParam;


/**
 * @brief Interface PannerNode
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PannerNode)
 */
DECLARE_EMLITE_TYPE(PannerNode, AudioNode);

/**
 * @brief Creates a new `PannerNode` object. 
*/
PannerNode PannerNode_new0(BaseAudioContext * context);

/**
 * @brief Creates a new `PannerNode` object. 
*/
PannerNode PannerNode_new1(BaseAudioContext * context, PannerOptions * options);

/**
 * @brief Gets the `panningModel` property. 
*/
PanningModelType PannerNode_panningModel(const PannerNode *self);

/**
 * @brief Sets the `panningModel` property. 
*/
void PannerNode_set_panningModel(PannerNode* self, PanningModelType * value);

/**
 * @brief Gets the `positionX` property. 
*/
AudioParam PannerNode_positionX(const PannerNode *self);

/**
 * @brief Gets the `positionY` property. 
*/
AudioParam PannerNode_positionY(const PannerNode *self);

/**
 * @brief Gets the `positionZ` property. 
*/
AudioParam PannerNode_positionZ(const PannerNode *self);

/**
 * @brief Gets the `orientationX` property. 
*/
AudioParam PannerNode_orientationX(const PannerNode *self);

/**
 * @brief Gets the `orientationY` property. 
*/
AudioParam PannerNode_orientationY(const PannerNode *self);

/**
 * @brief Gets the `orientationZ` property. 
*/
AudioParam PannerNode_orientationZ(const PannerNode *self);

/**
 * @brief Gets the `distanceModel` property. 
*/
DistanceModelType PannerNode_distanceModel(const PannerNode *self);

/**
 * @brief Sets the `distanceModel` property. 
*/
void PannerNode_set_distanceModel(PannerNode* self, DistanceModelType * value);

/**
 * @brief Gets the `refDistance` property. 
*/
double PannerNode_refDistance(const PannerNode *self);

/**
 * @brief Sets the `refDistance` property. 
*/
void PannerNode_set_refDistance(PannerNode* self, double value);

/**
 * @brief Gets the `maxDistance` property. 
*/
double PannerNode_maxDistance(const PannerNode *self);

/**
 * @brief Sets the `maxDistance` property. 
*/
void PannerNode_set_maxDistance(PannerNode* self, double value);

/**
 * @brief Gets the `rolloffFactor` property. 
*/
double PannerNode_rolloffFactor(const PannerNode *self);

/**
 * @brief Sets the `rolloffFactor` property. 
*/
void PannerNode_set_rolloffFactor(PannerNode* self, double value);

/**
 * @brief Gets the `coneInnerAngle` property. 
*/
double PannerNode_coneInnerAngle(const PannerNode *self);

/**
 * @brief Sets the `coneInnerAngle` property. 
*/
void PannerNode_set_coneInnerAngle(PannerNode* self, double value);

/**
 * @brief Gets the `coneOuterAngle` property. 
*/
double PannerNode_coneOuterAngle(const PannerNode *self);

/**
 * @brief Sets the `coneOuterAngle` property. 
*/
void PannerNode_set_coneOuterAngle(PannerNode* self, double value);

/**
 * @brief Gets the `coneOuterGain` property. 
*/
double PannerNode_coneOuterGain(const PannerNode *self);

/**
 * @brief Sets the `coneOuterGain` property. 
*/
void PannerNode_set_coneOuterGain(PannerNode* self, double value);

/**
 * @brief Calls the `setPosition` method. 
*/
jb_Undefined PannerNode_setPosition(PannerNode* self , float x, float y, float z);

/**
 * @brief Calls the `setOrientation` method. 
*/
jb_Undefined PannerNode_setOrientation(PannerNode* self , float x, float y, float z);

#ifdef __cplusplus
}
#endif
