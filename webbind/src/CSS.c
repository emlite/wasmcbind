#include <webbind/CSS.h>
#include <webbind/CSSUnitValue.h>
#include <webbind/CSSParserDeclaration.h>




bool CSS_supports(jb_CSSOMString * property, jb_CSSOMString * value) {
    return em_Val_as(bool, em_Val_call(em_Val_global("css", "supports", property, value));
}

bool CSS_supports(jb_CSSOMString * conditionText) {
    return em_Val_as(bool, em_Val_call(em_Val_global("css", "supports", conditionText));
}











jb_Promise CSS_parseStylesheet0(jb_Any * css) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("css", "parseStylesheet", css));
}

jb_Promise CSS_parseStylesheet1(jb_Any * css, jb_Any * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("css", "parseStylesheet", css, options));
}

jb_Promise CSS_parseRuleList0(jb_Any * css) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("css", "parseRuleList", css));
}

jb_Promise CSS_parseRuleList1(jb_Any * css, jb_Any * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("css", "parseRuleList", css, options));
}

jb_Promise CSS_parseRule0(jb_Any * css) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("css", "parseRule", css));
}

jb_Promise CSS_parseRule1(jb_Any * css, jb_Any * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("css", "parseRule", css, options));
}

jb_Promise CSS_parseDeclarationList0(jb_Any * css) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("css", "parseDeclarationList", css));
}

jb_Promise CSS_parseDeclarationList1(jb_Any * css, jb_Any * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("css", "parseDeclarationList", css, options));
}

CSSParserDeclaration CSS_parseDeclaration0(jb_DOMString * css) {
    return em_Val_as(CSSParserDeclaration, em_Val_call(em_Val_global("css", "parseDeclaration", css));
}

CSSParserDeclaration CSS_parseDeclaration1(jb_DOMString * css, jb_Any * options) {
    return em_Val_as(CSSParserDeclaration, em_Val_call(em_Val_global("css", "parseDeclaration", css, options));
}

jb_Any CSS_parseValue(jb_DOMString * css) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_global("css", "parseValue", css));
}

jb_Sequence CSS_parseValueList(jb_DOMString * css) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_global("css", "parseValueList", css));
}

jb_Sequence CSS_parseCommaValueList(jb_DOMString * css) {
    return em_Val_as(jb_Sequence, em_Val_call(em_Val_global("css", "parseCommaValueList", css));
}



jb_Undefined CSS_registerProperty(jb_Any * definition) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("css", "registerProperty", definition));
}



CSSUnitValue CSS_number(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "number", value));
}

CSSUnitValue CSS_percent(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "percent", value));
}

CSSUnitValue CSS_cap(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "cap", value));
}

CSSUnitValue CSS_ch(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "ch", value));
}

CSSUnitValue CSS_em(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "em", value));
}

CSSUnitValue CSS_ex(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "ex", value));
}

CSSUnitValue CSS_ic(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "ic", value));
}

CSSUnitValue CSS_lh(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "lh", value));
}

CSSUnitValue CSS_rcap(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "rcap", value));
}

CSSUnitValue CSS_rch(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "rch", value));
}

CSSUnitValue CSS_rem(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "rem", value));
}

CSSUnitValue CSS_rex(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "rex", value));
}

CSSUnitValue CSS_ric(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "ric", value));
}

CSSUnitValue CSS_rlh(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "rlh", value));
}

CSSUnitValue CSS_vw(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "vw", value));
}

CSSUnitValue CSS_vh(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "vh", value));
}

CSSUnitValue CSS_vi(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "vi", value));
}

CSSUnitValue CSS_vb(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "vb", value));
}

CSSUnitValue CSS_vmin(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "vmin", value));
}

CSSUnitValue CSS_vmax(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "vmax", value));
}

CSSUnitValue CSS_svw(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "svw", value));
}

CSSUnitValue CSS_svh(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "svh", value));
}

CSSUnitValue CSS_svi(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "svi", value));
}

CSSUnitValue CSS_svb(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "svb", value));
}

CSSUnitValue CSS_svmin(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "svmin", value));
}

CSSUnitValue CSS_svmax(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "svmax", value));
}

CSSUnitValue CSS_lvw(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "lvw", value));
}

CSSUnitValue CSS_lvh(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "lvh", value));
}

CSSUnitValue CSS_lvi(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "lvi", value));
}

CSSUnitValue CSS_lvb(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "lvb", value));
}

CSSUnitValue CSS_lvmin(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "lvmin", value));
}

CSSUnitValue CSS_lvmax(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "lvmax", value));
}

CSSUnitValue CSS_dvw(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "dvw", value));
}

CSSUnitValue CSS_dvh(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "dvh", value));
}

CSSUnitValue CSS_dvi(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "dvi", value));
}

CSSUnitValue CSS_dvb(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "dvb", value));
}

CSSUnitValue CSS_dvmin(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "dvmin", value));
}

CSSUnitValue CSS_dvmax(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "dvmax", value));
}

CSSUnitValue CSS_cqw(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "cqw", value));
}

CSSUnitValue CSS_cqh(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "cqh", value));
}

CSSUnitValue CSS_cqi(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "cqi", value));
}

CSSUnitValue CSS_cqb(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "cqb", value));
}

CSSUnitValue CSS_cqmin(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "cqmin", value));
}

CSSUnitValue CSS_cqmax(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "cqmax", value));
}

CSSUnitValue CSS_cm(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "cm", value));
}

CSSUnitValue CSS_mm(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "mm", value));
}

CSSUnitValue CSS_Q(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "Q", value));
}

CSSUnitValue CSS_in(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "in", value));
}

CSSUnitValue CSS_pt(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "pt", value));
}

CSSUnitValue CSS_pc(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "pc", value));
}

CSSUnitValue CSS_px(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "px", value));
}

CSSUnitValue CSS_deg(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "deg", value));
}

CSSUnitValue CSS_grad(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "grad", value));
}

CSSUnitValue CSS_rad(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "rad", value));
}

CSSUnitValue CSS_turn(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "turn", value));
}

CSSUnitValue CSS_s(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "s", value));
}

CSSUnitValue CSS_ms(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "ms", value));
}

CSSUnitValue CSS_Hz(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "Hz", value));
}

CSSUnitValue CSS_kHz(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "kHz", value));
}

CSSUnitValue CSS_dpi(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "dpi", value));
}

CSSUnitValue CSS_dpcm(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "dpcm", value));
}

CSSUnitValue CSS_dppx(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "dppx", value));
}

CSSUnitValue CSS_fr(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css", "fr", value));
}



jb_CSSOMString CSS_escape(jb_CSSOMString * ident) {
    return em_Val_as(jb_CSSOMString, em_Val_call(em_Val_global("css", "escape", ident));
}

