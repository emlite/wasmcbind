#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


typedef struct {
  em_Val inner;
} PaymentManager;


DECLARE_EMLITE_TYPE(PaymentManager, em_Val);

jb_DOMString PaymentManager_userHint( const PaymentManager *self);

void PaymentManager_set_userHint(PaymentManager* self, const jb_DOMString* value);

jb_Promise PaymentManager_enableDelegations(PaymentManager* self , const jb_Sequence* delegations);
