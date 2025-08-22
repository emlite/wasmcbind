#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OffscreenCanvas OffscreenCanvas;
typedef struct CanvasRenderingContext2DSettings CanvasRenderingContext2DSettings;
typedef struct DOMMatrix DOMMatrix;
typedef struct DOMMatrix2DInit DOMMatrix2DInit;
typedef struct CanvasGradient CanvasGradient;
typedef struct CanvasPattern CanvasPattern;
typedef struct Path2D Path2D;
typedef struct TextMetrics TextMetrics;
typedef struct ImageData ImageData;
typedef struct ImageDataSettings ImageDataSettings;


/**
 * @brief Interface OffscreenCanvasRenderingContext2D
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/OffscreenCanvasRenderingContext2D)
 */
DECLARE_EMLITE_TYPE(OffscreenCanvasRenderingContext2D, em_Val);

/**
 * @brief Gets the `canvas` property. 
*/
OffscreenCanvas OffscreenCanvasRenderingContext2D_canvas(const OffscreenCanvasRenderingContext2D *self);

/**
 * @brief Calls the `getContextAttributes` method. 
*/
CanvasRenderingContext2DSettings OffscreenCanvasRenderingContext2D_getContextAttributes(OffscreenCanvasRenderingContext2D* self );

/**
 * @brief Calls the `save` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_save(OffscreenCanvasRenderingContext2D* self );

/**
 * @brief Calls the `restore` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_restore(OffscreenCanvasRenderingContext2D* self );

/**
 * @brief Calls the `reset` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_reset(OffscreenCanvasRenderingContext2D* self );

/**
 * @brief Calls the `isContextLost` method. 
*/
bool OffscreenCanvasRenderingContext2D_isContextLost(OffscreenCanvasRenderingContext2D* self );

/**
 * @brief Calls the `scale` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_scale(OffscreenCanvasRenderingContext2D* self , double x, double y);

/**
 * @brief Calls the `rotate` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_rotate(OffscreenCanvasRenderingContext2D* self , double angle);

/**
 * @brief Calls the `translate` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_translate(OffscreenCanvasRenderingContext2D* self , double x, double y);

/**
 * @brief Calls the `transform` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_transform(OffscreenCanvasRenderingContext2D* self , double a, double b, double c, double d, double e, double f);

/**
 * @brief Calls the `getTransform` method. 
*/
DOMMatrix OffscreenCanvasRenderingContext2D_getTransform(OffscreenCanvasRenderingContext2D* self );

/**
 * @brief Calls the `setTransform` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_setTransform0(OffscreenCanvasRenderingContext2D* self );

/**
 * @brief Calls the `setTransform` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_setTransform1(OffscreenCanvasRenderingContext2D* self , DOMMatrix2DInit * transform);

/**
 * @brief Calls the `resetTransform` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_resetTransform(OffscreenCanvasRenderingContext2D* self );

/**
 * @brief Gets the `globalAlpha` property. 
*/
double OffscreenCanvasRenderingContext2D_globalAlpha(const OffscreenCanvasRenderingContext2D *self);

/**
 * @brief Sets the `globalAlpha` property. 
*/
void OffscreenCanvasRenderingContext2D_set_globalAlpha(OffscreenCanvasRenderingContext2D* self, double value);

/**
 * @brief Gets the `globalCompositeOperation` property. 
*/
jb_String OffscreenCanvasRenderingContext2D_globalCompositeOperation(const OffscreenCanvasRenderingContext2D *self);

/**
 * @brief Sets the `globalCompositeOperation` property. 
*/
void OffscreenCanvasRenderingContext2D_set_globalCompositeOperation(OffscreenCanvasRenderingContext2D* self, jb_String * value);

/**
 * @brief Gets the `imageSmoothingEnabled` property. 
*/
bool OffscreenCanvasRenderingContext2D_imageSmoothingEnabled(const OffscreenCanvasRenderingContext2D *self);

/**
 * @brief Sets the `imageSmoothingEnabled` property. 
*/
void OffscreenCanvasRenderingContext2D_set_imageSmoothingEnabled(OffscreenCanvasRenderingContext2D* self, bool value);

/**
 * @brief Gets the `imageSmoothingQuality` property. 
*/
ImageSmoothingQuality OffscreenCanvasRenderingContext2D_imageSmoothingQuality(const OffscreenCanvasRenderingContext2D *self);

/**
 * @brief Sets the `imageSmoothingQuality` property. 
*/
void OffscreenCanvasRenderingContext2D_set_imageSmoothingQuality(OffscreenCanvasRenderingContext2D* self, ImageSmoothingQuality * value);

/**
 * @brief Gets the `strokeStyle` property. 
*/
jb_Any OffscreenCanvasRenderingContext2D_strokeStyle(const OffscreenCanvasRenderingContext2D *self);

/**
 * @brief Sets the `strokeStyle` property. 
*/
void OffscreenCanvasRenderingContext2D_set_strokeStyle(OffscreenCanvasRenderingContext2D* self, jb_Any * value);

/**
 * @brief Gets the `fillStyle` property. 
*/
jb_Any OffscreenCanvasRenderingContext2D_fillStyle(const OffscreenCanvasRenderingContext2D *self);

/**
 * @brief Sets the `fillStyle` property. 
*/
void OffscreenCanvasRenderingContext2D_set_fillStyle(OffscreenCanvasRenderingContext2D* self, jb_Any * value);

/**
 * @brief Calls the `createLinearGradient` method. 
*/
CanvasGradient OffscreenCanvasRenderingContext2D_createLinearGradient(OffscreenCanvasRenderingContext2D* self , double x0, double y0, double x1, double y1);

/**
 * @brief Calls the `createRadialGradient` method. 
*/
CanvasGradient OffscreenCanvasRenderingContext2D_createRadialGradient(OffscreenCanvasRenderingContext2D* self , double x0, double y0, double r0, double x1, double y1, double r1);

/**
 * @brief Calls the `createConicGradient` method. 
*/
CanvasGradient OffscreenCanvasRenderingContext2D_createConicGradient(OffscreenCanvasRenderingContext2D* self , double startAngle, double x, double y);

/**
 * @brief Calls the `createPattern` method. 
*/
CanvasPattern OffscreenCanvasRenderingContext2D_createPattern(OffscreenCanvasRenderingContext2D* self , jb_Any * image, jb_String * repetition);

/**
 * @brief Gets the `shadowOffsetX` property. 
*/
double OffscreenCanvasRenderingContext2D_shadowOffsetX(const OffscreenCanvasRenderingContext2D *self);

/**
 * @brief Sets the `shadowOffsetX` property. 
*/
void OffscreenCanvasRenderingContext2D_set_shadowOffsetX(OffscreenCanvasRenderingContext2D* self, double value);

/**
 * @brief Gets the `shadowOffsetY` property. 
*/
double OffscreenCanvasRenderingContext2D_shadowOffsetY(const OffscreenCanvasRenderingContext2D *self);

/**
 * @brief Sets the `shadowOffsetY` property. 
*/
void OffscreenCanvasRenderingContext2D_set_shadowOffsetY(OffscreenCanvasRenderingContext2D* self, double value);

/**
 * @brief Gets the `shadowBlur` property. 
*/
double OffscreenCanvasRenderingContext2D_shadowBlur(const OffscreenCanvasRenderingContext2D *self);

/**
 * @brief Sets the `shadowBlur` property. 
*/
void OffscreenCanvasRenderingContext2D_set_shadowBlur(OffscreenCanvasRenderingContext2D* self, double value);

/**
 * @brief Gets the `shadowColor` property. 
*/
jb_String OffscreenCanvasRenderingContext2D_shadowColor(const OffscreenCanvasRenderingContext2D *self);

/**
 * @brief Sets the `shadowColor` property. 
*/
void OffscreenCanvasRenderingContext2D_set_shadowColor(OffscreenCanvasRenderingContext2D* self, jb_String * value);

/**
 * @brief Gets the `filter` property. 
*/
jb_String OffscreenCanvasRenderingContext2D_filter(const OffscreenCanvasRenderingContext2D *self);

/**
 * @brief Sets the `filter` property. 
*/
void OffscreenCanvasRenderingContext2D_set_filter(OffscreenCanvasRenderingContext2D* self, jb_String * value);

/**
 * @brief Calls the `clearRect` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_clearRect(OffscreenCanvasRenderingContext2D* self , double x, double y, double w, double h);

/**
 * @brief Calls the `fillRect` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_fillRect(OffscreenCanvasRenderingContext2D* self , double x, double y, double w, double h);

/**
 * @brief Calls the `strokeRect` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_strokeRect(OffscreenCanvasRenderingContext2D* self , double x, double y, double w, double h);

/**
 * @brief Calls the `beginPath` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_beginPath(OffscreenCanvasRenderingContext2D* self );

/**
 * @brief Calls the `fill` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_fill0(OffscreenCanvasRenderingContext2D* self , Path2D * path);

/**
 * @brief Calls the `fill` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_fill1(OffscreenCanvasRenderingContext2D* self , Path2D * path, CanvasFillRule * fillRule);

/**
 * @brief Calls the `stroke` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_stroke(OffscreenCanvasRenderingContext2D* self , Path2D * path);

/**
 * @brief Calls the `clip` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_clip0(OffscreenCanvasRenderingContext2D* self , Path2D * path);

/**
 * @brief Calls the `clip` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_clip1(OffscreenCanvasRenderingContext2D* self , Path2D * path, CanvasFillRule * fillRule);

/**
 * @brief Calls the `isPointInPath` method. 
*/
bool OffscreenCanvasRenderingContext2D_isPointInPath0(OffscreenCanvasRenderingContext2D* self , Path2D * path, double x, double y);

/**
 * @brief Calls the `isPointInPath` method. 
*/
bool OffscreenCanvasRenderingContext2D_isPointInPath1(OffscreenCanvasRenderingContext2D* self , Path2D * path, double x, double y, CanvasFillRule * fillRule);

/**
 * @brief Calls the `isPointInStroke` method. 
*/
bool OffscreenCanvasRenderingContext2D_isPointInStroke(OffscreenCanvasRenderingContext2D* self , Path2D * path, double x, double y);

/**
 * @brief Calls the `fillText` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_fillText0(OffscreenCanvasRenderingContext2D* self , jb_String * text, double x, double y);

/**
 * @brief Calls the `fillText` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_fillText1(OffscreenCanvasRenderingContext2D* self , jb_String * text, double x, double y, double maxWidth);

/**
 * @brief Calls the `strokeText` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_strokeText0(OffscreenCanvasRenderingContext2D* self , jb_String * text, double x, double y);

/**
 * @brief Calls the `strokeText` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_strokeText1(OffscreenCanvasRenderingContext2D* self , jb_String * text, double x, double y, double maxWidth);

/**
 * @brief Calls the `measureText` method. 
*/
TextMetrics OffscreenCanvasRenderingContext2D_measureText(OffscreenCanvasRenderingContext2D* self , jb_String * text);

/**
 * @brief Calls the `drawImage` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_drawImage(OffscreenCanvasRenderingContext2D* self , jb_Any * image, double sx, double sy, double sw, double sh, double dx, double dy, double dw, double dh);

/**
 * @brief Calls the `createImageData` method. 
*/
ImageData OffscreenCanvasRenderingContext2D_createImageData(OffscreenCanvasRenderingContext2D* self , ImageData * imageData);

/**
 * @brief Calls the `getImageData` method. 
*/
ImageData OffscreenCanvasRenderingContext2D_getImageData0(OffscreenCanvasRenderingContext2D* self , long sx, long sy, long sw, long sh);

/**
 * @brief Calls the `getImageData` method. 
*/
ImageData OffscreenCanvasRenderingContext2D_getImageData1(OffscreenCanvasRenderingContext2D* self , long sx, long sy, long sw, long sh, ImageDataSettings * settings);

/**
 * @brief Calls the `putImageData` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_putImageData(OffscreenCanvasRenderingContext2D* self , ImageData * imageData, long dx, long dy, long dirtyX, long dirtyY, long dirtyWidth, long dirtyHeight);

/**
 * @brief Gets the `lineWidth` property. 
*/
double OffscreenCanvasRenderingContext2D_lineWidth(const OffscreenCanvasRenderingContext2D *self);

/**
 * @brief Sets the `lineWidth` property. 
*/
void OffscreenCanvasRenderingContext2D_set_lineWidth(OffscreenCanvasRenderingContext2D* self, double value);

/**
 * @brief Gets the `lineCap` property. 
*/
CanvasLineCap OffscreenCanvasRenderingContext2D_lineCap(const OffscreenCanvasRenderingContext2D *self);

/**
 * @brief Sets the `lineCap` property. 
*/
void OffscreenCanvasRenderingContext2D_set_lineCap(OffscreenCanvasRenderingContext2D* self, CanvasLineCap * value);

/**
 * @brief Gets the `lineJoin` property. 
*/
CanvasLineJoin OffscreenCanvasRenderingContext2D_lineJoin(const OffscreenCanvasRenderingContext2D *self);

/**
 * @brief Sets the `lineJoin` property. 
*/
void OffscreenCanvasRenderingContext2D_set_lineJoin(OffscreenCanvasRenderingContext2D* self, CanvasLineJoin * value);

/**
 * @brief Gets the `miterLimit` property. 
*/
double OffscreenCanvasRenderingContext2D_miterLimit(const OffscreenCanvasRenderingContext2D *self);

/**
 * @brief Sets the `miterLimit` property. 
*/
void OffscreenCanvasRenderingContext2D_set_miterLimit(OffscreenCanvasRenderingContext2D* self, double value);

/**
 * @brief Calls the `setLineDash` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_setLineDash(OffscreenCanvasRenderingContext2D* self , jb_Array * segments);

/**
 * @brief Calls the `getLineDash` method. 
*/
jb_Array OffscreenCanvasRenderingContext2D_getLineDash(OffscreenCanvasRenderingContext2D* self );

/**
 * @brief Gets the `lineDashOffset` property. 
*/
double OffscreenCanvasRenderingContext2D_lineDashOffset(const OffscreenCanvasRenderingContext2D *self);

/**
 * @brief Sets the `lineDashOffset` property. 
*/
void OffscreenCanvasRenderingContext2D_set_lineDashOffset(OffscreenCanvasRenderingContext2D* self, double value);

/**
 * @brief Gets the `lang` property. 
*/
jb_String OffscreenCanvasRenderingContext2D_lang(const OffscreenCanvasRenderingContext2D *self);

/**
 * @brief Sets the `lang` property. 
*/
void OffscreenCanvasRenderingContext2D_set_lang(OffscreenCanvasRenderingContext2D* self, jb_String * value);

/**
 * @brief Gets the `font` property. 
*/
jb_String OffscreenCanvasRenderingContext2D_font(const OffscreenCanvasRenderingContext2D *self);

/**
 * @brief Sets the `font` property. 
*/
void OffscreenCanvasRenderingContext2D_set_font(OffscreenCanvasRenderingContext2D* self, jb_String * value);

/**
 * @brief Gets the `textAlign` property. 
*/
CanvasTextAlign OffscreenCanvasRenderingContext2D_textAlign(const OffscreenCanvasRenderingContext2D *self);

/**
 * @brief Sets the `textAlign` property. 
*/
void OffscreenCanvasRenderingContext2D_set_textAlign(OffscreenCanvasRenderingContext2D* self, CanvasTextAlign * value);

/**
 * @brief Gets the `textBaseline` property. 
*/
CanvasTextBaseline OffscreenCanvasRenderingContext2D_textBaseline(const OffscreenCanvasRenderingContext2D *self);

/**
 * @brief Sets the `textBaseline` property. 
*/
void OffscreenCanvasRenderingContext2D_set_textBaseline(OffscreenCanvasRenderingContext2D* self, CanvasTextBaseline * value);

/**
 * @brief Gets the `direction` property. 
*/
CanvasDirection OffscreenCanvasRenderingContext2D_direction(const OffscreenCanvasRenderingContext2D *self);

/**
 * @brief Sets the `direction` property. 
*/
void OffscreenCanvasRenderingContext2D_set_direction(OffscreenCanvasRenderingContext2D* self, CanvasDirection * value);

/**
 * @brief Gets the `letterSpacing` property. 
*/
jb_String OffscreenCanvasRenderingContext2D_letterSpacing(const OffscreenCanvasRenderingContext2D *self);

/**
 * @brief Sets the `letterSpacing` property. 
*/
void OffscreenCanvasRenderingContext2D_set_letterSpacing(OffscreenCanvasRenderingContext2D* self, jb_String * value);

/**
 * @brief Gets the `fontKerning` property. 
*/
CanvasFontKerning OffscreenCanvasRenderingContext2D_fontKerning(const OffscreenCanvasRenderingContext2D *self);

/**
 * @brief Sets the `fontKerning` property. 
*/
void OffscreenCanvasRenderingContext2D_set_fontKerning(OffscreenCanvasRenderingContext2D* self, CanvasFontKerning * value);

/**
 * @brief Gets the `fontStretch` property. 
*/
CanvasFontStretch OffscreenCanvasRenderingContext2D_fontStretch(const OffscreenCanvasRenderingContext2D *self);

/**
 * @brief Sets the `fontStretch` property. 
*/
void OffscreenCanvasRenderingContext2D_set_fontStretch(OffscreenCanvasRenderingContext2D* self, CanvasFontStretch * value);

/**
 * @brief Gets the `fontVariantCaps` property. 
*/
CanvasFontVariantCaps OffscreenCanvasRenderingContext2D_fontVariantCaps(const OffscreenCanvasRenderingContext2D *self);

/**
 * @brief Sets the `fontVariantCaps` property. 
*/
void OffscreenCanvasRenderingContext2D_set_fontVariantCaps(OffscreenCanvasRenderingContext2D* self, CanvasFontVariantCaps * value);

/**
 * @brief Gets the `textRendering` property. 
*/
CanvasTextRendering OffscreenCanvasRenderingContext2D_textRendering(const OffscreenCanvasRenderingContext2D *self);

/**
 * @brief Sets the `textRendering` property. 
*/
void OffscreenCanvasRenderingContext2D_set_textRendering(OffscreenCanvasRenderingContext2D* self, CanvasTextRendering * value);

/**
 * @brief Gets the `wordSpacing` property. 
*/
jb_String OffscreenCanvasRenderingContext2D_wordSpacing(const OffscreenCanvasRenderingContext2D *self);

/**
 * @brief Sets the `wordSpacing` property. 
*/
void OffscreenCanvasRenderingContext2D_set_wordSpacing(OffscreenCanvasRenderingContext2D* self, jb_String * value);

/**
 * @brief Calls the `closePath` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_closePath(OffscreenCanvasRenderingContext2D* self );

/**
 * @brief Calls the `moveTo` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_moveTo(OffscreenCanvasRenderingContext2D* self , double x, double y);

/**
 * @brief Calls the `lineTo` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_lineTo(OffscreenCanvasRenderingContext2D* self , double x, double y);

/**
 * @brief Calls the `quadraticCurveTo` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_quadraticCurveTo(OffscreenCanvasRenderingContext2D* self , double cpx, double cpy, double x, double y);

/**
 * @brief Calls the `bezierCurveTo` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_bezierCurveTo(OffscreenCanvasRenderingContext2D* self , double cp1x, double cp1y, double cp2x, double cp2y, double x, double y);

/**
 * @brief Calls the `arcTo` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_arcTo(OffscreenCanvasRenderingContext2D* self , double x1, double y1, double x2, double y2, double radius);

/**
 * @brief Calls the `rect` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_rect(OffscreenCanvasRenderingContext2D* self , double x, double y, double w, double h);

/**
 * @brief Calls the `roundRect` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_roundRect0(OffscreenCanvasRenderingContext2D* self , double x, double y, double w, double h);

/**
 * @brief Calls the `roundRect` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_roundRect1(OffscreenCanvasRenderingContext2D* self , double x, double y, double w, double h, jb_Any * radii);

/**
 * @brief Calls the `arc` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_arc0(OffscreenCanvasRenderingContext2D* self , double x, double y, double radius, double startAngle, double endAngle);

/**
 * @brief Calls the `arc` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_arc1(OffscreenCanvasRenderingContext2D* self , double x, double y, double radius, double startAngle, double endAngle, bool counterclockwise);

/**
 * @brief Calls the `ellipse` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_ellipse0(OffscreenCanvasRenderingContext2D* self , double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle);

/**
 * @brief Calls the `ellipse` method. 
*/
jb_Undefined OffscreenCanvasRenderingContext2D_ellipse1(OffscreenCanvasRenderingContext2D* self , double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle, bool counterclockwise);

#ifdef __cplusplus
}
#endif
