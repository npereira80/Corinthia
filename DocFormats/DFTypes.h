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

#ifndef DocFormats_DFTypes_h
#define DocFormats_DFTypes_h

#ifdef _MSC_VER
#define ATTRIBUTE_ALIGNED(n) __declspec(align(8))
#define ATTRIBUTE_FORMAT(archetype,index,first)
#else
#define ATTRIBUTE_ALIGNED(n) __attribute__((aligned (n)))
#define ATTRIBUTE_FORMAT(archetype,index,first) __attribute__((format(archetype,index,first)))
#endif

#ifdef WIN32
#define _CRT_SECURE_NO_WARNINGS
#endif

#include <sys/types.h>
#include <stdint.h>
#include <stdarg.h>
#include <stddef.h>

#endif
