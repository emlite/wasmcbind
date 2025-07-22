#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct NavigationHistoryEntry NavigationHistoryEntry;


DECLARE_EMLITE_TYPE(NavigationActivation, em_Val);

NavigationHistoryEntry NavigationActivation_from( const NavigationActivation *self);

NavigationHistoryEntry NavigationActivation_entry( const NavigationActivation *self);

NavigationType NavigationActivation_navigationType( const NavigationActivation *self);
