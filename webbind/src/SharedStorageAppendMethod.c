#include <webbind/SharedStorageAppendMethod.h>

#include <webbind/SharedStorageModifierMethodOptions.h>

DEFINE_EMLITE_TYPE(SharedStorageAppendMethod, SharedStorageModifierMethod);


SharedStorageAppendMethod SharedStorageAppendMethod_new0(jb_String * key, jb_String * value) {
        em_Val vv = em_Val_new(em_Val_global("SharedStorageAppendMethod") , em_Val_from(key), em_Val_from(value));
        return SharedStorageAppendMethod_from_val(&vv);
      }


SharedStorageAppendMethod SharedStorageAppendMethod_new1(jb_String * key, jb_String * value, SharedStorageModifierMethodOptions * options) {
        em_Val vv = em_Val_new(em_Val_global("SharedStorageAppendMethod") , em_Val_from(key), em_Val_from(value), em_Val_from(options));
        return SharedStorageAppendMethod_from_val(&vv);
      }

