// sub_181EC9480
// rva 0x01ec9480  size 147  section .text  group text
// window base 0x181ec9480: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EC9480(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, __int64 a6)
{
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  char v9; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v10; // [rsp+8h] [rbp-10h]
  __int64 v11; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v7 + 8) )
  {
    v10 = a5;
    v11 = a3;
    sub_181EB84E0(a1, a2, a3, a4, (__int64)a5, a6, a7: v9);
LABEL_7:
    MEMORY[0x18276FC00](a1, a2, a3: a5, a4: a3, a5: v6 + 10117322);
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
    return sub_181EC9520();
  }
  if ( a5 != v6 )
  {
    a4 = (unsigned __int16)v6[2 * v6[2 * (*a5 >> 3) + 5]
                            + 3
                            + (v6[2 * (*a5 >> 3) + 11] & (0x1D2Bu >> HIBYTE(v6[2 * (*a5 >> 3) + 11])))];
    if ( (_DWORD)a4 != 7467 )
      goto LABEL_7;
  }
  v11 = a3;
  v10 = a5;
  result = sub_181EC9260(a1, a2, a3: (__int64)a5, a4, (__int64)a5, a6);
  if ( *(int *)(v7 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
