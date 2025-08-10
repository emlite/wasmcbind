#include <webbind/HTMLHeadElement.h>

DEFINE_EMLITE_TYPE(HTMLHeadElement, HTMLElement);


HTMLHeadElement HTMLHeadElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLHeadElement") );
        return HTMLHeadElement_from_val(&vv);
      }

