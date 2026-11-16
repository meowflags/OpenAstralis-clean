// sub_182767140
// rva 0x02767140  size 166  section .text  group text
// window base 0x182767140: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182767140(__int64 a1, __int64 a2, _DWORD *a3, int a4, int a5, int a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  unsigned __int16 v9; // ax
  _DWORD *v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // r8
  char v19; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v20; // [rsp+8h] [rbp-10h]
  int v21; // [rsp+10h] [rbp-8h]
  int v22; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_12;
  }
  v20 = a3;
  if ( a3 == v7 )
  {
LABEL_12:
    sub_182771080(a1, a2, (_DWORD)a3, a4, a5, a6, a7: v19);
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
    return sub_182767200(a1: v16, a2: v17, a3: v14, a4: v15, a5: v18);
  }
  v9 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v6 + *(_QWORD *)&v7[2 * (*a3 >> 3) + 134]))(
         a1,
         a2,
         a3,
         a4: a3);
  v22 = v9;
  if ( v9 != 0 )
  {
    sub_1827677A0(a1: v11, a2: v12, a3: v20);
    for ( result = 1; ; result = (unsigned int)(v21 + 1) )
    {
      v10 = v20;
      if ( v22 <= (int)result )
        break;
      v21 = result;
      sub_1827677A0(a1: v11, a2: v12, a3: v20);
    }
  }
  else
  {
    result = 0;
  }
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_18277F280(a1: v11, a2: v12, a3: v10);
  return result;
}
