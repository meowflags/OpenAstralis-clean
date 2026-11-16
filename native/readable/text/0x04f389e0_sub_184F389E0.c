// sub_4F389E0
// rva 0x04f389e0  size 262  section .text  group text
// window base 0x184f389e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F389E0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        unsigned int a6,
        char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  unsigned int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rsi
  unsigned int v12; // eax
  __int64 v13; // r9
  unsigned int v14; // ebx
  __int64 v15; // rdx
  int v17; // edx
  int v18; // ecx
  int v19; // edi
  int v20; // esi
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // [rsp+0h] [rbp-38h] BYREF
  __int64 v24; // [rsp+10h] [rbp-28h]
  __int64 v25; // [rsp+18h] [rbp-20h]
  unsigned int v26; // [rsp+20h] [rbp-18h]
  unsigned int v27; // [rsp+24h] [rbp-14h]
  unsigned int v28; // [rsp+28h] [rbp-10h]
  unsigned int v29; // [rsp+2Ch] [rbp-Ch]
  unsigned int v30; // [rsp+30h] [rbp-8h]
  unsigned int v31; // [rsp+34h] [rbp-4h]

  v25 = a3;
  v31 = a5;
  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v8 + 8) )
  {
    v12 = sub_1EB84E0();
    goto LABEL_11;
  }
  v9 = *(_DWORD *)(a3 + 8);
  v30 = v9;
  if ( (int)v9 < (int)a6 )
    JUMPOUT(0x309E4EA08LL);
  v29 = a6;
  sub_632A360(a1: v7 + 376643464, a2, a3: a5, a4: a6, a5: a6, a6: v9);
  v12 = v29 - v31;
  if ( (int)(v29 - v31) < 1 )
  {
    v28 = v29 - v31;
    v15 = v25;
    goto LABEL_6;
  }
  v13 = *(unsigned int *)(v25 + 4);
  v14 = *(char *)(v25 + 12);
  if ( (_DWORD)v13 == 0 )
  {
LABEL_11:
    sub_2771080(a1: v10, a2: v12);
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
    return sub_4F38B00(a1: v19, a2: v20, a3: v17, a4: v18, a5: v21, a6: v22, a7);
  }
  v27 = v31 - v29;
  v28 = v29 - v31;
  v26 = v14;
  v24 = v7 + 8 * v13;
  sub_1EB4960(a1: v31 << v14, a2: (v30 - v29) << v14, a3: v24, a4: v14, a5: v29 << v14, a6: v24);
  v15 = v25;
  *(_DWORD *)(v25 + 8) = v30 - v28;
  *(_BYTE *)(v15 + 13) = 1;
LABEL_6:
  if ( *(int *)(v8 + 16) <= 0 )
    sub_277F280(a1: v10, a2: v11, a3: v15);
  return v15;
}
