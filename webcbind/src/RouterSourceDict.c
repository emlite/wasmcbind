#include <webcbind/RouterSourceDict.h>

DEFINE_EMLITE_TYPE(RouterSourceDict, em_Val);


jb_String RouterSourceDict_cacheName(const RouterSourceDict *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("cacheName")));
}


void RouterSourceDict_set_cacheName(RouterSourceDict* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("cacheName"), em_Val_from(value));
}


RouterSourceDict RouterSourceDict_new() {
    em_Val obj = em_Val_object();
    return RouterSourceDict_from_val(&obj);
}

