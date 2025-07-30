#include <webbind/console.h>


jb_Undefined console_assert0() {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console"), "assert"));
}

jb_Undefined console_assert1(bool condition) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console"), "assert", em_Val_from(condition)));
}

jb_Undefined console_assert2(bool condition, jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console"), "assert", em_Val_from(condition), em_Val_from(data)));
}

jb_Undefined console_clear() {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console"), "clear"));
}

jb_Undefined console_debug(jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console"), "debug", em_Val_from(data)));
}

jb_Undefined console_error(jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console"), "error", em_Val_from(data)));
}

jb_Undefined console_info(jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console"), "info", em_Val_from(data)));
}

jb_Undefined console_log(jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console"), "log", em_Val_from(data)));
}

jb_Undefined console_table0() {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console"), "table"));
}

jb_Undefined console_table1(jb_Any * tabularData) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console"), "table", em_Val_from(tabularData)));
}

jb_Undefined console_table2(jb_Any * tabularData, jb_Array * properties) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console"), "table", em_Val_from(tabularData), em_Val_from(properties)));
}

jb_Undefined console_trace(jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console"), "trace", em_Val_from(data)));
}

jb_Undefined console_warn(jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console"), "warn", em_Val_from(data)));
}

jb_Undefined console_dir0() {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console"), "dir"));
}

jb_Undefined console_dir1(jb_Any * item) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console"), "dir", em_Val_from(item)));
}

jb_Undefined console_dir2(jb_Any * item, jb_Object * options) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console"), "dir", em_Val_from(item), em_Val_from(options)));
}

jb_Undefined console_dirxml(jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console"), "dirxml", em_Val_from(data)));
}

jb_Undefined console_count0() {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console"), "count"));
}

jb_Undefined console_count1(jb_String * label) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console"), "count", em_Val_from(label)));
}

jb_Undefined console_countReset0() {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console"), "countReset"));
}

jb_Undefined console_countReset1(jb_String * label) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console"), "countReset", em_Val_from(label)));
}

jb_Undefined console_group(jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console"), "group", em_Val_from(data)));
}

jb_Undefined console_groupCollapsed(jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console"), "groupCollapsed", em_Val_from(data)));
}

jb_Undefined console_groupEnd() {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console"), "groupEnd"));
}

jb_Undefined console_time0() {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console"), "time"));
}

jb_Undefined console_time1(jb_String * label) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console"), "time", em_Val_from(label)));
}

jb_Undefined console_timeLog0() {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console"), "timeLog"));
}

jb_Undefined console_timeLog1(jb_String * label) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console"), "timeLog", em_Val_from(label)));
}

jb_Undefined console_timeLog2(jb_String * label, jb_Any * data) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console"), "timeLog", em_Val_from(label), em_Val_from(data)));
}

jb_Undefined console_timeEnd0() {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console"), "timeEnd"));
}

jb_Undefined console_timeEnd1(jb_String * label) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_global("console"), "timeEnd", em_Val_from(label)));
}

