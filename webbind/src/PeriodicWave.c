#include <webbind/PeriodicWave.h>
#include <webbind/BaseAudioContext.h>


DEFINE_EMLITE_TYPE(PeriodicWave, em_Val);


PeriodicWave PeriodicWave_new(const BaseAudioContext* context) : em_Val(em_Val_global("PeriodicWave").new_(em_Val_from(context))) {
        return PeriodicWave(em_Val_new(em_Val_global("PeriodicWave", em_Val_from(context)));
      }


PeriodicWave PeriodicWave_new(const BaseAudioContext* context, const jb_Any* options) : em_Val(em_Val_global("PeriodicWave").new_(em_Val_from(context), em_Val_from(options))) {
        return PeriodicWave(em_Val_new(em_Val_global("PeriodicWave", em_Val_from(context), em_Val_from(options)));
      }

