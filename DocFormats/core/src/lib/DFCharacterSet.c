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

#include <platform.h>
#include "DFTypes.h"
#include "DFCharacterSet.h"
#include "DFCommon.h"

int DFCharIsHex(uint32_t ch)
{
    return (((ch >= '0') && (ch <= '9')) ||
            ((ch >= 'a') && (ch <= 'f')) ||
            ((ch >= 'A') && (ch <= 'F')));
}

int DFCharIsWhitespace(uint32_t ch)
{
    switch (ch) {
        case 0x9:
        case 0x20:
        case 0xA0:
        case 0x1680:
        case 0x2000:
        case 0x2001:
        case 0x2002:
        case 0x2003:
        case 0x2004:
        case 0x2005:
        case 0x2006:
        case 0x2007:
        case 0x2008:
        case 0x2009:
        case 0x200A:
        case 0x200B:
        case 0x202F:
        case 0x205F:
        case 0x3000:
            return 1;
        default:
            return 0;
    }
}

int DFCharIsNewline(uint32_t ch)
{
    switch (ch) {
        case 0xA:
        case 0xB:
        case 0xC:
        case 0xD:
        case 0x85:
        case 0x2028:
        case 0x2029:
            return 1;
        default:
            return 0;
    }
}

int DFCharIsWhitespaceOrNewline(uint32_t ch)
{
    switch (ch) {
        case 0x9:
        case 0xA:
        case 0xB:
        case 0xC:
        case 0xD:
        case 0x20:
        case 0x85:
        case 0xA0:
        case 0x1680:
        case 0x2000:
        case 0x2001:
        case 0x2002:
        case 0x2003:
        case 0x2004:
        case 0x2005:
        case 0x2006:
        case 0x2007:
        case 0x2008:
        case 0x2009:
        case 0x200A:
        case 0x200B:
        case 0x2028:
        case 0x2029:
        case 0x202F:
        case 0x205F:
        case 0x3000:
            return 1;
        default:
            return 0;
    }
}

int DFCharIsPunctuation(uint32_t ch)
{
    switch (ch) {
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2A:
        case 0x2C:
        case 0x2D:
        case 0x2E:
        case 0x2F:
        case 0x3A:
        case 0x3B:
        case 0x3F:
        case 0x40:
        case 0x5B:
        case 0x5C:
        case 0x5D:
        case 0x5F:
        case 0x7B:
        case 0x7D:
        case 0xA1:
        case 0xA7:
        case 0xAB:
        case 0xB6:
        case 0xB7:
        case 0xBB:
        case 0xBF:
        case 0x37E:
        case 0x387:
        case 0x55A:
        case 0x55B:
        case 0x55C:
        case 0x55D:
        case 0x55E:
        case 0x55F:
        case 0x589:
        case 0x58A:
        case 0x5BE:
        case 0x5C0:
        case 0x5C3:
        case 0x5C6:
        case 0x5F3:
        case 0x5F4:
        case 0x609:
        case 0x60A:
        case 0x60C:
        case 0x60D:
        case 0x61B:
        case 0x61E:
        case 0x61F:
        case 0x66A:
        case 0x66B:
        case 0x66C:
        case 0x66D:
        case 0x6D4:
        case 0x700:
        case 0x701:
        case 0x702:
        case 0x703:
        case 0x704:
        case 0x705:
        case 0x706:
        case 0x707:
        case 0x708:
        case 0x709:
        case 0x70A:
        case 0x70B:
        case 0x70C:
        case 0x70D:
        case 0x7F7:
        case 0x7F8:
        case 0x7F9:
        case 0x830:
        case 0x831:
        case 0x832:
        case 0x833:
        case 0x834:
        case 0x835:
        case 0x836:
        case 0x837:
        case 0x838:
        case 0x839:
        case 0x83A:
        case 0x83B:
        case 0x83C:
        case 0x83D:
        case 0x83E:
        case 0x85E:
        case 0x964:
        case 0x965:
        case 0x970:
        case 0xAF0:
        case 0xDF4:
        case 0xE4F:
        case 0xE5A:
        case 0xE5B:
        case 0xF04:
        case 0xF05:
        case 0xF06:
        case 0xF07:
        case 0xF08:
        case 0xF09:
        case 0xF0A:
        case 0xF0B:
        case 0xF0C:
        case 0xF0D:
        case 0xF0E:
        case 0xF0F:
        case 0xF10:
        case 0xF11:
        case 0xF12:
        case 0xF14:
        case 0xF3A:
        case 0xF3B:
        case 0xF3C:
        case 0xF3D:
        case 0xF85:
        case 0xFD0:
        case 0xFD1:
        case 0xFD2:
        case 0xFD3:
        case 0xFD4:
        case 0xFD9:
        case 0xFDA:
        case 0x104A:
        case 0x104B:
        case 0x104C:
        case 0x104D:
        case 0x104E:
        case 0x104F:
        case 0x10FB:
        case 0x1360:
        case 0x1361:
        case 0x1362:
        case 0x1363:
        case 0x1364:
        case 0x1365:
        case 0x1366:
        case 0x1367:
        case 0x1368:
        case 0x1400:
        case 0x166D:
        case 0x166E:
        case 0x169B:
        case 0x169C:
        case 0x16EB:
        case 0x16EC:
        case 0x16ED:
        case 0x1735:
        case 0x1736:
        case 0x17D4:
        case 0x17D5:
        case 0x17D6:
        case 0x17D8:
        case 0x17D9:
        case 0x17DA:
        case 0x1800:
        case 0x1801:
        case 0x1802:
        case 0x1803:
        case 0x1804:
        case 0x1805:
        case 0x1806:
        case 0x1807:
        case 0x1808:
        case 0x1809:
        case 0x180A:
        case 0x1944:
        case 0x1945:
        case 0x1A1E:
        case 0x1A1F:
        case 0x1AA0:
        case 0x1AA1:
        case 0x1AA2:
        case 0x1AA3:
        case 0x1AA4:
        case 0x1AA5:
        case 0x1AA6:
        case 0x1AA8:
        case 0x1AA9:
        case 0x1AAA:
        case 0x1AAB:
        case 0x1AAC:
        case 0x1AAD:
        case 0x1B5A:
        case 0x1B5B:
        case 0x1B5C:
        case 0x1B5D:
        case 0x1B5E:
        case 0x1B5F:
        case 0x1B60:
        case 0x1BFC:
        case 0x1BFD:
        case 0x1BFE:
        case 0x1BFF:
        case 0x1C3B:
        case 0x1C3C:
        case 0x1C3D:
        case 0x1C3E:
        case 0x1C3F:
        case 0x1C7E:
        case 0x1C7F:
        case 0x1CC0:
        case 0x1CC1:
        case 0x1CC2:
        case 0x1CC3:
        case 0x1CC4:
        case 0x1CC5:
        case 0x1CC6:
        case 0x1CC7:
        case 0x1CD3:
        case 0x2010:
        case 0x2011:
        case 0x2012:
        case 0x2013:
        case 0x2014:
        case 0x2015:
        case 0x2016:
        case 0x2017:
        case 0x2018:
        case 0x2019:
        case 0x201A:
        case 0x201B:
        case 0x201C:
        case 0x201D:
        case 0x201E:
        case 0x201F:
        case 0x2020:
        case 0x2021:
        case 0x2022:
        case 0x2023:
        case 0x2024:
        case 0x2025:
        case 0x2026:
        case 0x2027:
        case 0x2030:
        case 0x2031:
        case 0x2032:
        case 0x2033:
        case 0x2034:
        case 0x2035:
        case 0x2036:
        case 0x2037:
        case 0x2038:
        case 0x2039:
        case 0x203A:
        case 0x203B:
        case 0x203C:
        case 0x203D:
        case 0x203E:
        case 0x203F:
        case 0x2040:
        case 0x2041:
        case 0x2042:
        case 0x2043:
        case 0x2045:
        case 0x2046:
        case 0x2047:
        case 0x2048:
        case 0x2049:
        case 0x204A:
        case 0x204B:
        case 0x204C:
        case 0x204D:
        case 0x204E:
        case 0x204F:
        case 0x2050:
        case 0x2051:
        case 0x2053:
        case 0x2054:
        case 0x2055:
        case 0x2056:
        case 0x2057:
        case 0x2058:
        case 0x2059:
        case 0x205A:
        case 0x205B:
        case 0x205C:
        case 0x205D:
        case 0x205E:
        case 0x207D:
        case 0x207E:
        case 0x208D:
        case 0x208E:
        case 0x2329:
        case 0x232A:
        case 0x2768:
        case 0x2769:
        case 0x276A:
        case 0x276B:
        case 0x276C:
        case 0x276D:
        case 0x276E:
        case 0x276F:
        case 0x2770:
        case 0x2771:
        case 0x2772:
        case 0x2773:
        case 0x2774:
        case 0x2775:
        case 0x27C5:
        case 0x27C6:
        case 0x27E6:
        case 0x27E7:
        case 0x27E8:
        case 0x27E9:
        case 0x27EA:
        case 0x27EB:
        case 0x27EC:
        case 0x27ED:
        case 0x27EE:
        case 0x27EF:
        case 0x2983:
        case 0x2984:
        case 0x2985:
        case 0x2986:
        case 0x2987:
        case 0x2988:
        case 0x2989:
        case 0x298A:
        case 0x298B:
        case 0x298C:
        case 0x298D:
        case 0x298E:
        case 0x298F:
        case 0x2990:
        case 0x2991:
        case 0x2992:
        case 0x2993:
        case 0x2994:
        case 0x2995:
        case 0x2996:
        case 0x2997:
        case 0x2998:
        case 0x29D8:
        case 0x29D9:
        case 0x29DA:
        case 0x29DB:
        case 0x29FC:
        case 0x29FD:
        case 0x2CF9:
        case 0x2CFA:
        case 0x2CFB:
        case 0x2CFC:
        case 0x2CFE:
        case 0x2CFF:
        case 0x2D70:
        case 0x2E00:
        case 0x2E01:
        case 0x2E02:
        case 0x2E03:
        case 0x2E04:
        case 0x2E05:
        case 0x2E06:
        case 0x2E07:
        case 0x2E08:
        case 0x2E09:
        case 0x2E0A:
        case 0x2E0B:
        case 0x2E0C:
        case 0x2E0D:
        case 0x2E0E:
        case 0x2E0F:
        case 0x2E10:
        case 0x2E11:
        case 0x2E12:
        case 0x2E13:
        case 0x2E14:
        case 0x2E15:
        case 0x2E16:
        case 0x2E17:
        case 0x2E18:
        case 0x2E19:
        case 0x2E1A:
        case 0x2E1B:
        case 0x2E1C:
        case 0x2E1D:
        case 0x2E1E:
        case 0x2E1F:
        case 0x2E20:
        case 0x2E21:
        case 0x2E22:
        case 0x2E23:
        case 0x2E24:
        case 0x2E25:
        case 0x2E26:
        case 0x2E27:
        case 0x2E28:
        case 0x2E29:
        case 0x2E2A:
        case 0x2E2B:
        case 0x2E2C:
        case 0x2E2D:
        case 0x2E2E:
        case 0x2E30:
        case 0x2E31:
        case 0x2E32:
        case 0x2E33:
        case 0x2E34:
        case 0x2E35:
        case 0x2E36:
        case 0x2E37:
        case 0x2E38:
        case 0x2E39:
        case 0x2E3A:
        case 0x2E3B:
        case 0x3001:
        case 0x3002:
        case 0x3003:
        case 0x3008:
        case 0x3009:
        case 0x300A:
        case 0x300B:
        case 0x300C:
        case 0x300D:
        case 0x300E:
        case 0x300F:
        case 0x3010:
        case 0x3011:
        case 0x3014:
        case 0x3015:
        case 0x3016:
        case 0x3017:
        case 0x3018:
        case 0x3019:
        case 0x301A:
        case 0x301B:
        case 0x301C:
        case 0x301D:
        case 0x301E:
        case 0x301F:
        case 0x3030:
        case 0x303D:
        case 0x30A0:
        case 0x30FB:
        case 0xA4FE:
        case 0xA4FF:
        case 0xA60D:
        case 0xA60E:
        case 0xA60F:
        case 0xA673:
        case 0xA67E:
        case 0xA6F2:
        case 0xA6F3:
        case 0xA6F4:
        case 0xA6F5:
        case 0xA6F6:
        case 0xA6F7:
        case 0xA874:
        case 0xA875:
        case 0xA876:
        case 0xA877:
        case 0xA8CE:
        case 0xA8CF:
        case 0xA8F8:
        case 0xA8F9:
        case 0xA8FA:
        case 0xA92E:
        case 0xA92F:
        case 0xA95F:
        case 0xA9C1:
        case 0xA9C2:
        case 0xA9C3:
        case 0xA9C4:
        case 0xA9C5:
        case 0xA9C6:
        case 0xA9C7:
        case 0xA9C8:
        case 0xA9C9:
        case 0xA9CA:
        case 0xA9CB:
        case 0xA9CC:
        case 0xA9CD:
        case 0xA9DE:
        case 0xA9DF:
        case 0xAA5C:
        case 0xAA5D:
        case 0xAA5E:
        case 0xAA5F:
        case 0xAADE:
        case 0xAADF:
        case 0xAAF0:
        case 0xAAF1:
        case 0xABEB:
        case 0xFD3E:
        case 0xFD3F:
        case 0xFE10:
        case 0xFE11:
        case 0xFE12:
        case 0xFE13:
        case 0xFE14:
        case 0xFE15:
        case 0xFE16:
        case 0xFE17:
        case 0xFE18:
        case 0xFE19:
        case 0xFE30:
        case 0xFE31:
        case 0xFE32:
        case 0xFE33:
        case 0xFE34:
        case 0xFE35:
        case 0xFE36:
        case 0xFE37:
        case 0xFE38:
        case 0xFE39:
        case 0xFE3A:
        case 0xFE3B:
        case 0xFE3C:
        case 0xFE3D:
        case 0xFE3E:
        case 0xFE3F:
        case 0xFE40:
        case 0xFE41:
        case 0xFE42:
        case 0xFE43:
        case 0xFE44:
        case 0xFE45:
        case 0xFE46:
        case 0xFE47:
        case 0xFE48:
        case 0xFE49:
        case 0xFE4A:
        case 0xFE4B:
        case 0xFE4C:
        case 0xFE4D:
        case 0xFE4E:
        case 0xFE4F:
        case 0xFE50:
        case 0xFE51:
        case 0xFE52:
        case 0xFE54:
        case 0xFE55:
        case 0xFE56:
        case 0xFE57:
        case 0xFE58:
        case 0xFE59:
        case 0xFE5A:
        case 0xFE5B:
        case 0xFE5C:
        case 0xFE5D:
        case 0xFE5E:
        case 0xFE5F:
        case 0xFE60:
        case 0xFE61:
        case 0xFE63:
        case 0xFE68:
        case 0xFE6A:
        case 0xFE6B:
        case 0xFF01:
        case 0xFF02:
        case 0xFF03:
        case 0xFF05:
        case 0xFF06:
        case 0xFF07:
        case 0xFF08:
        case 0xFF09:
        case 0xFF0A:
        case 0xFF0C:
        case 0xFF0D:
        case 0xFF0E:
        case 0xFF0F:
        case 0xFF1A:
        case 0xFF1B:
        case 0xFF1F:
        case 0xFF20:
        case 0xFF3B:
        case 0xFF3C:
        case 0xFF3D:
        case 0xFF3F:
        case 0xFF5B:
        case 0xFF5D:
        case 0xFF5F:
        case 0xFF60:
        case 0xFF61:
        case 0xFF62:
        case 0xFF63:
        case 0xFF64:
        case 0xFF65:
            return 1;
        default:
            return 0;
    }
}
