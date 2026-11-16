// sub_184F1DB60
// rva 0x04f1db60  size 84  section .text  group text
// window base 0x184f1db60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F1DB60(int a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, int a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 (*v10)(void); // rax
  __int64 result; // rax
  int v12; // edx
  int v13; // ecx
  int v14; // edi
  int v15; // esi
  int v16; // r8d
  int v17; // r9d
  _QWORD v18[4]; // [rsp+0h] [rbp-28h] BYREF
  int v19; // [rsp+20h] [rbp-8h]
  int v20; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)v18 <= *(_QWORD *)(v9 + 8) )
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
    return sub_184F1DBC0(a1: v14, a2: v15, a3: v12, a4: v13, a5: v16, a6: v17, a7);
  }
  else
  {
    v10 = (__int64 (*)(void))(v7 + *(_QWORD *)(v8 + 8LL * (*a3 >> 3) + 264));
    v18[3] = a3;
    v18[2] = a5;
    v20 = a6;
    v19 = a1;
    result = v10();
    if ( *(int *)(v9 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
