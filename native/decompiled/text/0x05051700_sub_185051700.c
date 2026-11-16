// sub_185051700
// rva 0x05051700  size 462  section .text  group text
// window base 0x185051700: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_185051700(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        __int64 a11)
{
  __int64 v11; // r13
  _DWORD *v12; // r14
  __int64 v13; // r15
  __int64 v14; // rsi
  __int64 v15; // rdi
  __int64 v16; // r8
  _DWORD *result; // rax
  __int64 v18; // rsi
  __int64 v19; // [rsp+0h] [rbp-38h] BYREF
  __int64 v20; // [rsp+10h] [rbp-28h]
  __int64 v21; // [rsp+18h] [rbp-20h]
  __int64 v22; // [rsp+20h] [rbp-18h]
  __int64 v23; // [rsp+28h] [rbp-10h]
  _DWORD *v24; // [rsp+30h] [rbp-8h]

  v24 = a3;
  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v13 + 8) )
  {
    v23 = a1;
    v22 = a6;
    v21 = a5;
    MEMORY[0x181EB84E0]();
LABEL_9:
    result = (_DWORD *)MEMORY[0x182770780]();
LABEL_10:
    MEMORY[0x18276FC00](a1: v23, a2: v18, a3: result, a4: v24, a5: v12 + 10827990, a6: v22);
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
    return (_DWORD *)sub_1850518E0();
  }
  v14 = *(_QWORD *)(v13 + 40);
  if ( (unsigned __int64)(v14 + 32) > *(_QWORD *)(v13 + 32) )
    return (_DWORD *)sub_18505185A(a1, a2: v14, (_DWORD)a3, a4, a5, a6, a7, a8, a9, a10, a11);
  *(_QWORD *)(v13 + 40) = v14 + 32;
  *(_DWORD *)v14 = 43312440;
  *(_DWORD *)(v14 + 4) = 0;
  *(_QWORD *)(v14 + 8) = 0;
  *(_QWORD *)(v14 + 16) = 0;
  *(_QWORD *)(v14 + 24) = 0;
  v23 = a1;
  v20 = v14;
  v21 = a5;
  v22 = a6;
  MEMORY[0x185F25EA0](a1: a6, a2: v12, a3: v14, a4: v21, a5: a1, a6: v21);
  if ( (unsigned __int16)v12[2 * v12[2 * (*v24 >> 3) + 5]
                           + 3
                           + (v12[2 * (*v24 >> 3) + 11] & (0x1E9Du >> HIBYTE(v12[2 * (*v24 >> 3) + 11])))] != 7837 )
    goto LABEL_9;
  v16 = *v24 >> 3;
  result = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *, __int64))(v11
                                                                                            + *(_QWORD *)((char *)&v12[2 * v16 + 8] + HIWORD(v12[2 * v12[2 * v16 + 5] + 3 + (v12[2 * v16 + 11] & (0x16BCu >> HIBYTE(v12[2 * v16 + 11])))]))))(
                       a1: v15,
                       a2: v20,
                       a3: v24,
                       a4: v24,
                       a5: v20);
  if ( result != v12
    && (unsigned __int16)v12[2 * v12[2 * (*result >> 3) + 5]
                           + 3
                           + (v12[2 * (*result >> 3) + 11] & (0x1E9Du >> HIBYTE(v12[2 * (*result >> 3) + 11])))] != 7837 )
  {
    goto LABEL_10;
  }
  if ( *(int *)(v13 + 16) <= 0 )
    return (_DWORD *)MEMORY[0x18277F280]();
  return result;
}
