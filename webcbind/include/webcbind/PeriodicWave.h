#pragma once

#include <emlite/emlite.h>
#include <jscbind/jscbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct BaseAudioContext BaseAudioContext;
typedef struct PeriodicWaveOptions PeriodicWaveOptions;


/**
 * @brief Interface PeriodicWave
 * [MDN Reference](https://developer.mozilla.org/en-US/docs/Web/API/PeriodicWave)
 */
DECLARE_EMLITE_TYPE(PeriodicWave, em_Val);

/**
 * @brief Creates a new `PeriodicWave` object. 
*/
PeriodicWave PeriodicWave_new0(BaseAudioContext * context);

/**
 * @brief Creates a new `PeriodicWave` object. 
*/
PeriodicWave PeriodicWave_new1(BaseAudioContext * context, PeriodicWaveOptions * options);

#ifdef __cplusplus
}
#endif
