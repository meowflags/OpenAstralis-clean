// sub_505BE00
// rva 0x0505be00  size 315  section .text  group text
// window base 0x18505be00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_505BE00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rbx
  _DWORD *v11; // rsi
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, _DWORD *, _DWORD *); // rcx
  __int64 result; // rax
  __int64 v15; // [rsp+0h] [rbp-18h] BYREF
  __int64 v16; // [rsp+8h] [rbp-10h]
  _DWORD *v17; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v7 + 8) )
  {
    v17 = a5;
    v16 = a3;
    sub_1EB84E0();
LABEL_9:
    v17 = a5;
    v16 = a3;
    sub_2771080();
    goto LABEL_10;
  }
  if ( a5 != v6
    && (unsigned __int16)v6[2 * v6[2 * (*a5 >> 3) + 5]
                          + 3
                          + (v6[2 * (*a5 >> 3) + 11] & (0x59Du >> HIBYTE(v6[2 * (*a5 >> 3) + 11])))] != 1437 )
  {
LABEL_11:
    sub_276FC00(a1, a2, a3: a5, a4: a3, a5: v6 + 10828194);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    JUMPOUT(0x18505BF40LL);
  }
  v8 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v8 == 0 )
    goto LABEL_9;
  v9 = v6[2 * v8] >> 3;
  if ( (unsigned __int16)v6[2 * v6[2 * v9 + 5] + 3 + (v6[2 * v9 + 11] & (0x1ECFu >> HIBYTE(v6[2 * v9 + 11])))] != 7887 )
  {
LABEL_10:
    v17 = a5;
    v16 = a3;
    sub_2770780();
    goto LABEL_11;
  }
  v16 = a3;
  v10 = v6[2 * v8] >> 3;
  v11 = &v6[2 * v6[2 * v10 + 5]];
  v12 = v6[2 * v10 + 11] & (0x1ECFu >> HIBYTE(v6[2 * v10 + 11]));
  v13 = (__int64 (__fastcall *)(__int64, _DWORD *, _DWORD *))(v5
                                                            + *(_QWORD *)((char *)&v6[2 * v10 + 34]
                                                                        + HIWORD(v11[v12 + 3])));
  v17 = a5;
  result = v13(a1: v12, a2: v11, a3: &v6[2 * v8]);
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280();
  return result;
}
