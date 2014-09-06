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

#ifndef DocFormats_DFPlatform_h
#define DocFormats_DFPlatform_h

#ifdef WIN32
char *PlatformWin32ErrorString(DWORD code);
#endif

typedef struct PlatformDirEntry {
    struct PlatformDirEntry *next;
    char *name;
    int isDirectory;
} PlatformDirEntry;

int PlatformReadDir(const char *path, char **errmsg, PlatformDirEntry **list);



int DFMkdirIfAbsent(const char *path, char **errmsg);

int DFGetImageDimensions(const char *path, unsigned int *width, unsigned int *height, char **errmsg);

#ifdef WIN32

#define DF_ONCE_INIT INIT_ONCE_STATIC_INIT;
typedef INIT_ONCE DFOnce;
typedef void (*DFOnceFunction)(void);
void DFInitOnce(DFOnce *once, DFOnceFunction fun);

#else

#include <pthread.h>
#define DF_ONCE_INIT PTHREAD_ONCE_INIT;
typedef pthread_once_t DFOnce;
typedef void (*DFOnceFunction)(void);
void DFInitOnce(DFOnce *once, DFOnceFunction fun);

#endif

#endif