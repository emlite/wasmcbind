#include <webbind/MLGraph.h>

DEFINE_EMLITE_TYPE(MLGraph, em_Val);


jb_Undefined MLGraph_destroy(MLGraph* self ) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "destroy"));
}

