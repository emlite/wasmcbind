#include <webcbind/PerformanceMark.h>

#include <webcbind/PerformanceMarkOptions.h>

DEFINE_EMLITE_TYPE(PerformanceMark, PerformanceEntry);


PerformanceMark PerformanceMark_new0(jb_String * markName) {
        em_Val vv = em_Val_new(em_Val_global("PerformanceMark") , em_Val_from(markName));
        return PerformanceMark_from_val(&vv);
      }


PerformanceMark PerformanceMark_new1(jb_String * markName, PerformanceMarkOptions * markOptions) {
        em_Val vv = em_Val_new(em_Val_global("PerformanceMark") , em_Val_from(markName), em_Val_from(markOptions));
        return PerformanceMark_from_val(&vv);
      }


jb_Any PerformanceMark_detail(const PerformanceMark *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), em_Val_from("detail")));
}

