#include <webbind/Headers.h>


DEFINE_EMLITE_TYPE(Headers, em_Val);


Headers Headers_new() : em_Val(em_Val_global("Headers").new_()) {
        return Headers(em_Val_new(em_Val_global("Headers", ));
      }


Headers Headers_new(const jb_Any* init) : em_Val(em_Val_global("Headers").new_(em_Val_from(init))) {
        return Headers(em_Val_new(em_Val_global("Headers", em_Val_from(init)));
      }


jb_Undefined Headers_append(Headers* self , const jb_ByteString* name, const jb_ByteString* value) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "append", em_Val_from(name), em_Val_from(value)));
}


jb_Undefined Headers_delete_(Headers* self , const jb_ByteString* name) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "delete", em_Val_from(name)));
}


jb_ByteString Headers_get(Headers* self , const jb_ByteString* name) {
    return em_Val_as(jb_ByteString, em_Val_call(em_Val_as_val(self->inner), "get", em_Val_from(name)));
}


jb_Sequence Headers_getSetCookie(Headers* self ) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_as_val(self->inner), "getSetCookie"));
}


bool Headers_has(Headers* self , const jb_ByteString* name) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "has", em_Val_from(name)));
}


jb_Undefined Headers_set(Headers* self , const jb_ByteString* name, const jb_ByteString* value) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "set", em_Val_from(name), em_Val_from(value)));
}

