#include <webbind/OffscreenCanvasRenderingContext2D.h>
#include <webbind/OffscreenCanvas.h>
#include <webbind/CanvasRenderingContext2D.h>
#include <webbind/DOMMatrix.h>
#include <webbind/SVGSVGElement.h>
#include <webbind/CanvasGradient.h>
#include <webbind/CanvasPattern.h>
#include <webbind/Path2D.h>
#include <webbind/TextMetrics.h>
#include <webbind/ImageData.h>


DEFINE_EMLITE_TYPE(OffscreenCanvasRenderingContext2D, em_Val);


OffscreenCanvas OffscreenCanvasRenderingContext2D_canvas(const OffscreenCanvasRenderingContext2D *self) {
    return em_Val_as(OffscreenCanvas, em_Val_get(em_Val_as_val(self->inner), em_Val_from("canvas")));
}


CanvasRenderingContext2DSettings OffscreenCanvasRenderingContext2D_getContextAttributes(OffscreenCanvasRenderingContext2D* self ) {
    return em_Val_as(CanvasRenderingContext2DSettings, em_Val_call(em_Val_as_val(self->inner), "getContextAttributes"));
}


jb_Undefined OffscreenCanvasRenderingContext2D_save(OffscreenCanvasRenderingContext2D* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "save"));
}


jb_Undefined OffscreenCanvasRenderingContext2D_restore(OffscreenCanvasRenderingContext2D* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "restore"));
}


jb_Undefined OffscreenCanvasRenderingContext2D_reset(OffscreenCanvasRenderingContext2D* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "reset"));
}


bool OffscreenCanvasRenderingContext2D_isContextLost(OffscreenCanvasRenderingContext2D* self ) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "isContextLost"));
}


jb_Undefined OffscreenCanvasRenderingContext2D_scale(OffscreenCanvasRenderingContext2D* self , double x, double y) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "scale", em_Val_from(x), em_Val_from(y)));
}


jb_Undefined OffscreenCanvasRenderingContext2D_rotate(OffscreenCanvasRenderingContext2D* self , double angle) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "rotate", em_Val_from(angle)));
}


jb_Undefined OffscreenCanvasRenderingContext2D_translate(OffscreenCanvasRenderingContext2D* self , double x, double y) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "translate", em_Val_from(x), em_Val_from(y)));
}


jb_Undefined OffscreenCanvasRenderingContext2D_transform(OffscreenCanvasRenderingContext2D* self , double a, double b, double c, double d, double e, double f) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "transform", em_Val_from(a), em_Val_from(b), em_Val_from(c), em_Val_from(d), em_Val_from(e), em_Val_from(f)));
}


DOMMatrix OffscreenCanvasRenderingContext2D_getTransform(OffscreenCanvasRenderingContext2D* self ) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "getTransform"));
}


jb_Undefined OffscreenCanvasRenderingContext2D_setTransform0(OffscreenCanvasRenderingContext2D* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setTransform"));
}


jb_Undefined OffscreenCanvasRenderingContext2D_setTransform1(OffscreenCanvasRenderingContext2D* self , DOMMatrix2DInit * transform) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setTransform", em_Val_from(transform)));
}


jb_Undefined OffscreenCanvasRenderingContext2D_resetTransform(OffscreenCanvasRenderingContext2D* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "resetTransform"));
}


double OffscreenCanvasRenderingContext2D_globalAlpha(const OffscreenCanvasRenderingContext2D *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("globalAlpha")));
}


void OffscreenCanvasRenderingContext2D_set_globalAlpha(OffscreenCanvasRenderingContext2D* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("globalAlpha"), em_Val_from(value));
}


jb_String OffscreenCanvasRenderingContext2D_globalCompositeOperation(const OffscreenCanvasRenderingContext2D *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("globalCompositeOperation")));
}


void OffscreenCanvasRenderingContext2D_set_globalCompositeOperation(OffscreenCanvasRenderingContext2D* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("globalCompositeOperation"), em_Val_from(value));
}


bool OffscreenCanvasRenderingContext2D_imageSmoothingEnabled(const OffscreenCanvasRenderingContext2D *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("imageSmoothingEnabled")));
}


void OffscreenCanvasRenderingContext2D_set_imageSmoothingEnabled(OffscreenCanvasRenderingContext2D* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("imageSmoothingEnabled"), em_Val_from(value));
}


ImageSmoothingQuality OffscreenCanvasRenderingContext2D_imageSmoothingQuality(const OffscreenCanvasRenderingContext2D *self) {
    return em_Val_as(ImageSmoothingQuality, em_Val_get(em_Val_as_val(self->inner), em_Val_from("imageSmoothingQuality")));
}


void OffscreenCanvasRenderingContext2D_set_imageSmoothingQuality(OffscreenCanvasRenderingContext2D* self, ImageSmoothingQuality * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("imageSmoothingQuality"), em_Val_from(value));
}


jb_Any OffscreenCanvasRenderingContext2D_strokeStyle(const OffscreenCanvasRenderingContext2D *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("strokeStyle")));
}


void OffscreenCanvasRenderingContext2D_set_strokeStyle(OffscreenCanvasRenderingContext2D* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("strokeStyle"), em_Val_from(value));
}


jb_Any OffscreenCanvasRenderingContext2D_fillStyle(const OffscreenCanvasRenderingContext2D *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fillStyle")));
}


void OffscreenCanvasRenderingContext2D_set_fillStyle(OffscreenCanvasRenderingContext2D* self, jb_Any * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("fillStyle"), em_Val_from(value));
}


CanvasGradient OffscreenCanvasRenderingContext2D_createLinearGradient(OffscreenCanvasRenderingContext2D* self , double x0, double y0, double x1, double y1) {
    return em_Val_as(CanvasGradient, em_Val_call(em_Val_as_val(self->inner), "createLinearGradient", em_Val_from(x0), em_Val_from(y0), em_Val_from(x1), em_Val_from(y1)));
}


CanvasGradient OffscreenCanvasRenderingContext2D_createRadialGradient(OffscreenCanvasRenderingContext2D* self , double x0, double y0, double r0, double x1, double y1, double r1) {
    return em_Val_as(CanvasGradient, em_Val_call(em_Val_as_val(self->inner), "createRadialGradient", em_Val_from(x0), em_Val_from(y0), em_Val_from(r0), em_Val_from(x1), em_Val_from(y1), em_Val_from(r1)));
}


CanvasGradient OffscreenCanvasRenderingContext2D_createConicGradient(OffscreenCanvasRenderingContext2D* self , double startAngle, double x, double y) {
    return em_Val_as(CanvasGradient, em_Val_call(em_Val_as_val(self->inner), "createConicGradient", em_Val_from(startAngle), em_Val_from(x), em_Val_from(y)));
}


CanvasPattern OffscreenCanvasRenderingContext2D_createPattern(OffscreenCanvasRenderingContext2D* self , jb_Any * image, jb_String * repetition) {
    return em_Val_as(CanvasPattern, em_Val_call(em_Val_as_val(self->inner), "createPattern", em_Val_from(image), em_Val_from(repetition)));
}


double OffscreenCanvasRenderingContext2D_shadowOffsetX(const OffscreenCanvasRenderingContext2D *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("shadowOffsetX")));
}


void OffscreenCanvasRenderingContext2D_set_shadowOffsetX(OffscreenCanvasRenderingContext2D* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("shadowOffsetX"), em_Val_from(value));
}


double OffscreenCanvasRenderingContext2D_shadowOffsetY(const OffscreenCanvasRenderingContext2D *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("shadowOffsetY")));
}


void OffscreenCanvasRenderingContext2D_set_shadowOffsetY(OffscreenCanvasRenderingContext2D* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("shadowOffsetY"), em_Val_from(value));
}


double OffscreenCanvasRenderingContext2D_shadowBlur(const OffscreenCanvasRenderingContext2D *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("shadowBlur")));
}


void OffscreenCanvasRenderingContext2D_set_shadowBlur(OffscreenCanvasRenderingContext2D* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("shadowBlur"), em_Val_from(value));
}


jb_String OffscreenCanvasRenderingContext2D_shadowColor(const OffscreenCanvasRenderingContext2D *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("shadowColor")));
}


void OffscreenCanvasRenderingContext2D_set_shadowColor(OffscreenCanvasRenderingContext2D* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("shadowColor"), em_Val_from(value));
}


jb_String OffscreenCanvasRenderingContext2D_filter(const OffscreenCanvasRenderingContext2D *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("filter")));
}


void OffscreenCanvasRenderingContext2D_set_filter(OffscreenCanvasRenderingContext2D* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("filter"), em_Val_from(value));
}


jb_Undefined OffscreenCanvasRenderingContext2D_clearRect(OffscreenCanvasRenderingContext2D* self , double x, double y, double w, double h) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clearRect", em_Val_from(x), em_Val_from(y), em_Val_from(w), em_Val_from(h)));
}


jb_Undefined OffscreenCanvasRenderingContext2D_fillRect(OffscreenCanvasRenderingContext2D* self , double x, double y, double w, double h) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "fillRect", em_Val_from(x), em_Val_from(y), em_Val_from(w), em_Val_from(h)));
}


jb_Undefined OffscreenCanvasRenderingContext2D_strokeRect(OffscreenCanvasRenderingContext2D* self , double x, double y, double w, double h) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "strokeRect", em_Val_from(x), em_Val_from(y), em_Val_from(w), em_Val_from(h)));
}


jb_Undefined OffscreenCanvasRenderingContext2D_beginPath(OffscreenCanvasRenderingContext2D* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "beginPath"));
}


jb_Undefined OffscreenCanvasRenderingContext2D_fill0(OffscreenCanvasRenderingContext2D* self , Path2D * path) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "fill", em_Val_from(path)));
}


jb_Undefined OffscreenCanvasRenderingContext2D_fill1(OffscreenCanvasRenderingContext2D* self , Path2D * path, CanvasFillRule * fillRule) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "fill", em_Val_from(path), em_Val_from(fillRule)));
}


jb_Undefined OffscreenCanvasRenderingContext2D_stroke(OffscreenCanvasRenderingContext2D* self , Path2D * path) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "stroke", em_Val_from(path)));
}


jb_Undefined OffscreenCanvasRenderingContext2D_clip0(OffscreenCanvasRenderingContext2D* self , Path2D * path) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clip", em_Val_from(path)));
}


jb_Undefined OffscreenCanvasRenderingContext2D_clip1(OffscreenCanvasRenderingContext2D* self , Path2D * path, CanvasFillRule * fillRule) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clip", em_Val_from(path), em_Val_from(fillRule)));
}


bool OffscreenCanvasRenderingContext2D_isPointInPath0(OffscreenCanvasRenderingContext2D* self , Path2D * path, double x, double y) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "isPointInPath", em_Val_from(path), em_Val_from(x), em_Val_from(y)));
}


bool OffscreenCanvasRenderingContext2D_isPointInPath1(OffscreenCanvasRenderingContext2D* self , Path2D * path, double x, double y, CanvasFillRule * fillRule) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "isPointInPath", em_Val_from(path), em_Val_from(x), em_Val_from(y), em_Val_from(fillRule)));
}


bool OffscreenCanvasRenderingContext2D_isPointInStroke(OffscreenCanvasRenderingContext2D* self , Path2D * path, double x, double y) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "isPointInStroke", em_Val_from(path), em_Val_from(x), em_Val_from(y)));
}


jb_Undefined OffscreenCanvasRenderingContext2D_fillText0(OffscreenCanvasRenderingContext2D* self , jb_String * text, double x, double y) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "fillText", em_Val_from(text), em_Val_from(x), em_Val_from(y)));
}


jb_Undefined OffscreenCanvasRenderingContext2D_fillText1(OffscreenCanvasRenderingContext2D* self , jb_String * text, double x, double y, double maxWidth) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "fillText", em_Val_from(text), em_Val_from(x), em_Val_from(y), em_Val_from(maxWidth)));
}


jb_Undefined OffscreenCanvasRenderingContext2D_strokeText0(OffscreenCanvasRenderingContext2D* self , jb_String * text, double x, double y) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "strokeText", em_Val_from(text), em_Val_from(x), em_Val_from(y)));
}


jb_Undefined OffscreenCanvasRenderingContext2D_strokeText1(OffscreenCanvasRenderingContext2D* self , jb_String * text, double x, double y, double maxWidth) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "strokeText", em_Val_from(text), em_Val_from(x), em_Val_from(y), em_Val_from(maxWidth)));
}


TextMetrics OffscreenCanvasRenderingContext2D_measureText(OffscreenCanvasRenderingContext2D* self , jb_String * text) {
    return em_Val_as(TextMetrics, em_Val_call(em_Val_as_val(self->inner), "measureText", em_Val_from(text)));
}


jb_Undefined OffscreenCanvasRenderingContext2D_drawImage(OffscreenCanvasRenderingContext2D* self , jb_Any * image, double sx, double sy, double sw, double sh, double dx, double dy, double dw, double dh) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawImage", em_Val_from(image), em_Val_from(sx), em_Val_from(sy), em_Val_from(sw), em_Val_from(sh), em_Val_from(dx), em_Val_from(dy), em_Val_from(dw), em_Val_from(dh)));
}


ImageData OffscreenCanvasRenderingContext2D_createImageData(OffscreenCanvasRenderingContext2D* self , ImageData * imageData) {
    return em_Val_as(ImageData, em_Val_call(em_Val_as_val(self->inner), "createImageData", em_Val_from(imageData)));
}


ImageData OffscreenCanvasRenderingContext2D_getImageData0(OffscreenCanvasRenderingContext2D* self , long sx, long sy, long sw, long sh) {
    return em_Val_as(ImageData, em_Val_call(em_Val_as_val(self->inner), "getImageData", em_Val_from(sx), em_Val_from(sy), em_Val_from(sw), em_Val_from(sh)));
}


ImageData OffscreenCanvasRenderingContext2D_getImageData1(OffscreenCanvasRenderingContext2D* self , long sx, long sy, long sw, long sh, ImageDataSettings * settings) {
    return em_Val_as(ImageData, em_Val_call(em_Val_as_val(self->inner), "getImageData", em_Val_from(sx), em_Val_from(sy), em_Val_from(sw), em_Val_from(sh), em_Val_from(settings)));
}


jb_Undefined OffscreenCanvasRenderingContext2D_putImageData(OffscreenCanvasRenderingContext2D* self , ImageData * imageData, long dx, long dy, long dirtyX, long dirtyY, long dirtyWidth, long dirtyHeight) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "putImageData", em_Val_from(imageData), em_Val_from(dx), em_Val_from(dy), em_Val_from(dirtyX), em_Val_from(dirtyY), em_Val_from(dirtyWidth), em_Val_from(dirtyHeight)));
}


double OffscreenCanvasRenderingContext2D_lineWidth(const OffscreenCanvasRenderingContext2D *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("lineWidth")));
}


void OffscreenCanvasRenderingContext2D_set_lineWidth(OffscreenCanvasRenderingContext2D* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("lineWidth"), em_Val_from(value));
}


CanvasLineCap OffscreenCanvasRenderingContext2D_lineCap(const OffscreenCanvasRenderingContext2D *self) {
    return em_Val_as(CanvasLineCap, em_Val_get(em_Val_as_val(self->inner), em_Val_from("lineCap")));
}


void OffscreenCanvasRenderingContext2D_set_lineCap(OffscreenCanvasRenderingContext2D* self, CanvasLineCap * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("lineCap"), em_Val_from(value));
}


CanvasLineJoin OffscreenCanvasRenderingContext2D_lineJoin(const OffscreenCanvasRenderingContext2D *self) {
    return em_Val_as(CanvasLineJoin, em_Val_get(em_Val_as_val(self->inner), em_Val_from("lineJoin")));
}


void OffscreenCanvasRenderingContext2D_set_lineJoin(OffscreenCanvasRenderingContext2D* self, CanvasLineJoin * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("lineJoin"), em_Val_from(value));
}


double OffscreenCanvasRenderingContext2D_miterLimit(const OffscreenCanvasRenderingContext2D *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("miterLimit")));
}


void OffscreenCanvasRenderingContext2D_set_miterLimit(OffscreenCanvasRenderingContext2D* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("miterLimit"), em_Val_from(value));
}


jb_Undefined OffscreenCanvasRenderingContext2D_setLineDash(OffscreenCanvasRenderingContext2D* self , jb_Array * segments) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setLineDash", em_Val_from(segments)));
}


jb_Array OffscreenCanvasRenderingContext2D_getLineDash(OffscreenCanvasRenderingContext2D* self ) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_as_val(self->inner), "getLineDash"));
}


double OffscreenCanvasRenderingContext2D_lineDashOffset(const OffscreenCanvasRenderingContext2D *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("lineDashOffset")));
}


void OffscreenCanvasRenderingContext2D_set_lineDashOffset(OffscreenCanvasRenderingContext2D* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("lineDashOffset"), em_Val_from(value));
}


jb_String OffscreenCanvasRenderingContext2D_lang(const OffscreenCanvasRenderingContext2D *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("lang")));
}


void OffscreenCanvasRenderingContext2D_set_lang(OffscreenCanvasRenderingContext2D* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("lang"), em_Val_from(value));
}


jb_String OffscreenCanvasRenderingContext2D_font(const OffscreenCanvasRenderingContext2D *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("font")));
}


void OffscreenCanvasRenderingContext2D_set_font(OffscreenCanvasRenderingContext2D* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("font"), em_Val_from(value));
}


CanvasTextAlign OffscreenCanvasRenderingContext2D_textAlign(const OffscreenCanvasRenderingContext2D *self) {
    return em_Val_as(CanvasTextAlign, em_Val_get(em_Val_as_val(self->inner), em_Val_from("textAlign")));
}


void OffscreenCanvasRenderingContext2D_set_textAlign(OffscreenCanvasRenderingContext2D* self, CanvasTextAlign * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("textAlign"), em_Val_from(value));
}


CanvasTextBaseline OffscreenCanvasRenderingContext2D_textBaseline(const OffscreenCanvasRenderingContext2D *self) {
    return em_Val_as(CanvasTextBaseline, em_Val_get(em_Val_as_val(self->inner), em_Val_from("textBaseline")));
}


void OffscreenCanvasRenderingContext2D_set_textBaseline(OffscreenCanvasRenderingContext2D* self, CanvasTextBaseline * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("textBaseline"), em_Val_from(value));
}


CanvasDirection OffscreenCanvasRenderingContext2D_direction(const OffscreenCanvasRenderingContext2D *self) {
    return em_Val_as(CanvasDirection, em_Val_get(em_Val_as_val(self->inner), em_Val_from("direction")));
}


void OffscreenCanvasRenderingContext2D_set_direction(OffscreenCanvasRenderingContext2D* self, CanvasDirection * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("direction"), em_Val_from(value));
}


jb_String OffscreenCanvasRenderingContext2D_letterSpacing(const OffscreenCanvasRenderingContext2D *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("letterSpacing")));
}


void OffscreenCanvasRenderingContext2D_set_letterSpacing(OffscreenCanvasRenderingContext2D* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("letterSpacing"), em_Val_from(value));
}


CanvasFontKerning OffscreenCanvasRenderingContext2D_fontKerning(const OffscreenCanvasRenderingContext2D *self) {
    return em_Val_as(CanvasFontKerning, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fontKerning")));
}


void OffscreenCanvasRenderingContext2D_set_fontKerning(OffscreenCanvasRenderingContext2D* self, CanvasFontKerning * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("fontKerning"), em_Val_from(value));
}


CanvasFontStretch OffscreenCanvasRenderingContext2D_fontStretch(const OffscreenCanvasRenderingContext2D *self) {
    return em_Val_as(CanvasFontStretch, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fontStretch")));
}


void OffscreenCanvasRenderingContext2D_set_fontStretch(OffscreenCanvasRenderingContext2D* self, CanvasFontStretch * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("fontStretch"), em_Val_from(value));
}


CanvasFontVariantCaps OffscreenCanvasRenderingContext2D_fontVariantCaps(const OffscreenCanvasRenderingContext2D *self) {
    return em_Val_as(CanvasFontVariantCaps, em_Val_get(em_Val_as_val(self->inner), em_Val_from("fontVariantCaps")));
}


void OffscreenCanvasRenderingContext2D_set_fontVariantCaps(OffscreenCanvasRenderingContext2D* self, CanvasFontVariantCaps * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("fontVariantCaps"), em_Val_from(value));
}


CanvasTextRendering OffscreenCanvasRenderingContext2D_textRendering(const OffscreenCanvasRenderingContext2D *self) {
    return em_Val_as(CanvasTextRendering, em_Val_get(em_Val_as_val(self->inner), em_Val_from("textRendering")));
}


void OffscreenCanvasRenderingContext2D_set_textRendering(OffscreenCanvasRenderingContext2D* self, CanvasTextRendering * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("textRendering"), em_Val_from(value));
}


jb_String OffscreenCanvasRenderingContext2D_wordSpacing(const OffscreenCanvasRenderingContext2D *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("wordSpacing")));
}


void OffscreenCanvasRenderingContext2D_set_wordSpacing(OffscreenCanvasRenderingContext2D* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("wordSpacing"), em_Val_from(value));
}


jb_Undefined OffscreenCanvasRenderingContext2D_closePath(OffscreenCanvasRenderingContext2D* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "closePath"));
}


jb_Undefined OffscreenCanvasRenderingContext2D_moveTo(OffscreenCanvasRenderingContext2D* self , double x, double y) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "moveTo", em_Val_from(x), em_Val_from(y)));
}


jb_Undefined OffscreenCanvasRenderingContext2D_lineTo(OffscreenCanvasRenderingContext2D* self , double x, double y) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "lineTo", em_Val_from(x), em_Val_from(y)));
}


jb_Undefined OffscreenCanvasRenderingContext2D_quadraticCurveTo(OffscreenCanvasRenderingContext2D* self , double cpx, double cpy, double x, double y) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "quadraticCurveTo", em_Val_from(cpx), em_Val_from(cpy), em_Val_from(x), em_Val_from(y)));
}


jb_Undefined OffscreenCanvasRenderingContext2D_bezierCurveTo(OffscreenCanvasRenderingContext2D* self , double cp1x, double cp1y, double cp2x, double cp2y, double x, double y) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "bezierCurveTo", em_Val_from(cp1x), em_Val_from(cp1y), em_Val_from(cp2x), em_Val_from(cp2y), em_Val_from(x), em_Val_from(y)));
}


jb_Undefined OffscreenCanvasRenderingContext2D_arcTo(OffscreenCanvasRenderingContext2D* self , double x1, double y1, double x2, double y2, double radius) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "arcTo", em_Val_from(x1), em_Val_from(y1), em_Val_from(x2), em_Val_from(y2), em_Val_from(radius)));
}


jb_Undefined OffscreenCanvasRenderingContext2D_rect(OffscreenCanvasRenderingContext2D* self , double x, double y, double w, double h) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "rect", em_Val_from(x), em_Val_from(y), em_Val_from(w), em_Val_from(h)));
}


jb_Undefined OffscreenCanvasRenderingContext2D_roundRect0(OffscreenCanvasRenderingContext2D* self , double x, double y, double w, double h) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "roundRect", em_Val_from(x), em_Val_from(y), em_Val_from(w), em_Val_from(h)));
}


jb_Undefined OffscreenCanvasRenderingContext2D_roundRect1(OffscreenCanvasRenderingContext2D* self , double x, double y, double w, double h, jb_Any * radii) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "roundRect", em_Val_from(x), em_Val_from(y), em_Val_from(w), em_Val_from(h), em_Val_from(radii)));
}


jb_Undefined OffscreenCanvasRenderingContext2D_arc0(OffscreenCanvasRenderingContext2D* self , double x, double y, double radius, double startAngle, double endAngle) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "arc", em_Val_from(x), em_Val_from(y), em_Val_from(radius), em_Val_from(startAngle), em_Val_from(endAngle)));
}


jb_Undefined OffscreenCanvasRenderingContext2D_arc1(OffscreenCanvasRenderingContext2D* self , double x, double y, double radius, double startAngle, double endAngle, bool counterclockwise) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "arc", em_Val_from(x), em_Val_from(y), em_Val_from(radius), em_Val_from(startAngle), em_Val_from(endAngle), em_Val_from(counterclockwise)));
}


jb_Undefined OffscreenCanvasRenderingContext2D_ellipse0(OffscreenCanvasRenderingContext2D* self , double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "ellipse", em_Val_from(x), em_Val_from(y), em_Val_from(radiusX), em_Val_from(radiusY), em_Val_from(rotation), em_Val_from(startAngle), em_Val_from(endAngle)));
}


jb_Undefined OffscreenCanvasRenderingContext2D_ellipse1(OffscreenCanvasRenderingContext2D* self , double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle, bool counterclockwise) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "ellipse", em_Val_from(x), em_Val_from(y), em_Val_from(radiusX), em_Val_from(radiusY), em_Val_from(rotation), em_Val_from(startAngle), em_Val_from(endAngle), em_Val_from(counterclockwise)));
}

