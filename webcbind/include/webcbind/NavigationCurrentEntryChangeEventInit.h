#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#include "EventInit.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct NavigationHistoryEntry NavigationHistoryEntry;

/** @brief Dictionary type NavigationCurrentEntryChangeEventInit */
DECLARE_EMLITE_TYPE(NavigationCurrentEntryChangeEventInit, EventInit);

/** @brief Getter of the navigationType property */
NavigationType NavigationCurrentEntryChangeEventInit_navigationType(const NavigationCurrentEntryChangeEventInit *self);

/** @brief Setter of the navigationType property */
void NavigationCurrentEntryChangeEventInit_set_navigationType(NavigationCurrentEntryChangeEventInit* self, NavigationType * value);

/** @brief Getter of the from property */
NavigationHistoryEntry NavigationCurrentEntryChangeEventInit_from(const NavigationCurrentEntryChangeEventInit *self);

/** @brief Setter of the from property */
void NavigationCurrentEntryChangeEventInit_set_from(NavigationCurrentEntryChangeEventInit* self, NavigationHistoryEntry * value);

/** @brief Constructor of the NavigationCurrentEntryChangeEventInit dictionary type */
NavigationCurrentEntryChangeEventInit NavigationCurrentEntryChangeEventInit_new();

#ifdef __cplusplus
}
#endif
