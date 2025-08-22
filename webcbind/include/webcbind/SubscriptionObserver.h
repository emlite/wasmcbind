#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type SubscriptionObserver */
DECLARE_EMLITE_TYPE(SubscriptionObserver, em_Val);

/** @brief Getter of the next property */
jb_Function SubscriptionObserver_next(const SubscriptionObserver *self);

/** @brief Setter of the next property */
void SubscriptionObserver_set_next(SubscriptionObserver* self, jb_Function * value);

/** @brief Getter of the error property */
jb_Function SubscriptionObserver_error(const SubscriptionObserver *self);

/** @brief Setter of the error property */
void SubscriptionObserver_set_error(SubscriptionObserver* self, jb_Function * value);

/** @brief Getter of the complete property */
jb_Function SubscriptionObserver_complete(const SubscriptionObserver *self);

/** @brief Setter of the complete property */
void SubscriptionObserver_set_complete(SubscriptionObserver* self, jb_Function * value);

/** @brief Constructor of the SubscriptionObserver dictionary type */
SubscriptionObserver SubscriptionObserver_new();

#ifdef __cplusplus
}
#endif
