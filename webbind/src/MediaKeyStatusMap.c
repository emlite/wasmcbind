#include <webbind/MediaKeyStatusMap.h>


DEFINE_EMLITE_TYPE(MediaKeyStatusMap, em_Val);


unsigned long MediaKeyStatusMap_size(const MediaKeyStatusMap *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "size"));
}


bool MediaKeyStatusMap_has(MediaKeyStatusMap* self , const jb_Any* keyId) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "has", em_Val_from(keyId)));
}


jb_Any MediaKeyStatusMap_get(MediaKeyStatusMap* self , const jb_Any* keyId) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_as_val(self->inner), "get", em_Val_from(keyId)));
}

