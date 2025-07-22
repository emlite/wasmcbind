#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


DECLARE_EMLITE_TYPE(NavigationDestination, em_Val);

jb_USVString NavigationDestination_url( const NavigationDestination *self);

jb_DOMString NavigationDestination_key( const NavigationDestination *self);

jb_DOMString NavigationDestination_id( const NavigationDestination *self);

long long NavigationDestination_index( const NavigationDestination *self);

bool NavigationDestination_sameDocument( const NavigationDestination *self);

jb_Any NavigationDestination_getState(NavigationDestination* self );
