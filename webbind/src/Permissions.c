#include <webbind/Permissions.h>
#include <webbind/PermissionStatus.h>


DEFINE_EMLITE_TYPE(Permissions, em_Val);


jb_Promise Permissions_query(Permissions* self , const jb_Object* permissionDesc) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "query", em_Val_from(permissionDesc)));
}


jb_Promise Permissions_request(Permissions* self , const jb_Object* permissionDesc) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "request", em_Val_from(permissionDesc)));
}


jb_Promise Permissions_revoke(Permissions* self , const jb_Object* permissionDesc) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "revoke", em_Val_from(permissionDesc)));
}

