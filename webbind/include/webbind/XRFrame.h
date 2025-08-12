#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct XRSession XRSession;
typedef struct XRViewerPose XRViewerPose;
typedef struct XRReferenceSpace XRReferenceSpace;
typedef struct XRPose XRPose;
typedef struct XRSpace XRSpace;
typedef struct XRAnchor XRAnchor;
typedef struct XRRigidTransform XRRigidTransform;
typedef struct XRAnchorSet XRAnchorSet;
typedef struct XRMeshSet XRMeshSet;
typedef struct XRCPUDepthInformation XRCPUDepthInformation;
typedef struct XRView XRView;
typedef struct XRJointPose XRJointPose;
typedef struct XRJointSpace XRJointSpace;
typedef struct XRHitTestResult XRHitTestResult;
typedef struct XRHitTestSource XRHitTestSource;
typedef struct XRTransientInputHitTestResult XRTransientInputHitTestResult;
typedef struct XRTransientInputHitTestSource XRTransientInputHitTestSource;
typedef struct XRLightEstimate XRLightEstimate;
typedef struct XRLightProbe XRLightProbe;
typedef struct XRPlaneSet XRPlaneSet;


/**
 * @brief Interface XRFrame
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/XRFrame)
 */
DECLARE_EMLITE_TYPE(XRFrame, em_Val);

/**
 * @brief Gets the `session` property. 
*/
XRSession XRFrame_session(const XRFrame *self);

/**
 * @brief Gets the `predictedDisplayTime` property. 
*/
jb_Any XRFrame_predictedDisplayTime(const XRFrame *self);

/**
 * @brief Calls the `getViewerPose` method. 
*/
XRViewerPose XRFrame_getViewerPose(XRFrame* self , XRReferenceSpace * referenceSpace);

/**
 * @brief Calls the `getPose` method. 
*/
XRPose XRFrame_getPose(XRFrame* self , XRSpace * space, XRSpace * baseSpace);

/**
 * @brief Calls the `createAnchor` method. 
*/
jb_Promise XRFrame_createAnchor(XRFrame* self , XRRigidTransform * pose, XRSpace * space);

/**
 * @brief Gets the `trackedAnchors` property. 
*/
XRAnchorSet XRFrame_trackedAnchors(const XRFrame *self);

/**
 * @brief Gets the `detectedMeshes` property. 
*/
XRMeshSet XRFrame_detectedMeshes(const XRFrame *self);

/**
 * @brief Calls the `getDepthInformation` method. 
*/
XRCPUDepthInformation XRFrame_getDepthInformation(XRFrame* self , XRView * view);

/**
 * @brief Calls the `getJointPose` method. 
*/
XRJointPose XRFrame_getJointPose(XRFrame* self , XRJointSpace * joint, XRSpace * baseSpace);

/**
 * @brief Calls the `fillJointRadii` method. 
*/
bool XRFrame_fillJointRadii(XRFrame* self , jb_Array * jointSpaces, jb_Float32Array * radii);

/**
 * @brief Calls the `fillPoses` method. 
*/
bool XRFrame_fillPoses(XRFrame* self , jb_Array * spaces, XRSpace * baseSpace, jb_Float32Array * transforms);

/**
 * @brief Calls the `getHitTestResults` method. 
*/
jb_Array XRFrame_getHitTestResults(XRFrame* self , XRHitTestSource * hitTestSource);

/**
 * @brief Calls the `getHitTestResultsForTransientInput` method. 
*/
jb_Array XRFrame_getHitTestResultsForTransientInput(XRFrame* self , XRTransientInputHitTestSource * hitTestSource);

/**
 * @brief Calls the `getLightEstimate` method. 
*/
XRLightEstimate XRFrame_getLightEstimate(XRFrame* self , XRLightProbe * lightProbe);

/**
 * @brief Gets the `detectedPlanes` property. 
*/
XRPlaneSet XRFrame_detectedPlanes(const XRFrame *self);

#ifdef __cplusplus
}
#endif
