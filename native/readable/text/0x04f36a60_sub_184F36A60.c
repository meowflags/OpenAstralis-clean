// sub_4F36A60
// rva 0x04f36a60  size 444  section .text  group text
// window base 0x184f36a60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F36A60(
        __int64 a1,
        __int64 a2,
        _DWORD *a3,
        __int64 a4,
        _DWORD *a5,
        int a6,
        int a7,
        int a8,
        __int64 a9)
{
  __int64 v9; // r13
  _DWORD *v10; // r14
  __int64 v11; // r15
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rsi
  unsigned int v16; // eax
  __int64 (__fastcall *v17)(_QWORD, __int64, _DWORD *, _QWORD, _DWORD *, _QWORD); // rcx
  __int64 v18; // rsi
  __int64 result; // rax
  __int64 v20; // [rsp+0h] [rbp-28h] BYREF
  int v21; // [rsp+14h] [rbp-14h]
  _DWORD *v22; // [rsp+18h] [rbp-10h]
  _DWORD *v23; // [rsp+20h] [rbp-8h]

  v23 = a5;
  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v11 + 8) )
  {
    v22 = a3;
    sub_1EB84E0();
    goto LABEL_12;
  }
  if ( a5 != v10 )
  {
    v12 = *a3 >> 3;
    if ( *a5 >> 3 == 4260335 )
      return sub_184F36B7D(a1, a2, (_DWORD)a3, a4: 4260335, (_DWORD)a5, a6, a7, a8, a9);
    v13 = *a5 >> 3;
    if ( SHIWORD(v10[2 * v13 + 15]) >= 2 )
      JUMPOUT(0x184F36BA7LL);
    v22 = a3;
    if ( (unsigned __int16)v10[2 * v10[2 * v13 + 5] + 3 + (v10[2 * v13 + 11] & (0x568u >> HIBYTE(v10[2 * v13 + 11])))] == 1384 )
    {
      v21 = v12;
      v14 = *a5 >> 3;
      v15 = v10[2 * v14 + 11] & (0x568u >> HIBYTE(v10[2 * v14 + 11]));
      v16 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v9
                                                                + *(_QWORD *)((char *)&v10[2 * v14 + 10]
                                                                            + HIWORD(v10[2
                                                                                       * (unsigned int)v10[2 * v14 + 5]
                                                                                       + 3
                                                                                       + v15]))))(
              a1,
              a2: v15,
              a3: a5);
      v17 = (__int64 (__fastcall *)(_QWORD, __int64, _DWORD *, _QWORD, _DWORD *, _QWORD))(v9
                                                                                        + *(_QWORD *)&v10[2 * v21 + 58]);
      result = v17(a1: v16, a2: v18, a3: v22, a4: v17, a5: v23, a6: 0);
      if ( *(int *)(v11 + 16) <= 0 )
        return sub_277F280();
      return result;
    }
LABEL_12:
    sub_2770780(a1, a2, a3: v22);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_4F36C20();
  }
  v22 = a3;
  sub_4F37F40();
  if ( *(int *)(v11 + 16) <= 0 )
    JUMPOUT(0x184F36BE3LL);
  return (__int64)v22;
}
