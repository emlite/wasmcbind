#include <jscbind/JSON.h>

jb_String jb_JSON_stringify(const jb_Any *value, const jb_Any *replacer, const jb_Any *space) {
    em_Val json = em_Val_global("JSON");
    if (replacer && space) {
        return (jb_String
        ){.inner = em_Val_call(json, "stringify", value->inner, replacer->inner, space->inner)};
    } else if (replacer) {
        return (jb_String){.inner = em_Val_call(json, "stringify", value->inner, replacer->inner)};
    } else if (space) {
        return (jb_String
        ){.inner = em_Val_call(json, "stringify", value->inner, em_Val_null(), space->inner)};
    } else {
        return (jb_String){.inner = em_Val_call(json, "stringify", value->inner)};
    }
}

jb_Any jb_JSON_parse(const jb_String *json) {
    return (jb_Any){.inner = em_Val_call(em_Val_global("JSON"), "parse", json->inner)};
}
