// sub_27640A0
// rva 0x027640a0  size 363  section .text  group text
// window base 0x1827640a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27640A0(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // ecx
  __int64 v11; // rcx
  __int64 result; // rax
  __int64 v13; // rdx
  __int64 v14; // rdi
  __int64 v15; // rsi
  char v16; // [rsp+0h] [rbp-38h] BYREF
  __int64 v17; // [rsp+10h] [rbp-28h]
  __int64 v18; // [rsp+18h] [rbp-20h]
  __int64 v19; // [rsp+20h] [rbp-18h]
  __int64 v20; // [rsp+28h] [rbp-10h]
  int v21; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v7 + 8) )
  {
    v21 = a1;
    v20 = a6;
    v19 = a5;
    v18 = a3;
    sub_1EB84E0();
    goto LABEL_16;
  }
  v8 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v8 == 0 )
  {
LABEL_16:
    v21 = a1;
    v20 = a6;
    v19 = a5;
    v18 = a3;
    v9 = sub_28C1C40(a1, a2, a3: v6 + 371554760);
LABEL_17:
    v17 = v9;
    v21 = a1;
    v20 = a6;
    v18 = a3;
    sub_2771080(a1, a2, a3, a4, a5, a6, a7: v16);
    goto LABEL_18;
  }
  if ( (a1 & 0x400) != 0 )
    v9 = v6 + 8 * v8;
  else
    v9 = a6;
  if ( a5 == v6 )
    goto LABEL_17;
  if ( v9 == v6 )
  {
LABEL_18:
    v21 = a1;
    v20 = a6;
    v19 = a5;
    v18 = a3;
    sub_2771080(a1, a2, a3, a4, a5, a6, a7: v16);
    goto LABEL_19;
  }
  v10 = *(_DWORD *)(a3 + 8);
  if ( v10 == 0 )
  {
LABEL_19:
    sub_2771080(a1, a2, a3, a4: v10, a5, a6, a7: v16);
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
    return sub_2764220();
  }
  v11 = *(_QWORD *)(v7 + 40);
  if ( (unsigned __int64)(v11 + 24) > *(_QWORD *)(v7 + 32) )
  {
    v17 = v9;
    v21 = a1;
    v20 = a6;
    v19 = a5;
    v18 = a3;
    v11 = sub_1EAA920(a1, a2, a3: 40540136);
    v9 = v17;
    a5 = v19;
  }
  else
  {
    *(_QWORD *)(v7 + 40) = v11 + 24;
    *(_DWORD *)v11 = 40540136;
    *(_DWORD *)(v11 + 4) = 0;
    *(_QWORD *)(v11 + 8) = 0;
    *(_QWORD *)(v11 + 16) = 0;
    v21 = a1;
    v20 = a6;
    v18 = a3;
  }
  *(_DWORD *)(v11 + 8) = *(_DWORD *)(v9 + 36);
  *(_DWORD *)(v11 + 4) = *(_DWORD *)(a5 + 36);
  v19 = a5;
  v17 = v9;
  result = sub_27848A0(a1, a2, a3: v6 + 376667800, a4: v11, a5: v11);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280(a1: v14, a2: v15, a3: v13);
  return result;
}
