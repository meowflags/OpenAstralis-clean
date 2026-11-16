// sub_132C42A4
// rva 0x132c42a4  size 430  section .text  group text
// window base 0x1932c42a4: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_132C42A4(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v4; // r9
  __int64 v6; // r12
  int v8; // edx
  __int64 v9; // r11
  unsigned int v10; // r15d
  int v11; // ecx
  _BYTE *v12; // rbp
  _BYTE *v13; // r8
  unsigned int v14; // r9d
  _BYTE *v15; // rdi
  char v16; // r13
  int v17; // esi
  unsigned int v18; // edx
  _BYTE *v19; // rcx
  _BYTE *v20; // r8
  _BYTE *v21; // rcx
  int v22; // eax
  char v26; // [rsp+38h] [rbp+10h]

  v4 = *(unsigned int *)(a4 + 148);
  v6 = *(_QWORD *)(a4 + 80);
  v8 = *(_DWORD *)(a4 + 164);
  v9 = *(int *)(a4 + 160);
  v10 = *(_DWORD *)(a4 + 184);
  v11 = *(_DWORD *)(a4 + 68);
  v12 = (_BYTE *)(v4 + v6);
  v13 = (_BYTE *)(v4 + v6);
  if ( (unsigned int)v4 <= v11 - 262 )
    v14 = 0;
  else
    v14 = v4 - v11 + 262;
  v15 = v12 + 258;
  v16 = v12[v9 - 1];
  v26 = v12[v9];
  if ( (unsigned int)v9 >= *(_DWORD *)(a4 + 180) )
    JUMPOUT(0x32651E327LL);
  v17 = v8;
  v18 = *(_DWORD *)(a4 + 156);
  if ( v10 <= v18 )
    JUMPOUT(0x32651E335LL);
  do
  {
    v19 = (_BYTE *)(a3 + v6);
    v6 = *(_QWORD *)(a4 + 80);
    if ( v19[(int)v9] == v26 && v19[(int)v9 - 1] == v16 && *v19 == *v13 && v19[1] == v13[1] )
    {
      v20 = v13 + 2;
      v21 = v19 + 2;
      do
      {
        if ( *++v20 != v21[1] )
          break;
        if ( *++v20 != v21[2] )
          break;
        if ( *++v20 != v21[3] )
          break;
        if ( *++v20 != v21[4] )
          break;
        if ( *++v20 != v21[5] )
          break;
        if ( *++v20 != v21[6] )
          break;
        if ( *++v20 != v21[7] )
          break;
        v21 += 8;
        if ( *++v20 != *v21 )
          break;
      }
      while ( v20 < v15 );
      v22 = (_DWORD)v20 - (_DWORD)v12;
      v13 = v12;
      if ( v22 > (int)v9 )
      {
        *(_DWORD *)(a4 + 152) = a3;
        LODWORD(v9) = v22;
        if ( v22 >= (int)v18 )
          break;
        v16 = v15[v22 - 259];
        v26 = v12[v22];
      }
    }
    a3 = *(unsigned __int16 *)(*(_QWORD *)(a4 + 96) + 2LL * (a3 & *(_DWORD *)(a4 + 76)));
    if ( a3 <= v14 )
      break;
    --v17;
  }
  while ( v17 != 0 );
  if ( (unsigned int)v9 > v18 )
    JUMPOUT(0x32651E446LL);
  return (unsigned int)v9;
}
