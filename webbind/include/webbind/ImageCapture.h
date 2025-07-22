#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct Blob Blob;
typedef struct PhotoSettings PhotoSettings;
typedef struct PhotoCapabilities PhotoCapabilities;
typedef struct ImageBitmap ImageBitmap;
typedef struct MediaStreamTrack MediaStreamTrack;


typedef struct {
  em_Val inner;
} PhotoSettings;


DECLARE_EMLITE_TYPE(PhotoSettings, em_Val);

FillLightMode PhotoSettings_fillLightMode( const PhotoSettings *self);

void PhotoSettings_set_fillLightMode(PhotoSettings* self, const FillLightMode* value);

double PhotoSettings_imageHeight( const PhotoSettings *self);

void PhotoSettings_set_imageHeight(PhotoSettings* self, double value);

double PhotoSettings_imageWidth( const PhotoSettings *self);

void PhotoSettings_set_imageWidth(PhotoSettings* self, double value);

bool PhotoSettings_redEyeReduction( const PhotoSettings *self);

void PhotoSettings_set_redEyeReduction(PhotoSettings* self, bool value);
typedef struct {
  em_Val inner;
} PhotoCapabilities;


DECLARE_EMLITE_TYPE(PhotoCapabilities, em_Val);

RedEyeReduction PhotoCapabilities_redEyeReduction( const PhotoCapabilities *self);

void PhotoCapabilities_set_redEyeReduction(PhotoCapabilities* self, const RedEyeReduction* value);

jb_Any PhotoCapabilities_imageHeight( const PhotoCapabilities *self);

void PhotoCapabilities_set_imageHeight(PhotoCapabilities* self, const jb_Any* value);

jb_Any PhotoCapabilities_imageWidth( const PhotoCapabilities *self);

void PhotoCapabilities_set_imageWidth(PhotoCapabilities* self, const jb_Any* value);

jb_Sequence PhotoCapabilities_fillLightMode( const PhotoCapabilities *self);

void PhotoCapabilities_set_fillLightMode(PhotoCapabilities* self, const jb_Sequence* value);
typedef struct {
  em_Val inner;
} ImageCapture;


DECLARE_EMLITE_TYPE(ImageCapture, em_Val);

ImageCapture ImageCapture_new(const MediaStreamTrack* videoTrack);

jb_Promise ImageCapture_takePhoto(ImageCapture* self );

jb_Promise ImageCapture_takePhoto(ImageCapture* self , const PhotoSettings* photoSettings);

jb_Promise ImageCapture_getPhotoCapabilities(ImageCapture* self );

jb_Promise ImageCapture_getPhotoSettings(ImageCapture* self );

jb_Promise ImageCapture_grabFrame(ImageCapture* self );

MediaStreamTrack ImageCapture_track( const ImageCapture *self);
