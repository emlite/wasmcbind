#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct ColorSelectionResult ColorSelectionResult;
typedef struct ColorSelectionOptions ColorSelectionOptions;


/**
 * @brief Interface EyeDropper
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/EyeDropper)
 */
DECLARE_EMLITE_TYPE(EyeDropper, em_Val);

/**
 * @brief Creates a new `EyeDropper` object. 
*/
EyeDropper EyeDropper_new();

/**
 * @brief Calls the `open` method. 
*/
jb_Promise EyeDropper_open0(EyeDropper* self );

/**
 * @brief Calls the `open` method. 
*/
jb_Promise EyeDropper_open1(EyeDropper* self , ColorSelectionOptions * options);

#ifdef __cplusplus
}
#endif
