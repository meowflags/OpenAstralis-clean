// sub_1E9D200
// rva 0x01e9d200  size 158  section .text  group text
// window base 0x181e9d200: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E9D200(__int64 a1, __int64 a2, __int64 a3, int a4, unsigned int a5, __int64 a6)
{
  _QWORD *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 result; // rax
  double v14; // xmm0_8
  char v15; // [rsp+0h] [rbp-28h] BYREF
  __int64 v16; // [rsp+8h] [rbp-20h]
  __int64 v17; // [rsp+10h] [rbp-18h]
  unsigned int v18; // [rsp+1Ch] [rbp-Ch]
  __int64 v19; // [rsp+20h] [rbp-8h]

  v16 = a3;
  if ( (unsigned __int64)&v15 <= *(_QWORD *)(v7 + 8) )
  {
    v14 = sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v15);
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1E9D2A0(a1: v14);
  }
  else
  {
    v19 = a6;
    v18 = a5;
    v17 = v6[47081594] + (v6[47081595] << 19);
    v8 = sub_1EA5F20(a1, a2, a3: v6 + 47081598);
    v9 = v6[47081669] + (v6[47081670] << 19) + v8 + v17;
    v10 = v16;
    *(_QWORD *)(v16 + 104) = v9;
    result = sub_1E7C9C0(a1: v11, a2: v12, a3: v10, a4: v9, a5: v18, a6: v19);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
