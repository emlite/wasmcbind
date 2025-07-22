#include <webbind/XRFrame.h>
#include <webbind/XRSession.h>
#include <webbind/XRViewerPose.h>
#include <webbind/XRReferenceSpace.h>
#include <webbind/XRPose.h>
#include <webbind/XRSpace.h>
#include <webbind/XRAnchor.h>
#include <webbind/XRRigidTransform.h>
#include <webbind/XRAnchorSet.h>
#include <webbind/XRMeshSet.h>
#include <webbind/XRCPUDepthInformation.h>
#include <webbind/XRView.h>
#include <webbind/XRJointPose.h>
#include <webbind/XRJointSpace.h>
#include <webbind/XRHitTestResult.h>
#include <webbind/XRHitTestSource.h>
#include <webbind/XRTransientInputHitTestResult.h>
#include <webbind/XRTransientInputHitTestSource.h>
#include <webbind/XRLightEstimate.h>
#include <webbind/XRLightProbe.h>
#include <webbind/XRPlaneSet.h>


DEFINE_EMLITE_TYPE(XRFrame, em_Val);


XRSession XRFrame_session(const XRFrame *self) {
    return em_Val_as(XRSession, em_Val_get(em_Val_as_val(self->inner), "session"));
}


jb_Any XRFrame_predictedDisplayTime(const XRFrame *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "predictedDisplayTime"));
}


XRViewerPose XRFrame_getViewerPose(XRFrame* self , const XRReferenceSpace* referenceSpace) {
    return em_Val_as(XRViewerPose, em_Val_call(em_Val_as_val(self->inner), "getViewerPose", em_Val_from(referenceSpace)));
}


XRPose XRFrame_getPose(XRFrame* self , const XRSpace* space, const XRSpace* baseSpace) {
    return em_Val_as(XRPose, em_Val_call(em_Val_as_val(self->inner), "getPose", em_Val_from(space), em_Val_from(baseSpace)));
}


jb_Promise XRFrame_createAnchor(XRFrame* self , const XRRigidTransform* pose, const XRSpace* space) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "createAnchor", em_Val_from(pose), em_Val_from(space)));
}


XRAnchorSet XRFrame_trackedAnchors(const XRFrame *self) {
    return em_Val_as(XRAnchorSet, em_Val_get(em_Val_as_val(self->inner), "trackedAnchors"));
}


XRMeshSet XRFrame_detectedMeshes(const XRFrame *self) {
    return em_Val_as(XRMeshSet, em_Val_get(em_Val_as_val(self->inner), "detectedMeshes"));
}


XRCPUDepthInformation XRFrame_getDepthInformation(XRFrame* self , const XRView* view) {
    return em_Val_as(XRCPUDepthInformation, em_Val_call(em_Val_as_val(self->inner), "getDepthInformation", em_Val_from(view)));
}


XRJointPose XRFrame_getJointPose(XRFrame* self , const XRJointSpace* joint, const XRSpace* baseSpace) {
    return em_Val_as(XRJointPose, em_Val_call(em_Val_as_val(self->inner), "getJointPose", em_Val_from(joint), em_Val_from(baseSpace)));
}


bool XRFrame_fillJointRadii(XRFrame* self , const jb_Sequence* jointSpaces, const jb_Float32Array* radii) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "fillJointRadii", em_Val_from(jointSpaces), em_Val_from(radii)));
}


bool XRFrame_fillPoses(XRFrame* self , const jb_Sequence* spaces, const XRSpace* baseSpace, const jb_Float32Array* transforms) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "fillPoses", em_Val_from(spaces), em_Val_from(baseSpace), em_Val_from(transforms)));
}


jb_Sequence XRFrame_getHitTestResults(XRFrame* self , const XRHitTestSource* hitTestSource) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "getHitTestResults", em_Val_from(hitTestSource)));
}


jb_Sequence XRFrame_getHitTestResultsForTransientInput(XRFrame* self , const XRTransientInputHitTestSource* hitTestSource) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "getHitTestResultsForTransientInput", em_Val_from(hitTestSource)));
}


XRLightEstimate XRFrame_getLightEstimate(XRFrame* self , const XRLightProbe* lightProbe) {
    return em_Val_as(XRLightEstimate, em_Val_call(em_Val_as_val(self->inner), "getLightEstimate", em_Val_from(lightProbe)));
}


XRPlaneSet XRFrame_detectedPlanes(const XRFrame *self) {
    return em_Val_as(XRPlaneSet, em_Val_get(em_Val_as_val(self->inner), "detectedPlanes"));
}

