#include <webcbind/HTMLSelectedContentElement.h>

DEFINE_EMLITE_TYPE(HTMLSelectedContentElement, HTMLElement);


HTMLSelectedContentElement HTMLSelectedContentElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLSelectedContentElement") );
        return HTMLSelectedContentElement_from_val(&vv);
      }

