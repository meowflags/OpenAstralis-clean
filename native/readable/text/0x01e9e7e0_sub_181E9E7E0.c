// sub_1E9E7E0
// rva 0x01e9e7e0  size 210  section .text  group text
// window base 0x181e9e7e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E9E7E0(
        __int64 a1,
        __int64 a2,
        _QWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        __int64 a14,
        __int64 a15,
        __int64 a16,
        __int64 a17,
        __int64 a18,
        __int64 a19)
{
  __int64 v19; // r15
  __int64 result; // rax
  char v21; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v19 + 8) )
  {
    sub_1EB84E0(a1, a2, (_DWORD)a3, a4, a5, a6, a7: v21);
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
    return sub_1E9E8C0();
  }
  else
  {
    a3[2] = a5;
    *a3 = a6;
    a3[7] = a1;
    a3[5] = a2;
    a3[16] = a4;
    a3[10] = a8;
    a3[6] = a13;
    a3[17] = a14;
    a3[11] = a15;
    a3[4] = a9;
    a3[14] = a10;
    a3[9] = a11;
    a3[15] = a12;
    a3[12] = a16;
    a3[3] = a17;
    a3[1] = a18;
    result = a19;
    a3[8] = a19;
    a3[13] = 0;
    if ( *(int *)(v19 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
