#include <webcbind/ReportBody.h>

DEFINE_EMLITE_TYPE(ReportBody, em_Val);


ReportBody ReportBody_new() {
    em_Val obj = em_Val_object();
    return ReportBody_from_val(&obj);
}

