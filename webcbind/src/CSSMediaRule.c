#include <webcbind/CSSMediaRule.h>

#include <webcbind/MediaList.h>

DEFINE_EMLITE_TYPE(CSSMediaRule, CSSConditionRule);


MediaList CSSMediaRule_media(const CSSMediaRule *self) {
    return em_Val_as(MediaList, em_Val_get(CSSConditionRule_as_val(self->inner), em_Val_from("media")));
}


bool CSSMediaRule_matches(const CSSMediaRule *self) {
    return em_Val_as(bool, em_Val_get(CSSConditionRule_as_val(self->inner), em_Val_from("matches")));
}

