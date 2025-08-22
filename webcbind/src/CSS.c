#include <webcbind/CSS.h>

jb_String CSS_escape(jb_String * ident) {
    return em_Val_as(jb_String, em_Val_call(em_Val_global("css"), "escape", em_Val_from(ident)));
}

bool CSS_supports(jb_String * conditionText) {
    return em_Val_as(bool, em_Val_call(em_Val_global("css"), "supports", em_Val_from(conditionText)));
}

jb_Promise CSS_parseStylesheet0(jb_Any * css) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("css"), "parseStylesheet", em_Val_from(css)));
}

jb_Promise CSS_parseStylesheet1(jb_Any * css, CSSParserOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("css"), "parseStylesheet", em_Val_from(css), em_Val_from(options)));
}

jb_Promise CSS_parseRuleList0(jb_Any * css) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("css"), "parseRuleList", em_Val_from(css)));
}

jb_Promise CSS_parseRuleList1(jb_Any * css, CSSParserOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("css"), "parseRuleList", em_Val_from(css), em_Val_from(options)));
}

jb_Promise CSS_parseRule0(jb_Any * css) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("css"), "parseRule", em_Val_from(css)));
}

jb_Promise CSS_parseRule1(jb_Any * css, CSSParserOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("css"), "parseRule", em_Val_from(css), em_Val_from(options)));
}

jb_Promise CSS_parseDeclarationList0(jb_Any * css) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("css"), "parseDeclarationList", em_Val_from(css)));
}

jb_Promise CSS_parseDeclarationList1(jb_Any * css, CSSParserOptions * options) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_global("css"), "parseDeclarationList", em_Val_from(css), em_Val_from(options)));
}

CSSParserDeclaration CSS_parseDeclaration0(jb_String * css) {
    return em_Val_as(CSSParserDeclaration, em_Val_call(em_Val_global("css"), "parseDeclaration", em_Val_from(css)));
}

CSSParserDeclaration CSS_parseDeclaration1(jb_String * css, CSSParserOptions * options) {
    return em_Val_as(CSSParserDeclaration, em_Val_call(em_Val_global("css"), "parseDeclaration", em_Val_from(css), em_Val_from(options)));
}

jb_Any CSS_parseValue(jb_String * css) {
    return em_Val_as(jb_Any, em_Val_call(em_Val_global("css"), "parseValue", em_Val_from(css)));
}

jb_Array CSS_parseValueList(jb_String * css) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_global("css"), "parseValueList", em_Val_from(css)));
}

jb_Array CSS_parseCommaValueList(jb_String * css) {
    return em_Val_as(jb_Array, em_Val_call(em_Val_global("css"), "parseCommaValueList", em_Val_from(css)));
}

jb_Undefined CSS_registerProperty(PropertyDefinition * definition) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("css"), "registerProperty", em_Val_from(definition)));
}

CSSUnitValue CSS_number(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "number", em_Val_from(value)));
}

CSSUnitValue CSS_percent(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "percent", em_Val_from(value)));
}

CSSUnitValue CSS_cap(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "cap", em_Val_from(value)));
}

CSSUnitValue CSS_ch(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "ch", em_Val_from(value)));
}

CSSUnitValue CSS_em(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "em", em_Val_from(value)));
}

CSSUnitValue CSS_ex(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "ex", em_Val_from(value)));
}

CSSUnitValue CSS_ic(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "ic", em_Val_from(value)));
}

CSSUnitValue CSS_lh(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "lh", em_Val_from(value)));
}

CSSUnitValue CSS_rcap(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "rcap", em_Val_from(value)));
}

CSSUnitValue CSS_rch(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "rch", em_Val_from(value)));
}

CSSUnitValue CSS_rem(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "rem", em_Val_from(value)));
}

CSSUnitValue CSS_rex(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "rex", em_Val_from(value)));
}

CSSUnitValue CSS_ric(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "ric", em_Val_from(value)));
}

CSSUnitValue CSS_rlh(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "rlh", em_Val_from(value)));
}

CSSUnitValue CSS_vw(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "vw", em_Val_from(value)));
}

CSSUnitValue CSS_vh(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "vh", em_Val_from(value)));
}

CSSUnitValue CSS_vi(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "vi", em_Val_from(value)));
}

CSSUnitValue CSS_vb(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "vb", em_Val_from(value)));
}

CSSUnitValue CSS_vmin(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "vmin", em_Val_from(value)));
}

CSSUnitValue CSS_vmax(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "vmax", em_Val_from(value)));
}

CSSUnitValue CSS_svw(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "svw", em_Val_from(value)));
}

CSSUnitValue CSS_svh(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "svh", em_Val_from(value)));
}

CSSUnitValue CSS_svi(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "svi", em_Val_from(value)));
}

CSSUnitValue CSS_svb(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "svb", em_Val_from(value)));
}

CSSUnitValue CSS_svmin(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "svmin", em_Val_from(value)));
}

CSSUnitValue CSS_svmax(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "svmax", em_Val_from(value)));
}

CSSUnitValue CSS_lvw(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "lvw", em_Val_from(value)));
}

CSSUnitValue CSS_lvh(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "lvh", em_Val_from(value)));
}

CSSUnitValue CSS_lvi(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "lvi", em_Val_from(value)));
}

CSSUnitValue CSS_lvb(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "lvb", em_Val_from(value)));
}

CSSUnitValue CSS_lvmin(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "lvmin", em_Val_from(value)));
}

CSSUnitValue CSS_lvmax(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "lvmax", em_Val_from(value)));
}

CSSUnitValue CSS_dvw(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "dvw", em_Val_from(value)));
}

CSSUnitValue CSS_dvh(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "dvh", em_Val_from(value)));
}

CSSUnitValue CSS_dvi(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "dvi", em_Val_from(value)));
}

CSSUnitValue CSS_dvb(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "dvb", em_Val_from(value)));
}

CSSUnitValue CSS_dvmin(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "dvmin", em_Val_from(value)));
}

CSSUnitValue CSS_dvmax(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "dvmax", em_Val_from(value)));
}

CSSUnitValue CSS_cqw(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "cqw", em_Val_from(value)));
}

CSSUnitValue CSS_cqh(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "cqh", em_Val_from(value)));
}

CSSUnitValue CSS_cqi(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "cqi", em_Val_from(value)));
}

CSSUnitValue CSS_cqb(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "cqb", em_Val_from(value)));
}

CSSUnitValue CSS_cqmin(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "cqmin", em_Val_from(value)));
}

CSSUnitValue CSS_cqmax(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "cqmax", em_Val_from(value)));
}

CSSUnitValue CSS_cm(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "cm", em_Val_from(value)));
}

CSSUnitValue CSS_mm(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "mm", em_Val_from(value)));
}

CSSUnitValue CSS_Q(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "Q", em_Val_from(value)));
}

CSSUnitValue CSS_in(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "in", em_Val_from(value)));
}

CSSUnitValue CSS_pt(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "pt", em_Val_from(value)));
}

CSSUnitValue CSS_pc(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "pc", em_Val_from(value)));
}

CSSUnitValue CSS_px(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "px", em_Val_from(value)));
}

CSSUnitValue CSS_deg(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "deg", em_Val_from(value)));
}

CSSUnitValue CSS_grad(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "grad", em_Val_from(value)));
}

CSSUnitValue CSS_rad(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "rad", em_Val_from(value)));
}

CSSUnitValue CSS_turn(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "turn", em_Val_from(value)));
}

CSSUnitValue CSS_s(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "s", em_Val_from(value)));
}

CSSUnitValue CSS_ms(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "ms", em_Val_from(value)));
}

CSSUnitValue CSS_Hz(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "Hz", em_Val_from(value)));
}

CSSUnitValue CSS_kHz(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "kHz", em_Val_from(value)));
}

CSSUnitValue CSS_dpi(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "dpi", em_Val_from(value)));
}

CSSUnitValue CSS_dpcm(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "dpcm", em_Val_from(value)));
}

CSSUnitValue CSS_dppx(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "dppx", em_Val_from(value)));
}

CSSUnitValue CSS_fr(double value) {
    return em_Val_as(CSSUnitValue, em_Val_call(em_Val_global("css"), "fr", em_Val_from(value)));
}

