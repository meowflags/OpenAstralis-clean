// sub_182780D60
// rva 0x02780d60  size 122  section .text  group text
// window base 0x182780d60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182780D60()
{
  __int64 v0; // r15
  __int64 v1; // rcx
  __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v5; // [rsp+0h] [rbp-38h] BYREF
  char v6; // [rsp+10h] [rbp-28h] BYREF
  void *v7; // [rsp+18h] [rbp-20h]
  __int64 *v8; // [rsp+20h] [rbp-18h]
  __int64 v9; // [rsp+28h] [rbp-10h]

  v7 = nullptr;
  v8 = nullptr;
  v9 = *(_QWORD *)(v0 + 56);
  *(_QWORD *)(v0 + 56) = &v6;
  v7 = &loc_182780D8C;
  v8 = &v5;
  *(_DWORD *)(v0 + 20) = 3;
  sub_182780DE0();
  result = (unsigned int)__sync_val_compare_and_swap((volatile signed __int32 *)(v0 + 20), 3, 1);
  if ( (_DWORD)result != 3 )
    return sub_18277F4A0(a1: v2, a2: v3, a3: 1, a4: v1, a5: 1u);
  *(_QWORD *)(v0 + 56) = *(_QWORD *)(*(_QWORD *)(v0 + 56) + 24LL);
  return result;
}
