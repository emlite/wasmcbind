#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CharacterData.h"
#include "enums.h"


typedef struct {
  CharacterData inner;
} Comment;


DECLARE_EMLITE_TYPE(Comment, CharacterData);

Comment Comment_new();

Comment Comment_new(const jb_DOMString* data);
