#pragma once

#include "Any.h"
#include "utils.h"
#include <emlite/emlite.h>

DECLARE_EMLITE_TYPE(jb_Record, em_Val);

// Get a value by key
jb_Any jb_Record_get(const jb_Record *r, const char* key);
// Set a value by key
void jb_Record_set(jb_Record *r, const char* key, const jb_Any *v);
// Check if key exists
int jb_Record_has(const jb_Record *r, const char* key);

