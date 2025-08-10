#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct AudioDataInit AudioDataInit;
typedef struct AudioDataCopyToOptions AudioDataCopyToOptions;

DECLARE_EMLITE_TYPE(AudioData, em_Val);

AudioData AudioData_new(AudioDataInit * init);

AudioSampleFormat AudioData_format(const AudioData *self);

float AudioData_sampleRate(const AudioData *self);

unsigned long AudioData_numberOfFrames(const AudioData *self);

unsigned long AudioData_numberOfChannels(const AudioData *self);

long long AudioData_duration(const AudioData *self);

long long AudioData_timestamp(const AudioData *self);

unsigned long AudioData_allocationSize(AudioData* self , AudioDataCopyToOptions * options);

jb_Undefined AudioData_copyTo(AudioData* self , jb_Any * destination, AudioDataCopyToOptions * options);

AudioData AudioData_clone(AudioData* self );

jb_Undefined AudioData_close(AudioData* self );

#ifdef __cplusplus
}
#endif
