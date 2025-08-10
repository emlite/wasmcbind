#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Node Node;
typedef struct MutationObserverInit MutationObserverInit;
typedef struct MutationRecord MutationRecord;

DECLARE_EMLITE_TYPE(MutationObserver, em_Val);

MutationObserver MutationObserver_new(jb_Function * callback);

jb_Undefined MutationObserver_observe0(MutationObserver* self , Node * target);

jb_Undefined MutationObserver_observe1(MutationObserver* self , Node * target, MutationObserverInit * options);

jb_Undefined MutationObserver_disconnect(MutationObserver* self );

jb_Array MutationObserver_takeRecords(MutationObserver* self );

#ifdef __cplusplus
}
#endif
