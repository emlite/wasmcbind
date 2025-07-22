#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct NotRestoredReasonDetails NotRestoredReasonDetails;
typedef struct NotRestoredReasons NotRestoredReasons;


DECLARE_EMLITE_TYPE(NotRestoredReasons, em_Val);

jb_USVString NotRestoredReasons_src( const NotRestoredReasons *self);

jb_DOMString NotRestoredReasons_id( const NotRestoredReasons *self);

jb_DOMString NotRestoredReasons_name( const NotRestoredReasons *self);

jb_USVString NotRestoredReasons_url( const NotRestoredReasons *self);

jb_FrozenArray NotRestoredReasons_reasons( const NotRestoredReasons *self);

jb_FrozenArray NotRestoredReasons_children( const NotRestoredReasons *self);

jb_Object NotRestoredReasons_toJSON(NotRestoredReasons* self );
