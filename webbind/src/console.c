#include <webbind/console.h>


jb_Undefined console_assert() {
    return em_Val_as(jb_Undefined, em_Val_global("console").call("assert"));
}

jb_Undefined console_assert(bool condition) {
    return em_Val_as(jb_Undefined, em_Val_global("console").call("assert", condition));
}

jb_Undefined console_assert(bool condition, const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_global("console").call("assert", condition, data));
}

jb_Undefined console_clear() {
    return em_Val_as(jb_Undefined, em_Val_global("console").call("clear"));
}

jb_Undefined console_debug(const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_global("console").call("debug", data));
}

jb_Undefined console_error(const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_global("console").call("error", data));
}

jb_Undefined console_info(const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_global("console").call("info", data));
}

jb_Undefined console_log(const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_global("console").call("log", data));
}

jb_Undefined console_table() {
    return em_Val_as(jb_Undefined, em_Val_global("console").call("table"));
}

jb_Undefined console_table(const jb_Any* tabularData) {
    return em_Val_as(jb_Undefined, em_Val_global("console").call("table", tabularData));
}

jb_Undefined console_table(const jb_Any* tabularData, const jb_Sequence* properties) {
    return em_Val_as(jb_Undefined, em_Val_global("console").call("table", tabularData, properties));
}

jb_Undefined console_trace(const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_global("console").call("trace", data));
}

jb_Undefined console_warn(const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_global("console").call("warn", data));
}

jb_Undefined console_dir() {
    return em_Val_as(jb_Undefined, em_Val_global("console").call("dir"));
}

jb_Undefined console_dir(const jb_Any* item) {
    return em_Val_as(jb_Undefined, em_Val_global("console").call("dir", item));
}

jb_Undefined console_dir(const jb_Any* item, const jb_Object* options) {
    return em_Val_as(jb_Undefined, em_Val_global("console").call("dir", item, options));
}

jb_Undefined console_dirxml(const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_global("console").call("dirxml", data));
}

jb_Undefined console_count() {
    return em_Val_as(jb_Undefined, em_Val_global("console").call("count"));
}

jb_Undefined console_count(const jb_DOMString* label) {
    return em_Val_as(jb_Undefined, em_Val_global("console").call("count", label));
}

jb_Undefined console_countReset() {
    return em_Val_as(jb_Undefined, em_Val_global("console").call("countReset"));
}

jb_Undefined console_countReset(const jb_DOMString* label) {
    return em_Val_as(jb_Undefined, em_Val_global("console").call("countReset", label));
}

jb_Undefined console_group(const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_global("console").call("group", data));
}

jb_Undefined console_groupCollapsed(const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_global("console").call("groupCollapsed", data));
}

jb_Undefined console_groupEnd() {
    return em_Val_as(jb_Undefined, em_Val_global("console").call("groupEnd"));
}

jb_Undefined console_time() {
    return em_Val_as(jb_Undefined, em_Val_global("console").call("time"));
}

jb_Undefined console_time(const jb_DOMString* label) {
    return em_Val_as(jb_Undefined, em_Val_global("console").call("time", label));
}

jb_Undefined console_timeLog() {
    return em_Val_as(jb_Undefined, em_Val_global("console").call("timeLog"));
}

jb_Undefined console_timeLog(const jb_DOMString* label) {
    return em_Val_as(jb_Undefined, em_Val_global("console").call("timeLog", label));
}

jb_Undefined console_timeLog(const jb_DOMString* label, const jb_Any* data) {
    return em_Val_as(jb_Undefined, em_Val_global("console").call("timeLog", label, data));
}

jb_Undefined console_timeEnd() {
    return em_Val_as(jb_Undefined, em_Val_global("console").call("timeEnd"));
}

jb_Undefined console_timeEnd(const jb_DOMString* label) {
    return em_Val_as(jb_Undefined, em_Val_global("console").call("timeEnd", label));
}

