// sub_4F222A0
// rva 0x04f222a0  size 242  section .text  group text
// window base 0x184f222a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F222A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 result; // rax
  int v13; // ecx
  unsigned __int64 v14; // rbx
  __int64 v15; // rcx
  int v16; // edx
  int v17; // ecx
  int v18; // edi
  int v19; // esi
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v8 + 8) )
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
    return sub_4F223A0(a1: v18, a2: v19, a3: v16, a4: v17, a5: v20, a6: v21, a7);
  }
  else
  {
    sub_4F23A60();
    v11 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v11 + 16) > *(_QWORD *)(v8 + 32) )
    {
      v11 = sub_1EAA920(a1: v9, a2: v10, a3: 43282728);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v11 + 16;
      *(_DWORD *)v11 = 43282728;
      *(_DWORD *)(v11 + 4) = 0;
      *(_QWORD *)(v11 + 8) = 0;
    }
    *(_DWORD *)(v7 + 374382616) = (unsigned __int64)(v11 - v7) >> 3;
    result = v7 + 374343744;
    v13 = *(_DWORD *)(v7 + 374343744);
    if ( (v13 & 2) != 0 )
    {
      if ( (v13 & 1) != 0 )
      {
        v15 = v7 + 374343744 - *(_QWORD *)(v7 + 374343736);
        if ( *(_BYTE *)(v15 + 123) != 0 )
          *(_BYTE *)(v15 + 123) = 0;
      }
      else
      {
        result &= 0xFFFFFFFFFFF80000LL;
        v14 = (v7 + 374343744 - (((v7 + 374343744) & 0xFFFFFFFFFFF80000LL) + 2112)) >> 9;
        if ( *(_BYTE *)(result + v14 + 56) != 0 )
          *(_BYTE *)(result + v14 + 56) = 0;
      }
    }
    if ( *(int *)(v8 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
