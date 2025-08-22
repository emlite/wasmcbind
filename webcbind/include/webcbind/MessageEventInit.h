#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MessagePort MessagePort;

/** @brief Dictionary type MessageEventInit */
DECLARE_EMLITE_TYPE(MessageEventInit, EventInit);

/** @brief Getter of the data property */
jb_Any MessageEventInit_data(const MessageEventInit *self);

/** @brief Setter of the data property */
void MessageEventInit_set_data(MessageEventInit* self, jb_Any * value);

/** @brief Getter of the origin property */
jb_String MessageEventInit_origin(const MessageEventInit *self);

/** @brief Setter of the origin property */
void MessageEventInit_set_origin(MessageEventInit* self, jb_String * value);

/** @brief Getter of the lastEventId property */
jb_String MessageEventInit_lastEventId(const MessageEventInit *self);

/** @brief Setter of the lastEventId property */
void MessageEventInit_set_lastEventId(MessageEventInit* self, jb_String * value);

/** @brief Getter of the source property */
jb_Any MessageEventInit_source(const MessageEventInit *self);

/** @brief Setter of the source property */
void MessageEventInit_set_source(MessageEventInit* self, jb_Any * value);

/** @brief Getter of the ports property */
jb_Array MessageEventInit_ports(const MessageEventInit *self);

/** @brief Setter of the ports property */
void MessageEventInit_set_ports(MessageEventInit* self, jb_Array * value);

/** @brief Constructor of the MessageEventInit dictionary type */
MessageEventInit MessageEventInit_new();

#ifdef __cplusplus
}
#endif
