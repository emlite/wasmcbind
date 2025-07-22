#include <webbind/SharedStorageAppendMethod.h>
#include <webbind/SharedStorage.h>


DEFINE_EMLITE_TYPE(SharedStorageAppendMethod, SharedStorageModifierMethod);


SharedStorageAppendMethod SharedStorageAppendMethod_new(const jb_DOMString* key, const jb_DOMString* value) : SharedStorageModifierMethod(em_Val_global("SharedStorageAppendMethod").new_(em_Val_from(key), em_Val_from(value))) {
        return SharedStorageAppendMethod(em_Val_new(em_Val_global("SharedStorageAppendMethod", em_Val_from(key), em_Val_from(value)));
      }


SharedStorageAppendMethod SharedStorageAppendMethod_new(const jb_DOMString* key, const jb_DOMString* value, const SharedStorageModifierMethodOptions* options) : SharedStorageModifierMethod(em_Val_global("SharedStorageAppendMethod").new_(em_Val_from(key), em_Val_from(value), em_Val_from(options))) {
        return SharedStorageAppendMethod(em_Val_new(em_Val_global("SharedStorageAppendMethod", em_Val_from(key), em_Val_from(value), em_Val_from(options)));
      }

