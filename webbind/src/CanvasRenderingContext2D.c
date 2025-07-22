#include <webbind/CanvasRenderingContext2D.h>
#include <webbind/HTMLCanvasElement.h>
#include <webbind/DOMMatrix.h>
#include <webbind/SVGSVGElement.h>
#include <webbind/CanvasGradient.h>
#include <webbind/CanvasPattern.h>
#include <webbind/Path2D.h>
#include <webbind/Element.h>
#include <webbind/TextMetrics.h>
#include <webbind/ImageData.h>


DEFINE_EMLITE_TYPE(CanvasRenderingContext2DSettings, em_Val);


bool CanvasRenderingContext2DSettings_alpha(const CanvasRenderingContext2DSettings *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "alpha"));
}


void CanvasRenderingContext2DSettings_set_alpha(CanvasRenderingContext2DSettings* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "alpha", value);
}


bool CanvasRenderingContext2DSettings_desynchronized(const CanvasRenderingContext2DSettings *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "desynchronized"));
}


void CanvasRenderingContext2DSettings_set_desynchronized(CanvasRenderingContext2DSettings* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "desynchronized", value);
}


PredefinedColorSpace CanvasRenderingContext2DSettings_colorSpace(const CanvasRenderingContext2DSettings *self) {
    return em_Val_as(PredefinedColorSpace, em_Val_get(em_Val_as_val(self->inner), "colorSpace"));
}


void CanvasRenderingContext2DSettings_set_colorSpace(CanvasRenderingContext2DSettings* self, const PredefinedColorSpace* value) {
    em_Val_set(em_Val_as_val(self->inner), "colorSpace", value);
}


CanvasColorType CanvasRenderingContext2DSettings_colorType(const CanvasRenderingContext2DSettings *self) {
    return em_Val_as(CanvasColorType, em_Val_get(em_Val_as_val(self->inner), "colorType"));
}


void CanvasRenderingContext2DSettings_set_colorType(CanvasRenderingContext2DSettings* self, const CanvasColorType* value) {
    em_Val_set(em_Val_as_val(self->inner), "colorType", value);
}


bool CanvasRenderingContext2DSettings_willReadFrequently(const CanvasRenderingContext2DSettings *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "willReadFrequently"));
}


void CanvasRenderingContext2DSettings_set_willReadFrequently(CanvasRenderingContext2DSettings* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "willReadFrequently", value);
}

DEFINE_EMLITE_TYPE(ImageDataSettings, em_Val);


PredefinedColorSpace ImageDataSettings_colorSpace(const ImageDataSettings *self) {
    return em_Val_as(PredefinedColorSpace, em_Val_get(em_Val_as_val(self->inner), "colorSpace"));
}


void ImageDataSettings_set_colorSpace(ImageDataSettings* self, const PredefinedColorSpace* value) {
    em_Val_set(em_Val_as_val(self->inner), "colorSpace", value);
}


ImageDataPixelFormat ImageDataSettings_pixelFormat(const ImageDataSettings *self) {
    return em_Val_as(ImageDataPixelFormat, em_Val_get(em_Val_as_val(self->inner), "pixelFormat"));
}


void ImageDataSettings_set_pixelFormat(ImageDataSettings* self, const ImageDataPixelFormat* value) {
    em_Val_set(em_Val_as_val(self->inner), "pixelFormat", value);
}

DEFINE_EMLITE_TYPE(CanvasRenderingContext2D, em_Val);


HTMLCanvasElement CanvasRenderingContext2D_canvas(const CanvasRenderingContext2D *self) {
    return em_Val_as(HTMLCanvasElement, em_Val_get(em_Val_as_val(self->inner), "canvas"));
}


CanvasRenderingContext2DSettings CanvasRenderingContext2D_getContextAttributes(CanvasRenderingContext2D* self ) {
    return em_Val_as(CanvasRenderingContext2DSettings, em_Val_call(em_Val_as_val(self->inner), "getContextAttributes"));
}


jb_Undefined CanvasRenderingContext2D_save(CanvasRenderingContext2D* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "save"));
}


jb_Undefined CanvasRenderingContext2D_restore(CanvasRenderingContext2D* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "restore"));
}


jb_Undefined CanvasRenderingContext2D_reset(CanvasRenderingContext2D* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "reset"));
}


bool CanvasRenderingContext2D_isContextLost(CanvasRenderingContext2D* self ) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "isContextLost"));
}


jb_Undefined CanvasRenderingContext2D_scale(CanvasRenderingContext2D* self , double x, double y) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "scale", em_Val_from(x), em_Val_from(y)));
}


jb_Undefined CanvasRenderingContext2D_rotate(CanvasRenderingContext2D* self , double angle) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "rotate", em_Val_from(angle)));
}


jb_Undefined CanvasRenderingContext2D_translate(CanvasRenderingContext2D* self , double x, double y) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "translate", em_Val_from(x), em_Val_from(y)));
}


jb_Undefined CanvasRenderingContext2D_transform(CanvasRenderingContext2D* self , double a, double b, double c, double d, double e, double f) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "transform", em_Val_from(a), em_Val_from(b), em_Val_from(c), em_Val_from(d), em_Val_from(e), em_Val_from(f)));
}


DOMMatrix CanvasRenderingContext2D_getTransform(CanvasRenderingContext2D* self ) {
    return em_Val_as(DOMMatrix, em_Val_call(em_Val_as_val(self->inner), "getTransform"));
}


jb_Undefined CanvasRenderingContext2D_setTransform(CanvasRenderingContext2D* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setTransform"));
}


jb_Undefined CanvasRenderingContext2D_setTransform(CanvasRenderingContext2D* self , const DOMMatrix2DInit* transform) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setTransform", em_Val_from(transform)));
}


jb_Undefined CanvasRenderingContext2D_resetTransform(CanvasRenderingContext2D* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "resetTransform"));
}


double CanvasRenderingContext2D_globalAlpha(const CanvasRenderingContext2D *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "globalAlpha"));
}


void CanvasRenderingContext2D_set_globalAlpha(CanvasRenderingContext2D* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "globalAlpha", value);
}


jb_DOMString CanvasRenderingContext2D_globalCompositeOperation(const CanvasRenderingContext2D *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "globalCompositeOperation"));
}


void CanvasRenderingContext2D_set_globalCompositeOperation(CanvasRenderingContext2D* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "globalCompositeOperation", value);
}


bool CanvasRenderingContext2D_imageSmoothingEnabled(const CanvasRenderingContext2D *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "imageSmoothingEnabled"));
}


void CanvasRenderingContext2D_set_imageSmoothingEnabled(CanvasRenderingContext2D* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), "imageSmoothingEnabled", value);
}


ImageSmoothingQuality CanvasRenderingContext2D_imageSmoothingQuality(const CanvasRenderingContext2D *self) {
    return em_Val_as(ImageSmoothingQuality, em_Val_get(em_Val_as_val(self->inner), "imageSmoothingQuality"));
}


void CanvasRenderingContext2D_set_imageSmoothingQuality(CanvasRenderingContext2D* self, const ImageSmoothingQuality* value) {
    em_Val_set(em_Val_as_val(self->inner), "imageSmoothingQuality", value);
}


jb_Any CanvasRenderingContext2D_strokeStyle(const CanvasRenderingContext2D *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "strokeStyle"));
}


void CanvasRenderingContext2D_set_strokeStyle(CanvasRenderingContext2D* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "strokeStyle", value);
}


jb_Any CanvasRenderingContext2D_fillStyle(const CanvasRenderingContext2D *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "fillStyle"));
}


void CanvasRenderingContext2D_set_fillStyle(CanvasRenderingContext2D* self, const jb_Any* value) {
    em_Val_set(em_Val_as_val(self->inner), "fillStyle", value);
}


CanvasGradient CanvasRenderingContext2D_createLinearGradient(CanvasRenderingContext2D* self , double x0, double y0, double x1, double y1) {
    return em_Val_as(CanvasGradient, em_Val_call(em_Val_as_val(self->inner), "createLinearGradient", em_Val_from(x0), em_Val_from(y0), em_Val_from(x1), em_Val_from(y1)));
}


CanvasGradient CanvasRenderingContext2D_createRadialGradient(CanvasRenderingContext2D* self , double x0, double y0, double r0, double x1, double y1, double r1) {
    return em_Val_as(CanvasGradient, em_Val_call(em_Val_as_val(self->inner), "createRadialGradient", em_Val_from(x0), em_Val_from(y0), em_Val_from(r0), em_Val_from(x1), em_Val_from(y1), em_Val_from(r1)));
}


CanvasGradient CanvasRenderingContext2D_createConicGradient(CanvasRenderingContext2D* self , double startAngle, double x, double y) {
    return em_Val_as(CanvasGradient, em_Val_call(em_Val_as_val(self->inner), "createConicGradient", em_Val_from(startAngle), em_Val_from(x), em_Val_from(y)));
}


CanvasPattern CanvasRenderingContext2D_createPattern(CanvasRenderingContext2D* self , const jb_Any* image, const jb_DOMString* repetition) {
    return em_Val_as(CanvasPattern, em_Val_call(em_Val_as_val(self->inner), "createPattern", em_Val_from(image), em_Val_from(repetition)));
}


double CanvasRenderingContext2D_shadowOffsetX(const CanvasRenderingContext2D *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "shadowOffsetX"));
}


void CanvasRenderingContext2D_set_shadowOffsetX(CanvasRenderingContext2D* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "shadowOffsetX", value);
}


double CanvasRenderingContext2D_shadowOffsetY(const CanvasRenderingContext2D *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "shadowOffsetY"));
}


void CanvasRenderingContext2D_set_shadowOffsetY(CanvasRenderingContext2D* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "shadowOffsetY", value);
}


double CanvasRenderingContext2D_shadowBlur(const CanvasRenderingContext2D *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "shadowBlur"));
}


void CanvasRenderingContext2D_set_shadowBlur(CanvasRenderingContext2D* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "shadowBlur", value);
}


jb_DOMString CanvasRenderingContext2D_shadowColor(const CanvasRenderingContext2D *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "shadowColor"));
}


void CanvasRenderingContext2D_set_shadowColor(CanvasRenderingContext2D* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "shadowColor", value);
}


jb_DOMString CanvasRenderingContext2D_filter(const CanvasRenderingContext2D *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "filter"));
}


void CanvasRenderingContext2D_set_filter(CanvasRenderingContext2D* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "filter", value);
}


jb_Undefined CanvasRenderingContext2D_clearRect(CanvasRenderingContext2D* self , double x, double y, double w, double h) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clearRect", em_Val_from(x), em_Val_from(y), em_Val_from(w), em_Val_from(h)));
}


jb_Undefined CanvasRenderingContext2D_fillRect(CanvasRenderingContext2D* self , double x, double y, double w, double h) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "fillRect", em_Val_from(x), em_Val_from(y), em_Val_from(w), em_Val_from(h)));
}


jb_Undefined CanvasRenderingContext2D_strokeRect(CanvasRenderingContext2D* self , double x, double y, double w, double h) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "strokeRect", em_Val_from(x), em_Val_from(y), em_Val_from(w), em_Val_from(h)));
}


jb_Undefined CanvasRenderingContext2D_beginPath(CanvasRenderingContext2D* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "beginPath"));
}


jb_Undefined CanvasRenderingContext2D_fill(CanvasRenderingContext2D* self , const Path2D* path) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "fill", em_Val_from(path)));
}


jb_Undefined CanvasRenderingContext2D_fill(CanvasRenderingContext2D* self , const Path2D* path, const CanvasFillRule* fillRule) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "fill", em_Val_from(path), em_Val_from(fillRule)));
}


jb_Undefined CanvasRenderingContext2D_stroke(CanvasRenderingContext2D* self , const Path2D* path) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "stroke", em_Val_from(path)));
}


jb_Undefined CanvasRenderingContext2D_clip(CanvasRenderingContext2D* self , const Path2D* path) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clip", em_Val_from(path)));
}


jb_Undefined CanvasRenderingContext2D_clip(CanvasRenderingContext2D* self , const Path2D* path, const CanvasFillRule* fillRule) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "clip", em_Val_from(path), em_Val_from(fillRule)));
}


bool CanvasRenderingContext2D_isPointInPath(CanvasRenderingContext2D* self , const Path2D* path, double x, double y) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "isPointInPath", em_Val_from(path), em_Val_from(x), em_Val_from(y)));
}


bool CanvasRenderingContext2D_isPointInPath(CanvasRenderingContext2D* self , const Path2D* path, double x, double y, const CanvasFillRule* fillRule) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "isPointInPath", em_Val_from(path), em_Val_from(x), em_Val_from(y), em_Val_from(fillRule)));
}


bool CanvasRenderingContext2D_isPointInStroke(CanvasRenderingContext2D* self , const Path2D* path, double x, double y) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "isPointInStroke", em_Val_from(path), em_Val_from(x), em_Val_from(y)));
}


jb_Undefined CanvasRenderingContext2D_drawFocusIfNeeded(CanvasRenderingContext2D* self , const Path2D* path, const Element* element) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawFocusIfNeeded", em_Val_from(path), em_Val_from(element)));
}


jb_Undefined CanvasRenderingContext2D_fillText(CanvasRenderingContext2D* self , const jb_DOMString* text, double x, double y) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "fillText", em_Val_from(text), em_Val_from(x), em_Val_from(y)));
}


jb_Undefined CanvasRenderingContext2D_fillText(CanvasRenderingContext2D* self , const jb_DOMString* text, double x, double y, double maxWidth) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "fillText", em_Val_from(text), em_Val_from(x), em_Val_from(y), em_Val_from(maxWidth)));
}


jb_Undefined CanvasRenderingContext2D_strokeText(CanvasRenderingContext2D* self , const jb_DOMString* text, double x, double y) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "strokeText", em_Val_from(text), em_Val_from(x), em_Val_from(y)));
}


jb_Undefined CanvasRenderingContext2D_strokeText(CanvasRenderingContext2D* self , const jb_DOMString* text, double x, double y, double maxWidth) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "strokeText", em_Val_from(text), em_Val_from(x), em_Val_from(y), em_Val_from(maxWidth)));
}


TextMetrics CanvasRenderingContext2D_measureText(CanvasRenderingContext2D* self , const jb_DOMString* text) {
    return em_Val_as(TextMetrics, em_Val_call(em_Val_as_val(self->inner), "measureText", em_Val_from(text)));
}


jb_Undefined CanvasRenderingContext2D_drawImage(CanvasRenderingContext2D* self , const jb_Any* image, double sx, double sy, double sw, double sh, double dx, double dy, double dw, double dh) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "drawImage", em_Val_from(image), em_Val_from(sx), em_Val_from(sy), em_Val_from(sw), em_Val_from(sh), em_Val_from(dx), em_Val_from(dy), em_Val_from(dw), em_Val_from(dh)));
}


ImageData CanvasRenderingContext2D_createImageData(CanvasRenderingContext2D* self , const ImageData* imageData) {
    return em_Val_as(ImageData, em_Val_call(em_Val_as_val(self->inner), "createImageData", em_Val_from(imageData)));
}


ImageData CanvasRenderingContext2D_getImageData(CanvasRenderingContext2D* self , long sx, long sy, long sw, long sh) {
    return em_Val_as(ImageData, em_Val_call(em_Val_as_val(self->inner), "getImageData", em_Val_from(sx), em_Val_from(sy), em_Val_from(sw), em_Val_from(sh)));
}


ImageData CanvasRenderingContext2D_getImageData(CanvasRenderingContext2D* self , long sx, long sy, long sw, long sh, const ImageDataSettings* settings) {
    return em_Val_as(ImageData, em_Val_call(em_Val_as_val(self->inner), "getImageData", em_Val_from(sx), em_Val_from(sy), em_Val_from(sw), em_Val_from(sh), em_Val_from(settings)));
}


jb_Undefined CanvasRenderingContext2D_putImageData(CanvasRenderingContext2D* self , const ImageData* imageData, long dx, long dy, long dirtyX, long dirtyY, long dirtyWidth, long dirtyHeight) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "putImageData", em_Val_from(imageData), em_Val_from(dx), em_Val_from(dy), em_Val_from(dirtyX), em_Val_from(dirtyY), em_Val_from(dirtyWidth), em_Val_from(dirtyHeight)));
}


double CanvasRenderingContext2D_lineWidth(const CanvasRenderingContext2D *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "lineWidth"));
}


void CanvasRenderingContext2D_set_lineWidth(CanvasRenderingContext2D* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "lineWidth", value);
}


CanvasLineCap CanvasRenderingContext2D_lineCap(const CanvasRenderingContext2D *self) {
    return em_Val_as(CanvasLineCap, em_Val_get(em_Val_as_val(self->inner), "lineCap"));
}


void CanvasRenderingContext2D_set_lineCap(CanvasRenderingContext2D* self, const CanvasLineCap* value) {
    em_Val_set(em_Val_as_val(self->inner), "lineCap", value);
}


CanvasLineJoin CanvasRenderingContext2D_lineJoin(const CanvasRenderingContext2D *self) {
    return em_Val_as(CanvasLineJoin, em_Val_get(em_Val_as_val(self->inner), "lineJoin"));
}


void CanvasRenderingContext2D_set_lineJoin(CanvasRenderingContext2D* self, const CanvasLineJoin* value) {
    em_Val_set(em_Val_as_val(self->inner), "lineJoin", value);
}


double CanvasRenderingContext2D_miterLimit(const CanvasRenderingContext2D *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "miterLimit"));
}


void CanvasRenderingContext2D_set_miterLimit(CanvasRenderingContext2D* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "miterLimit", value);
}


jb_Undefined CanvasRenderingContext2D_setLineDash(CanvasRenderingContext2D* self , const jb_Sequence* segments) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "setLineDash", em_Val_from(segments)));
}


jb_Sequence CanvasRenderingContext2D_getLineDash(CanvasRenderingContext2D* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "getLineDash"));
}


double CanvasRenderingContext2D_lineDashOffset(const CanvasRenderingContext2D *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), "lineDashOffset"));
}


void CanvasRenderingContext2D_set_lineDashOffset(CanvasRenderingContext2D* self, double value) {
    em_Val_set(em_Val_as_val(self->inner), "lineDashOffset", value);
}


jb_DOMString CanvasRenderingContext2D_lang(const CanvasRenderingContext2D *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "lang"));
}


void CanvasRenderingContext2D_set_lang(CanvasRenderingContext2D* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "lang", value);
}


jb_DOMString CanvasRenderingContext2D_font(const CanvasRenderingContext2D *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "font"));
}


void CanvasRenderingContext2D_set_font(CanvasRenderingContext2D* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "font", value);
}


CanvasTextAlign CanvasRenderingContext2D_textAlign(const CanvasRenderingContext2D *self) {
    return em_Val_as(CanvasTextAlign, em_Val_get(em_Val_as_val(self->inner), "textAlign"));
}


void CanvasRenderingContext2D_set_textAlign(CanvasRenderingContext2D* self, const CanvasTextAlign* value) {
    em_Val_set(em_Val_as_val(self->inner), "textAlign", value);
}


CanvasTextBaseline CanvasRenderingContext2D_textBaseline(const CanvasRenderingContext2D *self) {
    return em_Val_as(CanvasTextBaseline, em_Val_get(em_Val_as_val(self->inner), "textBaseline"));
}


void CanvasRenderingContext2D_set_textBaseline(CanvasRenderingContext2D* self, const CanvasTextBaseline* value) {
    em_Val_set(em_Val_as_val(self->inner), "textBaseline", value);
}


CanvasDirection CanvasRenderingContext2D_direction(const CanvasRenderingContext2D *self) {
    return em_Val_as(CanvasDirection, em_Val_get(em_Val_as_val(self->inner), "direction"));
}


void CanvasRenderingContext2D_set_direction(CanvasRenderingContext2D* self, const CanvasDirection* value) {
    em_Val_set(em_Val_as_val(self->inner), "direction", value);
}


jb_DOMString CanvasRenderingContext2D_letterSpacing(const CanvasRenderingContext2D *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "letterSpacing"));
}


void CanvasRenderingContext2D_set_letterSpacing(CanvasRenderingContext2D* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "letterSpacing", value);
}


CanvasFontKerning CanvasRenderingContext2D_fontKerning(const CanvasRenderingContext2D *self) {
    return em_Val_as(CanvasFontKerning, em_Val_get(em_Val_as_val(self->inner), "fontKerning"));
}


void CanvasRenderingContext2D_set_fontKerning(CanvasRenderingContext2D* self, const CanvasFontKerning* value) {
    em_Val_set(em_Val_as_val(self->inner), "fontKerning", value);
}


CanvasFontStretch CanvasRenderingContext2D_fontStretch(const CanvasRenderingContext2D *self) {
    return em_Val_as(CanvasFontStretch, em_Val_get(em_Val_as_val(self->inner), "fontStretch"));
}


void CanvasRenderingContext2D_set_fontStretch(CanvasRenderingContext2D* self, const CanvasFontStretch* value) {
    em_Val_set(em_Val_as_val(self->inner), "fontStretch", value);
}


CanvasFontVariantCaps CanvasRenderingContext2D_fontVariantCaps(const CanvasRenderingContext2D *self) {
    return em_Val_as(CanvasFontVariantCaps, em_Val_get(em_Val_as_val(self->inner), "fontVariantCaps"));
}


void CanvasRenderingContext2D_set_fontVariantCaps(CanvasRenderingContext2D* self, const CanvasFontVariantCaps* value) {
    em_Val_set(em_Val_as_val(self->inner), "fontVariantCaps", value);
}


CanvasTextRendering CanvasRenderingContext2D_textRendering(const CanvasRenderingContext2D *self) {
    return em_Val_as(CanvasTextRendering, em_Val_get(em_Val_as_val(self->inner), "textRendering"));
}


void CanvasRenderingContext2D_set_textRendering(CanvasRenderingContext2D* self, const CanvasTextRendering* value) {
    em_Val_set(em_Val_as_val(self->inner), "textRendering", value);
}


jb_DOMString CanvasRenderingContext2D_wordSpacing(const CanvasRenderingContext2D *self) {
    return em_Val_as(jb_DOMString, em_Val_get(em_Val_as_val(self->inner), "wordSpacing"));
}


void CanvasRenderingContext2D_set_wordSpacing(CanvasRenderingContext2D* self, const jb_DOMString* value) {
    em_Val_set(em_Val_as_val(self->inner), "wordSpacing", value);
}


jb_Undefined CanvasRenderingContext2D_closePath(CanvasRenderingContext2D* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "closePath"));
}


jb_Undefined CanvasRenderingContext2D_moveTo(CanvasRenderingContext2D* self , double x, double y) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "moveTo", em_Val_from(x), em_Val_from(y)));
}


jb_Undefined CanvasRenderingContext2D_lineTo(CanvasRenderingContext2D* self , double x, double y) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "lineTo", em_Val_from(x), em_Val_from(y)));
}


jb_Undefined CanvasRenderingContext2D_quadraticCurveTo(CanvasRenderingContext2D* self , double cpx, double cpy, double x, double y) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "quadraticCurveTo", em_Val_from(cpx), em_Val_from(cpy), em_Val_from(x), em_Val_from(y)));
}


jb_Undefined CanvasRenderingContext2D_bezierCurveTo(CanvasRenderingContext2D* self , double cp1x, double cp1y, double cp2x, double cp2y, double x, double y) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "bezierCurveTo", em_Val_from(cp1x), em_Val_from(cp1y), em_Val_from(cp2x), em_Val_from(cp2y), em_Val_from(x), em_Val_from(y)));
}


jb_Undefined CanvasRenderingContext2D_arcTo(CanvasRenderingContext2D* self , double x1, double y1, double x2, double y2, double radius) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "arcTo", em_Val_from(x1), em_Val_from(y1), em_Val_from(x2), em_Val_from(y2), em_Val_from(radius)));
}


jb_Undefined CanvasRenderingContext2D_rect(CanvasRenderingContext2D* self , double x, double y, double w, double h) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "rect", em_Val_from(x), em_Val_from(y), em_Val_from(w), em_Val_from(h)));
}


jb_Undefined CanvasRenderingContext2D_roundRect(CanvasRenderingContext2D* self , double x, double y, double w, double h) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "roundRect", em_Val_from(x), em_Val_from(y), em_Val_from(w), em_Val_from(h)));
}


jb_Undefined CanvasRenderingContext2D_roundRect(CanvasRenderingContext2D* self , double x, double y, double w, double h, const jb_Any* radii) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "roundRect", em_Val_from(x), em_Val_from(y), em_Val_from(w), em_Val_from(h), em_Val_from(radii)));
}


jb_Undefined CanvasRenderingContext2D_arc(CanvasRenderingContext2D* self , double x, double y, double radius, double startAngle, double endAngle) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "arc", em_Val_from(x), em_Val_from(y), em_Val_from(radius), em_Val_from(startAngle), em_Val_from(endAngle)));
}


jb_Undefined CanvasRenderingContext2D_arc(CanvasRenderingContext2D* self , double x, double y, double radius, double startAngle, double endAngle, bool counterclockwise) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "arc", em_Val_from(x), em_Val_from(y), em_Val_from(radius), em_Val_from(startAngle), em_Val_from(endAngle), em_Val_from(counterclockwise)));
}


jb_Undefined CanvasRenderingContext2D_ellipse(CanvasRenderingContext2D* self , double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "ellipse", em_Val_from(x), em_Val_from(y), em_Val_from(radiusX), em_Val_from(radiusY), em_Val_from(rotation), em_Val_from(startAngle), em_Val_from(endAngle)));
}


jb_Undefined CanvasRenderingContext2D_ellipse(CanvasRenderingContext2D* self , double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle, bool counterclockwise) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "ellipse", em_Val_from(x), em_Val_from(y), em_Val_from(radiusX), em_Val_from(radiusY), em_Val_from(rotation), em_Val_from(startAngle), em_Val_from(endAngle), em_Val_from(counterclockwise)));
}

