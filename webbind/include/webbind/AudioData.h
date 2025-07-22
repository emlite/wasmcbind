#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct AudioDataCopyToOptions AudioDataCopyToOptions;
typedef struct AudioData AudioData;


typedef struct {
  em_Val inner;
} AudioDataCopyToOptions;


DECLARE_EMLITE_TYPE(AudioDataCopyToOptions, em_Val);

unsigned long AudioDataCopyToOptions_planeIndex( const AudioDataCopyToOptions *self);

void AudioDataCopyToOptions_set_planeIndex(AudioDataCopyToOptions* self, unsigned long value);

unsigned long AudioDataCopyToOptions_frameOffset( const AudioDataCopyToOptions *self);

void AudioDataCopyToOptions_set_frameOffset(AudioDataCopyToOptions* self, unsigned long value);

unsigned long AudioDataCopyToOptions_frameCount( const AudioDataCopyToOptions *self);

void AudioDataCopyToOptions_set_frameCount(AudioDataCopyToOptions* self, unsigned long value);

AudioSampleFormat AudioDataCopyToOptions_format( const AudioDataCopyToOptions *self);

void AudioDataCopyToOptions_set_format(AudioDataCopyToOptions* self, const AudioSampleFormat* value);
typedef struct {
  em_Val inner;
} AudioData;


DECLARE_EMLITE_TYPE(AudioData, em_Val);

AudioData AudioData_new(const jb_Any* init);

AudioSampleFormat AudioData_format( const AudioData *self);

float AudioData_sampleRate( const AudioData *self);

unsigned long AudioData_numberOfFrames( const AudioData *self);

unsigned long AudioData_numberOfChannels( const AudioData *self);

long long AudioData_duration( const AudioData *self);

long long AudioData_timestamp( const AudioData *self);

unsigned long AudioData_allocationSize(AudioData* self , const AudioDataCopyToOptions* options);

jb_Undefined AudioData_copyTo(AudioData* self , const jb_Any* destination, const AudioDataCopyToOptions* options);

AudioData AudioData_clone(AudioData* self );

jb_Undefined AudioData_close(AudioData* self );
