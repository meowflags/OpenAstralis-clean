// sub_503ACA0
// rva 0x0503aca0  size 486  section .text  group text
// window base 0x18503aca0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_503ACA0(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        char *a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r13
  char *v8; // r14
  __int64 v9; // r15
  void (*v10)(void); // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  __int64 result; // rax
  unsigned __int64 v16; // rbx
  unsigned __int64 v17; // rbx
  unsigned __int64 v18; // rbx
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rbx
  int v21; // edx
  int v22; // ecx
  int v23; // edi
  int v24; // esi
  int v25; // r8d
  int v26; // r9d
  __int64 v27; // [rsp+0h] [rbp-18h] BYREF
  unsigned int *v28; // [rsp+8h] [rbp-10h]
  char *v29; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v27 <= *(_QWORD *)(v9 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_503AEA0(a1: v23, a2: v24, a3: v21, a4: v22, a5: v25, a6: v26, a7);
  }
  else
  {
    *(_DWORD *)(a3 + 12) = (a3 - (unsigned __int64)v8) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v16 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v16) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v16) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(a3 + 16) = *((_DWORD *)v8 + 93585974);
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v17 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v17) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v17) >> 9) + 0x38) = 0;
    }
    v29 = a5;
    *(_DWORD *)(a3 + 20) = 46923644;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v20 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v20) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v20) >> 9) + 0x38) = 0;
    }
    v10 = (void (*)(void))(v7 + *(_QWORD *)&v8[8 * (*(_DWORD *)a3 >> 3) + 112]);
    v28 = (unsigned int *)a3;
    v10();
    if ( v29 == v8 )
      v13 = (__int64)v8;
    else
      v13 = ((__int64 (__fastcall *)(__int64, __int64, char *))(v7 + *(_QWORD *)&v8[8 * (*(_DWORD *)v29 >> 3) + 192]))(
              a1: v11,
              a2: v12,
              a3: v29);
    v14 = (unsigned __int64)v28;
    v28[2] = (unsigned __int64)(v13 - (_QWORD)v8) >> 3;
    if ( (*(_DWORD *)v14 & 2) != 0 )
    {
      v18 = (v14 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v18) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v18) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v14 + 12) = (unsigned __int64)(v29 - v8) >> 3;
    result = *(unsigned int *)v14;
    if ( (result & 2) != 0 )
    {
      v19 = (v14 & 0xFFFFFFFFFFF80000LL) + 2112;
      result = (v14 - v19) >> 9;
      if ( *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + result + 0x38) != 0 )
        *(_BYTE *)((v14 & 0xFFFFFFFFFFF80000LL) + ((v14 - v19) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v9 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
