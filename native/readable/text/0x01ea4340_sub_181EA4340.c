// sub_1EA4340
// rva 0x01ea4340  size 179  section .text  group text
// window base 0x181ea4340: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_1EA4340(int a1, int a2, _QWORD *a3, __int64 a4, int a5, int a6)
{
  unsigned __int64 result; // rax
  _DWORD *v7; // rcx
  unsigned __int64 v8; // rax
  __int64 v9; // [rsp+0h] [rbp-28h]
  __int64 v10; // [rsp+8h] [rbp-20h]
  _QWORD *v11; // [rsp+10h] [rbp-18h]

  if ( a3[4] != 0 )
    a3[20] += a3[5] - a3[3];
  if ( a5 != 0 )
  {
    sub_1EA3A80(
      a1,
      a2,
      (__int64)a3,
      a4: (__int64)a3,
      a5,
      a6,
      a7: v9,
      a8: v10,
      a9: (__int64)a3,
      a10: (__int64)(a3 + 3));
    a3 = v11;
  }
  result = a3[4];
  if ( result != 0 )
  {
    v7 = (_DWORD *)a3[5];
    if ( result > (unsigned __int64)v7 )
    {
      v8 = result - (_QWORD)v7;
      if ( v8 < 0x10 )
      {
        result = 34080832;
        *v7 = 34080832;
      }
      else
      {
        *(_QWORD *)v7 = 40462248;
        result = (v8 - 12) >> 2;
        v7[2] = result;
      }
    }
    a3[3] = 0;
    a3[5] = 0;
    a3[4] = 0;
  }
  return result;
}
