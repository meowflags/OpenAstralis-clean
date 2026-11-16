// JNU_NewStringPlatform
// rva 0x132b105c  size 174  section .text  group text
// window base 0x1932b105c: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall JNU_NewStringPlatform(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, int a5, int a6)
{
  int v6; // ebx
  int v7; // edi
  char v8; // al
  unsigned __int8 v9; // cl
  _BYTE *v10; // r8
  int v11; // r8d
  bool v12; // cf
  int v13; // ecx

  v6 = (int)a3;
  v7 = a4;
  switch ( MEMORY[0x3375F8] )
  {
    case 5:
      v8 = *a3;
      v9 = 0;
      v10 = a3;
      while ( v8 != 0 )
      {
        v9 |= v8;
        v8 = *++v10;
      }
      v11 = (_DWORD)v10 - (_DWORD)a3;
      v12 = v9 < 0x80u;
      v13 = v7;
      if ( v12 )
        return sub_1932B1FC0(a1: v7, a2, (_DWORD)a3, a4: v13, a5: v11, a6);
      break;
    case 2:
      v11 = sub_1932CA1FD(a1: a4, a2, a3, a4: a3);
      LODWORD(a3) = v6;
      v13 = v7;
      return sub_1932B1FC0(a1: v7, a2, (_DWORD)a3, a4: v13, a5: v11, a6);
    case 4:
      return sub_1932B21B0(a1: a4, a2, (_DWORD)a3, a4, a5, a6);
    case 3:
      return sub_1932B22CC(a1: a4, a2, (_DWORD)a3, a4, a5, a6);
    case 0:
      sub_1932B12F8(a1: a4, a2, a3: 542552, a4, a5: 543192, a6);
      return 0;
    default:
      v11 = sub_1932CA1FD(a1: a4, a2, a3, a4: a3);
      LODWORD(a3) = v6;
      v13 = v7;
      break;
  }
  return sub_1932B20C8(a1: v7, a2, (_DWORD)a3, a4: v13, a5: v11, a6);
}
