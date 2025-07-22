#include <webbind/DOMQuad.h>
#include <webbind/DOMRectReadOnly.h>
#include <webbind/DOMPoint.h>
#include <webbind/DOMRect.h>
#include <webbind/Node.h>
#include <webbind/Document.h>
#include <webbind/SVGGeometryElement.h>


DEFINE_EMLITE_TYPE(DOMQuad, em_Val);


DOMQuad DOMQuad_new0() {
        em_Val vv = em_Val_new(em_Val_global("DOMQuad") );
        return DOMQuad_from_val(&vv);
      }


DOMQuad DOMQuad_new1(DOMPointInit * p1) {
        em_Val vv = em_Val_new(em_Val_global("DOMQuad") , em_Val_from(p1));
        return DOMQuad_from_val(&vv);
      }


DOMQuad DOMQuad_new2(DOMPointInit * p1, DOMPointInit * p2) {
        em_Val vv = em_Val_new(em_Val_global("DOMQuad") , em_Val_from(p1), em_Val_from(p2));
        return DOMQuad_from_val(&vv);
      }


DOMQuad DOMQuad_new3(DOMPointInit * p1, DOMPointInit * p2, DOMPointInit * p3) {
        em_Val vv = em_Val_new(em_Val_global("DOMQuad") , em_Val_from(p1), em_Val_from(p2), em_Val_from(p3));
        return DOMQuad_from_val(&vv);
      }


DOMQuad DOMQuad_new4(DOMPointInit * p1, DOMPointInit * p2, DOMPointInit * p3, DOMPointInit * p4) {
        em_Val vv = em_Val_new(em_Val_global("DOMQuad") , em_Val_from(p1), em_Val_from(p2), em_Val_from(p3), em_Val_from(p4));
        return DOMQuad_from_val(&vv);
      }


DOMQuad DOMQuad_fromRect0(DOMQuad* self ) {
    return em_Val_as(DOMQuad, em_Val_call(em_Val_global("domquad"), "fromRect"));
}


DOMQuad DOMQuad_fromRect1(DOMQuad* self , DOMRectInit * other) {
    return em_Val_as(DOMQuad, em_Val_call(em_Val_global("domquad"), "fromRect", em_Val_from(other)));
}


DOMQuad DOMQuad_fromQuad0(DOMQuad* self ) {
    return em_Val_as(DOMQuad, em_Val_call(em_Val_global("domquad"), "fromQuad"));
}


DOMQuad DOMQuad_fromQuad1(DOMQuad* self , DOMQuadInit * other) {
    return em_Val_as(DOMQuad, em_Val_call(em_Val_global("domquad"), "fromQuad", em_Val_from(other)));
}


DOMPoint DOMQuad_p1(const DOMQuad *self) {
    return em_Val_as(DOMPoint, em_Val_get(em_Val_as_val(self->inner), em_Val_from("p1")));
}


DOMPoint DOMQuad_p2(const DOMQuad *self) {
    return em_Val_as(DOMPoint, em_Val_get(em_Val_as_val(self->inner), em_Val_from("p2")));
}


DOMPoint DOMQuad_p3(const DOMQuad *self) {
    return em_Val_as(DOMPoint, em_Val_get(em_Val_as_val(self->inner), em_Val_from("p3")));
}


DOMPoint DOMQuad_p4(const DOMQuad *self) {
    return em_Val_as(DOMPoint, em_Val_get(em_Val_as_val(self->inner), em_Val_from("p4")));
}


DOMRect DOMQuad_getBounds(DOMQuad* self ) {
    return em_Val_as(DOMRect, em_Val_call(em_Val_as_val(self->inner), "getBounds"));
}


jb_Object DOMQuad_toJSON(DOMQuad* self ) {
    return em_Val_as(jb_Object, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}

