// sub_184F1FE00
// rva 0x04f1fe00  size 102  section .text  group text
// window base 0x184f1fe00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F1FE00(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rdi
  __int64 (__fastcall *v11)(__int64, __int64, _DWORD *, _DWORD *, __int64, _QWORD); // rax
  __int64 result; // rax
  int v13; // edx
  int v14; // ecx
  int v15; // edi
  int v16; // esi
  int v17; // r8d
  int v18; // r9d
  _QWORD v19[2]; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v20; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)v19 <= *(_QWORD *)(v9 + 8) )
  {
    v20 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( a5 != v8 )
  {
    v10 = *(unsigned int *)(a5 + 8);
    v11 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, __int64, _QWORD))(v7
                                                                                        + *(_QWORD *)(v8 + 8LL * (*a3 >> 3) + 544));
    v20 = a3;
    v19[1] = a5;
    result = v11(a1: v10, a2, a3, a4: a3, a5, a6: 0);
    if ( *(int *)(v9 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  MEMORY[0x182771080]();
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
  return sub_184F1FE80(a1: v15, a2: v16, a3: v13, a4: v14, a5: v17, a6: v18, a7);
}
