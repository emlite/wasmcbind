#include <webbind/PaintRenderingContext2D.h>
#include <webbind/DOMMatrix.h>
#include <webbind/SVGSVGElement.h>
#include <webbind/CanvasGradient.h>
#include <webbind/CanvasPattern.h>
#include <webbind/Path2D.h>


DEFINE_EMLITE_TYPE(PaintRenderingContext2D, em_Val);


jb_Undefined PaintRenderingContext2D_save(PaintRenderingContext2D* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "save"));
}


jb_Undefined PaintRenderingContext2D_restore(PaintRenderingContext2D* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "restore"));
}


jb_Undefined PaintRenderingContext2D_reset(PaintRenderingContext2D* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "reset"));
}


bool PaintRenderingContext2D_isContextLost(PaintRenderingContext2D* self ) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "isContextLost"));
}


jb_Undefined PaintRenderingContext2D_scale(PaintRenderingContext2D* self , double x, double y) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "scale", em_Val_from(x), em_Val_from(y)));
}


jb_Undefined PaintRenderingContext2D_rotate(PaintRenderingContext2D* self , double angle) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "rotate", em_Val_from(angle)));
}


jb_Undefined PaintRenderingContext2D_translate(PaintRenderingContext2D* self , double x, double y) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "translate", em_Val_from(x), em_Val_from(y)));
}


jb_Undefined PaintRenderingContext2D_transform(PaintRenderingContext2D* self , double a, double b, double c, double d, double e, double f) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "transform", em_Val_from(a), em_Val_from(b), em_Val_from(c), em_Val_from(d), em_Val_from(e), em_Val_from(f)));
}


DOMMatrix PaintRenderingContext2D_getTransform(PaintRenderingContext2D* self ) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "getTransform"));
}


jb_Undefined PaintRenderingContext2D_setTransform0(PaintRenderingContext2D* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setTransform"));
}


jb_Undefined PaintRenderingContext2D_setTransform1(PaintRenderingContext2D* self , DOMMatrix2DInit * transform) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setTransform", em_Val_from(transform)));
}


jb_Undefined PaintRenderingContext2D_resetTransform(PaintRenderingContext2D* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "resetTransform"));
}


double PaintRenderingContext2D_globalAlpha(const PaintRenderingContext2D *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("globalAlpha")));
}


void PaintRenderingContext2D_set_globalAlpha(PaintRenderingContext2D* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("globalAlpha"), em_Val_from(value));
}


jb_String PaintRenderingContext2D_globalCompositeOperation(const PaintRenderingContext2D *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("globalCompositeOperation")));
}


void PaintRenderingContext2D_set_globalCompositeOperation(PaintRenderingContext2D* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("globalCompositeOperation"), em_Val_from(value));
}


bool PaintRenderingContext2D_imageSmoothingEnabled(const PaintRenderingContext2D *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("imageSmoothingEnabled")));
}


void PaintRenderingContext2D_set_imageSmoothingEnabled(PaintRenderingContext2D* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("imageSmoothingEnabled"), em_Val_from(value));
}


ImageSmoothingQuality PaintRenderingContext2D_imageSmoothingQuality(const PaintRenderingContext2D *self) {
    return em_Val_as(ImageSmoothingQuality, em_Val_get(em_Val_as_val(self->inner), em_Val_from("imageSmoothingQuality")));
}


void PaintRenderingContext2D_set_imageSmoothingQuality(PaintRenderingContext2D* self, ImageSmoothingQuality * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("imageSmoothingQuality"), em_Val_from(value));
}


jb_Any PaintRenderingContext2D_strokeStyle(const PaintRenderingContext2D *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("strokeStyle")));
}


void PaintRenderingContext2D_set_strokeStyle(PaintRenderingContext2D* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("strokeStyle"), em_Val_from(value));
}


jb_Any PaintRenderingContext2D_fillStyle(const PaintRenderingContext2D *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fillStyle")));
}


void PaintRenderingContext2D_set_fillStyle(PaintRenderingContext2D* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("fillStyle"), em_Val_from(value));
}


CanvasGradient PaintRenderingContext2D_createLinearGradient(PaintRenderingContext2D* self , double x0, double y0, double x1, double y1) {
    return em_Val_as(CanvasGradient, em_Val_call(em_Val_as_val(self->inner), "createLinearGradient", em_Val_from(x0), em_Val_from(y0), em_Val_from(x1), em_Val_from(y1)));
}


CanvasGradient PaintRenderingContext2D_createRadialGradient(PaintRenderingContext2D* self , double x0, double y0, double r0, double x1, double y1, double r1) {
    return em_Val_as(CanvasGradient, em_Val_call(em_Val_as_val(self->inner), "createRadialGradient", em_Val_from(x0), em_Val_from(y0), em_Val_from(r0), em_Val_from(x1), em_Val_from(y1), em_Val_from(r1)));
}


CanvasGradient PaintRenderingContext2D_createConicGradient(PaintRenderingContext2D* self , double startAngle, double x, double y) {
    return em_Val_as(CanvasGradient, em_Val_call(em_Val_as_val(self->inner), "createConicGradient", em_Val_from(startAngle), em_Val_from(x), em_Val_from(y)));
}


CanvasPattern PaintRenderingContext2D_createPattern(PaintRenderingContext2D* self , jb_Any * image, jb_String * repetition) {
    return em_Val_as(CanvasPattern, em_Val_call(em_Val_as_val(self->inner), "createPattern", em_Val_from(image), em_Val_from(repetition)));
}


double PaintRenderingContext2D_shadowOffsetX(const PaintRenderingContext2D *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("shadowOffsetX")));
}


void PaintRenderingContext2D_set_shadowOffsetX(PaintRenderingContext2D* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("shadowOffsetX"), em_Val_from(value));
}


double PaintRenderingContext2D_shadowOffsetY(const PaintRenderingContext2D *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("shadowOffsetY")));
}


void PaintRenderingContext2D_set_shadowOffsetY(PaintRenderingContext2D* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("shadowOffsetY"), em_Val_from(value));
}


double PaintRenderingContext2D_shadowBlur(const PaintRenderingContext2D *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("shadowBlur")));
}


void PaintRenderingContext2D_set_shadowBlur(PaintRenderingContext2D* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("shadowBlur"), em_Val_from(value));
}


jb_String PaintRenderingContext2D_shadowColor(const PaintRenderingContext2D *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("shadowColor")));
}


void PaintRenderingContext2D_set_shadowColor(PaintRenderingContext2D* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("shadowColor"), em_Val_from(value));
}


jb_Undefined PaintRenderingContext2D_clearRect(PaintRenderingContext2D* self , double x, double y, double w, double h) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clearRect", em_Val_from(x), em_Val_from(y), em_Val_from(w), em_Val_from(h)));
}


jb_Undefined PaintRenderingContext2D_fillRect(PaintRenderingContext2D* self , double x, double y, double w, double h) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "fillRect", em_Val_from(x), em_Val_from(y), em_Val_from(w), em_Val_from(h)));
}


jb_Undefined PaintRenderingContext2D_strokeRect(PaintRenderingContext2D* self , double x, double y, double w, double h) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "strokeRect", em_Val_from(x), em_Val_from(y), em_Val_from(w), em_Val_from(h)));
}


jb_Undefined PaintRenderingContext2D_beginPath(PaintRenderingContext2D* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "beginPath"));
}


jb_Undefined PaintRenderingContext2D_fill0(PaintRenderingContext2D* self , Path2D * path) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "fill", em_Val_from(path)));
}


jb_Undefined PaintRenderingContext2D_fill1(PaintRenderingContext2D* self , Path2D * path, CanvasFillRule * fillRule) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "fill", em_Val_from(path), em_Val_from(fillRule)));
}


jb_Undefined PaintRenderingContext2D_stroke(PaintRenderingContext2D* self , Path2D * path) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "stroke", em_Val_from(path)));
}


jb_Undefined PaintRenderingContext2D_clip0(PaintRenderingContext2D* self , Path2D * path) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clip", em_Val_from(path)));
}


jb_Undefined PaintRenderingContext2D_clip1(PaintRenderingContext2D* self , Path2D * path, CanvasFillRule * fillRule) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clip", em_Val_from(path), em_Val_from(fillRule)));
}


bool PaintRenderingContext2D_isPointInPath0(PaintRenderingContext2D* self , Path2D * path, double x, double y) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "isPointInPath", em_Val_from(path), em_Val_from(x), em_Val_from(y)));
}


bool PaintRenderingContext2D_isPointInPath1(PaintRenderingContext2D* self , Path2D * path, double x, double y, CanvasFillRule * fillRule) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "isPointInPath", em_Val_from(path), em_Val_from(x), em_Val_from(y), em_Val_from(fillRule)));
}


bool PaintRenderingContext2D_isPointInStroke(PaintRenderingContext2D* self , Path2D * path, double x, double y) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "isPointInStroke", em_Val_from(path), em_Val_from(x), em_Val_from(y)));
}


jb_Undefined PaintRenderingContext2D_drawImage(PaintRenderingContext2D* self , jb_Any * image, double sx, double sy, double sw, double sh, double dx, double dy, double dw, double dh) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawImage", em_Val_from(image), em_Val_from(sx), em_Val_from(sy), em_Val_from(sw), em_Val_from(sh), em_Val_from(dx), em_Val_from(dy), em_Val_from(dw), em_Val_from(dh)));
}


double PaintRenderingContext2D_lineWidth(const PaintRenderingContext2D *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("lineWidth")));
}


void PaintRenderingContext2D_set_lineWidth(PaintRenderingContext2D* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("lineWidth"), em_Val_from(value));
}


CanvasLineCap PaintRenderingContext2D_lineCap(const PaintRenderingContext2D *self) {
    return em_Val_as(CanvasLineCap, em_Val_get(em_Val_as_val(self->inner), em_Val_from("lineCap")));
}


void PaintRenderingContext2D_set_lineCap(PaintRenderingContext2D* self, CanvasLineCap * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("lineCap"), em_Val_from(value));
}


CanvasLineJoin PaintRenderingContext2D_lineJoin(const PaintRenderingContext2D *self) {
    return em_Val_as(CanvasLineJoin, em_Val_get(em_Val_as_val(self->inner), em_Val_from("lineJoin")));
}


void PaintRenderingContext2D_set_lineJoin(PaintRenderingContext2D* self, CanvasLineJoin * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("lineJoin"), em_Val_from(value));
}


double PaintRenderingContext2D_miterLimit(const PaintRenderingContext2D *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("miterLimit")));
}


void PaintRenderingContext2D_set_miterLimit(PaintRenderingContext2D* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("miterLimit"), em_Val_from(value));
}


jb_Undefined PaintRenderingContext2D_setLineDash(PaintRenderingContext2D* self , jb_Array * segments) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setLineDash", em_Val_from(segments)));
}


jb_Array PaintRenderingContext2D_getLineDash(PaintRenderingContext2D* self ) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_as_val(self->inner), "getLineDash"));
}


double PaintRenderingContext2D_lineDashOffset(const PaintRenderingContext2D *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("lineDashOffset")));
}


void PaintRenderingContext2D_set_lineDashOffset(PaintRenderingContext2D* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("lineDashOffset"), em_Val_from(value));
}


jb_Undefined PaintRenderingContext2D_closePath(PaintRenderingContext2D* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "closePath"));
}


jb_Undefined PaintRenderingContext2D_moveTo(PaintRenderingContext2D* self , double x, double y) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "moveTo", em_Val_from(x), em_Val_from(y)));
}


jb_Undefined PaintRenderingContext2D_lineTo(PaintRenderingContext2D* self , double x, double y) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "lineTo", em_Val_from(x), em_Val_from(y)));
}


jb_Undefined PaintRenderingContext2D_quadraticCurveTo(PaintRenderingContext2D* self , double cpx, double cpy, double x, double y) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "quadraticCurveTo", em_Val_from(cpx), em_Val_from(cpy), em_Val_from(x), em_Val_from(y)));
}


jb_Undefined PaintRenderingContext2D_bezierCurveTo(PaintRenderingContext2D* self , double cp1x, double cp1y, double cp2x, double cp2y, double x, double y) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "bezierCurveTo", em_Val_from(cp1x), em_Val_from(cp1y), em_Val_from(cp2x), em_Val_from(cp2y), em_Val_from(x), em_Val_from(y)));
}


jb_Undefined PaintRenderingContext2D_arcTo(PaintRenderingContext2D* self , double x1, double y1, double x2, double y2, double radius) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "arcTo", em_Val_from(x1), em_Val_from(y1), em_Val_from(x2), em_Val_from(y2), em_Val_from(radius)));
}


jb_Undefined PaintRenderingContext2D_rect(PaintRenderingContext2D* self , double x, double y, double w, double h) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "rect", em_Val_from(x), em_Val_from(y), em_Val_from(w), em_Val_from(h)));
}


jb_Undefined PaintRenderingContext2D_roundRect0(PaintRenderingContext2D* self , double x, double y, double w, double h) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "roundRect", em_Val_from(x), em_Val_from(y), em_Val_from(w), em_Val_from(h)));
}


jb_Undefined PaintRenderingContext2D_roundRect1(PaintRenderingContext2D* self , double x, double y, double w, double h, jb_Any * radii) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "roundRect", em_Val_from(x), em_Val_from(y), em_Val_from(w), em_Val_from(h), em_Val_from(radii)));
}


jb_Undefined PaintRenderingContext2D_arc0(PaintRenderingContext2D* self , double x, double y, double radius, double startAngle, double endAngle) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "arc", em_Val_from(x), em_Val_from(y), em_Val_from(radius), em_Val_from(startAngle), em_Val_from(endAngle)));
}


jb_Undefined PaintRenderingContext2D_arc1(PaintRenderingContext2D* self , double x, double y, double radius, double startAngle, double endAngle, bool counterclockwise) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "arc", em_Val_from(x), em_Val_from(y), em_Val_from(radius), em_Val_from(startAngle), em_Val_from(endAngle), em_Val_from(counterclockwise)));
}


jb_Undefined PaintRenderingContext2D_ellipse0(PaintRenderingContext2D* self , double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "ellipse", em_Val_from(x), em_Val_from(y), em_Val_from(radiusX), em_Val_from(radiusY), em_Val_from(rotation), em_Val_from(startAngle), em_Val_from(endAngle)));
}


jb_Undefined PaintRenderingContext2D_ellipse1(PaintRenderingContext2D* self , double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle, bool counterclockwise) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "ellipse", em_Val_from(x), em_Val_from(y), em_Val_from(radiusX), em_Val_from(radiusY), em_Val_from(rotation), em_Val_from(startAngle), em_Val_from(endAngle), em_Val_from(counterclockwise)));
}

