#include <webbind/DOMParser.h>

#include <webbind/Document.h>

DEFINE_EMLITE_TYPE(DOMParser, em_Val);


DOMParser DOMParser_new() {
        em_Val vv = em_Val_new(em_Val_global("DOMParser") );
        return DOMParser_from_val(&vv);
      }


Document DOMParser_parseFromString(DOMParser* self , jb_Any * string, DOMParserSupportedType * type) {
    return em_Val_as(Document, em_Val_call(em_Val_as_val(self->inner), "parseFromString", em_Val_from(string), em_Val_from(type)));
}

