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

#ifndef DocFormats_Operations_h
#define DocFormats_Operations_h

#include "DFError.h"
#include "DFPackage.h"
#include "DFXMLForward.h"

// Abstraction level 2

typedef struct DFConcreteDocument DFConcreteDocument;
typedef struct DFAbstractDocument DFAbstractDocument;

DFConcreteDocument *DFConcreteDocumentNew(DFPackage *package);
DFConcreteDocument *DFConcreteDocumentCreateFile(const char *filename, DFError **error);
DFConcreteDocument *DFConcreteDocumentOpenFile(const char *filename, DFError **error);
DFConcreteDocument *DFConcreteDocumentRetain(DFConcreteDocument *concrete);
void DFConcreteDocumentRelease(DFConcreteDocument *concrete);

DFAbstractDocument *DFAbstractDocumentNew(DFPackage *package);
DFAbstractDocument *DFAbstractDocumentRetain(DFAbstractDocument *abstract);
void DFAbstractDocumentRelease(DFAbstractDocument *abstract);
DFDocument *DFAbstractDocumentGetHTML(DFAbstractDocument *abstract);
void DFAbstractDocumentSetHTML(DFAbstractDocument *abstract, DFDocument *htmlDoc);

int DFGet(DFConcreteDocument *concrete, DFAbstractDocument *abstract, DFError **error);
int DFPut(DFConcreteDocument *concrete, DFAbstractDocument *abstract, DFError **error);
int DFCreate(DFConcreteDocument *concrete, DFAbstractDocument *abstract, DFError **error);

// Abstraction level 1

int DFGetFile(const char *concrete, const char *abstract, DFError **error);
int DFPutFile(const char *concrete, const char *abstract, DFError **error);
int DFCreateFile(const char *concrete, const char *abstract, DFError **error);

#endif
