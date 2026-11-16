// sub_5033760
// rva 0x05033760  size 89  section .text  group text
// window base 0x185033760: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_5033760(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 result; // rax
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rdi
  __int64 v13; // rsi
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // [rsp+0h] [rbp-18h] BYREF
  __int64 v17; // [rsp+8h] [rbp-10h]
  __int64 v18; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v18 = a3;
  result = sub_5032900(a1, a2, a3);
  if ( result == v7 )
    return sub_185033796(a1: v12, a2: v13, a3: v10, a4: v11, a5: v14, a6: v15, a7);
  v17 = result;
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280(a1: v12, a2: v13, a3: v10, a4: v17);
  return result;
}
