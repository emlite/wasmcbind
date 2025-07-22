#include <webbind/SpeechGrammarList.h>
#include <webbind/SpeechGrammar.h>


DEFINE_EMLITE_TYPE(SpeechGrammarList, em_Val);


SpeechGrammarList SpeechGrammarList_new() : em_Val(em_Val_global("SpeechGrammarList").new_()) {
        return SpeechGrammarList(em_Val_new(em_Val_global("SpeechGrammarList", ));
      }


unsigned long SpeechGrammarList_length(const SpeechGrammarList *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), "length"));
}


SpeechGrammar SpeechGrammarList_item(SpeechGrammarList* self , unsigned long index) {
    return em_Val_as(SpeechGrammar, em_Val_call(em_Val_as_val(self->inner), "item", em_Val_from(index)));
}


jb_Undefined SpeechGrammarList_addFromURI(SpeechGrammarList* self , const jb_DOMString* src) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "addFromURI", em_Val_from(src)));
}


jb_Undefined SpeechGrammarList_addFromURI(SpeechGrammarList* self , const jb_DOMString* src, float weight) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "addFromURI", em_Val_from(src), em_Val_from(weight)));
}


jb_Undefined SpeechGrammarList_addFromString(SpeechGrammarList* self , const jb_DOMString* string) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "addFromString", em_Val_from(string)));
}


jb_Undefined SpeechGrammarList_addFromString(SpeechGrammarList* self , const jb_DOMString* string, float weight) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "addFromString", em_Val_from(string), em_Val_from(weight)));
}

