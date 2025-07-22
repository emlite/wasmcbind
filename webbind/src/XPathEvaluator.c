#include <webbind/XPathEvaluator.h>
#include <webbind/XPathExpression.h>
#include <webbind/Node.h>
#include <webbind/XPathResult.h>


DEFINE_EMLITE_TYPE(XPathEvaluator, em_Val);


XPathEvaluator XPathEvaluator_new() : em_Val(em_Val_global("XPathEvaluator").new_()) {
        return XPathEvaluator(em_Val_new(em_Val_global("XPathEvaluator", ));
      }


XPathExpression XPathEvaluator_createExpression(XPathEvaluator* self , const jb_DOMString* expression) {
    return em_Val_as(XPathExpression, em_Val_call(em_Val_as_val(self->inner), "createExpression", em_Val_from(expression)));
}


XPathExpression XPathEvaluator_createExpression(XPathEvaluator* self , const jb_DOMString* expression, const jb_Function* resolver) {
    return em_Val_as(XPathExpression, em_Val_call(em_Val_as_val(self->inner), "createExpression", em_Val_from(expression), em_Val_from(resolver)));
}


Node XPathEvaluator_createNSResolver(XPathEvaluator* self , const Node* nodeResolver) {
    return em_Val_as(Node, em_Val_call(em_Val_as_val(self->inner), "createNSResolver", em_Val_from(nodeResolver)));
}


XPathResult XPathEvaluator_evaluate(XPathEvaluator* self , const jb_DOMString* expression, const Node* contextNode) {
    return em_Val_as(XPathResult, em_Val_call(em_Val_as_val(self->inner), "evaluate", em_Val_from(expression), em_Val_from(contextNode)));
}


XPathResult XPathEvaluator_evaluate(XPathEvaluator* self , const jb_DOMString* expression, const Node* contextNode, const jb_Function* resolver) {
    return em_Val_as(XPathResult, em_Val_call(em_Val_as_val(self->inner), "evaluate", em_Val_from(expression), em_Val_from(contextNode), em_Val_from(resolver)));
}


XPathResult XPathEvaluator_evaluate(XPathEvaluator* self , const jb_DOMString* expression, const Node* contextNode, const jb_Function* resolver, unsigned short type) {
    return em_Val_as(XPathResult, em_Val_call(em_Val_as_val(self->inner), "evaluate", em_Val_from(expression), em_Val_from(contextNode), em_Val_from(resolver), em_Val_from(type)));
}


XPathResult XPathEvaluator_evaluate(XPathEvaluator* self , const jb_DOMString* expression, const Node* contextNode, const jb_Function* resolver, unsigned short type, const XPathResult* result) {
    return em_Val_as(XPathResult, em_Val_call(em_Val_as_val(self->inner), "evaluate", em_Val_from(expression), em_Val_from(contextNode), em_Val_from(resolver), em_Val_from(type), em_Val_from(result)));
}

