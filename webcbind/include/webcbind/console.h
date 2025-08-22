#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif


/**
 * @brief Namespace console
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/console)
 */

/**
 * @brief Calls the \`assert\` method. 
*/
jb_Undefined console_assert0();

/**
 * @brief Calls the \`assert\` method. 
*/
jb_Undefined console_assert1(bool condition);

/**
 * @brief Calls the \`assert\` method. 
*/
jb_Undefined console_assert2(bool condition, jb_Any * data);

/**
 * @brief Calls the \`clear\` method. 
*/
jb_Undefined console_clear();

/**
 * @brief Calls the \`debug\` method. 
*/
jb_Undefined console_debug(jb_Any * data);

/**
 * @brief Calls the \`error\` method. 
*/
jb_Undefined console_error(jb_Any * data);

/**
 * @brief Calls the \`info\` method. 
*/
jb_Undefined console_info(jb_Any * data);

/**
 * @brief Calls the \`log\` method. 
*/
jb_Undefined console_log(jb_Any * data);

/**
 * @brief Calls the \`table\` method. 
*/
jb_Undefined console_table0();

/**
 * @brief Calls the \`table\` method. 
*/
jb_Undefined console_table1(jb_Any * tabularData);

/**
 * @brief Calls the \`table\` method. 
*/
jb_Undefined console_table2(jb_Any * tabularData, jb_Array * properties);

/**
 * @brief Calls the \`trace\` method. 
*/
jb_Undefined console_trace(jb_Any * data);

/**
 * @brief Calls the \`warn\` method. 
*/
jb_Undefined console_warn(jb_Any * data);

/**
 * @brief Calls the \`dir\` method. 
*/
jb_Undefined console_dir0();

/**
 * @brief Calls the \`dir\` method. 
*/
jb_Undefined console_dir1(jb_Any * item);

/**
 * @brief Calls the \`dir\` method. 
*/
jb_Undefined console_dir2(jb_Any * item, jb_Object * options);

/**
 * @brief Calls the \`dirxml\` method. 
*/
jb_Undefined console_dirxml(jb_Any * data);

/**
 * @brief Calls the \`count\` method. 
*/
jb_Undefined console_count0();

/**
 * @brief Calls the \`count\` method. 
*/
jb_Undefined console_count1(jb_String * label);

/**
 * @brief Calls the \`countReset\` method. 
*/
jb_Undefined console_countReset0();

/**
 * @brief Calls the \`countReset\` method. 
*/
jb_Undefined console_countReset1(jb_String * label);

/**
 * @brief Calls the \`group\` method. 
*/
jb_Undefined console_group(jb_Any * data);

/**
 * @brief Calls the \`groupCollapsed\` method. 
*/
jb_Undefined console_groupCollapsed(jb_Any * data);

/**
 * @brief Calls the \`groupEnd\` method. 
*/
jb_Undefined console_groupEnd();

/**
 * @brief Calls the \`time\` method. 
*/
jb_Undefined console_time0();

/**
 * @brief Calls the \`time\` method. 
*/
jb_Undefined console_time1(jb_String * label);

/**
 * @brief Calls the \`timeLog\` method. 
*/
jb_Undefined console_timeLog0();

/**
 * @brief Calls the \`timeLog\` method. 
*/
jb_Undefined console_timeLog1(jb_String * label);

/**
 * @brief Calls the \`timeLog\` method. 
*/
jb_Undefined console_timeLog2(jb_String * label, jb_Any * data);

/**
 * @brief Calls the \`timeEnd\` method. 
*/
jb_Undefined console_timeEnd0();

/**
 * @brief Calls the \`timeEnd\` method. 
*/
jb_Undefined console_timeEnd1(jb_String * label);

#ifdef __cplusplus
}
#endif
