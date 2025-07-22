#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct CSSStyleSheet CSSStyleSheet;
typedef struct MediaList MediaList;


typedef struct {
  em_Val inner;
} StyleSheet;


DECLARE_EMLITE_TYPE(StyleSheet, em_Val);

jb_CSSOMString StyleSheet_type( const StyleSheet *self);

jb_USVString StyleSheet_href( const StyleSheet *self);

jb_Any StyleSheet_ownerNode( const StyleSheet *self);

CSSStyleSheet StyleSheet_parentStyleSheet( const StyleSheet *self);

jb_DOMString StyleSheet_title( const StyleSheet *self);

MediaList StyleSheet_media( const StyleSheet *self);

bool StyleSheet_disabled( const StyleSheet *self);

void StyleSheet_set_disabled(StyleSheet* self, bool value);
