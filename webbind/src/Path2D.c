#include <webbind/Path2D.h>
#include <webbind/SVGSVGElement.h>


DEFINE_EMLITE_TYPE(Path2D, em_Val);


Path2D Path2D_new() : em_Val(em_Val_global("Path2D").new_()) {
        return Path2D(em_Val_new(em_Val_global("Path2D", ));
      }


Path2D Path2D_new(const jb_Any* path) : em_Val(em_Val_global("Path2D").new_(em_Val_from(path))) {
        return Path2D(em_Val_new(em_Val_global("Path2D", em_Val_from(path)));
      }


jb_Undefined Path2D_addPath(Path2D* self , const Path2D* path) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "addPath", em_Val_from(path)));
}


jb_Undefined Path2D_addPath(Path2D* self , const Path2D* path, const DOMMatrix2DInit* transform) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "addPath", em_Val_from(path), em_Val_from(transform)));
}


jb_Undefined Path2D_closePath(Path2D* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "closePath"));
}


jb_Undefined Path2D_moveTo(Path2D* self , double x, double y) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "moveTo", em_Val_from(x), em_Val_from(y)));
}


jb_Undefined Path2D_lineTo(Path2D* self , double x, double y) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "lineTo", em_Val_from(x), em_Val_from(y)));
}


jb_Undefined Path2D_quadraticCurveTo(Path2D* self , double cpx, double cpy, double x, double y) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "quadraticCurveTo", em_Val_from(cpx), em_Val_from(cpy), em_Val_from(x), em_Val_from(y)));
}


jb_Undefined Path2D_bezierCurveTo(Path2D* self , double cp1x, double cp1y, double cp2x, double cp2y, double x, double y) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "bezierCurveTo", em_Val_from(cp1x), em_Val_from(cp1y), em_Val_from(cp2x), em_Val_from(cp2y), em_Val_from(x), em_Val_from(y)));
}


jb_Undefined Path2D_arcTo(Path2D* self , double x1, double y1, double x2, double y2, double radius) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "arcTo", em_Val_from(x1), em_Val_from(y1), em_Val_from(x2), em_Val_from(y2), em_Val_from(radius)));
}


jb_Undefined Path2D_rect(Path2D* self , double x, double y, double w, double h) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "rect", em_Val_from(x), em_Val_from(y), em_Val_from(w), em_Val_from(h)));
}


jb_Undefined Path2D_roundRect(Path2D* self , double x, double y, double w, double h) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "roundRect", em_Val_from(x), em_Val_from(y), em_Val_from(w), em_Val_from(h)));
}


jb_Undefined Path2D_roundRect(Path2D* self , double x, double y, double w, double h, const jb_Any* radii) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "roundRect", em_Val_from(x), em_Val_from(y), em_Val_from(w), em_Val_from(h), em_Val_from(radii)));
}


jb_Undefined Path2D_arc(Path2D* self , double x, double y, double radius, double startAngle, double endAngle) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "arc", em_Val_from(x), em_Val_from(y), em_Val_from(radius), em_Val_from(startAngle), em_Val_from(endAngle)));
}


jb_Undefined Path2D_arc(Path2D* self , double x, double y, double radius, double startAngle, double endAngle, bool counterclockwise) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "arc", em_Val_from(x), em_Val_from(y), em_Val_from(radius), em_Val_from(startAngle), em_Val_from(endAngle), em_Val_from(counterclockwise)));
}


jb_Undefined Path2D_ellipse(Path2D* self , double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "ellipse", em_Val_from(x), em_Val_from(y), em_Val_from(radiusX), em_Val_from(radiusY), em_Val_from(rotation), em_Val_from(startAngle), em_Val_from(endAngle)));
}


jb_Undefined Path2D_ellipse(Path2D* self , double x, double y, double radiusX, double radiusY, double rotation, double startAngle, double endAngle, bool counterclockwise) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "ellipse", em_Val_from(x), em_Val_from(y), em_Val_from(radiusX), em_Val_from(radiusY), em_Val_from(rotation), em_Val_from(startAngle), em_Val_from(endAngle), em_Val_from(counterclockwise)));
}

