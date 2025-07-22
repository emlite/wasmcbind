#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSRule.h"
#include "enums.h"

typedef struct MediaList MediaList;
typedef struct CSSStyleSheet CSSStyleSheet;


typedef struct {
  CSSRule inner;
} CSSImportRule;


DECLARE_EMLITE_TYPE(CSSImportRule, CSSRule);

jb_USVString CSSImportRule_href( const CSSImportRule *self);

MediaList CSSImportRule_media( const CSSImportRule *self);

CSSStyleSheet CSSImportRule_styleSheet( const CSSImportRule *self);

jb_CSSOMString CSSImportRule_layerName( const CSSImportRule *self);

jb_CSSOMString CSSImportRule_supportsText( const CSSImportRule *self);
