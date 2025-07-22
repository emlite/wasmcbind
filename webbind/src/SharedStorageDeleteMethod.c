#include <webbind/SharedStorageDeleteMethod.h>
#include <webbind/SharedStorage.h>


DEFINE_EMLITE_TYPE(SharedStorageDeleteMethod, SharedStorageModifierMethod);


SharedStorageDeleteMethod SharedStorageDeleteMethod_new(const jb_DOMString* key) : SharedStorageModifierMethod(em_Val_global("SharedStorageDeleteMethod").new_(em_Val_from(key))) {
        return SharedStorageDeleteMethod(em_Val_new(em_Val_global("SharedStorageDeleteMethod", em_Val_from(key)));
      }


SharedStorageDeleteMethod SharedStorageDeleteMethod_new(const jb_DOMString* key, const SharedStorageModifierMethodOptions* options) : SharedStorageModifierMethod(em_Val_global("SharedStorageDeleteMethod").new_(em_Val_from(key), em_Val_from(options))) {
        return SharedStorageDeleteMethod(em_Val_new(em_Val_global("SharedStorageDeleteMethod", em_Val_from(key), em_Val_from(options)));
      }

