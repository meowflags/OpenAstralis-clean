// sub_1815CB300
// rva 0x015cb300  size 269  section .text  group text
// window base 0x1815cb300: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815CB300(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8)
{
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r8
  unsigned __int64 v11; // r8
  unsigned __int64 v13; // rbx
  int v14; // edx
  int v15; // ecx
  int v16; // edi
  int v17; // esi
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v21; // [rsp+8h] [rbp-10h]
  __int64 v22; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v9 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1815CB420(a1: v16, a2: v17, a3: v14, a4: v15, a5: v18, a6: v19, a7, a8);
  }
  else
  {
    v22 = a3;
    v10 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v10 + 40) > *(_QWORD *)(v9 + 32) )
    {
      v10 = MEMORY[0x181EAA920](a1, a2, a3: 35863664);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v10 + 40;
      *(_DWORD *)v10 = 35863664;
      *(_DWORD *)(v10 + 4) = 0;
      *(_QWORD *)(v10 + 8) = 0;
      *(_QWORD *)(v10 + 16) = 0;
      *(_QWORD *)(v10 + 24) = 0;
      *(_QWORD *)(v10 + 32) = 0;
    }
    *(_DWORD *)(v10 + 20) = 46923644;
    *(_DWORD *)(v10 + 16) = *(_DWORD *)(v8 + 374343896);
    *(_DWORD *)(v10 + 12) = (unsigned __int64)(v10 - v8) >> 3;
    v21 = (_DWORD *)v10;
    MEMORY[0x18503B9A0](a1, a2, a3: v10, a4, a5: 0);
    v11 = (unsigned __int64)v21;
    v21[2] = (unsigned __int64)(v22 - v8) >> 3;
    if ( (*(_DWORD *)v11 & 2) != 0 )
    {
      v13 = (v11 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v11 & 0xFFFFFFFFFFF80000LL) + ((v11 - v13) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v11 & 0xFFFFFFFFFFF80000LL) + ((v11 - v13) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v9 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return v11;
  }
}
