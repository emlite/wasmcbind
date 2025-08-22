#include <webcbind/HTMLDirectoryElement.h>

DEFINE_EMLITE_TYPE(HTMLDirectoryElement, HTMLElement);


HTMLDirectoryElement HTMLDirectoryElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLDirectoryElement") );
        return HTMLDirectoryElement_from_val(&vv);
      }


bool HTMLDirectoryElement_compact(const HTMLDirectoryElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), em_Val_from("compact")));
}


void HTMLDirectoryElement_set_compact(HTMLDirectoryElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), em_Val_from("compact"), em_Val_from(value));
}

