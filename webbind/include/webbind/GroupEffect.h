#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct AnimationNodeList AnimationNodeList;
typedef struct AnimationEffect AnimationEffect;
typedef struct GroupEffect GroupEffect;


DECLARE_EMLITE_TYPE(GroupEffect, em_Val);

GroupEffect GroupEffect_new0(jb_Sequence * children);

GroupEffect GroupEffect_new1(jb_Sequence * children, jb_Any * timing);

AnimationNodeList GroupEffect_children( const GroupEffect *self);

AnimationEffect GroupEffect_firstChild( const GroupEffect *self);

AnimationEffect GroupEffect_lastChild( const GroupEffect *self);

GroupEffect GroupEffect_clone(GroupEffect* self );

jb_Undefined GroupEffect_prepend(GroupEffect* self , AnimationEffect * effects);

jb_Undefined GroupEffect_append(GroupEffect* self , AnimationEffect * effects);
