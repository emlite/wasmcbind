#include <webbind/console.h>


jb_Undefined console_assert0() {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console", "assert"));
}

jb_Undefined console_assert1(bool condition) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console", "assert", condition));
}

jb_Undefined console_assert2(bool condition, jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console", "assert", condition, data));
}

jb_Undefined console_clear() {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console", "clear"));
}

jb_Undefined console_debug(jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console", "debug", data));
}

jb_Undefined console_error(jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console", "error", data));
}

jb_Undefined console_info(jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console", "info", data));
}

jb_Undefined console_log(jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console", "log", data));
}

jb_Undefined console_table0() {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console", "table"));
}

jb_Undefined console_table1(jb_Any * tabularData) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console", "table", tabularData));
}

jb_Undefined console_table2(jb_Any * tabularData, jb_Sequence * properties) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console", "table", tabularData, properties));
}

jb_Undefined console_trace(jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console", "trace", data));
}

jb_Undefined console_warn(jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console", "warn", data));
}

jb_Undefined console_dir0() {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console", "dir"));
}

jb_Undefined console_dir1(jb_Any * item) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console", "dir", item));
}

jb_Undefined console_dir2(jb_Any * item, jb_Object * options) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console", "dir", item, options));
}

jb_Undefined console_dirxml(jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console", "dirxml", data));
}

jb_Undefined console_count0() {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console", "count"));
}

jb_Undefined console_count1(jb_DOMString * label) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console", "count", label));
}

jb_Undefined console_countReset0() {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console", "countReset"));
}

jb_Undefined console_countReset1(jb_DOMString * label) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console", "countReset", label));
}

jb_Undefined console_group(jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console", "group", data));
}

jb_Undefined console_groupCollapsed(jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console", "groupCollapsed", data));
}

jb_Undefined console_groupEnd() {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console", "groupEnd"));
}

jb_Undefined console_time0() {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console", "time"));
}

jb_Undefined console_time1(jb_DOMString * label) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console", "time", label));
}

jb_Undefined console_timeLog0() {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console", "timeLog"));
}

jb_Undefined console_timeLog1(jb_DOMString * label) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console", "timeLog", label));
}

jb_Undefined console_timeLog2(jb_DOMString * label, jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console", "timeLog", label, data));
}

jb_Undefined console_timeEnd0() {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console", "timeEnd"));
}

jb_Undefined console_timeEnd1(jb_DOMString * label) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console", "timeEnd", label));
}

