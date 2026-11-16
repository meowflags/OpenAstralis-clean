// sub_184F2E080
// rva 0x04f2e080  size 373  section .text  group text
// window base 0x184f2e080: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F2E080(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  void (*v10)(void); // rax
  unsigned __int64 v11; // rdx
  __int64 result; // rax
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rbx
  unsigned __int64 v16; // rbx
  int v17; // edx
  int v18; // ecx
  int v19; // edi
  int v20; // esi
  int v21; // r8d
  int v22; // r9d
  __int64 v23; // [rsp+0h] [rbp-18h] BYREF
  unsigned int *v24; // [rsp+8h] [rbp-10h]
  __int64 v25; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v9 + 8) )
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
    return sub_184F2E200(a1: v19, a2: v20, a3: v17, a4: v18, a5: v21, a6: v22, a7);
  }
  else
  {
    *(_DWORD *)(a3 + 12) = (a3 - v8) >> 3;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v13 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v13) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v13) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(a3 + 16) = *(_DWORD *)(v8 + 374343896);
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v14 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v14) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v14) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(a3 + 20) = 46923644;
    if ( (*(_DWORD *)a3 & 2) != 0 )
    {
      v15 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v15) >> 9) + 0x38) != 0 )
        *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v15) >> 9) + 0x38) = 0;
    }
    v25 = a5;
    v10 = (void (*)(void))(v7 + *(_QWORD *)(v8 + 8LL * (*(_DWORD *)a3 >> 3) + 112));
    v24 = (unsigned int *)a3;
    v10();
    v11 = (unsigned __int64)v24;
    v24[2] = (unsigned __int64)(v25 - v8) >> 3;
    result = *(unsigned int *)v11;
    if ( (result & 2) != 0 )
    {
      v16 = (v11 & 0xFFFFFFFFFFF80000LL) + 2112;
      result = (v11 - v16) >> 9;
      if ( *(_BYTE *)((v11 & 0xFFFFFFFFFFF80000LL) + result + 0x38) != 0 )
        *(_BYTE *)((v11 & 0xFFFFFFFFFFF80000LL) + ((v11 - v16) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v9 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
