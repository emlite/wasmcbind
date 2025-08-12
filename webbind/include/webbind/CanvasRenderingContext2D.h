#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct HTMLCanvasElement HTMLCanvasElement;
typedef struct CanvasRenderingContext2DSettings CanvasRenderingContext2DSettings;
typedef struct DOMMatrix DOMMatrix;
typedef struct DOMMatrix2DInit DOMMatrix2DInit;
typedef struct CanvasGradient CanvasGradient;
typedef struct CanvasPattern CanvasPattern;
typedef struct Path2D Path2D;
typedef struct Element Element;
typedef struct TextMetrics TextMetrics;
typedef struct ImageData ImageData;
typedef struct ImageDataSettings ImageDataSettings;


/**
 * @brief Interface CanvasRenderingContext2D
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CanvasRenderingContext2D)
 */
DECLARE_EMLITE_TYPE(CanvasRenderingContext2D, em_Val);

/**
 * @brief Gets the `canvas` property. 
*/
HTMLCanvasElement CanvasRenderingContext2D_canvas(const CanvasRenderingContext2D *self);

/**
 * @brief Calls the `getContextAttributes` method. 
*/
CanvasRenderingContext2DSettings CanvasRenderingContext2D_getContextAttributes(CanvasRenderingContext2D* self );

/**
 * @brief Calls the `save` method. 
*/
jb_Undefined CanvasRenderingContext2D_save(CanvasRenderingContext2D* self );

/**
 * @brief Calls the `restore` method. 
*/
jb_Undefined CanvasRenderingContext2D_restore(CanvasRenderingContext2D* self );

/**
 * @brief Calls the `reset` method. 
*/
jb_Undefined CanvasRenderingContext2D_reset(CanvasRenderingContext2D* self );

/**
 * @brief Calls the `isContextLost` method. 
*/
bool CanvasRenderingContext2D_isContextLost(CanvasRenderingContext2D* self );

/**
 * @brief Calls the `scale` method. 
*/
jb_Undefined CanvasRenderingContext2D_scale(CanvasRenderingContext2D* self , double x, double y);

/**
 * @brief Calls the `rotate` method. 
*/
jb_Undefined CanvasRenderingContext2D_rotate(CanvasRenderingContext2D* self , double angle);

/**
 * @brief Calls the `translate` method. 
*/
jb_Undefined CanvasRenderingContext2D_translate(CanvasRenderingContext2D* self , double x, double y);

/**
 * @brief Calls the `transform` method. 
*/
jb_Undefined CanvasRenderingContext2D_transform(CanvasRenderingContext2D* self , double a, double b, double c, double d, double e, double f);

/**
 * @brief Calls the `getTransform` method. 
*/
DOMMatrix CanvasRenderingContext2D_getTransform(CanvasRenderingContext2D* self );

/**
 * @brief Calls the `setTransform` method. 
*/
jb_Undefined CanvasRenderingContext2D_setTransform0(CanvasRenderingContext2D* self );

/**
 * @brief Calls the `setTransform` method. 
*/
jb_Undefined CanvasRenderingContext2D_setTransform1(CanvasRenderingContext2D* self , DOMMatrix2DInit * transform);

/**
 * @brief Calls the `resetTransform` method. 
*/
jb_Undefined CanvasRenderingContext2D_resetTransform(CanvasRenderingContext2D* self );

/**
 * @brief Gets the `globalAlpha` property. 
*/
double CanvasRenderingContext2D_globalAlpha(const CanvasRenderingContext2D *self);

/**
 * @brief Sets the `globalAlpha` property. 
*/
void CanvasRenderingContext2D_set_globalAlpha(CanvasRenderingContext2D* self, double value);

/**
 * @brief Gets the `globalCompositeOperation` property. 
*/
jb_String CanvasRenderingContext2D_globalCompositeOperation(const CanvasRenderingContext2D *self);

/**
 * @brief Sets the `globalCompositeOperation` property. 
*/
void CanvasRenderingContext2D_set_globalCompositeOperation(CanvasRenderingContext2D* self, jb_String * value);

/**
 * @brief Gets the `imageSmoothingEnabled` property. 
*/
bool CanvasRenderingContext2D_imageSmoothingEnabled(const CanvasRenderingContext2D *self);

/**
 * @brief Sets the `imageSmoothingEnabled` property. 
*/
void CanvasRenderingContext2D_set_imageSmoothingEnabled(CanvasRenderingContext2D* self, bool value);

/**
 * @brief Gets the `imageSmoothingQuality` property. 
*/
ImageSmoothingQuality CanvasRenderingContext2D_imageSmoothingQuality(const CanvasRenderingContext2D *self);

/**
 * @brief Sets the `imageSmoothingQuality` property. 
*/
void CanvasRenderingContext2D_set_imageSmoothingQuality(CanvasRenderingContext2D* self, ImageSmoothingQuality * value);

/**
 * @brief Gets the `strokeStyle` property. 
*/
jb_Any CanvasRenderingContext2D_strokeStyle(const CanvasRenderingContext2D *self);

/**
 * @brief Sets the `strokeStyle` property. 
*/
void CanvasRenderingContext2D_set_strokeStyle(CanvasRenderingContext2D* self, jb_Any * value);

/**
 * @brief Gets the `fillStyle` property. 
*/
jb_Any CanvasRenderingContext2D_fillStyle(const CanvasRenderingContext2D *self);

/**
 * @brief Sets the `fillStyle` property. 
*/
void CanvasRenderingContext2D_set_fillStyle(CanvasRenderingContext2D* self, jb_Any * value);

/**
 * @brief Calls the `createLinearGradient` method. 
*/
CanvasGradient CanvasRenderingContext2D_createLinearGradient(CanvasRenderingContext2D* self , double x0, double y0, double x1, double y1);

/**
 * @brief Calls the `createRadialGradient` method. 
*/
CanvasGradient CanvasRenderingContext2D_createRadialGradient(CanvasRenderingContext2D* self , double x0, double y0, double r0, double x1, double y1, double r1);

/**
 * @brief Calls the `createConicGradient` method. 
*/
CanvasGradient CanvasRenderingContext2D_createConicGradient(CanvasRenderingContext2D* self , double startAngle, double x, double y);

/**
 * @brief Calls the `createPattern` method. 
*/
CanvasPattern CanvasRenderingContext2D_createPattern(CanvasRenderingContext2D* self , jb_Any * image, jb_String * repetition);

/**
 * @brief Gets the `shadowOffsetX` property. 
*/
double CanvasRenderingContext2D_shadowOffsetX(const CanvasRenderingContext2D *self);

/**
 * @brief Sets the `shadowOffsetX` property. 
*/
void CanvasRenderingContext2D_set_shadowOffsetX(CanvasRenderingContext2D* self, double value);

/**
 * @brief Gets the `shadowOffsetY` property. 
*/
double CanvasRenderingContext2D_shadowOffsetY(const CanvasRenderingContext2D *self);

/**
 * @brief Sets the `shadowOffsetY` property. 
*/
void CanvasRenderingContext2D_set_shadowOffsetY(CanvasRenderingContext2D* self, double value);

/**
 * @brief Gets the `shadowBlur` property. 
*/
double CanvasRenderingContext2D_shadowBlur(const CanvasRenderingContext2D *self);

/**
 * @brief Sets the `shadowBlur` property. 
*/
void CanvasRenderingContext2D_set_shadowBlur(CanvasRenderingContext2D* self, double value);

/**
 * @brief Gets the `shadowColor` property. 
*/
jb_String CanvasRenderingContext2D_shadowColor(const CanvasRenderingContext2D *self);

/**
 * @brief Sets the `shadowColor` property. 
*/
void CanvasRenderingContext2D_set_shadowColor(CanvasRenderingContext2D* self, jb_String * value);

/**
 * @brief Gets the `filter` property. 
*/
jb_String CanvasRenderingContext2D_filter(const CanvasRenderingContext2D *self);

/**
 * @brief Sets the `filter` property. 
*/
void CanvasRenderingContext2D_set_filter(CanvasRenderingContext2D* self, jb_String * value);

/**
 * @brief Calls the `clearRect` method. 
*/
jb_Undefined CanvasRenderingContext2D_clearRect(CanvasRenderingContext2D* self , double x, double y, double w, double h);

/**
 * @brief Calls the `fillRect` method. 
*/
jb_Undefined CanvasRenderingContext2D_fillRect(CanvasRenderingContext2D* self , double x, double y, double w, double h);

/**
 * @brief Calls the `strokeRect` method. 
*/
jb_Undefined CanvasRenderingContext2D_strokeRect(CanvasRenderingContext2D* self , double x, double y, double w, double h);

/**
 * @brief Calls the `beginPath` method. 
*/
jb_Undefined CanvasRenderingContext2D_beginPath(CanvasRenderingContext2D* self );

/**
 * @brief Calls the `fill` method. 
*/
jb_Undefined CanvasRenderingContext2D_fill0(CanvasRenderingContext2D* self , Path2D * path);

/**
 * @brief Calls the `fill` method. 
*/
jb_Undefined CanvasRenderingContext2D_fill1(CanvasRenderingContext2D* self , Path2D * path, CanvasFillRule * fillRule);

/**
 * @brief Calls the `stroke` method. 
*/
jb_Undefined CanvasRenderingContext2D_stroke(CanvasRenderingContext2D* self , Path2D * path);

/**
 * @brief Calls the `clip` method. 
*/
jb_Undefined CanvasRenderingContext2D_clip0(CanvasRenderingContext2D* self , Path2D * path);

/**
 * @brief Calls the `clip` method. 
*/
jb_Undefined CanvasRenderingContext2D_clip1(CanvasRenderingContext2D* self , Path2D * path, CanvasFillRule * fillRule);

/**
 * @brief Calls the `isPointInPath` method. 
*/
bool CanvasRenderingContext2D_isPointInPath0(CanvasRenderingContext2D* self , Path2D * path, double x, double y);

/**
 * @brief Calls the `isPointInPath` method. 
*/
bool CanvasRenderingContext2D_isPointInPath1(CanvasRenderingContext2D* self , Path2D * path, double x, double y, CanvasFillRule * fillRule);

/**
 * @brief Calls the `isPointInStroke` method. 
*/
bool CanvasRenderingContext2D_isPointInStroke(CanvasRenderingContext2D* self , Path2D * path, double x, double y);

/**
 * @brief Calls the `drawFocusIfNeeded` method. 
*/
jb_Undefined CanvasRenderingContext2D_drawFocusIfNeeded(CanvasRenderingContext2D* self , Path2D * path, Element * element);

/**
 * @brief Calls the `fillText` method. 
*/
jb_Undefined CanvasRenderingContext2D_fillText0(CanvasRenderingContext2D* self , jb_String * text, double x, double y);

/**
 * @brief Calls the `fillText` method. 
*/
jb_Undefined CanvasRenderingContext2D_fillText1(CanvasRenderingContext2D* self , jb_String * text, double x, double y, double maxWidth);

/**
 * @brief Calls the `strokeText` method. 
*/
jb_Undefined CanvasRenderingContext2D_strokeText0(CanvasRenderingContext2D* self , jb_String * text, double x, double y);

/**
 * @brief Calls the `strokeText` method. 
*/
jb_Undefined CanvasRenderingContext2D_strokeText1(CanvasRenderingContext2D* self , jb_String * text, double x, double y, double maxWidth);

/**
 * @brief Calls the `measureText` method. 
*/
TextMetrics CanvasRenderingContext2D_measureText(CanvasRenderingContext2D* self , jb_String * text);

/**
 * @brief Calls the `drawImage` method. 
*/
jb_Undefined CanvasRenderingContext2D_drawImage(CanvasRenderingContext2D* self , jb_Any * image, double sx, double sy, double sw, double sh, double dx, double dy, double dw, double dh);

/**
 * @brief Calls the `createImageData` method. 
*/
ImageData CanvasRenderingContext2D_createImageData(CanvasRenderingContext2D* self , ImageData * imageData);

/**
 * @brief Calls the `getImageData` method. 
*/
ImageData CanvasRenderingContext2D_getImageData0(CanvasRenderingContext2D* self , long sx, long sy, long sw, long sh);

/**
 * @brief Calls the `getImageData` method. 
*/
ImageData CanvasRenderingContext2D_getImageData1(CanvasRenderingContext2D* self , long sx, long sy, long sw, long sh, ImageDataSettings * settings);

/**
 * @brief Calls the `putImageData` method. 
*/
jb_Undefined CanvasRenderingContext2D_putImageData(CanvasRenderingContext2D* self , ImageData * imageData, long dx, long dy, long dirtyX, long dirtyY, long dirtyWidth, long dirtyHeight);

/**
 * @brief Gets the `lineWidth` property. 
*/
double CanvasRenderingContext2D_lineWidth(const CanvasRenderingContext2D *self);

/**
 * @brief Sets the `lineWidth` property. 
*/
void CanvasRenderingContext2D_set_lineWidth(CanvasRenderingContext2D* self, double value);

/**
 * @brief Gets the `lineCap` property. 
*/
CanvasLineCap CanvasRenderingContext2D_lineCap(const CanvasRenderingContext2D *self);

/**
 * @brief Sets the `lineCap` property. 
*/
void CanvasRenderingContext2D_set_lineCap(CanvasRenderingContext2D* self, CanvasLineCap * value);

/**
 * @brief Gets the `lineJoin` property. 
*/
CanvasLineJoin CanvasRenderingContext2D_lineJoin(const CanvasRenderingContext2D *self);

/**
 * @brief Sets the `lineJoin` property. 
*/
void CanvasRenderingContext2D_set_lineJoin(CanvasRenderingContext2D* self, CanvasLineJoin * value);

/**
 * @brief Gets the `miterLimit` property. 
*/
double CanvasRenderingContext2D_miterLimit(const CanvasRenderingContext2D *self);

/**
 * @brief Sets the `miterLimit` property. 
*/
void CanvasRenderingContext2D_set_miterLimit(CanvasRenderingContext2D* self, double value);

/**
 * @brief Calls the `setLineDash` method. 
*/
jb_Undefined CanvasRenderingContext2D_setLineDash(CanvasRenderingContext2D* self , jb_Array * segments);

/**
 * @brief Calls the `getLineDash` method. 
*/
jb_Array CanvasRenderingContext2D_getLineDash(CanvasRenderingContext2D* self );

/**
 * @brief Gets the `lineDashOffset` property. 
*/
double CanvasRenderingContext2D_lineDashOffset(const CanvasRenderingContext2D *self);

/**
 * @brief Sets the `lineDashOffset` property. 
*/
void CanvasRenderingContext2D_set_lineDashOffset(CanvasRenderingContext2D* self, double value);

/**
 * @brief Gets the `lang` property. 
*/
jb_String CanvasRenderingContext2D_lang(const CanvasRenderingContext2D *self);

/**
 * @brief Sets the `lang` property. 
*/
void CanvasRenderingContext2D_set_lang(CanvasRenderingContext2D* self, jb_String * value);

/**
 * @brief Gets the `font` property. 
*/
jb_String CanvasRenderingContext2D_font(const CanvasRenderingContext2D *self);

/**
 * @brief Sets the `font` property. 
*/
void CanvasRenderingContext2D_set_font(CanvasRenderingContext2D* self, jb_String * value);

/**
 * @brief Gets the `textAlign` property. 
*/
CanvasTextAlign CanvasRenderingContext2D_textAlign(const CanvasRenderingContext2D *self);

/**
 * @brief Sets the `textAlign` property. 
*/
void CanvasRenderingContext2D_set_textAlign(CanvasRenderingContext2D* self, CanvasTextAlign * value);

/**
 * @brief Gets the `textBaseline` property. 
*/
CanvasTextBaseline CanvasRenderingContext2D_textBaseline(const CanvasRenderingContext2D *self);

/**
 * @brief Sets the `textBaseline` property. 
*/
void CanvasRenderingContext2D_set_textBaseline(CanvasRenderingContext2D* self, CanvasTextBaseline * value);

/**
 * @brief Gets the `direction` property. 
*/
CanvasDirection CanvasRenderingContext2D_direction(const CanvasRenderingContext2D *self);

/**
 * @brief Sets the `direction` property. 
*/
void CanvasRenderingContext2D_set_direction(CanvasRenderingContext2D* self, CanvasDirection * value);

/**
 * @brief Gets the `letterSpacing` property. 
*/
jb_String CanvasRenderingContext2D_letterSpacing(const CanvasRenderingContext2D *self);

/**
 * @brief Sets the `letterSpacing` property. 
*/
void CanvasRenderingContext2D_set_letterSpacing(CanvasRenderingContext2D* self, jb_String * value);

/**
 * @brief Gets the `fontKerning` property. 
*/
CanvasFontKerning CanvasRenderingContext2D_fontKerning(const CanvasRenderingContext2D *self);

/**
 * @brief Sets the `fontKerning` property. 
*/
void CanvasRenderingContext2D_set_fontKerning(CanvasRenderingContext2D* self, CanvasFontKerning * value);

/**
 * @brief Gets the `fontStretch` property. 
*/
CanvasFontStretch CanvasRenderingContext2D_fontStretch(const CanvasRenderingContext2D *self);

/**
 * @brief Sets the `fontStretch` property. 
*/
void CanvasRenderingContext2D_set_fontStretch(CanvasRenderingContext2D* self, CanvasFontStretch * value);

/**
 * @brief Gets the `fontVariantCaps` property. 
*/
CanvasFontVariantCaps CanvasRenderingContext2D_fontVariantCaps(const CanvasRenderingContext2D *self);

/**
 * @brief Sets the `fontVariantCaps` property. 
*/
void CanvasRenderingContext2D_set_fontVariantCaps(CanvasRenderingContext2D* self, CanvasFontVariantCaps * value);

/**
 * @brief Gets the `textRendering` property. 
*/
CanvasTextRendering CanvasRenderingContext2D_textRendering(const CanvasRenderingContext2D *self);

/**
 * @brief Sets the `textRendering` property. 
*/
void CanvasRenderingContext2D_set_textRendering(CanvasRenderingContext2D* self, CanvasTextRendering * value);

/**
 * @brief Gets the `wordSpacing` property. 
*/
jb_String CanvasRenderingContext2D_wordSpacing(const CanvasRenderingContext2D *self);

/**
 * @brief Sets the `wordSpacing` property. 
*/
void CanvasRenderingContext2D_set_wordSpacing(CanvasRenderingContext2D* self, jb_String * value);

/**
 * @brief Calls the `closePath` method. 
*/
jb_Undefined CanvasRenderingContext2D_closePath(CanvasRenderingContext2D* self );

/**
 * @brief Calls the `moveTo` method. 
*/
jb_Undefined CanvasRenderingContext2D_moveTo(CanvasRenderingContext2D* self , double x, double y);

/**
 * @brief Calls the `lineTo` method. 
*/
jb_Undefined CanvasRenderingContext2D_lineTo(CanvasRenderingContext2D* self , double x, double y);

/**
 * @brief Calls the `quadraticCurveTo` method. 
*/
jb_Undefined CanvasRenderingContext2D_quadraticCurveTo(CanvasRenderingContext2D* self , double cpx, double cpy, double x, double y);

/**
 * @brief Calls the `bezierCurveTo` method. 
*/
jb_Undefined CanvasRenderingContext2D_bezierCurveTo(CanvasRenderingContext2D* self , double cp1x, double cp1y, double cp2x, double cp2y, double x, double y);

/**
 * @brief Calls the `arcTo` method. 
*/
jb_Undefined CanvasRenderingContext2D_arcTo(CanvasRenderingContext2D* self , double x1, double y1, double x2, double y2, double radius);

/**
 * @brief Calls the `rect` method. 
*/
jb_Undefined CanvasRenderingContext2D_rect(CanvasRenderingContext2D* self , double x, double y, double w, double h);

/**
 * @brief Calls the `roundRect` method. 
*/
jb_Undefined CanvasRenderingContext2D_roundRect0(CanvasRenderingContext2D* self , double x, double y, double w, double h);

/**
 * @brief Calls the `roundRect` method. 
*/
jb_Undefined CanvasRenderingContext2D_roundRect1(CanvasRenderingContext2D* self , double x, double y, double w, double h, jb_Any * radii);

/**
 * @brief Calls the `arc` method. 
*/
jb_Undefined CanvasRenderingContext2D_arc0(CanvasRenderingContext2D* self , double x, double y, double radius, double startAngle, double endAngle);

/**
 * @brief Calls the `arc` method. 
*/
jb_Undefined CanvasRenderingContext2D_arc1(CanvasRenderingContext2D* self , double x, double y, double radius, double startAngle, double endAngle, bool counterclockwise);

/**
 * @brief Calls the `ellipse` method. 
*/
jb_Undefined CanvasRenderingContext2D_ellipse0(CanvasRenderingContext2D* self , double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle);

/**
 * @brief Calls the `ellipse` method. 
*/
jb_Undefined CanvasRenderingContext2D_ellipse1(CanvasRenderingContext2D* self , double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle, bool counterclockwise);

#ifdef __cplusplus
}
#endif
