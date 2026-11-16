// sub_15A2220
// rva 0x015a2220  size 240  section .text  group text
// window base 0x1815a2220: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15A2220(int a1, int a2, unsigned __int64 a3, unsigned int a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 result; // rax
  unsigned __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi
  char v16; // [rsp+0h] [rbp-18h] BYREF
  __int64 v17; // [rsp+8h] [rbp-10h]
  _DWORD *v18; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
LABEL_16:
    sub_2771080();
    goto LABEL_17;
  }
  *(_DWORD *)(a3 + 20) = (unsigned __int64)(a5 - v6) >> 3;
  if ( (*(_DWORD *)a3 & 2) != 0 )
  {
    a4 = a3 & 0xFFF80000;
    v12 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v12) >> 9) + 0x38) != 0 )
      *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v12) >> 9) + 0x38) = 0;
  }
  if ( a5 == v6 )
    goto LABEL_16;
  *(_DWORD *)(a3 + 28) = *(_DWORD *)(a5 + 44);
  if ( *(_DWORD *)(a5 + 36) != 0 )
  {
    v18 = (_DWORD *)a3;
    v17 = a5;
    sub_15A4C20(a1, a2, a3: a5, a4, a5, a6, a7: v16);
    if ( *(_DWORD *)(v17 + 36) != 0 )
    {
      v10 = *(unsigned int *)(v17 + 12);
      if ( (_DWORD)v10 != 0 )
      {
        result = *(unsigned int *)(v6 + 8 * v10 + 8);
        a3 = (unsigned __int64)v18;
        goto LABEL_8;
      }
LABEL_17:
      sub_2771080(a1: v8, a2: v9, a3: v18);
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_15A2320(a1: v14, a2: v15, a3: v13);
    }
    result = 0;
    a3 = (unsigned __int64)v18;
  }
  else
  {
    result = 0;
  }
LABEL_8:
  *(_DWORD *)(a3 + 24) = result;
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280();
  return result;
}
