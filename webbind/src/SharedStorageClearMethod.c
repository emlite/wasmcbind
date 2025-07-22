#include <webbind/SharedStorageClearMethod.h>
#include <webbind/SharedStorage.h>


DEFINE_EMLITE_TYPE(SharedStorageClearMethod, SharedStorageModifierMethod);


SharedStorageClearMethod SharedStorageClearMethod_new() : SharedStorageModifierMethod(em_Val_global("SharedStorageClearMethod").new_()) {
        return SharedStorageClearMethod(em_Val_new(em_Val_global("SharedStorageClearMethod", ));
      }


SharedStorageClearMethod SharedStorageClearMethod_new(const SharedStorageModifierMethodOptions* options) : SharedStorageModifierMethod(em_Val_global("SharedStorageClearMethod").new_(em_Val_from(options))) {
        return SharedStorageClearMethod(em_Val_new(em_Val_global("SharedStorageClearMethod", em_Val_from(options)));
      }

