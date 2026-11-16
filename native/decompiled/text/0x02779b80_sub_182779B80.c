// sub_182779B80
// rva 0x02779b80  size 94  section .text  group text
// window base 0x182779b80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_182779B80(int a1, int a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  int v7; // r9d
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  char v12; // [rsp+0h] [rbp-18h] BYREF
  __int64 v13; // [rsp+8h] [rbp-10h]
  __int64 v14; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB83C0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_182779BE0();
  }
  else
  {
    *(_DWORD *)(a5 + 16) = (unsigned __int64)(a3 - v5) >> 3;
    v7 = v5 + 8 * *(_DWORD *)(a5 + 16);
    v13 = a3;
    v14 = a5;
    result = sub_1827829A0(a1, a2, a3: (int)v5 + 376656272, a4, a5: v7, a6: a5, a7: v12);
    if ( *(int *)(v6 + 16) <= 0 )
      return sub_18277F280(a1: v10, a2: v11, a3: v9);
  }
  return result;
}
