// sub_2773480
// rva 0x02773480  size 91  section .text  group text
// window base 0x182773480: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2773480(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 (*v9)(void); // rax
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  _QWORD v14[7]; // [rsp+0h] [rbp-38h] BYREF

  if ( (unsigned __int64)v14 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_27734E0();
  }
  else
  {
    v14[3] = a2;
    v9 = (__int64 (*)(void))(v6 + *(_QWORD *)(v7 + 8LL * (*a3 >> 3) + 144));
    v14[2] = a3;
    v14[6] = a5;
    v14[5] = a6;
    v14[4] = a1;
    result = v9();
    if ( *(int *)(v8 + 16) <= 0 )
      return sub_277F280(a1: v12, a2: v13, a3: v11);
  }
  return result;
}
