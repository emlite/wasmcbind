#include <webbind/HTMLPictureElement.h>


DEFINE_EMLITE_TYPE(HTMLPictureElement, HTMLElement);


HTMLPictureElement HTMLPictureElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLPictureElement") );
        return HTMLPictureElement_from_val(&vv);
      }

