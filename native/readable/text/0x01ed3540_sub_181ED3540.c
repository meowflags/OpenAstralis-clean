// sub_1ED3540
// rva 0x01ed3540  size 203  section .text  group text
// window base 0x181ed3540: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1ED3540(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 result; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rsi
  char v17; // [rsp+0h] [rbp-28h] BYREF
  __int64 v18; // [rsp+8h] [rbp-20h]
  __int64 v19; // [rsp+10h] [rbp-18h]
  __int64 v20; // [rsp+18h] [rbp-10h]
  int v21; // [rsp+24h] [rbp-4h]

  v20 = a5;
  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v7 + 8) )
  {
    v19 = a3;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v17);
    goto LABEL_12;
  }
  v8 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v8 == 0 )
  {
LABEL_12:
    sub_2771080();
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
    return sub_1ED3620();
  }
  v9 = (*(_DWORD *)(v6 + 8 * v8 + 8) >> *(_BYTE *)(a3 + 12)) - 1;
  v19 = a3;
  result = sub_4FF7A20(a1, a2, a3, a4: a3, a5: 47, a6: v9);
  if ( (_DWORD)result == -1 )
  {
    v21 = -1;
  }
  else
  {
    v21 = result;
    if ( v20 != v6 )
    {
      v18 = v6 + 376660320;
      v13 = sub_4FFD140(a1: v11, a2: v12, a3: v19, a4: v6 + 376660320, a5: 0, a6: (unsigned int)result);
      v14 = v18;
      v18 = v13;
      result = sub_59E7560(a1: 1, a2: v16, a3: v14, a4: v15, a5: v13, a6: v20);
    }
  }
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280();
  return result;
}
