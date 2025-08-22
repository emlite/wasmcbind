#include <webcbind/ExtendableEventInit.h>

DEFINE_EMLITE_TYPE(ExtendableEventInit, EventInit);


ExtendableEventInit ExtendableEventInit_new() {
    em_Val obj = em_Val_object();
    return ExtendableEventInit_from_val(&obj);
}

