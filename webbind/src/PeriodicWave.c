#include <webbind/PeriodicWave.h>

#include <webbind/BaseAudioContext.h>
#include <webbind/PeriodicWaveOptions.h>

DEFINE_EMLITE_TYPE(PeriodicWave, em_Val);


PeriodicWave PeriodicWave_new0(BaseAudioContext * context) {
        em_Val vv = em_Val_new(em_Val_global("PeriodicWave") , em_Val_from(context));
        return PeriodicWave_from_val(&vv);
      }


PeriodicWave PeriodicWave_new1(BaseAudioContext * context, PeriodicWaveOptions * options) {
        em_Val vv = em_Val_new(em_Val_global("PeriodicWave") , em_Val_from(context), em_Val_from(options));
        return PeriodicWave_from_val(&vv);
      }

