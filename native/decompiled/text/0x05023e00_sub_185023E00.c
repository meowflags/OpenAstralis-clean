// sub_185023E00
// rva 0x05023e00  size 358  section .text  group text
// window base 0x185023e00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185023E00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdi
  unsigned __int64 v15; // rsi
  __int64 v16; // rdx
  unsigned __int64 v17; // r9
  unsigned __int64 i; // r8
  __int64 result; // rax
  __int64 v20; // rdi
  __int64 v21; // rsi
  char v22; // [rsp+0h] [rbp-38h] BYREF
  __int64 v23; // [rsp+10h] [rbp-28h]
  __int64 v24; // [rsp+18h] [rbp-20h]
  unsigned int v25; // [rsp+24h] [rbp-14h]
  unsigned int v26; // [rsp+28h] [rbp-10h]
  unsigned int v27; // [rsp+2Ch] [rbp-Ch]
  int v28; // [rsp+30h] [rbp-8h]
  unsigned int v29; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v6 + 8) )
  {
    v29 = a6;
    v27 = a5;
    v24 = a3;
    v12 = MEMORY[0x181EB84E0]();
    goto LABEL_15;
  }
  v29 = a6;
  v28 = a6 + a5;
  v27 = a5;
  v24 = a3;
  v26 = sub_18501F080(a1, a2, a3, a4: a3, a5, a6: a6 + (unsigned int)a5, a7: v22);
  v12 = sub_1850217A0(a1: v8, a2: v9, a3: v26, a4: v7, a5: v10, a6: v11, a7: v22);
  if ( (v12 & 0x80000000) != 0 )
  {
LABEL_15:
    MEMORY[0x182770E80](a1: v14, a2: v15, a3: v12, a4: v26, a5: v27, a6: v29);
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_185023F80();
  }
  v16 = *(_QWORD *)(v6 + 40);
  v17 = (v12 + 19LL) & 0x1FFFFFFF8LL;
  if ( v17 >= 0x20000 || (v15 = v16 + v17, v16 + v17 > *(_QWORD *)(v6 + 32)) )
  {
    v25 = v12;
    v16 = MEMORY[0x181EAA840](a1: 34082368, a2: v15, a3: 34082368, a4: v13, a5: v12);
  }
  else
  {
    *(_QWORD *)(v6 + 40) = v15;
    *(_QWORD *)v16 = 34082368;
    *(_DWORD *)(v16 + 8) = v12;
    *(_DWORD *)(v16 + 12) = 0;
    if ( v17 - 16 >= 0x800 )
    {
      memset((void *)(v16 + 16), 0, v17 - 16);
      v13 = 0;
    }
    else
    {
      for ( i = 16; v17 > i; i += 8LL )
        *(_QWORD *)(v16 + i) = 0;
    }
  }
  v23 = v16;
  result = sub_18501F640(a1: v16, a2: 0, a3: v24, a4: v13, a5: v27, a6: v28);
  if ( *(int *)(v6 + 16) <= 0 )
    return MEMORY[0x18277F280](a1: v20, a2: v21, a3: v23);
  return result;
}
