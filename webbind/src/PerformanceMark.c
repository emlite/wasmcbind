#include <webbind/PerformanceMark.h>
#include <webbind/Performance.h>


DEFINE_EMLITE_TYPE(PerformanceMark, PerformanceEntry);


PerformanceMark PerformanceMark_new(const jb_DOMString* markName) : PerformanceEntry(em_Val_global("PerformanceMark").new_(em_Val_from(markName))) {
        return PerformanceMark(em_Val_new(em_Val_global("PerformanceMark", em_Val_from(markName)));
      }


PerformanceMark PerformanceMark_new(const jb_DOMString* markName, const PerformanceMarkOptions* markOptions) : PerformanceEntry(em_Val_global("PerformanceMark").new_(em_Val_from(markName), em_Val_from(markOptions))) {
        return PerformanceMark(em_Val_new(em_Val_global("PerformanceMark", em_Val_from(markName), em_Val_from(markOptions)));
      }


jb_Any PerformanceMark_detail(const PerformanceMark *self) {
    return em_Val_as(jb_Any, em_Val_get(PerformanceEntry_as_val(self->inner), "detail"));
}

