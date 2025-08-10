#include <webbind/JsonWebKey.h>

DEFINE_EMLITE_TYPE(JsonWebKey, em_Val);


jb_String JsonWebKey_kty(const JsonWebKey *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("kty")));
}


void JsonWebKey_set_kty(JsonWebKey* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("kty"), em_Val_from(value));
}


jb_String JsonWebKey_use(const JsonWebKey *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("use")));
}


void JsonWebKey_set_use(JsonWebKey* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("use"), em_Val_from(value));
}


jb_Array JsonWebKey_key_ops(const JsonWebKey *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("key_ops")));
}


void JsonWebKey_set_key_ops(JsonWebKey* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("key_ops"), em_Val_from(value));
}


jb_String JsonWebKey_alg(const JsonWebKey *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("alg")));
}


void JsonWebKey_set_alg(JsonWebKey* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("alg"), em_Val_from(value));
}


bool JsonWebKey_ext(const JsonWebKey *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ext")));
}


void JsonWebKey_set_ext(JsonWebKey* self, bool value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("ext"), em_Val_from(value));
}


jb_String JsonWebKey_crv(const JsonWebKey *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("crv")));
}


void JsonWebKey_set_crv(JsonWebKey* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("crv"), em_Val_from(value));
}


jb_String JsonWebKey_x(const JsonWebKey *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("x")));
}


void JsonWebKey_set_x(JsonWebKey* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("x"), em_Val_from(value));
}


jb_String JsonWebKey_y(const JsonWebKey *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("y")));
}


void JsonWebKey_set_y(JsonWebKey* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("y"), em_Val_from(value));
}


jb_String JsonWebKey_d(const JsonWebKey *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("d")));
}


void JsonWebKey_set_d(JsonWebKey* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("d"), em_Val_from(value));
}


jb_String JsonWebKey_n(const JsonWebKey *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("n")));
}


void JsonWebKey_set_n(JsonWebKey* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("n"), em_Val_from(value));
}


jb_String JsonWebKey_e(const JsonWebKey *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("e")));
}


void JsonWebKey_set_e(JsonWebKey* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("e"), em_Val_from(value));
}


jb_String JsonWebKey_p(const JsonWebKey *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("p")));
}


void JsonWebKey_set_p(JsonWebKey* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("p"), em_Val_from(value));
}


jb_String JsonWebKey_q(const JsonWebKey *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("q")));
}


void JsonWebKey_set_q(JsonWebKey* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("q"), em_Val_from(value));
}


jb_String JsonWebKey_dp(const JsonWebKey *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dp")));
}


void JsonWebKey_set_dp(JsonWebKey* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("dp"), em_Val_from(value));
}


jb_String JsonWebKey_dq(const JsonWebKey *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("dq")));
}


void JsonWebKey_set_dq(JsonWebKey* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("dq"), em_Val_from(value));
}


jb_String JsonWebKey_qi(const JsonWebKey *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("qi")));
}


void JsonWebKey_set_qi(JsonWebKey* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("qi"), em_Val_from(value));
}


jb_Array JsonWebKey_oth(const JsonWebKey *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("oth")));
}


void JsonWebKey_set_oth(JsonWebKey* self, jb_Array * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("oth"), em_Val_from(value));
}


jb_String JsonWebKey_k(const JsonWebKey *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("k")));
}


void JsonWebKey_set_k(JsonWebKey* self, jb_String * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("k"), em_Val_from(value));
}


JsonWebKey JsonWebKey_new() {
    em_Val obj = em_Val_object();
    return JsonWebKey_from_val(&obj);
}

