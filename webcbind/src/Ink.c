#include <webcbind/Ink.h>

#include <webcbind/DelegatedInkTrailPresenter.h>
#include <webcbind/InkPresenterParam.h>

DEFINE_EMLITE_TYPE(Ink, em_Val);


jb_Promise Ink_requestPresenter0(Ink* self ) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "requestPresenter"));
}


jb_Promise Ink_requestPresenter1(Ink* self , InkPresenterParam * param) {
    return em_Val_as(jb_Promise, em_Val_call(em_Val_as_val(self->inner), "requestPresenter", em_Val_from(param)));
}

