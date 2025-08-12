#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMMatrix DOMMatrix;
typedef struct DOMMatrix2DInit DOMMatrix2DInit;
typedef struct CanvasGradient CanvasGradient;
typedef struct CanvasPattern CanvasPattern;
typedef struct Path2D Path2D;


/**
 * @brief Interface PaintRenderingContext2D
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PaintRenderingContext2D)
 */
DECLARE_EMLITE_TYPE(PaintRenderingContext2D, em_Val);

/**
 * @brief Calls the `save` method. 
*/
jb_Undefined PaintRenderingContext2D_save(PaintRenderingContext2D* self );

/**
 * @brief Calls the `restore` method. 
*/
jb_Undefined PaintRenderingContext2D_restore(PaintRenderingContext2D* self );

/**
 * @brief Calls the `reset` method. 
*/
jb_Undefined PaintRenderingContext2D_reset(PaintRenderingContext2D* self );

/**
 * @brief Calls the `isContextLost` method. 
*/
bool PaintRenderingContext2D_isContextLost(PaintRenderingContext2D* self );

/**
 * @brief Calls the `scale` method. 
*/
jb_Undefined PaintRenderingContext2D_scale(PaintRenderingContext2D* self , double x, double y);

/**
 * @brief Calls the `rotate` method. 
*/
jb_Undefined PaintRenderingContext2D_rotate(PaintRenderingContext2D* self , double angle);

/**
 * @brief Calls the `translate` method. 
*/
jb_Undefined PaintRenderingContext2D_translate(PaintRenderingContext2D* self , double x, double y);

/**
 * @brief Calls the `transform` method. 
*/
jb_Undefined PaintRenderingContext2D_transform(PaintRenderingContext2D* self , double a, double b, double c, double d, double e, double f);

/**
 * @brief Calls the `getTransform` method. 
*/
DOMMatrix PaintRenderingContext2D_getTransform(PaintRenderingContext2D* self );

/**
 * @brief Calls the `setTransform` method. 
*/
jb_Undefined PaintRenderingContext2D_setTransform0(PaintRenderingContext2D* self );

/**
 * @brief Calls the `setTransform` method. 
*/
jb_Undefined PaintRenderingContext2D_setTransform1(PaintRenderingContext2D* self , DOMMatrix2DInit * transform);

/**
 * @brief Calls the `resetTransform` method. 
*/
jb_Undefined PaintRenderingContext2D_resetTransform(PaintRenderingContext2D* self );

/**
 * @brief Gets the `globalAlpha` property. 
*/
double PaintRenderingContext2D_globalAlpha(const PaintRenderingContext2D *self);

/**
 * @brief Sets the `globalAlpha` property. 
*/
void PaintRenderingContext2D_set_globalAlpha(PaintRenderingContext2D* self, double value);

/**
 * @brief Gets the `globalCompositeOperation` property. 
*/
jb_String PaintRenderingContext2D_globalCompositeOperation(const PaintRenderingContext2D *self);

/**
 * @brief Sets the `globalCompositeOperation` property. 
*/
void PaintRenderingContext2D_set_globalCompositeOperation(PaintRenderingContext2D* self, jb_String * value);

/**
 * @brief Gets the `imageSmoothingEnabled` property. 
*/
bool PaintRenderingContext2D_imageSmoothingEnabled(const PaintRenderingContext2D *self);

/**
 * @brief Sets the `imageSmoothingEnabled` property. 
*/
void PaintRenderingContext2D_set_imageSmoothingEnabled(PaintRenderingContext2D* self, bool value);

/**
 * @brief Gets the `imageSmoothingQuality` property. 
*/
ImageSmoothingQuality PaintRenderingContext2D_imageSmoothingQuality(const PaintRenderingContext2D *self);

/**
 * @brief Sets the `imageSmoothingQuality` property. 
*/
void PaintRenderingContext2D_set_imageSmoothingQuality(PaintRenderingContext2D* self, ImageSmoothingQuality * value);

/**
 * @brief Gets the `strokeStyle` property. 
*/
jb_Any PaintRenderingContext2D_strokeStyle(const PaintRenderingContext2D *self);

/**
 * @brief Sets the `strokeStyle` property. 
*/
void PaintRenderingContext2D_set_strokeStyle(PaintRenderingContext2D* self, jb_Any * value);

/**
 * @brief Gets the `fillStyle` property. 
*/
jb_Any PaintRenderingContext2D_fillStyle(const PaintRenderingContext2D *self);

/**
 * @brief Sets the `fillStyle` property. 
*/
void PaintRenderingContext2D_set_fillStyle(PaintRenderingContext2D* self, jb_Any * value);

/**
 * @brief Calls the `createLinearGradient` method. 
*/
CanvasGradient PaintRenderingContext2D_createLinearGradient(PaintRenderingContext2D* self , double x0, double y0, double x1, double y1);

/**
 * @brief Calls the `createRadialGradient` method. 
*/
CanvasGradient PaintRenderingContext2D_createRadialGradient(PaintRenderingContext2D* self , double x0, double y0, double r0, double x1, double y1, double r1);

/**
 * @brief Calls the `createConicGradient` method. 
*/
CanvasGradient PaintRenderingContext2D_createConicGradient(PaintRenderingContext2D* self , double startAngle, double x, double y);

/**
 * @brief Calls the `createPattern` method. 
*/
CanvasPattern PaintRenderingContext2D_createPattern(PaintRenderingContext2D* self , jb_Any * image, jb_String * repetition);

/**
 * @brief Gets the `shadowOffsetX` property. 
*/
double PaintRenderingContext2D_shadowOffsetX(const PaintRenderingContext2D *self);

/**
 * @brief Sets the `shadowOffsetX` property. 
*/
void PaintRenderingContext2D_set_shadowOffsetX(PaintRenderingContext2D* self, double value);

/**
 * @brief Gets the `shadowOffsetY` property. 
*/
double PaintRenderingContext2D_shadowOffsetY(const PaintRenderingContext2D *self);

/**
 * @brief Sets the `shadowOffsetY` property. 
*/
void PaintRenderingContext2D_set_shadowOffsetY(PaintRenderingContext2D* self, double value);

/**
 * @brief Gets the `shadowBlur` property. 
*/
double PaintRenderingContext2D_shadowBlur(const PaintRenderingContext2D *self);

/**
 * @brief Sets the `shadowBlur` property. 
*/
void PaintRenderingContext2D_set_shadowBlur(PaintRenderingContext2D* self, double value);

/**
 * @brief Gets the `shadowColor` property. 
*/
jb_String PaintRenderingContext2D_shadowColor(const PaintRenderingContext2D *self);

/**
 * @brief Sets the `shadowColor` property. 
*/
void PaintRenderingContext2D_set_shadowColor(PaintRenderingContext2D* self, jb_String * value);

/**
 * @brief Calls the `clearRect` method. 
*/
jb_Undefined PaintRenderingContext2D_clearRect(PaintRenderingContext2D* self , double x, double y, double w, double h);

/**
 * @brief Calls the `fillRect` method. 
*/
jb_Undefined PaintRenderingContext2D_fillRect(PaintRenderingContext2D* self , double x, double y, double w, double h);

/**
 * @brief Calls the `strokeRect` method. 
*/
jb_Undefined PaintRenderingContext2D_strokeRect(PaintRenderingContext2D* self , double x, double y, double w, double h);

/**
 * @brief Calls the `beginPath` method. 
*/
jb_Undefined PaintRenderingContext2D_beginPath(PaintRenderingContext2D* self );

/**
 * @brief Calls the `fill` method. 
*/
jb_Undefined PaintRenderingContext2D_fill0(PaintRenderingContext2D* self , Path2D * path);

/**
 * @brief Calls the `fill` method. 
*/
jb_Undefined PaintRenderingContext2D_fill1(PaintRenderingContext2D* self , Path2D * path, CanvasFillRule * fillRule);

/**
 * @brief Calls the `stroke` method. 
*/
jb_Undefined PaintRenderingContext2D_stroke(PaintRenderingContext2D* self , Path2D * path);

/**
 * @brief Calls the `clip` method. 
*/
jb_Undefined PaintRenderingContext2D_clip0(PaintRenderingContext2D* self , Path2D * path);

/**
 * @brief Calls the `clip` method. 
*/
jb_Undefined PaintRenderingContext2D_clip1(PaintRenderingContext2D* self , Path2D * path, CanvasFillRule * fillRule);

/**
 * @brief Calls the `isPointInPath` method. 
*/
bool PaintRenderingContext2D_isPointInPath0(PaintRenderingContext2D* self , Path2D * path, double x, double y);

/**
 * @brief Calls the `isPointInPath` method. 
*/
bool PaintRenderingContext2D_isPointInPath1(PaintRenderingContext2D* self , Path2D * path, double x, double y, CanvasFillRule * fillRule);

/**
 * @brief Calls the `isPointInStroke` method. 
*/
bool PaintRenderingContext2D_isPointInStroke(PaintRenderingContext2D* self , Path2D * path, double x, double y);

/**
 * @brief Calls the `drawImage` method. 
*/
jb_Undefined PaintRenderingContext2D_drawImage(PaintRenderingContext2D* self , jb_Any * image, double sx, double sy, double sw, double sh, double dx, double dy, double dw, double dh);

/**
 * @brief Gets the `lineWidth` property. 
*/
double PaintRenderingContext2D_lineWidth(const PaintRenderingContext2D *self);

/**
 * @brief Sets the `lineWidth` property. 
*/
void PaintRenderingContext2D_set_lineWidth(PaintRenderingContext2D* self, double value);

/**
 * @brief Gets the `lineCap` property. 
*/
CanvasLineCap PaintRenderingContext2D_lineCap(const PaintRenderingContext2D *self);

/**
 * @brief Sets the `lineCap` property. 
*/
void PaintRenderingContext2D_set_lineCap(PaintRenderingContext2D* self, CanvasLineCap * value);

/**
 * @brief Gets the `lineJoin` property. 
*/
CanvasLineJoin PaintRenderingContext2D_lineJoin(const PaintRenderingContext2D *self);

/**
 * @brief Sets the `lineJoin` property. 
*/
void PaintRenderingContext2D_set_lineJoin(PaintRenderingContext2D* self, CanvasLineJoin * value);

/**
 * @brief Gets the `miterLimit` property. 
*/
double PaintRenderingContext2D_miterLimit(const PaintRenderingContext2D *self);

/**
 * @brief Sets the `miterLimit` property. 
*/
void PaintRenderingContext2D_set_miterLimit(PaintRenderingContext2D* self, double value);

/**
 * @brief Calls the `setLineDash` method. 
*/
jb_Undefined PaintRenderingContext2D_setLineDash(PaintRenderingContext2D* self , jb_Array * segments);

/**
 * @brief Calls the `getLineDash` method. 
*/
jb_Array PaintRenderingContext2D_getLineDash(PaintRenderingContext2D* self );

/**
 * @brief Gets the `lineDashOffset` property. 
*/
double PaintRenderingContext2D_lineDashOffset(const PaintRenderingContext2D *self);

/**
 * @brief Sets the `lineDashOffset` property. 
*/
void PaintRenderingContext2D_set_lineDashOffset(PaintRenderingContext2D* self, double value);

/**
 * @brief Calls the `closePath` method. 
*/
jb_Undefined PaintRenderingContext2D_closePath(PaintRenderingContext2D* self );

/**
 * @brief Calls the `moveTo` method. 
*/
jb_Undefined PaintRenderingContext2D_moveTo(PaintRenderingContext2D* self , double x, double y);

/**
 * @brief Calls the `lineTo` method. 
*/
jb_Undefined PaintRenderingContext2D_lineTo(PaintRenderingContext2D* self , double x, double y);

/**
 * @brief Calls the `quadraticCurveTo` method. 
*/
jb_Undefined PaintRenderingContext2D_quadraticCurveTo(PaintRenderingContext2D* self , double cpx, double cpy, double x, double y);

/**
 * @brief Calls the `bezierCurveTo` method. 
*/
jb_Undefined PaintRenderingContext2D_bezierCurveTo(PaintRenderingContext2D* self , double cp1x, double cp1y, double cp2x, double cp2y, double x, double y);

/**
 * @brief Calls the `arcTo` method. 
*/
jb_Undefined PaintRenderingContext2D_arcTo(PaintRenderingContext2D* self , double x1, double y1, double x2, double y2, double radius);

/**
 * @brief Calls the `rect` method. 
*/
jb_Undefined PaintRenderingContext2D_rect(PaintRenderingContext2D* self , double x, double y, double w, double h);

/**
 * @brief Calls the `roundRect` method. 
*/
jb_Undefined PaintRenderingContext2D_roundRect0(PaintRenderingContext2D* self , double x, double y, double w, double h);

/**
 * @brief Calls the `roundRect` method. 
*/
jb_Undefined PaintRenderingContext2D_roundRect1(PaintRenderingContext2D* self , double x, double y, double w, double h, jb_Any * radii);

/**
 * @brief Calls the `arc` method. 
*/
jb_Undefined PaintRenderingContext2D_arc0(PaintRenderingContext2D* self , double x, double y, double radius, double startAngle, double endAngle);

/**
 * @brief Calls the `arc` method. 
*/
jb_Undefined PaintRenderingContext2D_arc1(PaintRenderingContext2D* self , double x, double y, double radius, double startAngle, double endAngle, bool counterclockwise);

/**
 * @brief Calls the `ellipse` method. 
*/
jb_Undefined PaintRenderingContext2D_ellipse0(PaintRenderingContext2D* self , double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle);

/**
 * @brief Calls the `ellipse` method. 
*/
jb_Undefined PaintRenderingContext2D_ellipse1(PaintRenderingContext2D* self , double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle, bool counterclockwise);

#ifdef __cplusplus
}
#endif
