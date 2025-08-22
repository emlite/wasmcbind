#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "Worklet.h"
#include "HighlightRegistry.h"
#include "CSSParserRule.h"
#include "CSSParserOptions.h"
#include "CSSParserDeclaration.h"
#include "PropertyDefinition.h"
#include "CSSUnitValue.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Worklet Worklet;
typedef struct HighlightRegistry HighlightRegistry;
typedef struct CSSParserRule CSSParserRule;
typedef struct CSSParserDeclaration CSSParserDeclaration;
typedef struct CSSUnitValue CSSUnitValue;


/**
 * @brief Namespace CSS
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/CSS)
 */

/**
 * @brief Calls the \`escape\` method. 
*/
jb_String CSS_escape(jb_String * ident);

/**
 * @brief Calls the \`supports\` method. 
*/
bool CSS_supports(jb_String * conditionText);

/**
 * @brief Calls the \`parseStylesheet\` method. 
*/
jb_Promise CSS_parseStylesheet0(jb_Any * css);

/**
 * @brief Calls the \`parseStylesheet\` method. 
*/
jb_Promise CSS_parseStylesheet1(jb_Any * css, CSSParserOptions * options);

/**
 * @brief Calls the \`parseRuleList\` method. 
*/
jb_Promise CSS_parseRuleList0(jb_Any * css);

/**
 * @brief Calls the \`parseRuleList\` method. 
*/
jb_Promise CSS_parseRuleList1(jb_Any * css, CSSParserOptions * options);

/**
 * @brief Calls the \`parseRule\` method. 
*/
jb_Promise CSS_parseRule0(jb_Any * css);

/**
 * @brief Calls the \`parseRule\` method. 
*/
jb_Promise CSS_parseRule1(jb_Any * css, CSSParserOptions * options);

/**
 * @brief Calls the \`parseDeclarationList\` method. 
*/
jb_Promise CSS_parseDeclarationList0(jb_Any * css);

/**
 * @brief Calls the \`parseDeclarationList\` method. 
*/
jb_Promise CSS_parseDeclarationList1(jb_Any * css, CSSParserOptions * options);

/**
 * @brief Calls the \`parseDeclaration\` method. 
*/
CSSParserDeclaration CSS_parseDeclaration0(jb_String * css);

/**
 * @brief Calls the \`parseDeclaration\` method. 
*/
CSSParserDeclaration CSS_parseDeclaration1(jb_String * css, CSSParserOptions * options);

/**
 * @brief Calls the \`parseValue\` method. 
*/
jb_Any CSS_parseValue(jb_String * css);

/**
 * @brief Calls the \`parseValueList\` method. 
*/
jb_Array CSS_parseValueList(jb_String * css);

/**
 * @brief Calls the \`parseCommaValueList\` method. 
*/
jb_Array CSS_parseCommaValueList(jb_String * css);

/**
 * @brief Calls the \`registerProperty\` method. 
*/
jb_Undefined CSS_registerProperty(PropertyDefinition * definition);

/**
 * @brief Calls the \`number\` method. 
*/
CSSUnitValue CSS_number(double value);

/**
 * @brief Calls the \`percent\` method. 
*/
CSSUnitValue CSS_percent(double value);

/**
 * @brief Calls the \`cap\` method. 
*/
CSSUnitValue CSS_cap(double value);

/**
 * @brief Calls the \`ch\` method. 
*/
CSSUnitValue CSS_ch(double value);

/**
 * @brief Calls the \`em\` method. 
*/
CSSUnitValue CSS_em(double value);

/**
 * @brief Calls the \`ex\` method. 
*/
CSSUnitValue CSS_ex(double value);

/**
 * @brief Calls the \`ic\` method. 
*/
CSSUnitValue CSS_ic(double value);

/**
 * @brief Calls the \`lh\` method. 
*/
CSSUnitValue CSS_lh(double value);

/**
 * @brief Calls the \`rcap\` method. 
*/
CSSUnitValue CSS_rcap(double value);

/**
 * @brief Calls the \`rch\` method. 
*/
CSSUnitValue CSS_rch(double value);

/**
 * @brief Calls the \`rem\` method. 
*/
CSSUnitValue CSS_rem(double value);

/**
 * @brief Calls the \`rex\` method. 
*/
CSSUnitValue CSS_rex(double value);

/**
 * @brief Calls the \`ric\` method. 
*/
CSSUnitValue CSS_ric(double value);

/**
 * @brief Calls the \`rlh\` method. 
*/
CSSUnitValue CSS_rlh(double value);

/**
 * @brief Calls the \`vw\` method. 
*/
CSSUnitValue CSS_vw(double value);

/**
 * @brief Calls the \`vh\` method. 
*/
CSSUnitValue CSS_vh(double value);

/**
 * @brief Calls the \`vi\` method. 
*/
CSSUnitValue CSS_vi(double value);

/**
 * @brief Calls the \`vb\` method. 
*/
CSSUnitValue CSS_vb(double value);

/**
 * @brief Calls the \`vmin\` method. 
*/
CSSUnitValue CSS_vmin(double value);

/**
 * @brief Calls the \`vmax\` method. 
*/
CSSUnitValue CSS_vmax(double value);

/**
 * @brief Calls the \`svw\` method. 
*/
CSSUnitValue CSS_svw(double value);

/**
 * @brief Calls the \`svh\` method. 
*/
CSSUnitValue CSS_svh(double value);

/**
 * @brief Calls the \`svi\` method. 
*/
CSSUnitValue CSS_svi(double value);

/**
 * @brief Calls the \`svb\` method. 
*/
CSSUnitValue CSS_svb(double value);

/**
 * @brief Calls the \`svmin\` method. 
*/
CSSUnitValue CSS_svmin(double value);

/**
 * @brief Calls the \`svmax\` method. 
*/
CSSUnitValue CSS_svmax(double value);

/**
 * @brief Calls the \`lvw\` method. 
*/
CSSUnitValue CSS_lvw(double value);

/**
 * @brief Calls the \`lvh\` method. 
*/
CSSUnitValue CSS_lvh(double value);

/**
 * @brief Calls the \`lvi\` method. 
*/
CSSUnitValue CSS_lvi(double value);

/**
 * @brief Calls the \`lvb\` method. 
*/
CSSUnitValue CSS_lvb(double value);

/**
 * @brief Calls the \`lvmin\` method. 
*/
CSSUnitValue CSS_lvmin(double value);

/**
 * @brief Calls the \`lvmax\` method. 
*/
CSSUnitValue CSS_lvmax(double value);

/**
 * @brief Calls the \`dvw\` method. 
*/
CSSUnitValue CSS_dvw(double value);

/**
 * @brief Calls the \`dvh\` method. 
*/
CSSUnitValue CSS_dvh(double value);

/**
 * @brief Calls the \`dvi\` method. 
*/
CSSUnitValue CSS_dvi(double value);

/**
 * @brief Calls the \`dvb\` method. 
*/
CSSUnitValue CSS_dvb(double value);

/**
 * @brief Calls the \`dvmin\` method. 
*/
CSSUnitValue CSS_dvmin(double value);

/**
 * @brief Calls the \`dvmax\` method. 
*/
CSSUnitValue CSS_dvmax(double value);

/**
 * @brief Calls the \`cqw\` method. 
*/
CSSUnitValue CSS_cqw(double value);

/**
 * @brief Calls the \`cqh\` method. 
*/
CSSUnitValue CSS_cqh(double value);

/**
 * @brief Calls the \`cqi\` method. 
*/
CSSUnitValue CSS_cqi(double value);

/**
 * @brief Calls the \`cqb\` method. 
*/
CSSUnitValue CSS_cqb(double value);

/**
 * @brief Calls the \`cqmin\` method. 
*/
CSSUnitValue CSS_cqmin(double value);

/**
 * @brief Calls the \`cqmax\` method. 
*/
CSSUnitValue CSS_cqmax(double value);

/**
 * @brief Calls the \`cm\` method. 
*/
CSSUnitValue CSS_cm(double value);

/**
 * @brief Calls the \`mm\` method. 
*/
CSSUnitValue CSS_mm(double value);

/**
 * @brief Calls the \`Q\` method. 
*/
CSSUnitValue CSS_Q(double value);

/**
 * @brief Calls the \`in\` method. 
*/
CSSUnitValue CSS_in(double value);

/**
 * @brief Calls the \`pt\` method. 
*/
CSSUnitValue CSS_pt(double value);

/**
 * @brief Calls the \`pc\` method. 
*/
CSSUnitValue CSS_pc(double value);

/**
 * @brief Calls the \`px\` method. 
*/
CSSUnitValue CSS_px(double value);

/**
 * @brief Calls the \`deg\` method. 
*/
CSSUnitValue CSS_deg(double value);

/**
 * @brief Calls the \`grad\` method. 
*/
CSSUnitValue CSS_grad(double value);

/**
 * @brief Calls the \`rad\` method. 
*/
CSSUnitValue CSS_rad(double value);

/**
 * @brief Calls the \`turn\` method. 
*/
CSSUnitValue CSS_turn(double value);

/**
 * @brief Calls the \`s\` method. 
*/
CSSUnitValue CSS_s(double value);

/**
 * @brief Calls the \`ms\` method. 
*/
CSSUnitValue CSS_ms(double value);

/**
 * @brief Calls the \`Hz\` method. 
*/
CSSUnitValue CSS_Hz(double value);

/**
 * @brief Calls the \`kHz\` method. 
*/
CSSUnitValue CSS_kHz(double value);

/**
 * @brief Calls the \`dpi\` method. 
*/
CSSUnitValue CSS_dpi(double value);

/**
 * @brief Calls the \`dpcm\` method. 
*/
CSSUnitValue CSS_dpcm(double value);

/**
 * @brief Calls the \`dppx\` method. 
*/
CSSUnitValue CSS_dppx(double value);

/**
 * @brief Calls the \`fr\` method. 
*/
CSSUnitValue CSS_fr(double value);

#ifdef __cplusplus
}
#endif
