// sub_4F362E0
// rva 0x04f362e0  size 332  section .text  group text
// window base 0x184f362e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F362E0(int a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  unsigned __int64 v15; // rdx
  int v16; // ebx
  unsigned __int64 v18; // rsi
  __int64 v19; // [rsp+0h] [rbp-38h] BYREF
  __int64 v20; // [rsp+8h] [rbp-30h]
  __int64 v21; // [rsp+10h] [rbp-28h]
  unsigned __int64 v22; // [rsp+18h] [rbp-20h]
  unsigned int v23; // [rsp+20h] [rbp-18h]
  unsigned int v24; // [rsp+24h] [rbp-14h]
  int v25; // [rsp+28h] [rbp-10h]
  unsigned int v26; // [rsp+2Ch] [rbp-Ch]
  unsigned int v27; // [rsp+30h] [rbp-8h]
  int v28; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v7 + 8) )
  {
    v28 = a1;
    v27 = a6;
    sub_1EB84E0();
    goto LABEL_13;
  }
  v22 = a3;
  if ( a5 == v6 )
  {
LABEL_13:
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
    return sub_4F36440();
  }
  v28 = a1;
  v8 = *(unsigned int *)(a5 + 8);
  v21 = a5;
  v27 = a6;
  v26 = a1 + a6;
  sub_632A360(a1: v6 + 377133352, a2, a3: a6, a4: v8, a5: a1 + a6, a6: (unsigned int)v8);
  v9 = *(_DWORD *)(v22 + 8);
  v10 = (unsigned int)*(char *)(v22 + 12);
  v11 = v6 + 8LL * *(unsigned int *)(v22 + 4);
  v25 = v28 + v9;
  v24 = v9;
  v23 = v10;
  v20 = sub_4F39060(a1: v12, a2: v13, a3: v11, a4: v10, a5: (unsigned int)v10, a6: v28 + v9);
  v14 = sub_4F37500(a1: v21, a2: v27, a3: v20, a4: v26, a5: v23, a6: v24);
  if ( v20 == v14 )
  {
    v16 = v25;
    v15 = v22;
  }
  else
  {
    v15 = v22;
    *(_BYTE *)(v22 + 12) = 1;
    v16 = v25;
  }
  *(_DWORD *)(v15 + 8) = v16;
  *(_DWORD *)(v15 + 4) = (unsigned __int64)(v14 - v6) >> 3;
  if ( (*(_DWORD *)v15 & 2) != 0 )
  {
    v18 = (v15 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - v18) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v15 & 0xFFFFFFFFFFF80000LL) + ((v15 - v18) >> 9) + 0x38) = 0;
  }
  if ( *(int *)(v7 + 16) <= 0 )
    sub_277F280();
  return v15;
}
