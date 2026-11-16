// sub_504B360
// rva 0x0504b360  size 96  section .text  group text
// window base 0x18504b360: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_504B360(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r13
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rax
  __int64 result; // rax
  __int64 v10; // [rsp+0h] [rbp-18h] BYREF
  __int64 v11; // [rsp+10h] [rbp-8h]

  v11 = a3;
  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v5 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_6;
  }
  sub_504AC60(a1, a2, a3);
  v8 = *(unsigned int *)(v11 + 4);
  if ( (_DWORD)v8 == 0 )
  {
LABEL_6:
    sub_2771080();
    return sub_504B3C0();
  }
  result = ((__int64 (__fastcall *)(__int64, __int64, __int64))(v3
                                                              + *(_QWORD *)(v4
                                                                          + 8LL * (*(_DWORD *)(v4 + 8 * v8) >> 3)
                                                                          + 752)))(
             a1: v6,
             a2: v7,
             a3: v4 + 8 * v8);
  if ( *(int *)(v5 + 16) <= 0 )
    return sub_277F280();
  return result;
}
