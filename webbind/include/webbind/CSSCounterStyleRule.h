#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "CSSRule.h"
#include "enums.h"


DECLARE_EMLITE_TYPE(CSSCounterStyleRule, CSSRule);

jb_CSSOMString CSSCounterStyleRule_name( const CSSCounterStyleRule *self);

void CSSCounterStyleRule_set_name(CSSCounterStyleRule* self, jb_CSSOMString * value);

jb_CSSOMString CSSCounterStyleRule_system( const CSSCounterStyleRule *self);

void CSSCounterStyleRule_set_system(CSSCounterStyleRule* self, jb_CSSOMString * value);

jb_CSSOMString CSSCounterStyleRule_symbols( const CSSCounterStyleRule *self);

void CSSCounterStyleRule_set_symbols(CSSCounterStyleRule* self, jb_CSSOMString * value);

jb_CSSOMString CSSCounterStyleRule_additiveSymbols( const CSSCounterStyleRule *self);

void CSSCounterStyleRule_set_additiveSymbols(CSSCounterStyleRule* self, jb_CSSOMString * value);

jb_CSSOMString CSSCounterStyleRule_negative( const CSSCounterStyleRule *self);

void CSSCounterStyleRule_set_negative(CSSCounterStyleRule* self, jb_CSSOMString * value);

jb_CSSOMString CSSCounterStyleRule_prefix( const CSSCounterStyleRule *self);

void CSSCounterStyleRule_set_prefix(CSSCounterStyleRule* self, jb_CSSOMString * value);

jb_CSSOMString CSSCounterStyleRule_suffix( const CSSCounterStyleRule *self);

void CSSCounterStyleRule_set_suffix(CSSCounterStyleRule* self, jb_CSSOMString * value);

jb_CSSOMString CSSCounterStyleRule_range( const CSSCounterStyleRule *self);

void CSSCounterStyleRule_set_range(CSSCounterStyleRule* self, jb_CSSOMString * value);

jb_CSSOMString CSSCounterStyleRule_pad( const CSSCounterStyleRule *self);

void CSSCounterStyleRule_set_pad(CSSCounterStyleRule* self, jb_CSSOMString * value);

jb_CSSOMString CSSCounterStyleRule_speakAs( const CSSCounterStyleRule *self);

void CSSCounterStyleRule_set_speakAs(CSSCounterStyleRule* self, jb_CSSOMString * value);

jb_CSSOMString CSSCounterStyleRule_fallback( const CSSCounterStyleRule *self);

void CSSCounterStyleRule_set_fallback(CSSCounterStyleRule* self, jb_CSSOMString * value);
