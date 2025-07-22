#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CharacterData.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(Comment, CharacterData);

Comment Comment_new0();

Comment Comment_new1(jb_DOMString * data);
