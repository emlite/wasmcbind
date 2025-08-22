#include <webcbind/XRMediaBinding.h>

#include <webcbind/XRSession.h>
#include <webcbind/XRQuadLayer.h>
#include <webcbind/HTMLVideoElement.h>
#include <webcbind/XRMediaQuadLayerInit.h>
#include <webcbind/XRCylinderLayer.h>
#include <webcbind/XRMediaCylinderLayerInit.h>
#include <webcbind/XREquirectLayer.h>
#include <webcbind/XRMediaEquirectLayerInit.h>

DEFINE_EMLITE_TYPE(XRMediaBinding, em_Val);


XRMediaBinding XRMediaBinding_new(XRSession * session) {
        em_Val vv = em_Val_new(em_Val_global("XRMediaBinding") , em_Val_from(session));
        return XRMediaBinding_from_val(&vv);
      }


XRQuadLayer XRMediaBinding_createQuadLayer0(XRMediaBinding* self , HTMLVideoElement * video) {
    return em_Val_as(XRQuadLayer, em_Val_call(em_Val_as_val(self->inner), "createQuadLayer", em_Val_from(video)));
}


XRQuadLayer XRMediaBinding_createQuadLayer1(XRMediaBinding* self , HTMLVideoElement * video, XRMediaQuadLayerInit * init) {
    return em_Val_as(XRQuadLayer, em_Val_call(em_Val_as_val(self->inner), "createQuadLayer", em_Val_from(video), em_Val_from(init)));
}


XRCylinderLayer XRMediaBinding_createCylinderLayer0(XRMediaBinding* self , HTMLVideoElement * video) {
    return em_Val_as(XRCylinderLayer, em_Val_call(em_Val_as_val(self->inner), "createCylinderLayer", em_Val_from(video)));
}


XRCylinderLayer XRMediaBinding_createCylinderLayer1(XRMediaBinding* self , HTMLVideoElement * video, XRMediaCylinderLayerInit * init) {
    return em_Val_as(XRCylinderLayer, em_Val_call(em_Val_as_val(self->inner), "createCylinderLayer", em_Val_from(video), em_Val_from(init)));
}


XREquirectLayer XRMediaBinding_createEquirectLayer0(XRMediaBinding* self , HTMLVideoElement * video) {
    return em_Val_as(XREquirectLayer, em_Val_call(em_Val_as_val(self->inner), "createEquirectLayer", em_Val_from(video)));
}


XREquirectLayer XRMediaBinding_createEquirectLayer1(XRMediaBinding* self , HTMLVideoElement * video, XRMediaEquirectLayerInit * init) {
    return em_Val_as(XREquirectLayer, em_Val_call(em_Val_as_val(self->inner), "createEquirectLayer", em_Val_from(video), em_Val_from(init)));
}

