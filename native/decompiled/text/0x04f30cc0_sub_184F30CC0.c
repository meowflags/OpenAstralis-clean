// sub_184F30CC0
// rva 0x04f30cc0  size 262  section .text  group text
// window base 0x184f30cc0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F30CC0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 (__fastcall *v8)(__int64, __int64, _DWORD *); // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 result; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdx
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // [rsp+0h] [rbp-28h] BYREF
  __int64 v24; // [rsp+10h] [rbp-18h]
  _DWORD *v25; // [rsp+18h] [rbp-10h]
  __int64 v26; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v7 + 8) )
  {
    v25 = a5;
    v26 = a3;
    MEMORY[0x181EB84E0]();
  }
  else if ( a5 != v6 )
  {
    v26 = a3;
    v8 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v5 + *(_QWORD *)&v6[2 * (*a5 >> 3) + 64]);
    v25 = a5;
    v9 = v8(a1, a2, a3: a5);
    if ( (_DWORD *)v9 == v6 )
    {
LABEL_16:
      MEMORY[0x182771080](a1: v11, a2: v12, a3: v26, a4: v10, a5: v25);
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
      return sub_184F30DE0();
    }
    v24 = v9;
    if ( (int)MEMORY[0x184FF3F80](a1: v11, a2: v12, a3: v9, a4: v10, a5: 0) < 0 )
    {
      if ( (unsigned int)MEMORY[0x184FF2200](a1: v14, a2: v15, a3: v24, a4: v13, a5: v6 + 93263822) != 0 )
      {
        if ( *(int *)(v7 + 16) <= 0 )
          MEMORY[0x18277F280]();
        return 1;
      }
      else
      {
        result = MEMORY[0x184FECF20](a1: v18, a2: v19, a3: v24, a4: v17, a5: v6 + 93244048);
        if ( *(int *)(v7 + 16) <= 0 )
          return MEMORY[0x18277F280](a1: v21, a2: v22, a3: v20, a4: v24);
      }
    }
    else
    {
      if ( *(int *)(v7 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return 1;
    }
    return result;
  }
  v26 = a3;
  MEMORY[0x182771080]();
  goto LABEL_16;
}
