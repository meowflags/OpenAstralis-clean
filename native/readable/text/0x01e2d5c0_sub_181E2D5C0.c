// sub_1E2D5C0
// rva 0x01e2d5c0  size 1246  section .text  group text
// window base 0x181e2d5c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E2D5C0(__int64 a1, __int64 a2, _QWORD *a3, _QWORD **a4, unsigned int a5)
{
  __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned int v7; // eax
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  _QWORD *v11; // rdx
  unsigned int v13; // [rsp+10h] [rbp-108h]

  if ( a4 == nullptr )
    return 0xFFFFFFFFLL;
  if ( a3 == nullptr )
    return 0xFFFFFFFFLL;
  if ( (unsigned int)sub_1EB78A0(a1, a2, a3: **a4) != 0 )
  {
    v7 = sub_1EB6C20(a1: v5, a2: v6, a3: **a4);
    if ( v7 != 0 )
    {
      v10 = v7;
      v11 = a3;
    }
    else
    {
      v11 = a3;
      if ( MEMORY[0x14]/* 0x14 */ == 3 || MEMORY[0x14]/* 0x14 */ == 2 )
      {
        v10 = 0;
        if ( __sync_val_compare_and_swap((volatile signed __int32 *)0x14, 3, 1) != 3 )
        {
          sub_277F4A0(a1: v8, a2: v9, a3: 1, a4: v7, a5: 0);
          v10 = 0;
          v11 = a3;
        }
      }
      else
      {
        v10 = 0;
      }
    }
    if ( (_DWORD)v10 != 0 )
    {
      return 0xFFFFFFFFLL;
    }
    else
    {
      v13 = sub_207F420(a1: v8, a2: v9, a3: a4, a4: v10, a5: v11, a6: a5);
      sub_28390C0();
      return v13;
    }
  }
  else
  {
    *a3 = 0;
    return 4294967294LL;
  }
}
