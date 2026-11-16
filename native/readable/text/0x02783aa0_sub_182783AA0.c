// sub_2783AA0
// rva 0x02783aa0  size 62  section .text  group text
// window base 0x182783aa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2783AA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __m128 v12; // xmm0
  char v13; // [rsp+0h] [rbp-18h]
  _DWORD *v14; // [rsp+8h] [rbp-10h]

  result = *(unsigned int *)(v7 + 72);
  if ( (_DWORD)result != 0 )
  {
    v14 = (_DWORD *)(v6 + 8 * result);
    sub_277A500(a1, a2, a3: v14, a4, a5, a6, a7: v13);
    return sub_27802E0(a1: v10, a2: v11, a3: v12, a4: v6 + 376658360, a5: v9, a6: v7, a7: (__int64)v14);
  }
  return result;
}
