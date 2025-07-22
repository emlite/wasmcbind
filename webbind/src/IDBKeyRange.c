#include <webbind/IDBKeyRange.h>


DEFINE_EMLITE_TYPE(IDBKeyRange, em_Val);


jb_Any IDBKeyRange_lower(const IDBKeyRange *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "lower"));
}


jb_Any IDBKeyRange_upper(const IDBKeyRange *self) {
    return em_Val_as(jb_Any, em_Val_get(em_Val_as_val(self->inner), "upper"));
}


bool IDBKeyRange_lowerOpen(const IDBKeyRange *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "lowerOpen"));
}


bool IDBKeyRange_upperOpen(const IDBKeyRange *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), "upperOpen"));
}


IDBKeyRange IDBKeyRange_only(IDBKeyRange* self , const jb_Any* value) {
    return em_Val_as(IDBKeyRange, em_Val_call(em_Val_global("idbkeyrange"), "only", em_Val_from(value)));
}


IDBKeyRange IDBKeyRange_lowerBound(IDBKeyRange* self , const jb_Any* lower) {
    return em_Val_as(IDBKeyRange, em_Val_call(em_Val_global("idbkeyrange"), "lowerBound", em_Val_from(lower)));
}


IDBKeyRange IDBKeyRange_lowerBound(IDBKeyRange* self , const jb_Any* lower, bool open) {
    return em_Val_as(IDBKeyRange, em_Val_call(em_Val_global("idbkeyrange"), "lowerBound", em_Val_from(lower), em_Val_from(open)));
}


IDBKeyRange IDBKeyRange_upperBound(IDBKeyRange* self , const jb_Any* upper) {
    return em_Val_as(IDBKeyRange, em_Val_call(em_Val_global("idbkeyrange"), "upperBound", em_Val_from(upper)));
}


IDBKeyRange IDBKeyRange_upperBound(IDBKeyRange* self , const jb_Any* upper, bool open) {
    return em_Val_as(IDBKeyRange, em_Val_call(em_Val_global("idbkeyrange"), "upperBound", em_Val_from(upper), em_Val_from(open)));
}


IDBKeyRange IDBKeyRange_bound(IDBKeyRange* self , const jb_Any* lower, const jb_Any* upper) {
    return em_Val_as(IDBKeyRange, em_Val_call(em_Val_global("idbkeyrange"), "bound", em_Val_from(lower), em_Val_from(upper)));
}


IDBKeyRange IDBKeyRange_bound(IDBKeyRange* self , const jb_Any* lower, const jb_Any* upper, bool lowerOpen) {
    return em_Val_as(IDBKeyRange, em_Val_call(em_Val_global("idbkeyrange"), "bound", em_Val_from(lower), em_Val_from(upper), em_Val_from(lowerOpen)));
}


IDBKeyRange IDBKeyRange_bound(IDBKeyRange* self , const jb_Any* lower, const jb_Any* upper, bool lowerOpen, bool upperOpen) {
    return em_Val_as(IDBKeyRange, em_Val_call(em_Val_global("idbkeyrange"), "bound", em_Val_from(lower), em_Val_from(upper), em_Val_from(lowerOpen), em_Val_from(upperOpen)));
}


bool IDBKeyRange_includes(IDBKeyRange* self , const jb_Any* key) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "includes", em_Val_from(key)));
}

