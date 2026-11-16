// sub_4F27060
// rva 0x04f27060  size 109  section .text  group text
// window base 0x184f27060: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F27060(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6, int a7, __int64 a8)
{
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 result; // rax
  int v13; // edx
  int v14; // ecx
  int v15; // edi
  int v16; // esi
  int v17; // r8d
  int v18; // r9d
  _QWORD v19[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v19 <= *(_QWORD *)(v10 + 8) )
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
    return sub_4F270E0(a1: v15, a2: v16, a3: v13, a4: v14, a5: v17, a6: v18, a7);
  }
  else
  {
    v11 = *(unsigned int *)(a3 + 8);
    if ( (_DWORD)v11 != 0 )
    {
      v19[2] = a3;
      result = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v8
                                                                  + *(_QWORD *)(v9
                                                                              + 8LL * (*(_DWORD *)(v9 + 8 * v11) >> 3)
                                                                              + 112)))(
                 a1,
                 a2,
                 a3: v9 + 8 * v11);
      if ( *(int *)(v10 + 16) <= 0 )
        JUMPOUT(0x184F270B7LL);
    }
    else
    {
      return sub_184F270A1(a1, a2, a3, a4, a5, a6, a7, a8);
    }
  }
  return result;
}
