#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct PermissionStatus PermissionStatus;


typedef struct {
  em_Val inner;
} Permissions;


DECLARE_EMLITE_TYPE(Permissions, em_Val);

jb_Promise Permissions_query(Permissions* self , const jb_Object* permissionDesc);

jb_Promise Permissions_request(Permissions* self , const jb_Object* permissionDesc);

jb_Promise Permissions_revoke(Permissions* self , const jb_Object* permissionDesc);
