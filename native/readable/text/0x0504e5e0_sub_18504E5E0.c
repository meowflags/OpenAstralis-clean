// sub_504E5E0
// rva 0x0504e5e0  size 159  section .text  group text
// window base 0x18504e5e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_504E5E0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, _DWORD *a5)
{
  __int64 v5; // r13
  _DWORD *v6; // r14
  __int64 v7; // r15
  __int64 (*v8)(void); // rax
  __int64 result; // rax
  __int64 v10; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v11; // [rsp+8h] [rbp-10h]
  _DWORD *v12; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v7 + 8) )
  {
    v11 = a5;
    v12 = a3;
    sub_1EB84E0();
LABEL_7:
    sub_276FC00(a1, a2, a3: a5, a4: a3, a5: v6 + 10822806);
    __builtin_debugtrap();
    return sub_504E680();
  }
  if ( a5 != v6
    && (unsigned __int16)v6[2 * v6[2 * (*a5 >> 3) + 5]
                          + 3
                          + (v6[2 * (*a5 >> 3) + 11] & (0x1ED8u >> HIBYTE(v6[2 * (*a5 >> 3) + 11])))] != 7896 )
  {
    goto LABEL_7;
  }
  v8 = (__int64 (*)(void))(v5 + *(_QWORD *)&v6[2 * (*a3 >> 3) + 30]);
  v12 = a3;
  v11 = a5;
  result = v8();
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280();
  return result;
}
