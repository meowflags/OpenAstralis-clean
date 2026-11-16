// sub_2779440
// rva 0x02779440  size 134  section .text  group text
// window base 0x182779440: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2779440(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, __int64 a5)
{
  _DWORD *v5; // r14
  __int64 v6; // r15
  __int64 result; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v12; // [rsp+8h] [rbp-10h]
  __int64 v13; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0();
    JUMPOUT(0x1827794C6LL);
  }
  if ( a3 == v5 || *a3 >> 3 != 5067607 )
  {
    v13 = a5;
    v12 = a3;
    result = sub_277B2E0();
    if ( *(int *)(v6 + 16) > 0 )
      return result;
    return sub_277F280(a1: v9, a2: v10, a3: v8);
  }
  v13 = a5;
  v12 = a3;
  result = sub_2779220(a1, a2, a3: 0, a4: v13, a5: (__int64)a3, a6: v13);
  if ( *(int *)(v6 + 16) <= 0 )
    return sub_277F280(a1: v9, a2: v10, a3: v8);
  return result;
}
