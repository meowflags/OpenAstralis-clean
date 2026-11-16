// sub_185037F00
// rva 0x05037f00  size 278  section .text  group text
// window base 0x185037f00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185037F00(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        int a10)
{
  __int64 v10; // rbx
  __int64 v11; // r13
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int (__fastcall *v18)(__int64, __int64, __int64); // rax
  __int64 v19; // rcx
  __int64 v20; // rsi
  __int64 result; // rax
  __int64 v22; // [rsp+0h] [rbp-28h] BYREF
  __int64 v23; // [rsp+8h] [rbp-20h]
  __int64 v24; // [rsp+10h] [rbp-18h]
  __int64 v25; // [rsp+18h] [rbp-10h]
  unsigned int v26; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v13 + 8) )
  {
    v24 = a5;
    v25 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( a5 != v12 )
  {
    v14 = *(unsigned int *)(a3 + 4);
    if ( (_DWORD)v14 == 0 )
    {
LABEL_15:
      v24 = a5;
      v25 = a3;
      MEMORY[0x182771080]();
      goto LABEL_16;
    }
    v15 = *(unsigned int *)(v12 + 8 * v14 + 8);
    v10 = *(_DWORD *)(a5 + 4) & (unsigned int)(*(_DWORD *)(v12 + 8 * v14 + 8) - 1);
    if ( (unsigned int)v15 <= (unsigned int)v10 )
    {
LABEL_16:
      MEMORY[0x182771220](a1, a2, a3: (unsigned int)v10, a4: v15, a5: (unsigned int)v15);
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
      return ((__int64 (*)(void))sub_185038020)();
    }
    v16 = *(unsigned int *)(v12 + 8 * v14 + 4 * v10 + 12);
    v17 = v12 + 8 * v16;
    if ( (_DWORD)v16 == 0 )
      return sub_185037FA9(a1, a2, a3, a4: v17, a5, a6, a7, a8, a9, a10);
    v26 = v10;
    v25 = a3;
    v18 = (unsigned int (__fastcall *)(__int64, __int64, __int64))(v11
                                                                 + *(_QWORD *)(v12
                                                                             + 8LL * (*(_DWORD *)(v12 + 8 * v16) >> 3)
                                                                             + 176));
    v24 = a5;
    v23 = v17;
    if ( v18(a1, a2: a5, a3: v17) != 0 )
    {
      if ( *(int *)(v13 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return v23;
    }
    else
    {
      result = sub_185038020(a1: v23, a2: v20, a3: v25, a4: v19, a5: v24, a6: v26);
      if ( *(int *)(v13 + 16) <= 0 )
        return MEMORY[0x18277F280]();
    }
    return result;
  }
  v25 = a3;
  MEMORY[0x182771080]();
  goto LABEL_15;
}
