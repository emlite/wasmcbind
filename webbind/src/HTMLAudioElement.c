#include <webbind/HTMLAudioElement.h>

DEFINE_EMLITE_TYPE(HTMLAudioElement, HTMLMediaElement);


HTMLAudioElement HTMLAudioElement_new() {
        em_Val vv = em_Val_new(em_Val_global("HTMLAudioElement") );
        return HTMLAudioElement_from_val(&vv);
      }

