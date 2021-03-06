// Copyright 2012-2014 UX Productivity Pty Ltd
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef DocFormats_DFError_h
#define DocFormats_DFError_h

//#include "DFTypes.h"
#include <stdarg.h>

// It's really not nice having this here, but is the only way to get the compiler to typecheck the
// DFErrorFormat arguments when such functionality is available.
#ifndef ATTRIBUTE_FORMAT
#ifdef _MSC_VER
#define ATTRIBUTE_FORMAT(archetype,index,first)
#else
#define ATTRIBUTE_FORMAT(archetype,index,first) __attribute__((format(archetype,index,first)))
#endif
#endif

typedef struct DFError DFError;

void DFErrorSetPosix(DFError **error, int code);
void DFErrorVFormat(DFError **error, const char *format, va_list ap);
void DFErrorFormat(DFError **error, const char *format, ...) ATTRIBUTE_FORMAT(printf,2,3);
DFError *DFErrorRetain(DFError *error);
void DFErrorRelease(DFError *error);
const char *DFErrorMessage(DFError **error);

#endif
