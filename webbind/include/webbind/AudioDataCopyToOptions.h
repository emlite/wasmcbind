#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

#ifdef __cplusplus
extern "C" {
#endif

DECLARE_EMLITE_TYPE(AudioDataCopyToOptions, em_Val);

unsigned long AudioDataCopyToOptions_planeIndex(const AudioDataCopyToOptions *self);

void AudioDataCopyToOptions_set_planeIndex(AudioDataCopyToOptions* self, unsigned long value);

unsigned long AudioDataCopyToOptions_frameOffset(const AudioDataCopyToOptions *self);

void AudioDataCopyToOptions_set_frameOffset(AudioDataCopyToOptions* self, unsigned long value);

unsigned long AudioDataCopyToOptions_frameCount(const AudioDataCopyToOptions *self);

void AudioDataCopyToOptions_set_frameCount(AudioDataCopyToOptions* self, unsigned long value);

AudioSampleFormat AudioDataCopyToOptions_format(const AudioDataCopyToOptions *self);

void AudioDataCopyToOptions_set_format(AudioDataCopyToOptions* self, AudioSampleFormat * value);

AudioDataCopyToOptions AudioDataCopyToOptions_new();

#ifdef __cplusplus
}
#endif
