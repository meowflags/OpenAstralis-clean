// sub_19329FAD9
// rva 0x1329fad9  size 130  section .text  group text
// window base 0x19329fad9: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_19329FAD9(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        __int64 a12)
{
  char v12; // zf
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rax
  _DWORD *v17; // rdi
  __int64 v18; // r11

  if ( v12 )
  {
    v14 = *(_DWORD *)(a3 + 4);
    v15 = a3 + 4;
    if ( v14 != 1752462657 && v14 != 1869052232 || (v16 = a3 + 4, (*(_DWORD *)(a3 + 160) & 0x1000000) == 0) )
    {
LABEL_8:
      if ( (unsigned int)sub_1932A0000(a1: v15, a2, a3, a4: v13) > 1 )
        *(_BYTE *)(v18 + 3) = 1;
      if ( (*(_DWORD *)(v13 + 28) & 0x800000) != 0
        || (*v17 == 1752462657 || *v17 == 1869052232) && (*(_DWORD *)(v13 + 160) & 0x800000) != 0 )
      {
        *(_BYTE *)(v18 + 4) = 1;
      }
      if ( (*(_DWORD *)(v13 + 28) & 0x2000000) != 0 )
        JUMPOUT(0x19329FB5BLL);
      JUMPOUT(0x19329FB60LL);
    }
  }
  else
  {
    v16 = a3 + 4;
  }
  *(_BYTE *)(a4 + 2) = 1;
  v15 = v16;
  goto LABEL_8;
}
