#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "TextTrackCue.h"
#include "enums.h"

typedef struct VTTRegion VTTRegion;
typedef struct DocumentFragment DocumentFragment;


typedef struct {
  TextTrackCue inner;
} VTTCue;


DECLARE_EMLITE_TYPE(VTTCue, TextTrackCue);

VTTCue VTTCue_new(double startTime, double endTime, const jb_DOMString* text);

VTTRegion VTTCue_region( const VTTCue *self);

void VTTCue_set_region(VTTCue* self, const VTTRegion* value);

DirectionSetting VTTCue_vertical( const VTTCue *self);

void VTTCue_set_vertical(VTTCue* self, const DirectionSetting* value);

bool VTTCue_snapToLines( const VTTCue *self);

void VTTCue_set_snapToLines(VTTCue* self, bool value);

jb_Any VTTCue_line( const VTTCue *self);

void VTTCue_set_line(VTTCue* self, const jb_Any* value);

LineAlignSetting VTTCue_lineAlign( const VTTCue *self);

void VTTCue_set_lineAlign(VTTCue* self, const LineAlignSetting* value);

jb_Any VTTCue_position( const VTTCue *self);

void VTTCue_set_position(VTTCue* self, const jb_Any* value);

PositionAlignSetting VTTCue_positionAlign( const VTTCue *self);

void VTTCue_set_positionAlign(VTTCue* self, const PositionAlignSetting* value);

double VTTCue_size( const VTTCue *self);

void VTTCue_set_size(VTTCue* self, double value);

AlignSetting VTTCue_align( const VTTCue *self);

void VTTCue_set_align(VTTCue* self, const AlignSetting* value);

jb_DOMString VTTCue_text( const VTTCue *self);

void VTTCue_set_text(VTTCue* self, const jb_DOMString* value);

DocumentFragment VTTCue_getCueAsHTML(VTTCue* self );
