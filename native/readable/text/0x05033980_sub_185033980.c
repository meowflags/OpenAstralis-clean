// sub_5033980
// rva 0x05033980  size 77  section .text  group text
// window base 0x185033980: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_5033980(int a1, int a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  int v10; // r8d
  int v11; // r9d
  char v13; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v14; // [rsp+10h] [rbp-18h]
  __int64 v15; // [rsp+18h] [rbp-10h]
  __int64 v16; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  v16 = a3;
  v15 = a5;
  v14 = (_DWORD *)sub_5033CE0(a1, a2, a3, a4: a5, a5, a6, a7: v13);
  sub_5031B40(a1: v8, a2: v9, a3: v14, a4: v7, a5: v10, a6: v11, a7: v13);
  if ( *(int *)(v6 + 16) <= 0 )
    sub_277F280();
  return v14;
}
