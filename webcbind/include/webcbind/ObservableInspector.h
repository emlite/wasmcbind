#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

/** @brief Dictionary type ObservableInspector */
DECLARE_EMLITE_TYPE(ObservableInspector, em_Val);

/** @brief Getter of the next property */
jb_Function ObservableInspector_next(const ObservableInspector *self);

/** @brief Setter of the next property */
void ObservableInspector_set_next(ObservableInspector* self, jb_Function * value);

/** @brief Getter of the error property */
jb_Function ObservableInspector_error(const ObservableInspector *self);

/** @brief Setter of the error property */
void ObservableInspector_set_error(ObservableInspector* self, jb_Function * value);

/** @brief Getter of the complete property */
jb_Function ObservableInspector_complete(const ObservableInspector *self);

/** @brief Setter of the complete property */
void ObservableInspector_set_complete(ObservableInspector* self, jb_Function * value);

/** @brief Getter of the subscribe property */
jb_Function ObservableInspector_subscribe(const ObservableInspector *self);

/** @brief Setter of the subscribe property */
void ObservableInspector_set_subscribe(ObservableInspector* self, jb_Function * value);

/** @brief Getter of the abort property */
jb_Function ObservableInspector_abort(const ObservableInspector *self);

/** @brief Setter of the abort property */
void ObservableInspector_set_abort(ObservableInspector* self, jb_Function * value);

/** @brief Constructor of the ObservableInspector dictionary type */
ObservableInspector ObservableInspector_new();

#ifdef __cplusplus
}
#endif
