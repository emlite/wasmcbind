#pragma once


#include <emlite/emlite.h>
#include "utils.h"
#include "String.h"

DECLARE_EMLITE_TYPE(jb_Error, em_Val);

// Create a new Error with a message
jb_Error jb_Error_new(const char* msg);
// Get the message property
jb_String jb_Error_message(const jb_Error *err);
// Get the name property
jb_String jb_Error_name(const jb_Error *err);
// Get the stack property (may be empty)
jb_String jb_Error_stack(const jb_Error *err);

// Standard JS error types
DECLARE_EMLITE_TYPE(jb_EvalError, em_Val);
DECLARE_EMLITE_TYPE(jb_RangeError, em_Val);
DECLARE_EMLITE_TYPE(jb_ReferenceError, em_Val);
DECLARE_EMLITE_TYPE(jb_SyntaxError, em_Val);
DECLARE_EMLITE_TYPE(jb_TypeError, em_Val);
DECLARE_EMLITE_TYPE(jb_URIError, em_Val);
DECLARE_EMLITE_TYPE(jb_AggregateError, em_Val);

// Constructors for standard error types
jb_EvalError jb_EvalError_new(const char* msg);
jb_RangeError jb_RangeError_new(const char* msg);
jb_ReferenceError jb_ReferenceError_new(const char* msg);
jb_SyntaxError jb_SyntaxError_new(const char* msg);
jb_TypeError jb_TypeError_new(const char* msg);
jb_URIError jb_URIError_new(const char* msg);
jb_AggregateError jb_AggregateError_new(const char* msg);
