#include <webbind/CSS.h>
#include <webbind/CSSUnitValue.h>
#include <webbind/CSSParserDeclaration.h>




bool CSS_supports(const jb_CSSOMString* property, const jb_CSSOMString* value) {
    return em_Val_as(bool, em_Val_global("css").call("supports", property, value));
}

bool CSS_supports(const jb_CSSOMString* conditionText) {
    return em_Val_as(bool, em_Val_global("css").call("supports", conditionText));
}











jb_Promise CSS_parseStylesheet(const jb_Any* css) {
    return em_Val_as(jb_Promise, em_Val_global("css").call("parseStylesheet", css));
}

jb_Promise CSS_parseStylesheet(const jb_Any* css, const jb_Any* options) {
    return em_Val_as(jb_Promise, em_Val_global("css").call("parseStylesheet", css, options));
}

jb_Promise CSS_parseRuleList(const jb_Any* css) {
    return em_Val_as(jb_Promise, em_Val_global("css").call("parseRuleList", css));
}

jb_Promise CSS_parseRuleList(const jb_Any* css, const jb_Any* options) {
    return em_Val_as(jb_Promise, em_Val_global("css").call("parseRuleList", css, options));
}

jb_Promise CSS_parseRule(const jb_Any* css) {
    return em_Val_as(jb_Promise, em_Val_global("css").call("parseRule", css));
}

jb_Promise CSS_parseRule(const jb_Any* css, const jb_Any* options) {
    return em_Val_as(jb_Promise, em_Val_global("css").call("parseRule", css, options));
}

jb_Promise CSS_parseDeclarationList(const jb_Any* css) {
    return em_Val_as(jb_Promise, em_Val_global("css").call("parseDeclarationList", css));
}

jb_Promise CSS_parseDeclarationList(const jb_Any* css, const jb_Any* options) {
    return em_Val_as(jb_Promise, em_Val_global("css").call("parseDeclarationList", css, options));
}

CSSParserDeclaration CSS_parseDeclaration(const jb_DOMString* css) {
    return em_Val_as(CSSParserDeclaration, em_Val_global("css").call("parseDeclaration", css));
}

CSSParserDeclaration CSS_parseDeclaration(const jb_DOMString* css, const jb_Any* options) {
    return em_Val_as(CSSParserDeclaration, em_Val_global("css").call("parseDeclaration", css, options));
}

jb_Any CSS_parseValue(const jb_DOMString* css) {
    return em_Val_as(jb_Any, em_Val_global("css").call("parseValue", css));
}

jb_Sequence CSS_parseValueList(const jb_DOMString* css) {
    return em_Val_as(jb_Sequence, em_Val_global("css").call("parseValueList", css));
}

jb_Sequence CSS_parseCommaValueList(const jb_DOMString* css) {
    return em_Val_as(jb_Sequence, em_Val_global("css").call("parseCommaValueList", css));
}



jb_Undefined CSS_registerProperty(const jb_Any* definition) {
    return em_Val_as(jb_Undefined, em_Val_global("css").call("registerProperty", definition));
}



CSSUnitValue CSS_number(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("number", value));
}

CSSUnitValue CSS_percent(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("percent", value));
}

CSSUnitValue CSS_cap(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("cap", value));
}

CSSUnitValue CSS_ch(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("ch", value));
}

CSSUnitValue CSS_em(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("em", value));
}

CSSUnitValue CSS_ex(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("ex", value));
}

CSSUnitValue CSS_ic(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("ic", value));
}

CSSUnitValue CSS_lh(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("lh", value));
}

CSSUnitValue CSS_rcap(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("rcap", value));
}

CSSUnitValue CSS_rch(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("rch", value));
}

CSSUnitValue CSS_rem(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("rem", value));
}

CSSUnitValue CSS_rex(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("rex", value));
}

CSSUnitValue CSS_ric(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("ric", value));
}

CSSUnitValue CSS_rlh(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("rlh", value));
}

CSSUnitValue CSS_vw(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("vw", value));
}

CSSUnitValue CSS_vh(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("vh", value));
}

CSSUnitValue CSS_vi(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("vi", value));
}

CSSUnitValue CSS_vb(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("vb", value));
}

CSSUnitValue CSS_vmin(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("vmin", value));
}

CSSUnitValue CSS_vmax(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("vmax", value));
}

CSSUnitValue CSS_svw(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("svw", value));
}

CSSUnitValue CSS_svh(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("svh", value));
}

CSSUnitValue CSS_svi(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("svi", value));
}

CSSUnitValue CSS_svb(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("svb", value));
}

CSSUnitValue CSS_svmin(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("svmin", value));
}

CSSUnitValue CSS_svmax(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("svmax", value));
}

CSSUnitValue CSS_lvw(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("lvw", value));
}

CSSUnitValue CSS_lvh(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("lvh", value));
}

CSSUnitValue CSS_lvi(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("lvi", value));
}

CSSUnitValue CSS_lvb(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("lvb", value));
}

CSSUnitValue CSS_lvmin(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("lvmin", value));
}

CSSUnitValue CSS_lvmax(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("lvmax", value));
}

CSSUnitValue CSS_dvw(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("dvw", value));
}

CSSUnitValue CSS_dvh(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("dvh", value));
}

CSSUnitValue CSS_dvi(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("dvi", value));
}

CSSUnitValue CSS_dvb(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("dvb", value));
}

CSSUnitValue CSS_dvmin(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("dvmin", value));
}

CSSUnitValue CSS_dvmax(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("dvmax", value));
}

CSSUnitValue CSS_cqw(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("cqw", value));
}

CSSUnitValue CSS_cqh(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("cqh", value));
}

CSSUnitValue CSS_cqi(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("cqi", value));
}

CSSUnitValue CSS_cqb(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("cqb", value));
}

CSSUnitValue CSS_cqmin(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("cqmin", value));
}

CSSUnitValue CSS_cqmax(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("cqmax", value));
}

CSSUnitValue CSS_cm(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("cm", value));
}

CSSUnitValue CSS_mm(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("mm", value));
}

CSSUnitValue CSS_Q(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("Q", value));
}

CSSUnitValue CSS_in(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("in", value));
}

CSSUnitValue CSS_pt(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("pt", value));
}

CSSUnitValue CSS_pc(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("pc", value));
}

CSSUnitValue CSS_px(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("px", value));
}

CSSUnitValue CSS_deg(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("deg", value));
}

CSSUnitValue CSS_grad(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("grad", value));
}

CSSUnitValue CSS_rad(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("rad", value));
}

CSSUnitValue CSS_turn(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("turn", value));
}

CSSUnitValue CSS_s(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("s", value));
}

CSSUnitValue CSS_ms(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("ms", value));
}

CSSUnitValue CSS_Hz(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("Hz", value));
}

CSSUnitValue CSS_kHz(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("kHz", value));
}

CSSUnitValue CSS_dpi(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("dpi", value));
}

CSSUnitValue CSS_dpcm(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("dpcm", value));
}

CSSUnitValue CSS_dppx(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("dppx", value));
}

CSSUnitValue CSS_fr(double value) {
    return em_Val_as(CSSUnitValue, em_Val_global("css").call("fr", value));
}



jb_CSSOMString CSS_escape(const jb_CSSOMString* ident) {
    return em_Val_as(jb_CSSOMString, em_Val_global("css").call("escape", ident));
}

