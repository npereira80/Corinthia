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

#include "DFUnitTest.h"
#include "HTMLPlain.h"
#include "HTMLToLaTeX.h"
#include "DFHTMLNormalization.h"
#include <stdlib.h>

void test_LaTeX_testCreate(void)
{
    DFError *error = NULL;
    DFStorage *htmlStorage = DFStorageNewMemory(DFFileFormatHTML);
    DFDocument *htmlDoc = TestCaseGetHTML(htmlStorage,&error);
    DFStorageRelease(htmlStorage);
    if (htmlDoc == NULL) {
        DFBufferFormat(utgetoutput(),"%s\n",DFErrorMessage(&error));
        DFErrorRelease(error);
        return;
    }

    HTML_normalizeDocument(htmlDoc);
    char *latex = HTMLToLaTeX(htmlDoc);
    DFBufferFormat(utgetoutput(),"%s",latex);
    free(latex);
    DFDocumentRelease(htmlDoc);
}

static void test_sample(void)
{
}

TestGroup LaTeXTests = {
    "latex", {
        { "sample", PlainTest, test_sample },
        { NULL, PlainTest, NULL }
    }
};
