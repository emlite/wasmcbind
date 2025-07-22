#include <webbind/DOMQuad.h>
#include <webbind/DOMRectReadOnly.h>
#include <webbind/DOMPoint.h>
#include <webbind/DOMRect.h>
#include <webbind/Node.h>
#include <webbind/Document.h>
#include <webbind/SVGGeometryElement.h>


DEFINE_EMLITE_TYPE(DOMQuad, em_Val);


DOMQuad DOMQuad_new() : em_Val(em_Val_global("DOMQuad").new_()) {
        return DOMQuad(em_Val_new(em_Val_global("DOMQuad", ));
      }


DOMQuad DOMQuad_new(const DOMPointInit* p1) : em_Val(em_Val_global("DOMQuad").new_(em_Val_from(p1))) {
        return DOMQuad(em_Val_new(em_Val_global("DOMQuad", em_Val_from(p1)));
      }


DOMQuad DOMQuad_new(const DOMPointInit* p1, const DOMPointInit* p2) : em_Val(em_Val_global("DOMQuad").new_(em_Val_from(p1), em_Val_from(p2))) {
        return DOMQuad(em_Val_new(em_Val_global("DOMQuad", em_Val_from(p1), em_Val_from(p2)));
      }


DOMQuad DOMQuad_new(const DOMPointInit* p1, const DOMPointInit* p2, const DOMPointInit* p3) : em_Val(em_Val_global("DOMQuad").new_(em_Val_from(p1), em_Val_from(p2), em_Val_from(p3))) {
        return DOMQuad(em_Val_new(em_Val_global("DOMQuad", em_Val_from(p1), em_Val_from(p2), em_Val_from(p3)));
      }


DOMQuad DOMQuad_new(const DOMPointInit* p1, const DOMPointInit* p2, const DOMPointInit* p3, const DOMPointInit* p4) : em_Val(em_Val_global("DOMQuad").new_(em_Val_from(p1), em_Val_from(p2), em_Val_from(p3), em_Val_from(p4))) {
        return DOMQuad(em_Val_new(em_Val_global("DOMQuad", em_Val_from(p1), em_Val_from(p2), em_Val_from(p3), em_Val_from(p4)));
      }


DOMQuad DOMQuad_fromRect(DOMQuad* self ) {
    return em_Val_as(DOMQuad, em_Val_call(em_Val_global("domquad"), "fromRect"));
}


DOMQuad DOMQuad_fromRect(DOMQuad* self , const DOMRectInit* other) {
    return em_Val_as(DOMQuad, em_Val_call(em_Val_global("domquad"), "fromRect", em_Val_from(other)));
}


DOMQuad DOMQuad_fromQuad(DOMQuad* self ) {
    return em_Val_as(DOMQuad, em_Val_call(em_Val_global("domquad"), "fromQuad"));
}


DOMQuad DOMQuad_fromQuad(DOMQuad* self , const DOMQuadInit* other) {
    return em_Val_as(DOMQuad, em_Val_call(em_Val_global("domquad"), "fromQuad", em_Val_from(other)));
}


DOMPoint DOMQuad_p1(const DOMQuad *self) {
    return em_Val_as(DOMPoint, em_Val_get(em_Val_as_val(self->inner), "p1"));
}


DOMPoint DOMQuad_p2(const DOMQuad *self) {
    return em_Val_as(DOMPoint, em_Val_get(em_Val_as_val(self->inner), "p2"));
}


DOMPoint DOMQuad_p3(const DOMQuad *self) {
    return em_Val_as(DOMPoint, em_Val_get(em_Val_as_val(self->inner), "p3"));
}


DOMPoint DOMQuad_p4(const DOMQuad *self) {
    return em_Val_as(DOMPoint, em_Val_get(em_Val_as_val(self->inner), "p4"));
}


DOMRect DOMQuad_getBounds(DOMQuad* self ) {
    return em_Val_as(DOMRect, em_Val_call(em_Val_as_val(self->inner), "getBounds"));
}


jb_Object DOMQuad_toJSON(DOMQuad* self ) {
    return em_Val_as(jb_Object, em_Val_call(em_Val_as_val(self->inner), "toJSON"));
}

