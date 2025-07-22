#include <webbind/HTMLSpanElement.h>


DEFINE_EMLITE_TYPE(HTMLSpanElement, HTMLElement);


HTMLSpanElement HTMLSpanElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLSpanElement") );
        return HTMLSpanElement_from_val(&vv);
      }

