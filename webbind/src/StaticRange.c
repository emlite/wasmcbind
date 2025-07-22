#include <webbind/StaticRange.h>


DEFINE_EMLITE_TYPE(StaticRange, AbstractRange);


StaticRange StaticRange_new(const jb_Any* init) : AbstractRange(em_Val_global("StaticRange").new_(em_Val_from(init))) {
        return StaticRange(em_Val_new(em_Val_global("StaticRange", em_Val_from(init)));
      }

