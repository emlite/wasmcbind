#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct FontFaceSet FontFaceSet;
typedef struct FontFace FontFace;


typedef struct {
  EventTarget inner;
} FontFaceSet;


DECLARE_EMLITE_TYPE(FontFaceSet, EventTarget);

FontFaceSet FontFaceSet_add(FontFaceSet* self , const FontFace* font);

bool FontFaceSet_delete_(FontFaceSet* self , const FontFace* font);

jb_Undefined FontFaceSet_clear(FontFaceSet* self );

jb_Any FontFaceSet_onloading( const FontFaceSet *self);

void FontFaceSet_set_onloading(FontFaceSet* self, const jb_Any* value);

jb_Any FontFaceSet_onloadingdone( const FontFaceSet *self);

void FontFaceSet_set_onloadingdone(FontFaceSet* self, const jb_Any* value);

jb_Any FontFaceSet_onloadingerror( const FontFaceSet *self);

void FontFaceSet_set_onloadingerror(FontFaceSet* self, const jb_Any* value);

jb_Promise FontFaceSet_load(FontFaceSet* self , const jb_CSSOMString* font);

jb_Promise FontFaceSet_load(FontFaceSet* self , const jb_CSSOMString* font, const jb_CSSOMString* text);

bool FontFaceSet_check(FontFaceSet* self , const jb_CSSOMString* font);

bool FontFaceSet_check(FontFaceSet* self , const jb_CSSOMString* font, const jb_CSSOMString* text);

jb_Promise FontFaceSet_ready( const FontFaceSet *self);

FontFaceSetLoadStatus FontFaceSet_status( const FontFaceSet *self);
