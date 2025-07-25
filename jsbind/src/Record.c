#include <emlite/emlite.h>
#include <jsbind/Any.h>
#include <jsbind/Record.h>

DEFINE_EMLITE_TYPE(jb_Record, em_Val);

jb_Any jb_Record_get(jb_Record r, const char *key) {
    em_Val keyv = em_Val_from_string(key);
    em_Val v    = em_Val_get(r.inner, keyv);
    return (jb_Any){.inner = v};
}

void jb_Record_set(jb_Record r, const char *key, jb_Any v) {
    em_Val keyv = em_Val_from_string(key);
    em_Val_set(r.inner, keyv, v.inner);
}

int jb_Record_has(jb_Record r, const char *key) {
    em_Val keyv = em_Val_from_string(key);
    return em_Val_has(r.inner, keyv);
}
