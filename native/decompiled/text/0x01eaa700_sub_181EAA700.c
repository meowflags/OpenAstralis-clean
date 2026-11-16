// sub_181EAA700
// rva 0x01eaa700  size 173  section .text  group text
// window base 0x181eaa700: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_181EAA700(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  _DWORD *v6; // r14
  unsigned __int64 result; // rax
  char *v8; // rdx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rcx

  if ( (_DWORD *)a3 == v6 )
    JUMPOUT(0x303D34710LL);
  if ( (*(_DWORD *)a3 & 1) != 0 )
  {
    result = a3 - *(_QWORD *)(a3 - 8);
    v8 = (char *)(a3 - (_QWORD)v6);
    if ( v8 != nullptr )
      v8 = &v8[(_QWORD)v6];
    v9 = (unsigned __int64)(a5 - (_QWORD)v8) >> 9;
    if ( *(_BYTE *)(result + v9 + 48) != 0 )
      *(_BYTE *)(result + v9 + 48) = 0;
    v10 = (unsigned __int64)(a6 - (_QWORD)v8) >> 9;
    v11 = v9 + 1;
    if ( v11 <= v10 )
    {
      v12 = v11;
      do
      {
        if ( *(_BYTE *)(result + v12 + 48) != 0 )
          *(_BYTE *)(result + v12 + 48) = 0;
        ++v12;
      }
      while ( v12 <= v10 );
    }
  }
  else
  {
    result = a3 & 0xFFFFFFFFFFF80000LL;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - (a3 & 0xFFFFFFFFFFF80000LL) - 2112) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - (a3 & 0xFFFFFFFFFFF80000LL) - 2112) >> 9) + 0x38) = 0;
  }
  return result;
}
