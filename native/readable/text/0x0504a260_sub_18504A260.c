// sub_504A260
// rva 0x0504a260  size 294  section .text  group text
// window base 0x18504a260: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_504A260(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v15; // [rsp+10h] [rbp-18h]
  _DWORD *v16; // [rsp+18h] [rbp-10h]
  _DWORD *v17; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v7 + 8) )
  {
    v17 = a5;
    v16 = a3;
    sub_1EB84E0();
    goto LABEL_14;
  }
  if ( a5 == a3 )
  {
    result = 1;
    v17 = a5;
    v16 = a3;
    goto LABEL_6;
  }
  if ( a5 != v6 )
  {
    if ( (unsigned __int16)v6[2 * v6[2 * (*a5 >> 3) + 5]
                            + 3
                            + (v6[2 * (*a5 >> 3) + 11] & (0x575u >> HIBYTE(v6[2 * (*a5 >> 3) + 11])))] != 1397 )
    {
      result = 0;
      v17 = a5;
      v16 = a3;
      goto LABEL_6;
    }
    v9 = (unsigned int)a3[5];
    if ( (_DWORD)v9 != 0 )
    {
      v15 = &v6[2 * a3[1]];
      v17 = a5;
      v16 = a3;
      v10 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v5 + *(_QWORD *)&v6[2 * (v6[2 * v9] >> 3) + 38]))(
              a1,
              a2,
              a3: &v6[2 * v9]);
      result = sub_504A4C0(a1: v12, a2: v13, a3: v15, a4: v11, a5: v10, a6: v17);
      goto LABEL_6;
    }
LABEL_14:
    sub_2771080();
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
    return sub_504A3A0();
  }
  result = 0;
  v17 = a5;
  v16 = a3;
LABEL_6:
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280();
  return result;
}
