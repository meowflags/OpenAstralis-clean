// sub_27567A0
// rva 0x027567a0  size 459  section .text  group text
// window base 0x1827567a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall __noreturn sub_27567A0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r14
  _QWORD *v8; // r15
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rbx
  int v20; // edx
  int v21; // ecx
  int v22; // edi
  int v23; // esi
  int v24; // r8d
  int v25; // r9d
  __int64 v26; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v27; // [rsp+10h] [rbp-28h]
  __int64 v28; // [rsp+18h] [rbp-20h]
  __int64 v29; // [rsp+20h] [rbp-18h]
  __int64 v30; // [rsp+28h] [rbp-10h]
  __int64 v31; // [rsp+30h] [rbp-8h]

  if ( (unsigned __int64)&v26 <= v8[1] )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    sub_2756980(a1: v22, a2: v23, a3: v20, a4: v21, a5: v24, a6: v25, a7);
  }
  v9 = v8[5];
  if ( (unsigned __int64)(v9 + 40) > v8[4] )
  {
    v31 = a6;
    v30 = a5;
    v29 = a3;
    v9 = sub_1EAA920(a1, a2, a3: 34171568);
  }
  else
  {
    v8[5] = v9 + 40;
    *(_DWORD *)v9 = 34171568;
    *(_DWORD *)(v9 + 4) = 0;
    *(_QWORD *)(v9 + 8) = 0;
    *(_QWORD *)(v9 + 16) = 0;
    *(_QWORD *)(v9 + 24) = 0;
    *(_QWORD *)(v9 + 32) = 0;
    v31 = a6;
    v30 = a5;
    v29 = a3;
  }
  v28 = v9;
  *(_DWORD *)(v9 + 20) = 46923644;
  *(_DWORD *)(v9 + 16) = *(_DWORD *)(v7 + 374343896);
  v10 = (unsigned __int64)(v9 - v7) >> 3;
  *(_DWORD *)(v9 + 12) = v10;
  sub_503B9A0(a1, a2, a3: v9, a4: v10, a5: 0);
  v13 = v28;
  *(_DWORD *)(v28 + 8) = 46091599;
  if ( (*(_DWORD *)v13 & 2) != 0 )
    goto LABEL_9;
  while ( 1 )
  {
    v14 = v8[5];
    if ( (unsigned __int64)(v14 + 40) > v8[4] )
    {
      v14 = sub_1EAA920(a1: v11, a2: v12, a3: 40449280);
    }
    else
    {
      v8[5] = v14 + 40;
      *(_DWORD *)v14 = 40449280;
      *(_DWORD *)(v14 + 4) = 0;
      *(_QWORD *)(v14 + 8) = 0;
      *(_QWORD *)(v14 + 16) = 0;
      *(_QWORD *)(v14 + 24) = 0;
      *(_QWORD *)(v14 + 32) = 0;
    }
    v27 = (_DWORD *)v14;
    sub_503ACA0(a1: v11, a2: v12, a3: v14, a4: v14, a5: v7);
    v17 = (unsigned __int64)v27;
    v27[7] = (unsigned __int64)(v28 - v7) >> 3;
    if ( (*(_DWORD *)v17 & 2) != 0 )
    {
      v19 = (v17 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v19) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v17 & 0xFFFFFFFFFFF80000LL) + ((v17 - v19) >> 9) + 0x38) = 0;
    }
    v13 = sub_2769900(a1: v15, a2: v16, a3: v17, a4: v17, a5: &a7);
LABEL_9:
    v18 = (v13 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v13 & 0xFFFFFFFFFFF80000LL) + ((v13 - v18) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v13 & 0xFFFFFFFFFFF80000LL) + ((v13 - v18) >> 9) + 0x38) = 0;
  }
}
