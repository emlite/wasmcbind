#include <webcbind/SharedStorageDeleteMethod.h>

#include <webcbind/SharedStorageModifierMethodOptions.h>

DEFINE_EMLITE_TYPE(SharedStorageDeleteMethod, SharedStorageModifierMethod);


SharedStorageDeleteMethod SharedStorageDeleteMethod_new0(jb_String * key) {
        em_Val vv = em_Val_new(em_Val_global("SharedStorageDeleteMethod") , em_Val_from(key));
        return SharedStorageDeleteMethod_from_val(&vv);
      }


SharedStorageDeleteMethod SharedStorageDeleteMethod_new1(jb_String * key, SharedStorageModifierMethodOptions * options) {
        em_Val vv = em_Val_new(em_Val_global("SharedStorageDeleteMethod") , em_Val_from(key), em_Val_from(options));
        return SharedStorageDeleteMethod_from_val(&vv);
      }

