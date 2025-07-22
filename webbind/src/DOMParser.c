#include <webbind/DOMParser.h>
#include <webbind/Document.h>


DEFINE_EMLITE_TYPE(DOMParser, em_Val);


DOMParser DOMParser_new() : em_Val(em_Val_global("DOMParser").new_()) {
        return DOMParser(em_Val_new(em_Val_global("DOMParser", ));
      }


Document DOMParser_parseFromString(DOMParser* self , const jb_Any* string, const DOMParserSupportedType* type) {
    return em_Val_as(Document, em_Val_call(em_Val_as_val(self->inner), "parseFromString", em_Val_from(string), em_Val_from(type)));
}

