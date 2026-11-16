// sub_2788120
// rva 0x02788120  size 171  section .text  group text
// window base 0x182788120: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2788120(__int64 a1, __int64 a2, _QWORD *a3)
{
  int v3; // r8d
  __int64 v4; // rdi
  __int64 v5; // rsi
  _BYTE v7[360]; // [rsp+10h] [rbp-188h] BYREF
  _BYTE *v8; // [rsp+178h] [rbp-20h]
  __int64 v9; // [rsp+180h] [rbp-18h]
  int *v10; // [rsp+188h] [rbp-10h]
  _QWORD *v11; // [rsp+190h] [rbp-8h]

  v11 = a3;
  v10 = (int *)*a3;
  v3 = *v10;
  if ( *v10 != -1073741819 && v3 != -1073741818 && v3 != -1073741571 )
    return 0;
  v9 = a3[1];
  v8 = v7;
  if ( (unsigned int)sub_15A0140(a1, a2, a3: v9, a4: v9, a5: v7) != 0 )
  {
    sub_159FE20(a1: v4, a2: v5, a3: v11, a4: v9, a5: v9, a6: 1);
    sub_28C1D60();
    JUMPOUT(0x1827881CBLL);
  }
  return 0;
}
