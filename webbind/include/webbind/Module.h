#pragma once

#include <emlite/emlite.h>
#include <jsbind/jsbind.h>
#include "enums.h"

typedef struct ModuleExportDescriptor ModuleExportDescriptor;
typedef struct Module Module;
typedef struct ModuleImportDescriptor ModuleImportDescriptor;


typedef struct {
  em_Val inner;
} ModuleExportDescriptor;


DECLARE_EMLITE_TYPE(ModuleExportDescriptor, em_Val);

jb_USVString ModuleExportDescriptor_name( const ModuleExportDescriptor *self);

void ModuleExportDescriptor_set_name(ModuleExportDescriptor* self, const jb_USVString* value);

ImportExportKind ModuleExportDescriptor_kind( const ModuleExportDescriptor *self);

void ModuleExportDescriptor_set_kind(ModuleExportDescriptor* self, const ImportExportKind* value);
typedef struct {
  em_Val inner;
} ModuleImportDescriptor;


DECLARE_EMLITE_TYPE(ModuleImportDescriptor, em_Val);

jb_USVString ModuleImportDescriptor_module_( const ModuleImportDescriptor *self);

void ModuleImportDescriptor_set_module_(ModuleImportDescriptor* self, const jb_USVString* value);

jb_USVString ModuleImportDescriptor_name( const ModuleImportDescriptor *self);

void ModuleImportDescriptor_set_name(ModuleImportDescriptor* self, const jb_USVString* value);

ImportExportKind ModuleImportDescriptor_kind( const ModuleImportDescriptor *self);

void ModuleImportDescriptor_set_kind(ModuleImportDescriptor* self, const ImportExportKind* value);
typedef struct {
  em_Val inner;
} Module;


DECLARE_EMLITE_TYPE(Module, em_Val);

Module Module_new(const jb_Any* bytes);

jb_Sequence Module_exports(Module* self , const Module* moduleObject);

jb_Sequence Module_imports(Module* self , const Module* moduleObject);

jb_Sequence Module_customSections(Module* self , const Module* moduleObject, const jb_DOMString* sectionName);
