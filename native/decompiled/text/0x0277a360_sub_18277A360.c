// sub_18277A360
// rva 0x0277a360  size 395  section .text  group text
// window base 0x18277a360: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18277A360(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  _DWORD *v10; // rdi
  unsigned __int64 i; // rax
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // rdi
  __int64 v15; // rsi
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rsi
  unsigned __int64 v22; // rcx
  int v23; // edx
  int v24; // ecx
  int v25; // edi
  int v26; // esi
  int v27; // r8d
  int v28; // r9d
  int v29; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v30; // [rsp+8h] [rbp-20h]
  __int64 v31; // [rsp+10h] [rbp-18h]
  __int64 v32; // [rsp+18h] [rbp-10h]
  unsigned int v33; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v29 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
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
    return sub_18277A500(a1: v25, a2: v26, a3: v23, a4: v24, a5: v27, a6: v28, a7);
  }
  else if ( *(_DWORD *)(v8 + 72) != 0 )
  {
    if ( *(int *)(v8 + 16) <= 0 )
    {
      v33 = a6;
      v32 = a5;
      v31 = a3;
      sub_18277F280(a1, a2, a3);
    }
    return 0;
  }
  else
  {
    v10 = *(_DWORD **)(v8 + 40);
    if ( (unsigned __int64)(v10 + 28) > *(_QWORD *)(v8 + 32) )
    {
      v33 = a6;
      v32 = a5;
      v31 = a3;
      v10 = (_DWORD *)MEMORY[0x181EAA920](a1: v10, a2, a3: 34099232);
      a6 = v33;
      a5 = v32;
      v12 = v31;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v10 + 28;
      *v10 = 34099232;
      v10[1] = 0;
      for ( i = 2; i < 28; i += 2LL )
        *(_QWORD *)&v10[i] = 0;
      v12 = a3;
    }
    v30 = v10;
    v31 = v12;
    v32 = a5;
    v33 = a6;
    MEMORY[0x18502DA40](a1: a6, a2, a3: v10, a4: v32, a5: v12, a6: v32);
    sub_18277A120(a1: v14, a2: v15, a3: (__int64)v30, a4: v13, a5: v16, a6: v17);
    v19 = (__int64)v30;
    v30[2] = 47045299;
    __faststorefence();
    if ( (*(_DWORD *)v19 & 2) != 0 )
    {
      v22 = (v19 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v19 & 0xFFFFFFFFFFF80000LL) + ((v19 - v22) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v19 & 0xFFFFFFFFFFF80000LL) + ((v19 - v22) >> 9) + 0x38) = 0;
    }
    sub_182780680(a1: v19, a2: v18, a3: v7 + 376658360);
    if ( *(int *)(v8 + 16) <= 0 )
      sub_18277F280(a1: v30, a2: v21, a3: v20);
    return 1;
  }
}
