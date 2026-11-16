// sub_18504D000
// rva 0x0504d000  size 376  section .text  group text
// window base 0x18504d000: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_18504D000(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        __int64 a8,
        int a9,
        __int64 a10)
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
  __int64 v26; // [rsp+18h] [rbp-10h]
  _DWORD *v27; // [rsp+20h] [rbp-8h]

  v27 = a3;
  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v12 + 8) )
  {
    v26 = a5;
    MEMORY[0x181EB84E0]();
    goto LABEL_9;
  }
  v26 = a5;
  v13 = MEMORY[0x1858ABC60](a1, a2, a3: a5);
  v17 = v27;
  if ( (unsigned __int16)v11[2 * v11[2 * (*v27 >> 3) + 5]
                           + 3
                           + (v11[2 * (*v27 >> 3) + 11] & (0x1E99u >> HIBYTE(v11[2 * (*v27 >> 3) + 11])))] != 7833 )
  {
LABEL_9:
    result = (_DWORD *)MEMORY[0x182770780]();
    goto LABEL_10;
  }
  v18 = *(_QWORD *)(v12 + 40);
  v19 = v18 + 16;
  if ( (unsigned __int64)(v18 + 16) > *(_QWORD *)(v12 + 32) )
    return (_DWORD *)sub_18504D127(a1: v14, a2: v15, a3: (_DWORD)v27, a4: v18, a5: v19, a6: v16, a7, a8, a9, a10);
  *(_QWORD *)(v12 + 40) = v19;
  *(_DWORD *)v18 = 43310160;
  *(_DWORD *)(v18 + 4) = 0;
  *(_QWORD *)(v18 + 8) = 0;
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
                           + (v11[2 * (*result >> 3) + 11] & (0x1E99u >> HIBYTE(v11[2 * (*result >> 3) + 11])))] != 7833 )
  {
LABEL_10:
    MEMORY[0x18276FC00](a1: v23, a2: v24, a3: result, a4: v27, a5: v11 + 10822858);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return (_DWORD *)sub_18504D180();
  }
  if ( *(int *)(v12 + 16) <= 0 )
    return (_DWORD *)MEMORY[0x18277F280]();
  return result;
}
