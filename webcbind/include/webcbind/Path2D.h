#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DOMMatrix2DInit DOMMatrix2DInit;


/**
 * @brief Interface Path2D
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Path2D)
 */
DECLARE_EMLITE_TYPE(Path2D, em_Val);

/**
 * @brief Creates a new `Path2D` object. 
*/
Path2D Path2D_new0();

/**
 * @brief Creates a new `Path2D` object. 
*/
Path2D Path2D_new1(jb_Any * path);

/**
 * @brief Calls the `addPath` method. 
*/
jb_Undefined Path2D_addPath0(Path2D* self , Path2D * path);

/**
 * @brief Calls the `addPath` method. 
*/
jb_Undefined Path2D_addPath1(Path2D* self , Path2D * path, DOMMatrix2DInit * transform);

/**
 * @brief Calls the `closePath` method. 
*/
jb_Undefined Path2D_closePath(Path2D* self );

/**
 * @brief Calls the `moveTo` method. 
*/
jb_Undefined Path2D_moveTo(Path2D* self , double x, double y);

/**
 * @brief Calls the `lineTo` method. 
*/
jb_Undefined Path2D_lineTo(Path2D* self , double x, double y);

/**
 * @brief Calls the `quadraticCurveTo` method. 
*/
jb_Undefined Path2D_quadraticCurveTo(Path2D* self , double cpx, double cpy, double x, double y);

/**
 * @brief Calls the `bezierCurveTo` method. 
*/
jb_Undefined Path2D_bezierCurveTo(Path2D* self , double cp1x, double cp1y, double cp2x, double cp2y, double x, double y);

/**
 * @brief Calls the `arcTo` method. 
*/
jb_Undefined Path2D_arcTo(Path2D* self , double x1, double y1, double x2, double y2, double radius);

/**
 * @brief Calls the `rect` method. 
*/
jb_Undefined Path2D_rect(Path2D* self , double x, double y, double w, double h);

/**
 * @brief Calls the `roundRect` method. 
*/
jb_Undefined Path2D_roundRect0(Path2D* self , double x, double y, double w, double h);

/**
 * @brief Calls the `roundRect` method. 
*/
jb_Undefined Path2D_roundRect1(Path2D* self , double x, double y, double w, double h, jb_Any * radii);

/**
 * @brief Calls the `arc` method. 
*/
jb_Undefined Path2D_arc0(Path2D* self , double x, double y, double radius, double startAngle, double endAngle);

/**
 * @brief Calls the `arc` method. 
*/
jb_Undefined Path2D_arc1(Path2D* self , double x, double y, double radius, double startAngle, double endAngle, bool counterclockwise);

/**
 * @brief Calls the `ellipse` method. 
*/
jb_Undefined Path2D_ellipse0(Path2D* self , double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle);

/**
 * @brief Calls the `ellipse` method. 
*/
jb_Undefined Path2D_ellipse1(Path2D* self , double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle, bool counterclockwise);

#ifdef __cplusplus
}
#endif
