#include <webcbind/IDBTransactionOptions.h>

DEFINE_EMLITE_TYPE(IDBTransactionOptions, em_Val);


IDBTransactionDurability IDBTransactionOptions_durability(const IDBTransactionOptions *self) {
    return em_Val_as(IDBTransactionDurability, em_Val_get(em_Val_as_val(self->inner), em_Val_from("durability")));
}


void IDBTransactionOptions_set_durability(IDBTransactionOptions* self, IDBTransactionDurability * value) {
    em_Val_set(em_Val_as_val(self->inner), em_Val_from("durability"), em_Val_from(value));
}


IDBTransactionOptions IDBTransactionOptions_new() {
    em_Val obj = em_Val_object();
    return IDBTransactionOptions_from_val(&obj);
}

