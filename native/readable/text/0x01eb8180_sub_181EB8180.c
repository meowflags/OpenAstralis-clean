// sub_1EB8180
// rva 0x01eb8180  size 187  section .text  group text
// window base 0x181eb8180: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EB8180(__int64 a1, __int64 a2, int a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // r8
  char v15; // [rsp+0h] [rbp-18h] BYREF
  __int64 v16; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v15);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1EB8240(a1: v12, a2: v13, a3: v10, a4: v11, a5: v14);
  }
  else
  {
    v8 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v8 + 40) > *(_QWORD *)(v7 + 32) )
    {
      v8 = sub_1EAA920(a1, a2, a3: 39351432);
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v8 + 40;
      *(_DWORD *)v8 = 39351432;
      *(_DWORD *)(v8 + 4) = 0;
      *(_QWORD *)(v8 + 8) = 0;
      *(_QWORD *)(v8 + 16) = 0;
      *(_QWORD *)(v8 + 24) = 0;
      *(_QWORD *)(v8 + 32) = 0;
    }
    *(_DWORD *)(v8 + 20) = 46923644;
    *(_DWORD *)(v8 + 16) = *(_DWORD *)(v6 + 374343896);
    *(_DWORD *)(v8 + 12) = (unsigned __int64)(v8 - v6) >> 3;
    v16 = v8;
    sub_503B9A0(a1, a2, a3: v8, a4, a5: 0);
    if ( *(int *)(v7 + 16) <= 0 )
      sub_277F280();
    return v16;
  }
}
