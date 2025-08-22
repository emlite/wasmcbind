#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "ExtendableEventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct MessagePort MessagePort;

/** @brief Dictionary type ExtendableMessageEventInit */
DECLARE_EMLITE_TYPE(ExtendableMessageEventInit, ExtendableEventInit);

/** @brief Getter of the data property */
jb_Any ExtendableMessageEventInit_data(const ExtendableMessageEventInit *self);

/** @brief Setter of the data property */
void ExtendableMessageEventInit_set_data(ExtendableMessageEventInit* self, jb_Any * value);

/** @brief Getter of the origin property */
jb_String ExtendableMessageEventInit_origin(const ExtendableMessageEventInit *self);

/** @brief Setter of the origin property */
void ExtendableMessageEventInit_set_origin(ExtendableMessageEventInit* self, jb_String * value);

/** @brief Getter of the lastEventId property */
jb_String ExtendableMessageEventInit_lastEventId(const ExtendableMessageEventInit *self);

/** @brief Setter of the lastEventId property */
void ExtendableMessageEventInit_set_lastEventId(ExtendableMessageEventInit* self, jb_String * value);

/** @brief Getter of the source property */
jb_Any ExtendableMessageEventInit_source(const ExtendableMessageEventInit *self);

/** @brief Setter of the source property */
void ExtendableMessageEventInit_set_source(ExtendableMessageEventInit* self, jb_Any * value);

/** @brief Getter of the ports property */
jb_Array ExtendableMessageEventInit_ports(const ExtendableMessageEventInit *self);

/** @brief Setter of the ports property */
void ExtendableMessageEventInit_set_ports(ExtendableMessageEventInit* self, jb_Array * value);

/** @brief Constructor of the ExtendableMessageEventInit dictionary type */
ExtendableMessageEventInit ExtendableMessageEventInit_new();

#ifdef __cplusplus
}
#endif
