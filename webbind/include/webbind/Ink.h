#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct DelegatedInkTrailPresenter DelegatedInkTrailPresenter;
typedef struct InkPresenterParam InkPresenterParam;


/**
 * @brief Interface Ink
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/Ink)
 */
DECLARE_EMLITE_TYPE(Ink, em_Val);

/**
 * @brief Calls the `requestPresenter` method. 
*/
jb_Promise Ink_requestPresenter0(Ink* self );

/**
 * @brief Calls the `requestPresenter` method. 
*/
jb_Promise Ink_requestPresenter1(Ink* self , InkPresenterParam * param);

#ifdef __cplusplus
}
#endif
