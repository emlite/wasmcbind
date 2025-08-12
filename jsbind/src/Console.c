#include <jsbind/Console.h>

jb_Console jb_Console_get() { return (jb_Console){.inner = em_Val_from_handle(EMLITE_CONSOLE)}; }

void jb_Console_log(const jb_Console *con, size_t nargs, ...) {
    va_list ap;
    va_start(ap, nargs);
    em_Val_call_v(con->inner, "log", nargs, ap);
    va_end(ap);
}

void jb_Console_warn(const jb_Console *con, size_t nargs, ...) {
    va_list ap;
    va_start(ap, nargs);
    em_Val_call_v(con->inner, "warn", nargs, ap);
    va_end(ap);
}

void jb_Console_info(const jb_Console *con, size_t nargs, ...) {
    va_list ap;
    va_start(ap, nargs);
    em_Val_call_v(con->inner, "info", nargs, ap);
    va_end(ap);
}

void jb_Console_clear(const jb_Console *con) { em_Val_call(con->inner, "clear"); }