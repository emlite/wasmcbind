#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct Element Element;

/** @brief Dictionary type CommandEventInit */
DECLARE_EMLITE_TYPE(CommandEventInit, EventInit);

/** @brief Getter of the source property */
Element CommandEventInit_source(const CommandEventInit *self);

/** @brief Setter of the source property */
void CommandEventInit_set_source(CommandEventInit* self, Element * value);

/** @brief Getter of the command property */
jb_String CommandEventInit_command(const CommandEventInit *self);

/** @brief Setter of the command property */
void CommandEventInit_set_command(CommandEventInit* self, jb_String * value);

/** @brief Constructor of the CommandEventInit dictionary type */
CommandEventInit CommandEventInit_new();

#ifdef __cplusplus
}
#endif
