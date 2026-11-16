// sub_15C96C0
// rva 0x015c96c0  size 429  section .text  group text
// window base 0x1815c96c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15C96C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // xmm0_8
  __int64 v16; // rbx
  __int64 v17; // rcx
  unsigned __int64 v18; // rdx
  unsigned __int64 v20; // rbx
  int v21; // edx
  int v22; // ecx
  int v23; // edi
  int v24; // esi
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // [rsp+0h] [rbp-38h] BYREF
  int v28; // [rsp+14h] [rbp-24h]
  _DWORD *v29; // [rsp+18h] [rbp-20h]
  __int64 v30; // [rsp+20h] [rbp-18h]
  __int64 v31; // [rsp+28h] [rbp-10h]
  __int64 v32; // [rsp+30h] [rbp-8h]

  v31 = a3;
  if ( (unsigned __int64)&v27 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
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
    return sub_15C9880(a1: v23, a2: v24, a3: v21, a4: v22, a5: v25, a6: v26, a7);
  }
  else
  {
    v30 = sub_5837940(a1, a2, a3: v7 + 35855512);
    v32 = MEMORY[0x1240e638]/* 0x1240e638 */;
    v11 = sub_5837E40(a1: v9, a2: v10, a3: v7 + 376314608);
    v14 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v14 + 64) > *(_QWORD *)(v8 + 32) )
    {
      v29 = (_DWORD *)v11;
      v14 = sub_1EAA920(a1: v12, a2: v13, a3: 35856528);
      v15 = v32;
      v11 = (__int64)v29;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v14 + 64;
      *(_DWORD *)v14 = 35856528;
      *(_DWORD *)(v14 + 4) = 0;
      *(_QWORD *)(v14 + 8) = 0;
      *(_QWORD *)(v14 + 16) = 0;
      *(_QWORD *)(v14 + 24) = 0;
      *(_QWORD *)(v14 + 32) = 0;
      *(_QWORD *)(v14 + 40) = 0;
      *(_QWORD *)(v14 + 48) = 0;
      *(_QWORD *)(v14 + 56) = 0;
      v15 = v32;
    }
    v16 = v30;
    v17 = v31;
    *(_BYTE *)(v14 + 49) = 1;
    *(_QWORD *)(v14 + 40) = v15;
    *(_DWORD *)(v14 + 12) = 40;
    *(_DWORD *)(v14 + 8) = (unsigned __int64)(v17 - v7) >> 3;
    *(_DWORD *)(v14 + 4) = (unsigned __int64)(v16 - v7) >> 3;
    v28 = (unsigned __int64)(v17 - v7) >> 3;
    v29 = (_DWORD *)v14;
    sub_94C25E0(a1: v12, a2: v13, a3: v14, a4: v17, a5: v11);
    v18 = (unsigned __int64)v29;
    v29[13] = v28;
    if ( (*(_DWORD *)v18 & 2) != 0 )
    {
      v20 = (v18 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v18 & 0xFFFFFFFFFFF80000LL) + ((v18 - v20) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v18 & 0xFFFFFFFFFFF80000LL) + ((v18 - v20) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v8 + 16) <= 0 )
      sub_277F280();
    return v18;
  }
}
