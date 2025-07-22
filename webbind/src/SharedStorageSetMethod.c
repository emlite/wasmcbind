#include <webbind/SharedStorageSetMethod.h>
#include <webbind/SharedStorage.h>


DEFINE_EMLITE_TYPE(SharedStorageSetMethod, SharedStorageModifierMethod);


SharedStorageSetMethod SharedStorageSetMethod_new(const jb_DOMString* key, const jb_DOMString* value) : SharedStorageModifierMethod(em_Val_global("SharedStorageSetMethod").new_(em_Val_from(key), em_Val_from(value))) {
        return SharedStorageSetMethod(em_Val_new(em_Val_global("SharedStorageSetMethod", em_Val_from(key), em_Val_from(value)));
      }


SharedStorageSetMethod SharedStorageSetMethod_new(const jb_DOMString* key, const jb_DOMString* value, const SharedStorageSetMethodOptions* options) : SharedStorageModifierMethod(em_Val_global("SharedStorageSetMethod").new_(em_Val_from(key), em_Val_from(value), em_Val_from(options))) {
        return SharedStorageSetMethod(em_Val_new(em_Val_global("SharedStorageSetMethod", em_Val_from(key), em_Val_from(value), em_Val_from(options)));
      }

