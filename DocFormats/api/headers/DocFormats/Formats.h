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

#ifndef DocFormats_Formats_h
#define DocFormats_Formats_h

typedef enum {
    DFFileFormatUnknown  = 0,
    DFFileFormatHTML,
    DFFileFormatDocx,
    DFFileFormatXlsx,
    DFFileFormatPptx,
    DFFileFormatOdt,
    DFFileFormatOds,
    DFFileFormatOdp,
    DFFileFormatMarkdown,
    DFFileFormatLaTeX,
    DFFileFormatRTF,
    DFFileFormatScriv,
    DFFileFormatEPUB,
} DFFileFormat;

DFFileFormat DFFileFormatFromFilename(const char *filename);
DFFileFormat DFFileFormatFromExtension(const char *ext);
const char *DFFileFormatToExtension(DFFileFormat format);

#endif
