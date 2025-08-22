#include <webcbind/WorkerNavigator.h>

#include <webcbind/MediaCapabilities.h>
#include <webcbind/Permissions.h>
#include <webcbind/Serial.h>
#include <webcbind/ServiceWorkerContainer.h>
#include <webcbind/HID.h>
#include <webcbind/USB.h>
#include <webcbind/NetworkInformation.h>
#include <webcbind/StorageBucketManager.h>
#include <webcbind/StorageManager.h>
#include <webcbind/NavigatorUAData.h>
#include <webcbind/LockManager.h>
#include <webcbind/GPU.h>
#include <webcbind/ML.h>

DEFINE_EMLITE_TYPE(WorkerNavigator, em_Val);


MediaCapabilities WorkerNavigator_mediaCapabilities(const WorkerNavigator *self) {
    return em_Val_as(MediaCapabilities, em_Val_get(em_Val_as_val(self->inner), em_Val_from("mediaCapabilities")));
}


Permissions WorkerNavigator_permissions(const WorkerNavigator *self) {
    return em_Val_as(Permissions, em_Val_get(em_Val_as_val(self->inner), em_Val_from("permissions")));
}


Serial WorkerNavigator_serial(const WorkerNavigator *self) {
    return em_Val_as(Serial, em_Val_get(em_Val_as_val(self->inner), em_Val_from("serial")));
}


ServiceWorkerContainer WorkerNavigator_serviceWorker(const WorkerNavigator *self) {
    return em_Val_as(ServiceWorkerContainer, em_Val_get(em_Val_as_val(self->inner), em_Val_from("serviceWorker")));
}


HID WorkerNavigator_hid(const WorkerNavigator *self) {
    return em_Val_as(HID, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hid")));
}


USB WorkerNavigator_usb(const WorkerNavigator *self) {
    return em_Val_as(USB, em_Val_get(em_Val_as_val(self->inner), em_Val_from("usb")));
}


jb_Promise WorkerNavigator_setAppBadge0(WorkerNavigator* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "setAppBadge"));
}


jb_Promise WorkerNavigator_setAppBadge1(WorkerNavigator* self , long long contents) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "setAppBadge", em_Val_from(contents)));
}


jb_Promise WorkerNavigator_clearAppBadge(WorkerNavigator* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "clearAppBadge"));
}


double WorkerNavigator_deviceMemory(const WorkerNavigator *self) {
    return em_Val_as(double, em_Val_get(em_Val_as_val(self->inner), em_Val_from("deviceMemory")));
}


bool WorkerNavigator_globalPrivacyControl(const WorkerNavigator *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("globalPrivacyControl")));
}


bool WorkerNavigator_taintEnabled(WorkerNavigator* self ) {
    return em_Val_as(bool, em_Val_call(em_Val_as_val(self->inner), "taintEnabled"));
}


jb_String WorkerNavigator_oscpu(const WorkerNavigator *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("oscpu")));
}


jb_String WorkerNavigator_language(const WorkerNavigator *self) {
    return em_Val_as(jb_String, em_Val_get(em_Val_as_val(self->inner), em_Val_from("language")));
}


jb_Array WorkerNavigator_languages(const WorkerNavigator *self) {
    return em_Val_as(jb_Array, em_Val_get(em_Val_as_val(self->inner), em_Val_from("languages")));
}


bool WorkerNavigator_onLine(const WorkerNavigator *self) {
    return em_Val_as(bool, em_Val_get(em_Val_as_val(self->inner), em_Val_from("onLine")));
}


long long WorkerNavigator_hardwareConcurrency(const WorkerNavigator *self) {
    return em_Val_as(long long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("hardwareConcurrency")));
}


NetworkInformation WorkerNavigator_connection(const WorkerNavigator *self) {
    return em_Val_as(NetworkInformation, em_Val_get(em_Val_as_val(self->inner), em_Val_from("connection")));
}


StorageBucketManager WorkerNavigator_storageBuckets(const WorkerNavigator *self) {
    return em_Val_as(StorageBucketManager, em_Val_get(em_Val_as_val(self->inner), em_Val_from("storageBuckets")));
}


StorageManager WorkerNavigator_storage(const WorkerNavigator *self) {
    return em_Val_as(StorageManager, em_Val_get(em_Val_as_val(self->inner), em_Val_from("storage")));
}


NavigatorUAData WorkerNavigator_userAgentData(const WorkerNavigator *self) {
    return em_Val_as(NavigatorUAData, em_Val_get(em_Val_as_val(self->inner), em_Val_from("userAgentData")));
}


LockManager WorkerNavigator_locks(const WorkerNavigator *self) {
    return em_Val_as(LockManager, em_Val_get(em_Val_as_val(self->inner), em_Val_from("locks")));
}


GPU WorkerNavigator_gpu(const WorkerNavigator *self) {
    return em_Val_as(GPU, em_Val_get(em_Val_as_val(self->inner), em_Val_from("gpu")));
}


ML WorkerNavigator_ml(const WorkerNavigator *self) {
    return em_Val_as(ML, em_Val_get(em_Val_as_val(self->inner), em_Val_from("ml")));
}

