#include <webbind/SharedStorageSetMethod.h>
#include <webbind/SharedStorage.h>


DEFINE_EMLITE_TYPE(SharedStorageSetMethod, SharedStorageModifierMethod);


SharedStorageSetMethod SharedStorageSetMethod_new0(jb_DOMString * key, jb_DOMString * value) {
        em_Val vv = em_Val_new(em_Val_global("SharedStorageSetMethod") , em_Val_from(key), em_Val_from(value));
        return SharedStorageSetMethod_from_val(&vv);
      }


SharedStorageSetMethod SharedStorageSetMethod_new1(jb_DOMString * key, jb_DOMString * value, SharedStorageSetMethodOptions * options) {
        em_Val vv = em_Val_new(em_Val_global("SharedStorageSetMethod") , em_Val_from(key), em_Val_from(value), em_Val_from(options));
        return SharedStorageSetMethod_from_val(&vv);
      }

