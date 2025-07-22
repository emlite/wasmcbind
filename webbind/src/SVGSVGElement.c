#include <webbind/SVGSVGElement.h>
#include <webbind/SVGAnimatedLength.h>
#include <webbind/DOMPointReadOnly.h>
#include <webbind/NodeList.h>
#include <webbind/DOMRectReadOnly.h>
#include <webbind/SVGElement.h>
#include <webbind/SVGNumber.h>
#include <webbind/SVGLength.h>
#include <webbind/SVGAngle.h>
#include <webbind/DOMPoint.h>
#include <webbind/DOMMatrix.h>
#include <webbind/DOMRect.h>
#include <webbind/SVGTransform.h>
#include <webbind/Element.h>
#include <webbind/SVGAnimatedRect.h>
#include <webbind/SVGAnimatedPreserveAspectRatio.h>


DEFINE_EMLITE_TYPE(DOMMatrix2DInit, em_Val);


double DOMMatrix2DInit_a(const DOMMatrix2DInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "a"));
}


void DOMMatrix2DInit_set_a(DOMMatrix2DInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "a", value);
}


double DOMMatrix2DInit_b(const DOMMatrix2DInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "b"));
}


void DOMMatrix2DInit_set_b(DOMMatrix2DInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "b", value);
}


double DOMMatrix2DInit_c(const DOMMatrix2DInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "c"));
}


void DOMMatrix2DInit_set_c(DOMMatrix2DInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "c", value);
}


double DOMMatrix2DInit_d(const DOMMatrix2DInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "d"));
}


void DOMMatrix2DInit_set_d(DOMMatrix2DInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "d", value);
}


double DOMMatrix2DInit_e(const DOMMatrix2DInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "e"));
}


void DOMMatrix2DInit_set_e(DOMMatrix2DInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "e", value);
}


double DOMMatrix2DInit_f(const DOMMatrix2DInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "f"));
}


void DOMMatrix2DInit_set_f(DOMMatrix2DInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "f", value);
}


double DOMMatrix2DInit_m11(const DOMMatrix2DInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "m11"));
}


void DOMMatrix2DInit_set_m11(DOMMatrix2DInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "m11", value);
}


double DOMMatrix2DInit_m12(const DOMMatrix2DInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "m12"));
}


void DOMMatrix2DInit_set_m12(DOMMatrix2DInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "m12", value);
}


double DOMMatrix2DInit_m21(const DOMMatrix2DInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "m21"));
}


void DOMMatrix2DInit_set_m21(DOMMatrix2DInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "m21", value);
}


double DOMMatrix2DInit_m22(const DOMMatrix2DInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "m22"));
}


void DOMMatrix2DInit_set_m22(DOMMatrix2DInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "m22", value);
}


double DOMMatrix2DInit_m41(const DOMMatrix2DInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "m41"));
}


void DOMMatrix2DInit_set_m41(DOMMatrix2DInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "m41", value);
}


double DOMMatrix2DInit_m42(const DOMMatrix2DInit *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "m42"));
}


void DOMMatrix2DInit_set_m42(DOMMatrix2DInit* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "m42", value);
}

DEFINE_EMLITE_TYPE(SVGSVGElement, SVGGraphicsElement);


SVGAnimatedLength SVGSVGElement_x(const SVGSVGElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGraphicsElement_as_val(self->inner), "x"));
}


SVGAnimatedLength SVGSVGElement_y(const SVGSVGElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGraphicsElement_as_val(self->inner), "y"));
}


SVGAnimatedLength SVGSVGElement_width(const SVGSVGElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGraphicsElement_as_val(self->inner), "width"));
}


SVGAnimatedLength SVGSVGElement_height(const SVGSVGElement *self) {
    return em_Val_as(SVGAnimatedLength, em_Val_get(SVGGraphicsElement_as_val(self->inner), "height"));
}


float SVGSVGElement_currentScale(const SVGSVGElement *self) {
    return em_Val_as(float, em_Val_get(SVGGraphicsElement_as_val(self->inner), "currentScale"));
}


void SVGSVGElement_set_currentScale(SVGSVGElement* self, float value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), "currentScale", value);
}


DOMPointReadOnly SVGSVGElement_currentTranslate(const SVGSVGElement *self) {
    return em_Val_as(DOMPointReadOnly, em_Val_get(SVGGraphicsElement_as_val(self->inner), "currentTranslate"));
}


NodeList SVGSVGElement_getIntersectionList(SVGSVGElement* self , const DOMRectReadOnly* rect, const SVGElement* referenceElement) {
    return em_Val_as(NodeList, em_Val_call(SVGGraphicsElement_as_val(self->inner), "getIntersectionList", em_Val_from(rect), em_Val_from(referenceElement)));
}


NodeList SVGSVGElement_getEnclosureList(SVGSVGElement* self , const DOMRectReadOnly* rect, const SVGElement* referenceElement) {
    return em_Val_as(NodeList, em_Val_call(SVGGraphicsElement_as_val(self->inner), "getEnclosureList", em_Val_from(rect), em_Val_from(referenceElement)));
}


bool SVGSVGElement_checkIntersection(SVGSVGElement* self , const SVGElement* element, const DOMRectReadOnly* rect) {
    return em_Val_as(bool, em_Val_call(SVGGraphicsElement_as_val(self->inner), "checkIntersection", em_Val_from(element), em_Val_from(rect)));
}


bool SVGSVGElement_checkEnclosure(SVGSVGElement* self , const SVGElement* element, const DOMRectReadOnly* rect) {
    return em_Val_as(bool, em_Val_call(SVGGraphicsElement_as_val(self->inner), "checkEnclosure", em_Val_from(element), em_Val_from(rect)));
}


jb_Undefined SVGSVGElement_deselectAll(SVGSVGElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(SVGGraphicsElement_as_val(self->inner), "deselectAll"));
}


SVGNumber SVGSVGElement_createSVGNumber(SVGSVGElement* self ) {
    return em_Val_as(SVGNumber, em_Val_call(SVGGraphicsElement_as_val(self->inner), "createSVGNumber"));
}


SVGLength SVGSVGElement_createSVGLength(SVGSVGElement* self ) {
    return em_Val_as(SVGLength, em_Val_call(SVGGraphicsElement_as_val(self->inner), "createSVGLength"));
}


SVGAngle SVGSVGElement_createSVGAngle(SVGSVGElement* self ) {
    return em_Val_as(SVGAngle, em_Val_call(SVGGraphicsElement_as_val(self->inner), "createSVGAngle"));
}


DOMPoint SVGSVGElement_createSVGPoint(SVGSVGElement* self ) {
    return em_Val_as(DOMPoint, em_Val_call(SVGGraphicsElement_as_val(self->inner), "createSVGPoint"));
}


DOMMatrix SVGSVGElement_createSVGMatrix(SVGSVGElement* self ) {
    return em_Val_as(DOMMatrix, em_Val_call(SVGGraphicsElement_as_val(self->inner), "createSVGMatrix"));
}


DOMRect SVGSVGElement_createSVGRect(SVGSVGElement* self ) {
    return em_Val_as(DOMRect, em_Val_call(SVGGraphicsElement_as_val(self->inner), "createSVGRect"));
}


SVGTransform SVGSVGElement_createSVGTransform(SVGSVGElement* self ) {
    return em_Val_as(SVGTransform, em_Val_call(SVGGraphicsElement_as_val(self->inner), "createSVGTransform"));
}


SVGTransform SVGSVGElement_createSVGTransformFromMatrix(SVGSVGElement* self ) {
    return em_Val_as(SVGTransform, em_Val_call(SVGGraphicsElement_as_val(self->inner), "createSVGTransformFromMatrix"));
}


SVGTransform SVGSVGElement_createSVGTransformFromMatrix(SVGSVGElement* self , const DOMMatrix2DInit* matrix) {
    return em_Val_as(SVGTransform, em_Val_call(SVGGraphicsElement_as_val(self->inner), "createSVGTransformFromMatrix", em_Val_from(matrix)));
}


Element SVGSVGElement_getElementById(SVGSVGElement* self , const jb_DOMString* elementId) {
    return em_Val_as(Element, em_Val_call(SVGGraphicsElement_as_val(self->inner), "getElementById", em_Val_from(elementId)));
}


unsigned long SVGSVGElement_suspendRedraw(SVGSVGElement* self , unsigned long maxWaitMilliseconds) {
    return em_Val_as(unsigned long, em_Val_call(SVGGraphicsElement_as_val(self->inner), "suspendRedraw", em_Val_from(maxWaitMilliseconds)));
}


jb_Undefined SVGSVGElement_unsuspendRedraw(SVGSVGElement* self , unsigned long suspendHandleID) {
    return em_Val_as(jb_Undefined, em_Val_call(SVGGraphicsElement_as_val(self->inner), "unsuspendRedraw", em_Val_from(suspendHandleID)));
}


jb_Undefined SVGSVGElement_unsuspendRedrawAll(SVGSVGElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(SVGGraphicsElement_as_val(self->inner), "unsuspendRedrawAll"));
}


jb_Undefined SVGSVGElement_forceRedraw(SVGSVGElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(SVGGraphicsElement_as_val(self->inner), "forceRedraw"));
}


jb_Undefined SVGSVGElement_pauseAnimations(SVGSVGElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(SVGGraphicsElement_as_val(self->inner), "pauseAnimations"));
}


jb_Undefined SVGSVGElement_unpauseAnimations(SVGSVGElement* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(SVGGraphicsElement_as_val(self->inner), "unpauseAnimations"));
}


bool SVGSVGElement_animationsPaused(SVGSVGElement* self ) {
    return em_Val_as(bool, em_Val_call(SVGGraphicsElement_as_val(self->inner), "animationsPaused"));
}


float SVGSVGElement_getCurrentTime(SVGSVGElement* self ) {
    return em_Val_as(float, em_Val_call(SVGGraphicsElement_as_val(self->inner), "getCurrentTime"));
}


jb_Undefined SVGSVGElement_setCurrentTime(SVGSVGElement* self , float seconds) {
    return em_Val_as(jb_Undefined, em_Val_call(SVGGraphicsElement_as_val(self->inner), "setCurrentTime", em_Val_from(seconds)));
}


SVGAnimatedRect SVGSVGElement_viewBox(const SVGSVGElement *self) {
    return em_Val_as(SVGAnimatedRect, em_Val_get(SVGGraphicsElement_as_val(self->inner), "viewBox"));
}


SVGAnimatedPreserveAspectRatio SVGSVGElement_preserveAspectRatio(const SVGSVGElement *self) {
    return em_Val_as(SVGAnimatedPreserveAspectRatio, em_Val_get(SVGGraphicsElement_as_val(self->inner), "preserveAspectRatio"));
}


jb_Any SVGSVGElement_onportalactivate(const SVGSVGElement *self) {
    return em_Val_as(jb_Any, em_Val_get(SVGGraphicsElement_as_val(self->inner), "onportalactivate"));
}


void SVGSVGElement_set_onportalactivate(SVGSVGElement* self, const jb_Any* value) {
    em_Val_set(SVGGraphicsElement_as_val(self->inner), "onportalactivate", value);
}

