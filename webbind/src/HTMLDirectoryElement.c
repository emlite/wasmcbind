#include <webbind/HTMLDirectoryElement.h>


DEFINE_EMLITE_TYPE(HTMLDirectoryElement, HTMLElement);


HTMLDirectoryElement HTMLDirectoryElement_new() : HTMLElement(em_Val_global("HTMLDirectoryElement").new_()) {
        return HTMLDirectoryElement(em_Val_new(em_Val_global("HTMLDirectoryElement", ));
      }


bool HTMLDirectoryElement_compact(const HTMLDirectoryElement *self) {
    return em_Val_as(bool, em_Val_get(HTMLElement_as_val(self->inner), "compact"));
}


void HTMLDirectoryElement_set_compact(HTMLDirectoryElement* self, bool value) {
    em_Val_set(HTMLElement_as_val(self->inner), "compact", value);
}

