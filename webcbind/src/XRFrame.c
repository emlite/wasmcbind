#include <webcbind/XRFrame.h>

#include <webcbind/XRSession.h>
#include <webcbind/XRViewerPose.h>
#include <webcbind/XRReferenceSpace.h>
#include <webcbind/XRPose.h>
#include <webcbind/XRSpace.h>
#include <webcbind/XRAnchor.h>
#include <webcbind/XRRigidTransform.h>
#include <webcbind/XRAnchorSet.h>
#include <webcbind/XRMeshSet.h>
#include <webcbind/XRCPUDepthInformation.h>
#include <webcbind/XRView.h>
#include <webcbind/XRJointPose.h>
#include <webcbind/XRJointSpace.h>
#include <webcbind/XRHitTestResult.h>
#include <webcbind/XRHitTestSource.h>
#include <webcbind/XRTransientInputHitTestResult.h>
#include <webcbind/XRTransientInputHitTestSource.h>
#include <webcbind/XRLightEstimate.h>
#include <webcbind/XRLightProbe.h>
#include <webcbind/XRPlaneSet.h>

DEFINE_EMLITE_TYPE(XRFrame, em_Val);


XRSession XRFrame_session(const XRFrame *self) {
    return em_Val_as(XRSession, em_Val_get(em_Val_as_val(self->inner), em_Val_from("session")));
}


jb_Any XRFrame_predictedDisplayTime(const XRFrame *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("predictedDisplayTime")));
}


XRViewerPose XRFrame_getViewerPose(XRFrame* self , XRReferenceSpace * referenceSpace) {
    return em_Val_as(XRViewerPose, em_Val_call(em_Val_as_val(self->inner), "getViewerPose", em_Val_from(referenceSpace)));
}


XRPose XRFrame_getPose(XRFrame* self , XRSpace * space, XRSpace * baseSpace) {
    return em_Val_as(XRPose, em_Val_call(em_Val_as_val(self->inner), "getPose", em_Val_from(space), em_Val_from(baseSpace)));
}


jb_Promise XRFrame_createAnchor(XRFrame* self , XRRigidTransform * pose, XRSpace * space) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "createAnchor", em_Val_from(pose), em_Val_from(space)));
}


XRAnchorSet XRFrame_trackedAnchors(const XRFrame *self) {
    return em_Val_as(XRAnchorSet, em_Val_get(em_Val_as_val(self->inner), em_Val_from("trackedAnchors")));
}


XRMeshSet XRFrame_detectedMeshes(const XRFrame *self) {
    return em_Val_as(XRMeshSet, em_Val_get(em_Val_as_val(self->inner), em_Val_from("detectedMeshes")));
}


XRCPUDepthInformation XRFrame_getDepthInformation(XRFrame* self , XRView * view) {
    return em_Val_as(XRCPUDepthInformation, em_Val_call(em_Val_as_val(self->inner), "getDepthInformation", em_Val_from(view)));
}


XRJointPose XRFrame_getJointPose(XRFrame* self , XRJointSpace * joint, XRSpace * baseSpace) {
    return em_Val_as(XRJointPose, em_Val_call(em_Val_as_val(self->inner), "getJointPose", em_Val_from(joint), em_Val_from(baseSpace)));
}


bool XRFrame_fillJointRadii(XRFrame* self , jb_Array * jointSpaces, jb_Float32Array * radii) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "fillJointRadii", em_Val_from(jointSpaces), em_Val_from(radii)));
}


bool XRFrame_fillPoses(XRFrame* self , jb_Array * spaces, XRSpace * baseSpace, jb_Float32Array * transforms) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "fillPoses", em_Val_from(spaces), em_Val_from(baseSpace), em_Val_from(transforms)));
}


jb_Array XRFrame_getHitTestResults(XRFrame* self , XRHitTestSource * hitTestSource) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_as_val(self->inner), "getHitTestResults", em_Val_from(hitTestSource)));
}


jb_Array XRFrame_getHitTestResultsForTransientInput(XRFrame* self , XRTransientInputHitTestSource * hitTestSource) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_as_val(self->inner), "getHitTestResultsForTransientInput", em_Val_from(hitTestSource)));
}


XRLightEstimate XRFrame_getLightEstimate(XRFrame* self , XRLightProbe * lightProbe) {
    return em_Val_as(XRLightEstimate, em_Val_call(em_Val_as_val(self->inner), "getLightEstimate", em_Val_from(lightProbe)));
}


XRPlaneSet XRFrame_detectedPlanes(const XRFrame *self) {
    return em_Val_as(XRPlaneSet, em_Val_get(em_Val_as_val(self->inner), em_Val_from("detectedPlanes")));
}

