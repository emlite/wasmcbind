#include <webbind/IDBKeyRange.h>

DEFINE_EMLITE_TYPE(IDBKeyRange, em_Val);


jb_Any IDBKeyRange_lower(const IDBKeyRange *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("lower")));
}


jb_Any IDBKeyRange_upper(const IDBKeyRange *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), em_Val_from("upper")));
}


bool IDBKeyRange_lowerOpen(const IDBKeyRange *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("lowerOpen")));
}


bool IDBKeyRange_upperOpen(const IDBKeyRange *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("upperOpen")));
}


IDBKeyRange IDBKeyRange_only(IDBKeyRange* self , jb_Any * value) {
    return em_Val_as(IDBKeyRange, em_Val_call(em_Val_global("idbkeyrange"), "only", em_Val_from(value)));
}


IDBKeyRange IDBKeyRange_lowerBound0(IDBKeyRange* self , jb_Any * lower) {
    return em_Val_as(IDBKeyRange, em_Val_call(em_Val_global("idbkeyrange"), "lowerBound", em_Val_from(lower)));
}


IDBKeyRange IDBKeyRange_lowerBound1(IDBKeyRange* self , jb_Any * lower, bool open) {
    return em_Val_as(IDBKeyRange, em_Val_call(em_Val_global("idbkeyrange"), "lowerBound", em_Val_from(lower), em_Val_from(open)));
}


IDBKeyRange IDBKeyRange_upperBound0(IDBKeyRange* self , jb_Any * upper) {
    return em_Val_as(IDBKeyRange, em_Val_call(em_Val_global("idbkeyrange"), "upperBound", em_Val_from(upper)));
}


IDBKeyRange IDBKeyRange_upperBound1(IDBKeyRange* self , jb_Any * upper, bool open) {
    return em_Val_as(IDBKeyRange, em_Val_call(em_Val_global("idbkeyrange"), "upperBound", em_Val_from(upper), em_Val_from(open)));
}


IDBKeyRange IDBKeyRange_bound0(IDBKeyRange* self , jb_Any * lower, jb_Any * upper) {
    return em_Val_as(IDBKeyRange, em_Val_call(em_Val_global("idbkeyrange"), "bound", em_Val_from(lower), em_Val_from(upper)));
}


IDBKeyRange IDBKeyRange_bound1(IDBKeyRange* self , jb_Any * lower, jb_Any * upper, bool lowerOpen) {
    return em_Val_as(IDBKeyRange, em_Val_call(em_Val_global("idbkeyrange"), "bound", em_Val_from(lower), em_Val_from(upper), em_Val_from(lowerOpen)));
}


IDBKeyRange IDBKeyRange_bound2(IDBKeyRange* self , jb_Any * lower, jb_Any * upper, bool lowerOpen, bool upperOpen) {
    return em_Val_as(IDBKeyRange, em_Val_call(em_Val_global("idbkeyrange"), "bound", em_Val_from(lower), em_Val_from(upper), em_Val_from(lowerOpen), em_Val_from(upperOpen)));
}


bool IDBKeyRange_includes(IDBKeyRange* self , jb_Any * key) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "includes", em_Val_from(key)));
}

