// sub_1E9D4C0
// rva 0x01e9d4c0  size 94  section .text  group text
// window base 0x181e9d4c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_1E9D4C0(int a1, __int64 a2, int a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rdi
  char v10; // [rsp+0h] [rbp-18h] BYREF
  __int64 v11; // [rsp+8h] [rbp-10h]
  __int64 v12; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v7 + 8) )
  {
    v11 = a6;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v10);
    goto LABEL_6;
  }
  if ( a5 == v6 )
  {
LABEL_6:
    sub_2771080();
    __builtin_debugtrap();
    __builtin_debugtrap();
    sub_1E9D520();
    return;
  }
  v8 = v6 + 8LL * *(unsigned int *)(a5 + 4);
  v9 = v6 + 8LL * *(unsigned int *)(a5 + 8);
  v12 = a5;
  v11 = a6;
  sub_1E9C8A0(a1: 1, a2, a3: v8, a4: a6, a5: v9);
  if ( *(int *)(v7 + 16) <= 0 )
    sub_277F280();
}
