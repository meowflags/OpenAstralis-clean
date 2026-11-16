// sub_1EBEF00
// rva 0x01ebef00  size 159  section .text  group text
// window base 0x181ebef00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EBEF00(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 result; // rax
  unsigned __int64 v10; // rbx
  char v11; // [rsp+0h] [rbp-18h] BYREF
  __int64 v12; // [rsp+8h] [rbp-10h]
  __int64 v13; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v11);
    __builtin_debugtrap();
    return sub_1EBEFA0();
  }
  else
  {
    *(_DWORD *)(a3 + 4) = (unsigned __int64)(a5 - v6) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      a4 = a3 & 0xFFFFFFFFFFF80000LL;
      v10 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v10) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v10) >> 9) + 0x38) = 0;
    }
    v8 = *(unsigned int *)(a5 + 4);
    if ( (_DWORD)v8 != 0 )
    {
      v13 = a5;
      v12 = a3;
      result = sub_57B88C0(a1, a2, a3: v6 + 8 * v8, a4, a5: 0);
      a3 = v12;
    }
    else
    {
      result = 0xFFFFFFFFLL;
      v13 = a5;
    }
    *(_DWORD *)(a3 + 8) = result;
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
