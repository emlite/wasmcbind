#include <webbind/PaymentRequestUpdateEventInit.h>

DEFINE_EMLITE_TYPE(PaymentRequestUpdateEventInit, EventInit);


PaymentRequestUpdateEventInit PaymentRequestUpdateEventInit_new() {
    em_Val obj = em_Val_object();
    return PaymentRequestUpdateEventInit_from_val(&obj);
}

