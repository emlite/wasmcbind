#include <webcbind/XPathEvaluator.h>

#include <webcbind/XPathExpression.h>
#include <webcbind/Node.h>
#include <webcbind/XPathResult.h>

DEFINE_EMLITE_TYPE(XPathEvaluator, em_Val);


XPathEvaluator XPathEvaluator_new() {
        em_Val vv = em_Val_new(em_Val_global("XPathEvaluator") );
        return XPathEvaluator_from_val(&vv);
      }


XPathExpression XPathEvaluator_createExpression0(XPathEvaluator* self , jb_String * expression) {
    return em_Val_as(XPathExpression, em_Val_call(em_Val_as_val(self->inner), "createExpression", em_Val_from(expression)));
}


XPathExpression XPathEvaluator_createExpression1(XPathEvaluator* self , jb_String * expression, jb_Function * resolver) {
    return em_Val_as(XPathExpression, em_Val_call(em_Val_as_val(self->inner), "createExpression", em_Val_from(expression), em_Val_from(resolver)));
}


Node XPathEvaluator_createNSResolver(XPathEvaluator* self , Node * nodeResolver) {
    return em_Val_as(Node, em_Val_call(em_Val_as_val(self->inner), "createNSResolver", em_Val_from(nodeResolver)));
}


XPathResult XPathEvaluator_evaluate0(XPathEvaluator* self , jb_String * expression, Node * contextNode) {
    return em_Val_as(XPathResult, em_Val_call(em_Val_as_val(self->inner), "evaluate", em_Val_from(expression), em_Val_from(contextNode)));
}


XPathResult XPathEvaluator_evaluate1(XPathEvaluator* self , jb_String * expression, Node * contextNode, jb_Function * resolver) {
    return em_Val_as(XPathResult, em_Val_call(em_Val_as_val(self->inner), "evaluate", em_Val_from(expression), em_Val_from(contextNode), em_Val_from(resolver)));
}


XPathResult XPathEvaluator_evaluate2(XPathEvaluator* self , jb_String * expression, Node * contextNode, jb_Function * resolver, unsigned short type) {
    return em_Val_as(XPathResult, em_Val_call(em_Val_as_val(self->inner), "evaluate", em_Val_from(expression), em_Val_from(contextNode), em_Val_from(resolver), em_Val_from(type)));
}


XPathResult XPathEvaluator_evaluate3(XPathEvaluator* self , jb_String * expression, Node * contextNode, jb_Function * resolver, unsigned short type, XPathResult * result) {
    return em_Val_as(XPathResult, em_Val_call(em_Val_as_val(self->inner), "evaluate", em_Val_from(expression), em_Val_from(contextNode), em_Val_from(resolver), em_Val_from(type), em_Val_from(result)));
}

