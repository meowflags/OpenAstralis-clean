// sub_132B545C
// rva 0x132b545c  size 119  section .text  group text
// window base 0x1932b545c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_132B545C(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int16 v5; // di
  unsigned __int64 v6; // r8

  v6 = (unsigned int)__imp_KERNEL32.dll!FormatMessageW(a1: 0, a2, a3: 0, a4: 4608, a5: a4, a6: 0);
  if ( v6 > 3 )
  {
    switch ( *(_WORD *)(a3 + 2 * v6 - 2) )
    {
      case 0xA:
        JUMPOUT(0x32650F4A4LL);
      case 0xD:
        JUMPOUT(0x32650F4B2LL);
      case 0x2E:
        JUMPOUT(0x32650F4C0LL);
      default:
        break;
    }
    *(_WORD *)(a3 + 2 * v6) = v5;
  }
  return v6;
}
