#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct DOMRect DOMRect;
typedef struct HTMLElement HTMLElement;


typedef struct {
  EventTarget inner;
} EditContext;


DECLARE_EMLITE_TYPE(EditContext, EventTarget);

EditContext EditContext_new();

EditContext EditContext_new(const jb_Any* options);

jb_Undefined EditContext_updateText(EditContext* self , unsigned long rangeStart, unsigned long rangeEnd, const jb_DOMString* text);

jb_Undefined EditContext_updateSelection(EditContext* self , unsigned long start, unsigned long end);

jb_Undefined EditContext_updateControlBounds(EditContext* self , const DOMRect* controlBounds);

jb_Undefined EditContext_updateSelectionBounds(EditContext* self , const DOMRect* selectionBounds);

jb_Undefined EditContext_updateCharacterBounds(EditContext* self , unsigned long rangeStart, const jb_Sequence* characterBounds);

jb_Sequence EditContext_attachedElements(EditContext* self );

jb_DOMString EditContext_text( const EditContext *self);

unsigned long EditContext_selectionStart( const EditContext *self);

unsigned long EditContext_selectionEnd( const EditContext *self);

unsigned long EditContext_characterBoundsRangeStart( const EditContext *self);

jb_Sequence EditContext_characterBounds(EditContext* self );

jb_Any EditContext_ontextupdate( const EditContext *self);

void EditContext_set_ontextupdate(EditContext* self, const jb_Any* value);

jb_Any EditContext_ontextformatupdate( const EditContext *self);

void EditContext_set_ontextformatupdate(EditContext* self, const jb_Any* value);

jb_Any EditContext_oncharacterboundsupdate( const EditContext *self);

void EditContext_set_oncharacterboundsupdate(EditContext* self, const jb_Any* value);

jb_Any EditContext_oncompositionstart( const EditContext *self);

void EditContext_set_oncompositionstart(EditContext* self, const jb_Any* value);

jb_Any EditContext_oncompositionend( const EditContext *self);

void EditContext_set_oncompositionend(EditContext* self, const jb_Any* value);
