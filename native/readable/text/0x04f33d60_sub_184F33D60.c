// sub_4F33D60
// rva 0x04f33d60  size 501  section .text  group text
// window base 0x184f33d60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F33D60(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 result; // rax
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  __int64 v20; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v21; // [rsp+Ch] [rbp-1Ch]
  __int64 v22; // [rsp+10h] [rbp-18h]
  __int64 v23; // [rsp+18h] [rbp-10h]
  unsigned int *v24; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v8 + 8) )
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
    return sub_4F33F60();
  }
  else
  {
    *(_DWORD *)(a3 + 12) = (a3 - v7) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v15 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v15) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v15) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(a3 + 16) = *(_DWORD *)(v7 + 374343896);
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v16 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v16) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v16) >> 9) + 0x38) = 0;
    }
    v24 = (unsigned int *)a3;
    v23 = a5;
    v22 = a6;
    *(_DWORD *)(a3 + 20) = 46923644;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v18 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v18) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v18) >> 9) + 0x38) = 0;
    }
    v9 = *(_QWORD *)(v7 + 8LL * (*(_DWORD *)a3 >> 3) + 112);
    v21 = *(_DWORD *)a3 >> 3;
    ((void (*)(void))(v6 + v9))();
    v12 = (unsigned __int64)v24;
    v24[2] = (unsigned __int64)(v23 - v7) >> 3;
    if ( (*(_DWORD *)v12 & 2) != 0 )
    {
      v19 = (v12 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v12 & 0xFFFFFFFFFFF80000LL) + ((v12 - v19) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v12 & 0xFFFFFFFFFFF80000LL) + ((v12 - v19) >> 9) + 0x38) = 0;
    }
    ((void (__fastcall *)(__int64, __int64, unsigned __int64, unsigned __int64, __int64))(v6
                                                                                        + *(_QWORD *)(v7 + 8LL * v21 + 152)))(
      a1: v10,
      a2: v11,
      a3: v12,
      a4: v12,
      a5: v7);
    v13 = (unsigned __int64)v24;
    v24[7] = (unsigned __int64)(v22 - v7) >> 3;
    result = *(unsigned int *)v13;
    if ( (result & 2) != 0 )
    {
      v17 = (v13 & 0xFFFFFFFFFFF80000LL) + 2112;
      result = (v13 - v17) >> 9;
      if ( *(_BYTE *)((v13 & 0xFFFFFFFFFFF80000LL) + result + 0x38) != 0 )
        *(_BYTE *)((v13 & 0xFFFFFFFFFFF80000LL) + ((v13 - v17) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v8 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
