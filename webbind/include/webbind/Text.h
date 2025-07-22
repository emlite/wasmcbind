#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CharacterData.h"
#include "SVGGeometryElement.h"
#include "enums.h"

typedef struct Text Text;
typedef struct DOMQuad DOMQuad;
typedef struct DOMRectReadOnly DOMRectReadOnly;
typedef struct DOMPoint DOMPoint;
typedef struct HTMLSlotElement HTMLSlotElement;


typedef struct {
  CharacterData inner;
} Text;


DECLARE_EMLITE_TYPE(Text, CharacterData);

Text Text_new();

Text Text_new(const jb_DOMString* data);

Text Text_splitText(Text* self , unsigned long offset);

jb_DOMString Text_wholeText( const Text *self);

jb_Sequence Text_getBoxQuads(Text* self );

jb_Sequence Text_getBoxQuads(Text* self , const BoxQuadOptions* options);

DOMQuad Text_convertQuadFromNode(Text* self , const DOMQuadInit* quad, const jb_Any* from);

DOMQuad Text_convertQuadFromNode(Text* self , const DOMQuadInit* quad, const jb_Any* from, const ConvertCoordinateOptions* options);

DOMQuad Text_convertRectFromNode(Text* self , const DOMRectReadOnly* rect, const jb_Any* from);

DOMQuad Text_convertRectFromNode(Text* self , const DOMRectReadOnly* rect, const jb_Any* from, const ConvertCoordinateOptions* options);

DOMPoint Text_convertPointFromNode(Text* self , const DOMPointInit* point, const jb_Any* from);

DOMPoint Text_convertPointFromNode(Text* self , const DOMPointInit* point, const jb_Any* from, const ConvertCoordinateOptions* options);

HTMLSlotElement Text_assignedSlot( const Text *self);
