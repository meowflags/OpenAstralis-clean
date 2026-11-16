// sub_1EAA7C0
// rva 0x01eaa7c0  size 106  section .text  group text
// window base 0x181eaa7c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_1EAA7C0(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5)
{
  _DWORD *v5; // r14
  unsigned __int64 result; // rax
  char *v7; // rdx
  unsigned __int64 v8; // r8

  if ( (_DWORD *)a3 == v5 )
    JUMPOUT(0x303D347D0LL);
  if ( (*(_DWORD *)a3 & 1) != 0 )
  {
    result = a3 - *(_QWORD *)(a3 - 8);
    v7 = (char *)(a3 - (_QWORD)v5);
    if ( v7 != nullptr )
      v7 = &v7[(_QWORD)v5];
    v8 = (unsigned __int64)(a5 - (_QWORD)v7) >> 9;
    if ( *(_BYTE *)(result + v8 + 48) != 0 )
      *(_BYTE *)(result + v8 + 48) = 0;
  }
  else
  {
    result = a3 & 0xFFFFFFFFFFF80000LL;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - (a3 & 0xFFFFFFFFFFF80000LL) - 2112) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - (a3 & 0xFFFFFFFFFFF80000LL) - 2112) >> 9) + 0x38) = 0;
  }
  return result;
}
