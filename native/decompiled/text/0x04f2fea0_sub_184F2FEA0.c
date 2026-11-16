// sub_184F2FEA0
// rva 0x04f2fea0  size 166  section .text  group text
// window base 0x184f2fea0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F2FEA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 (__fastcall *v8)(__int64, __int64, _DWORD *); // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v19; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v20; // [rsp+8h] [rbp-10h]
  __int64 v21; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v7 + 8) )
  {
    v20 = a5;
    v21 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( a5 != v6 )
  {
    v21 = a3;
    v8 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v5 + *(_QWORD *)&v6[2 * (*a5 >> 3) + 64]);
    v20 = a5;
    v9 = v8(a1, a2, a3: a5);
    if ( (_DWORD *)v9 == v6 )
    {
LABEL_13:
      MEMORY[0x182771080]();
      goto LABEL_14;
    }
    v12 = *(unsigned int *)(v9 + 4);
    if ( (_DWORD)v12 == 0 )
    {
LABEL_14:
      MEMORY[0x182771080](a1: v10, a2: v11, a3: v21, a4: v12, a5: v20);
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
      return sub_184F2FF60(a1: v16, a2: v17, a3: v14, a4: v15, a5: v18);
    }
    if ( v6[2 * v12 + 2] != 0 )
      result = (__int64)v20;
    else
      result = (__int64)(v6 + 94283326);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  v21 = a3;
  MEMORY[0x182771080]();
  goto LABEL_13;
}
