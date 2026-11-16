// sub_1EAA9E0
// rva 0x01eaa9e0  size 205  section .text  group text
// window base 0x181eaa9e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EAA9E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rcx
  unsigned int v18; // ebx
  char v20; // [rsp+0h] [rbp-38h]
  __int64 v21; // [rsp+10h] [rbp-28h]

  v8 = *(_DWORD *)(v7 + 320);
  v9 = v8 + 1;
  *(_DWORD *)(v7 + 320) = v9;
  sub_1EB8240(a1, a2, a3: v8, a4: v9, a5: (unsigned int)v9);
  sub_1EA1740(a1: v11, a2: v12, a3, a4: v10, a5, a6, a7: v20);
  v21 = v13;
  if ( v13 != v6 )
    sub_1EABBC0(a1: v15, a2: v16, a3: v6 + 376654616, a4: v14, a5: v13);
  v17 = *(unsigned int *)(v7 + 320);
  v18 = *(_DWORD *)(v7 + 320) - 1;
  *(_DWORD *)(v7 + 320) = v18;
  sub_1EB82C0(a1: v15, a2: v16, a3: (unsigned int)v17, a4: v17, a5: v18);
  return v21;
}
