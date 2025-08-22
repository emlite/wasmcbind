#include <webcbind/QueryOptions.h>

DEFINE_EMLITE_TYPE(QueryOptions, em_Val);


jb_Array QueryOptions_postscriptNames(const QueryOptions *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("postscriptNames")));
}


void QueryOptions_set_postscriptNames(QueryOptions* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("postscriptNames"), em_Val_from(value));
}


QueryOptions QueryOptions_new() {
    em_Val obj = em_Val_object();
    return QueryOptions_from_val(&obj);
}

