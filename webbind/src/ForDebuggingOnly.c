#include <webbind/ForDebuggingOnly.h>

DEFINE_EMLITE_TYPE(ForDebuggingOnly, em_Val);


jb_Undefined ForDebuggingOnly_reportAdAuctionWin(ForDebuggingOnly* self , jb_String * url) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "reportAdAuctionWin", em_Val_from(url)));
}


jb_Undefined ForDebuggingOnly_reportAdAuctionLoss(ForDebuggingOnly* self , jb_String * url) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "reportAdAuctionLoss", em_Val_from(url)));
}

