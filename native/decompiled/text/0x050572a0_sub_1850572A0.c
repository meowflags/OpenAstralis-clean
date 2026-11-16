// sub_1850572A0
// rva 0x050572a0  size 405  section .text  group text
// window base 0x1850572a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_1850572A0(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        int a8,
        __int64 a9,
        int a10)
{
  __int64 v10; // r13
  _DWORD *v11; // r14
  __int64 v12; // r15
  __int64 v13; // rax
  __int64 v14; // rdi
  int v15; // esi
  int v16; // r9d
  _DWORD *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 v21; // rsi
  _DWORD *result; // rax
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // [rsp+0h] [rbp-28h] BYREF
  __int64 v26; // [rsp+10h] [rbp-18h]
  _DWORD *v27; // [rsp+18h] [rbp-10h]
  unsigned int v28; // [rsp+24h] [rbp-4h]

  v27 = a3;
  v28 = a6;
  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v12 + 8) )
  {
    v26 = a5;
    MEMORY[0x181EB84E0]();
    goto LABEL_9;
  }
  v26 = a5;
  v13 = MEMORY[0x185F47C60](a1, a2, a3: a5, a4, a5: a6);
  v17 = v27;
  if ( (unsigned __int16)v11[2 * v11[2 * (*v27 >> 3) + 5]
                           + 3
                           + (v11[2 * (*v27 >> 3) + 11] & (0x1E9Du >> HIBYTE(v11[2 * (*v27 >> 3) + 11])))] != 7837 )
  {
LABEL_9:
    result = (_DWORD *)MEMORY[0x182770780]();
    goto LABEL_10;
  }
  v18 = *(_QWORD *)(v12 + 40);
  v19 = v18 + 24;
  if ( (unsigned __int64)(v18 + 24) > *(_QWORD *)(v12 + 32) )
    return (_DWORD *)sub_1850573D4(a1: v14, a2: v15, a3: (_DWORD)v27, a4: v18, a5: v19, a6: v16, a7, a8, a9, a10);
  *(_QWORD *)(v12 + 40) = v19;
  *(_DWORD *)v18 = 43312848;
  *(_DWORD *)(v18 + 4) = 0;
  *(_QWORD *)(v18 + 8) = 0;
  *(_QWORD *)(v18 + 16) = 0;
  *(_DWORD *)(v18 + 8) = v28;
  *(_DWORD *)(v18 + 4) = (unsigned __int64)(v13 - (_QWORD)v11) >> 3;
  v20 = *v17 >> 3;
  v21 = v11[2 * v20 + 11] & (0x16BCu >> HIBYTE(v11[2 * v20 + 11]));
  result = (_DWORD *)((__int64 (__fastcall *)(__int64, __int64, _DWORD *, _DWORD *))(v10
                                                                                   + *(_QWORD *)((char *)&v11[2 * v20 + 8]
                                                                                               + HIWORD(v11[2 * (unsigned int)v11[2 * v20 + 5] + 3 + v21]))))(
                       a1: v14,
                       a2: v21,
                       a3: v17,
                       a4: v17);
  if ( result != v11
    && (unsigned __int16)v11[2 * v11[2 * (*result >> 3) + 5]
                           + 3
                           + (v11[2 * (*result >> 3) + 11] & (0x1E9Du >> HIBYTE(v11[2 * (*result >> 3) + 11])))] != 7837 )
  {
LABEL_10:
    MEMORY[0x18276FC00](a1: v23, a2: v24, a3: result, a4: v27, a5: v11 + 10827990, a6: v28);
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
    return (_DWORD *)sub_185057440();
  }
  if ( *(int *)(v12 + 16) <= 0 )
    return (_DWORD *)MEMORY[0x18277F280]();
  return result;
}
