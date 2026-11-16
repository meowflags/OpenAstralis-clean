// sub_1ED3480
// rva 0x01ed3480  size 173  section .text  group text
// window base 0x181ed3480: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1ED3480(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  unsigned int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  _DWORD *v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // r8
  char v22; // [rsp+0h] [rbp-18h] BYREF
  __int64 v23; // [rsp+8h] [rbp-10h]
  unsigned int v24; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v8 + 8) )
  {
    v23 = a3;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v22);
  }
  else if ( (_DWORD *)a3 != v7 )
  {
    v23 = a3;
    v9 = sub_27C5FA0(a1, a2, a3, a4, a5: 47);
    if ( v9 != -1 )
    {
      v24 = v9;
      v13 = (_DWORD *)sub_27C6140(a1: v11, a2: v12, a3: v23, a4: v10, a5: 1, a6: v9);
      if ( v13 != v7 )
      {
        result = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v6 + *(_QWORD *)&v7[2 * (*v13 >> 3) + 48]))(
                   a1: v14,
                   a2: v15,
                   a3: v13);
        if ( *(int *)(v8 + 16) <= 0 )
          return sub_277F280();
        return result;
      }
LABEL_13:
      sub_2771080(a1: v14, a2: v15, a3: v23);
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
      return sub_1ED3540(a1: v19, a2: v20, a3: v17, a4: v18, a5: v21);
    }
    if ( *(int *)(v8 + 16) <= 0 )
      sub_277F280();
    return (__int64)v7;
  }
  sub_2771080();
  goto LABEL_13;
}
