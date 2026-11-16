// sub_1E9D2A0
// rva 0x01e9d2a0  size 168  section .text  group text
// window base 0x181e9d2a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E9D2A0(int a1, int a2, __int64 a3, int a4, unsigned int a5, _QWORD *a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  int v8; // ecx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 result; // rax
  unsigned __int64 v13; // rbx
  double v14; // xmm0_8
  char v15; // [rsp+0h] [rbp-28h] BYREF
  __int64 v16; // [rsp+10h] [rbp-18h]
  _QWORD *v17; // [rsp+18h] [rbp-10h]
  unsigned int v18; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v7 + 8) )
  {
    v14 = sub_1EB83C0(a1, a2, a3, a4, a5, (_DWORD)a6, a7: v15);
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1E9D360(a1: v14);
  }
  else
  {
    v17 = a6;
    v18 = a5;
    v16 = a3;
    sub_1E7CA60();
    sub_1E9D000(a1: v9, a2: v10, a3: v16, a4: v8, a5: v18, a6: v17);
    v11 = v16;
    *(_QWORD *)(v16 + 104) = 0;
    *(_DWORD *)(v11 + 112) = ((unsigned __int64)v17 - v6) >> 3;
    result = *(unsigned int *)v11;
    if ( (result & 2) != 0 )
    {
      v13 = (v11 & 0xFFFFFFFFFFF80000LL) + 2112;
      result = (v11 - v13) >> 9;
      if ( *(_BYTE *)((v11 & 0xFFFFFFFFFFF80000LL) + result + 0x38) != 0 )
        *(_BYTE *)((v11 & 0xFFFFFFFFFFF80000LL) + ((v11 - v13) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
