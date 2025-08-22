#include <webcbind/StaticRange.h>

#include <webcbind/StaticRangeInit.h>

DEFINE_EMLITE_TYPE(StaticRange, AbstractRange);


StaticRange StaticRange_new(StaticRangeInit * init) {
        em_Val vv = em_Val_new(em_Val_global("StaticRange") , em_Val_from(init));
        return StaticRange_from_val(&vv);
      }

