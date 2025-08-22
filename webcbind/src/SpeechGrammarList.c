#include <webcbind/SpeechGrammarList.h>

#include <webcbind/SpeechGrammar.h>

DEFINE_EMLITE_TYPE(SpeechGrammarList, em_Val);


SpeechGrammarList SpeechGrammarList_new() {
        em_Val vv = em_Val_new(em_Val_global("SpeechGrammarList") );
        return SpeechGrammarList_from_val(&vv);
      }


unsigned long SpeechGrammarList_length(const SpeechGrammarList *self) {
    return em_Val_as(unsigned long, em_Val_get(em_Val_as_val(self->inner), em_Val_from("length")));
}


SpeechGrammar SpeechGrammarList_item(SpeechGrammarList* self , unsigned long index) {
    return em_Val_as(SpeechGrammar, em_Val_call(em_Val_as_val(self->inner), "item", em_Val_from(index)));
}


jb_Undefined SpeechGrammarList_addFromURI0(SpeechGrammarList* self , jb_String * src) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "addFromURI", em_Val_from(src)));
}


jb_Undefined SpeechGrammarList_addFromURI1(SpeechGrammarList* self , jb_String * src, float weight) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "addFromURI", em_Val_from(src), em_Val_from(weight)));
}


jb_Undefined SpeechGrammarList_addFromString0(SpeechGrammarList* self , jb_String * string) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "addFromString", em_Val_from(string)));
}


jb_Undefined SpeechGrammarList_addFromString1(SpeechGrammarList* self , jb_String * string, float weight) {
    return em_Val_as(jb_Undefined, em_Val_call(em_Val_as_val(self->inner), "addFromString", em_Val_from(string), em_Val_from(weight)));
}

