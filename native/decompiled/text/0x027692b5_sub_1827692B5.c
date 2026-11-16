// sub_1827692B5
// rva 0x027692b5  size 198  section .text  group text
// window base 0x1827692b5: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_1827692B5(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        int a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        __int64 a26,
        _QWORD *a27)
{
  int v27; // eax
  __int64 v28; // rdx

  if ( v27 != 0 )
  {
    if ( a27[10] != 0 )
    {
      if ( a27[6] == 0 )
      {
        v28 = a27[5];
        if ( (v28 & 2) == 0 )
        {
          if ( (v28 & 4) == 0 )
            JUMPOUT(0x18276937BLL);
          JUMPOUT(0x304EB230ELL);
        }
        JUMPOUT(0x182769526LL);
      }
      JUMPOUT(0x1827693ACLL);
    }
    JUMPOUT(0x182769396LL);
  }
  JUMPOUT(0x18276938ELL);
}
