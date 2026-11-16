// sub_502EEE0
// rva 0x0502eee0  size 360  section .text  group text
// window base 0x18502eee0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_502EEE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rsi
  int v9; // r9d
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 result; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  unsigned __int64 v16; // rcx
  char v17; // [rsp+0h] [rbp-18h] BYREF
  __int64 v18; // [rsp+8h] [rbp-10h]
  _DWORD *v19; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v5 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v6 = *(_QWORD *)(v5 + 40);
  if ( (unsigned __int64)(v6 + 40) > *(_QWORD *)(v5 + 32) )
  {
    v6 = sub_1EAA920(a1, a2, a3: 34142824);
  }
  else
  {
    *(_QWORD *)(v5 + 40) = v6 + 40;
    *(_DWORD *)v6 = 34142824;
    *(_DWORD *)(v6 + 4) = 0;
    *(_QWORD *)(v6 + 8) = 0;
    *(_QWORD *)(v6 + 16) = 0;
    *(_QWORD *)(v6 + 24) = 0;
    *(_QWORD *)(v6 + 32) = 0;
  }
  v19 = (_DWORD *)v6;
  *(_DWORD *)(v6 + 20) = 46923644;
  *(_DWORD *)(v6 + 16) = *(_DWORD *)(v4 + 374343896);
  *(_DWORD *)(v6 + 12) = (unsigned __int64)(v6 - v4) >> 3;
  sub_503B9A0(a1, a2, a3: v6, a4, a5: 0);
  v10 = (unsigned __int64)v19;
  v19[2] = 45881230;
  if ( (*(_DWORD *)v10 & 2) != 0 )
  {
    v16 = (v10 & 0xFFFFFFFFFFF80000LL) + 2112;
    if ( *(_BYTE *)((v10 & 0xFFFFFFFFFFF80000LL) + ((v10 - v16) >> 9) + 0x38) != 0 )
      *(_BYTE *)((v10 & 0xFFFFFFFFFFF80000LL) + ((v10 - v16) >> 9) + 0x38) = 0;
  }
  v11 = *(_QWORD *)(v5 + 40);
  if ( (unsigned __int64)(v11 + 16) > *(_QWORD *)(v5 + 32) )
  {
    v11 = sub_1EAA920(a1: v7, a2: v8, a3: 40608200);
    LODWORD(v10) = (_DWORD)v19;
  }
  else
  {
    *(_QWORD *)(v5 + 40) = v11 + 16;
    *(_DWORD *)v11 = 40608200;
    *(_DWORD *)(v11 + 4) = 0;
    *(_QWORD *)(v11 + 8) = 0;
  }
  v12 = *(unsigned int *)(v4 + 374343876);
  *(_DWORD *)(v11 + 4) = v12;
  v18 = v4 + 8 * v12;
  result = sub_503F0E0(a1: v7, a2: v8, a3: v10, a4: v10, a5: v11, a6: v9, a7: v17);
  if ( *(int *)(v5 + 16) <= 0 )
    return sub_277F280(a1: v14, a2: v15, a3: v19);
  return result;
}
