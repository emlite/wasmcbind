#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "EventTarget.h"
#include "enums.h"

typedef struct Window Window;
typedef struct DocumentPictureInPictureOptions DocumentPictureInPictureOptions;


typedef struct {
  em_Val inner;
} DocumentPictureInPictureOptions;


DECLARE_EMLITE_TYPE(DocumentPictureInPictureOptions, em_Val);

long long DocumentPictureInPictureOptions_width( const DocumentPictureInPictureOptions *self);

void DocumentPictureInPictureOptions_set_width(DocumentPictureInPictureOptions* self, long long value);

long long DocumentPictureInPictureOptions_height( const DocumentPictureInPictureOptions *self);

void DocumentPictureInPictureOptions_set_height(DocumentPictureInPictureOptions* self, long long value);

bool DocumentPictureInPictureOptions_disallowReturnToOpener( const DocumentPictureInPictureOptions *self);

void DocumentPictureInPictureOptions_set_disallowReturnToOpener(DocumentPictureInPictureOptions* self, bool value);

bool DocumentPictureInPictureOptions_preferInitialWindowPlacement( const DocumentPictureInPictureOptions *self);

void DocumentPictureInPictureOptions_set_preferInitialWindowPlacement(DocumentPictureInPictureOptions* self, bool value);
typedef struct {
  EventTarget inner;
} DocumentPictureInPicture;


DECLARE_EMLITE_TYPE(DocumentPictureInPicture, EventTarget);

jb_Promise DocumentPictureInPicture_requestWindow(DocumentPictureInPicture* self );

jb_Promise DocumentPictureInPicture_requestWindow(DocumentPictureInPicture* self , const DocumentPictureInPictureOptions* options);

Window DocumentPictureInPicture_window( const DocumentPictureInPicture *self);

jb_Any DocumentPictureInPicture_onenter( const DocumentPictureInPicture *self);

void DocumentPictureInPicture_set_onenter(DocumentPictureInPicture* self, const jb_Any* value);
