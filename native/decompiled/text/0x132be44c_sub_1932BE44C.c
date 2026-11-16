// sub_1932BE44C
// rva 0x132be44c  size 393  section .text  group text
// window base 0x1932be44c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932BE44C(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, _QWORD *a6)
{
  signed __int64 v6; // rax
  void *v7; // rsp
  __int64 v8; // rsi
  _QWORD *v9; // rdi
  int v13; // edi
  int v14; // esi
  __int64 v16; // [rsp+0h] [rbp-100h] BYREF
  __int64 v17; // [rsp+8h] [rbp-F8h]
  _QWORD v18[3]; // [rsp+30h] [rbp-D0h] BYREF
  int v19; // [rsp+48h] [rbp-B8h]
  __int64 v20; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v21; // [rsp+1090h] [rbp+F90h]

  v7 = alloca(v6);
  v21 = (unsigned __int64)&v16 ^ MEMORY[0x336F80];
  v8 = *(_QWORD *)(a3 + 24);
  *a6 = 0;
  v9 = a6;
  if ( v8 != 0 )
  {
    sub_1932CA161(a1: a6, a2: v8, a3: 0, a4: v18, a5: 88);
    if ( (unsigned int)sub_1932C5B98(
                         a1: v13,
                         a2: v14,
                         a3: -15,
                         a4: (unsigned int)v18,
                         a5: 547740,
                         a6: 88,
                         a7: v16,
                         a8: v17) != 0 )
    {
      *v9 = v20;
    }
    else
    {
      v19 = *(_DWORD *)(a3 + 16);
      v18[2] = a5;
      if ( v8 > 0 )
        sub_1932C8CD0(a1: v9, a2: v8, a3, a4: *(_QWORD *)(a4 + 56));
      sub_1932C5B34(a1: (_DWORD)v9, a2: v8, a3, a4: (unsigned int)v18, a5, (_DWORD)a6, a7: v16, a8: v17);
    }
  }
  else
  {
    *a6 = 547704;
  }
  return sub_1932C8DE0(a1: v9, a2: v8, a3, a4: (unsigned __int64)&v16 ^ v21, a5, a6);
}
