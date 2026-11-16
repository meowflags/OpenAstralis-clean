// sub_4F41480
// rva 0x04f41480  size 471  section .text  group text
// window base 0x184f41480: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F41480(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 (__fastcall *v8)(__int64, __int64, _DWORD *); // rax
  void (*v9)(void); // rbx
  __int64 v10; // rdi
  __int64 v11; // rsi
  unsigned __int64 v12; // rcx
  __int64 result; // rax
  unsigned __int64 v14; // rbp
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rbp
  unsigned __int64 v17; // rbp
  __int64 v18; // [rsp+0h] [rbp-28h] BYREF
  int v19; // [rsp+Ch] [rbp-1Ch]
  _DWORD *v20; // [rsp+10h] [rbp-18h]
  __int64 v21; // [rsp+18h] [rbp-10h]
  _DWORD *v22; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v7 + 8) )
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
    return sub_4F41660();
  }
  else
  {
    v22 = (_DWORD *)a3;
    if ( a5 == v6 )
    {
      v21 = (__int64)v6;
      v20 = a5;
    }
    else
    {
      v8 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v5 + *(_QWORD *)&v6[2 * (*a5 >> 3) + 48]);
      v20 = a5;
      v21 = v8(a1, a2, a3: a5);
      a3 = (unsigned __int64)v22;
    }
    *(_DWORD *)(a3 + 12) = (a3 - (unsigned __int64)v6) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v14 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v14) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v14) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(a3 + 16) = v6[93585974];
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v16 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v16) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v16) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(a3 + 20) = 46923644;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v17 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v17) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v17) >> 9) + 0x38) = 0;
    }
    v9 = (void (*)(void))(v5 + *(_QWORD *)&v6[2 * (*(_DWORD *)a3 >> 3) + 28]);
    v19 = *(_DWORD *)a3 >> 3;
    v9();
    v12 = (unsigned __int64)v22;
    v22[2] = (unsigned __int64)(v21 - (_QWORD)v6) >> 3;
    if ( (*(_DWORD *)v12 & 2) != 0 )
    {
      v15 = (v12 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v12 & 0xFFFFFFFFFFF80000LL) + ((v12 - v15) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v12 & 0xFFFFFFFFFFF80000LL) + ((v12 - v15) >> 9) + 0x38) = 0;
    }
    result = ((__int64 (__fastcall *)(__int64, __int64, unsigned __int64, unsigned __int64, _DWORD *))(v5 + *(_QWORD *)&v6[2 * v19 + 38]))(
               a1: v10,
               a2: v11,
               a3: v12,
               a4: v12,
               a5: v20);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
