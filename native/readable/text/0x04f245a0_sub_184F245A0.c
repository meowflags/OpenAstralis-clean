// sub_4F245A0
// rva 0x04f245a0  size 94  section .text  group text
// window base 0x184f245a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F245A0(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 result; // rax
  char v10; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v11; // [rsp+10h] [rbp-8h]

  v11 = a3;
  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v5 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_4F24600();
  }
  else
  {
    sub_4F24380(a1: 8, a2, a3, a4, a5: v4 + 8LL * (unsigned int)a3[4], a6: 0, a7: v10);
    result = sub_6324200(a1: v7, a2: v8, a3: v4 + 8LL * (unsigned int)v11[4], a4: v6, a5: 0);
    if ( *(int *)(v5 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
