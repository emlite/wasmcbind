#include <jsbind/Sequence.h>

DEFINE_EMLITE_TYPE(jb_Sequence, em_Val);

size_t jb_Sequence_length(const jb_Sequence *s) {
    em_Val prop = em_Val_from_string("length");
    em_Val v    = em_Val_get(s->inner, prop);
    return (size_t)em_Val_as_int(v);
}
jb_Any jb_Sequence_get(jb_Sequence *s, size_t idx) {
    em_Val idxv = em_Val_from_int((int)idx);
    em_Val v    = em_Val_call(s->inner, "at", idxv);
    return (jb_Any){.inner = v};
}
void jb_Sequence_set(
    const jb_Sequence *s, size_t idx, const jb_Any *v
) {
    em_Val idxv = em_Val_from_int((int)idx);
    em_Val_set(s->inner, idxv, v->inner);
}