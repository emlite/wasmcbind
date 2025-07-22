#include <webbind/Headers.h>


DEFINE_EMLITE_TYPE(Headers, em_Val);


Headers Headers_new0() {
        em_Val vv = em_Val_new(em_Val_global("Headers") );
        return Headers_from_val(&vv);
      }


Headers Headers_new1(jb_Any * init) {
        em_Val vv = em_Val_new(em_Val_global("Headers") , em_Val_from(init));
        return Headers_from_val(&vv);
      }


jb_Undefined Headers_append(Headers* self , jb_ByteString * name, jb_ByteString * value) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "append", em_Val_from(name), em_Val_from(value)));
}


jb_Undefined Headers_delete_(Headers* self , jb_ByteString * name) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "delete", em_Val_from(name)));
}


jb_ByteString Headers_get(Headers* self , jb_ByteString * name) {
    return em_Val_as(jb_ByteString, em_Val_call(em_Val_as_val(self->inner), "get", em_Val_from(name)));
}


jb_Sequence Headers_getSetCookie(Headers* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "getSetCookie"));
}


bool Headers_has(Headers* self , jb_ByteString * name) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "has", em_Val_from(name)));
}


jb_Undefined Headers_set(Headers* self , jb_ByteString * name, jb_ByteString * value) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "set", em_Val_from(name), em_Val_from(value)));
}

