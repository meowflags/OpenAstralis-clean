// sub_15A86C0
// rva 0x015a86c0  size 172  section .text  group text
// window base 0x1815a86c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15A86C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  _BOOL8 v9; // rdx
  _BYTE v10[12]; // [rsp+10h] [rbp-28h] BYREF
  int v11; // [rsp+1Ch] [rbp-1Ch]
  __int64 v12; // [rsp+20h] [rbp-18h]
  _BYTE *v13; // [rsp+28h] [rbp-10h]
  _QWORD *v14; // [rsp+30h] [rbp-8h]

  v14 = a5;
  v13 = v10;
  v12 = a3;
  result = sub_1EB6540(a1, a2, a3, a4: a3, a5: v10);
  if ( (_DWORD)result == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int32 *)0x14, 3, 1) != 3 )
      sub_277F4A0(a1: v7, a2: v8, a3: 1, a4: v6, a5: 0);
    v9 = *v13 != 0;
    v11 = (char)*v13;
    result = sub_1EB6A20(a1: v7, a2: v8, a3: v9);
    if ( (_DWORD)result == 0 )
    {
      if ( (_BYTE)v11 == 0 )
        sub_1EB79A0();
      *v14 = 0;
      MEMORY[0x14]/* 0x14 */ = 3;
      __faststorefence();
      return 0;
    }
  }
  return result;
}
