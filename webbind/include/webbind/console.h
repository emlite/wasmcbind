#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"


jb_Undefined console_assert();
jb_Undefined console_assert(bool condition);
jb_Undefined console_assert(bool condition, const jb_Any* data);
jb_Undefined console_clear();
jb_Undefined console_debug(const jb_Any* data);
jb_Undefined console_error(const jb_Any* data);
jb_Undefined console_info(const jb_Any* data);
jb_Undefined console_log(const jb_Any* data);
jb_Undefined console_table();
jb_Undefined console_table(const jb_Any* tabularData);
jb_Undefined console_table(const jb_Any* tabularData, const jb_Sequence* properties);
jb_Undefined console_trace(const jb_Any* data);
jb_Undefined console_warn(const jb_Any* data);
jb_Undefined console_dir();
jb_Undefined console_dir(const jb_Any* item);
jb_Undefined console_dir(const jb_Any* item, const jb_Object* options);
jb_Undefined console_dirxml(const jb_Any* data);
jb_Undefined console_count();
jb_Undefined console_count(const jb_DOMString* label);
jb_Undefined console_countReset();
jb_Undefined console_countReset(const jb_DOMString* label);
jb_Undefined console_group(const jb_Any* data);
jb_Undefined console_groupCollapsed(const jb_Any* data);
jb_Undefined console_groupEnd();
jb_Undefined console_time();
jb_Undefined console_time(const jb_DOMString* label);
jb_Undefined console_timeLog();
jb_Undefined console_timeLog(const jb_DOMString* label);
jb_Undefined console_timeLog(const jb_DOMString* label, const jb_Any* data);
jb_Undefined console_timeEnd();
jb_Undefined console_timeEnd(const jb_DOMString* label);
} // namespace console

