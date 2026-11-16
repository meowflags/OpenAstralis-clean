// sub_181EAAAC0
// rva 0x01eaaac0  size 181  section .text  group text
// window base 0x181eaaac0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EAAAC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  unsigned int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // rdi
  __int64 v16; // rsi
  char v18; // [rsp+0h] [rbp-28h]
  __int64 v19; // [rsp+8h] [rbp-20h]

  v7 = *(_DWORD *)(v6 + 320);
  v8 = v7 + 1;
  *(_DWORD *)(v6 + 320) = v8;
  sub_181EB8240(a1, a2, a3: v7, a4: v8, a5: (unsigned int)v8);
  sub_181EA1740(a1: v10, a2: v11, a3, a4: v9, a5, a6: v5, a7: v18);
  v19 = v12;
  v13 = *(unsigned int *)(v6 + 320);
  v14 = *(_DWORD *)(v6 + 320) - 1;
  *(_DWORD *)(v6 + 320) = v14;
  sub_181EB82C0(a1: v15, a2: v16, a3: (unsigned int)v13, a4: v13, a5: v14);
  return v19;
}
