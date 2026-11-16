// sub_4F1B600
// rva 0x04f1b600  size 109  section .text  group text
// window base 0x184f1b600: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F1B600(__int64 a1, __int64 a2, __int64 a3, int a4, _DWORD *a5, int a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 (__fastcall *v9)(__int64, __int64, _DWORD *); // rax
  int v10; // eax
  __int64 result; // rax
  char v12; // [rsp+0h] [rbp-18h] BYREF
  __int64 v13; // [rsp+8h] [rbp-10h]
  _DWORD *v14; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v8 + 8) )
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
    return sub_4F1B680();
  }
  else
  {
    if ( a5 == v7 )
    {
      v14 = a5;
      v13 = a3;
      v10 = (_DWORD)v7 + 353301280;
    }
    else
    {
      v13 = a3;
      v9 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v6 + *(_QWORD *)&v7[2 * (*a5 >> 3) + 26]);
      v14 = a5;
      v10 = v9(a1, a2, a3: a5);
    }
    result = sub_4F1C8C0(a1, a2, a3: v13, a4, a5: v10, a6, a7: v12);
    if ( *(int *)(v8 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
