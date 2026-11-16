// sub_5058520
// rva 0x05058520  size 466  section .text  group text
// window base 0x185058520: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_5058520(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        int a7,
        int a8,
        __int64 a9,
        __int64 a10,
        int a11,
        __int64 a12)
{
  __int64 v12; // r13
  _DWORD *v13; // r14
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 (__fastcall *v20)(__int64, __int64, _DWORD *, _QWORD, __int64); // rcx
  _DWORD *result; // rax
  int v22; // edx
  int v23; // ecx
  int v24; // edi
  int v25; // esi
  int v26; // r8d
  int v27; // r9d
  __int64 v28; // [rsp+0h] [rbp-38h] BYREF
  __int64 v29; // [rsp+10h] [rbp-28h]
  __int64 v30; // [rsp+18h] [rbp-20h]
  __int64 v31; // [rsp+20h] [rbp-18h]
  _DWORD *v32; // [rsp+28h] [rbp-10h]
  int v33; // [rsp+30h] [rbp-8h]
  unsigned int v34; // [rsp+34h] [rbp-4h]

  v32 = a3;
  if ( (unsigned __int64)&v28 <= *(_QWORD *)(v14 + 8) )
  {
    v31 = a2;
    v30 = a1;
    v34 = a6;
    v33 = a5;
    sub_1EB84E0();
LABEL_9:
    result = (_DWORD *)sub_2770780();
LABEL_10:
    sub_276FC00(a1: v30, a2: v31, a3: result, a4: v32, a5: v13 + 10827990, a6: v34);
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
    return (_DWORD *)sub_5058700(a1: v24, a2: v25, a3: v22, a4: v23, a5: v26, a6: v27, a7);
  }
  v15 = *(_QWORD *)(v14 + 40);
  v16 = v15 + 32;
  if ( (unsigned __int64)(v15 + 32) > *(_QWORD *)(v14 + 32) )
    return (_DWORD *)sub_18505866B(a1, a2, (_DWORD)a3, a4: v16, a5, a6, a7, a8, a9, a10, a11, a12);
  *(_QWORD *)(v14 + 40) = v16;
  *(_DWORD *)v15 = 43313488;
  *(_DWORD *)(v15 + 4) = 0;
  *(_QWORD *)(v15 + 8) = 0;
  *(_QWORD *)(v15 + 16) = 0;
  *(_QWORD *)(v15 + 24) = 0;
  v33 = a5;
  v34 = a6;
  v30 = a1;
  v31 = a2;
  v29 = v15;
  sub_5F1C8E0(a1, a2, a3: v15);
  if ( (unsigned __int16)v13[2 * v13[2 * (*v32 >> 3) + 5]
                           + 3
                           + (v13[2 * (*v32 >> 3) + 11] & (0x1E9Du >> HIBYTE(v13[2 * (*v32 >> 3) + 11])))] != 7837 )
    goto LABEL_9;
  v18 = *v32 >> 3;
  v19 = v13[2 * v18 + 11] & (0x16BCu >> HIBYTE(v13[2 * v18 + 11]));
  v20 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64))(v12
                                                                            + *(_QWORD *)((char *)&v13[2 * v18 + 8]
                                                                                        + HIWORD(v13[2 * (unsigned int)v13[2 * v18 + 5] + 3 + v19])));
  result = (_DWORD *)v20(a1: v17, a2: v19, a3: v32, a4: v20, a5: v29);
  if ( result != v13
    && (unsigned __int16)v13[2 * v13[2 * (*result >> 3) + 5]
                           + 3
                           + (v13[2 * (*result >> 3) + 11] & (0x1E9Du >> HIBYTE(v13[2 * (*result >> 3) + 11])))] != 7837 )
  {
    goto LABEL_10;
  }
  if ( *(int *)(v14 + 16) <= 0 )
    return (_DWORD *)sub_277F280();
  return result;
}
