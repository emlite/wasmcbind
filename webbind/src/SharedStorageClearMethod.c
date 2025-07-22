#include <webbind/SharedStorageClearMethod.h>
#include <webbind/SharedStorage.h>


DEFINE_EMLITE_TYPE(SharedStorageClearMethod, SharedStorageModifierMethod);


SharedStorageClearMethod SharedStorageClearMethod_new0() {
        em_Val vv = em_Val_new(em_Val_global("SharedStorageClearMethod") );
        return SharedStorageClearMethod_from_val(&vv);
      }


SharedStorageClearMethod SharedStorageClearMethod_new1(SharedStorageModifierMethodOptions * options) {
        em_Val vv = em_Val_new(em_Val_global("SharedStorageClearMethod") , em_Val_from(options));
        return SharedStorageClearMethod_from_val(&vv);
      }

