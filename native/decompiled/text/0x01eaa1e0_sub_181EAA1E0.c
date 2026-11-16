// sub_181EAA1E0
// rva 0x01eaa1e0  size 272  section .text  group text
// window base 0x181eaa1e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char *__fastcall sub_181EAA1E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // rax
  _QWORD *v7; // rbx
  char *v8; // rcx
  __int64 v10; // rax
  char *v11; // rax
  char v12; // bl
  char *v13; // rbp
  __int64 v14; // rcx
  char *v15; // rcx
  char *v16; // rax
  char *v17; // [rsp+0h] [rbp-8h]

  v6 = *(_QWORD *)(a3 + 16);
  *(_QWORD *)(a3 + 16) = v6 + a5;
  v7 = *(_QWORD **)(a3 + 8);
  if ( v6 + a5 <= (unsigned __int64)v7 + *v7 )
    return (char *)v6;
  v10 = v7[2];
  if ( v10 != 0 )
    v11 = (char *)v7 + v10;
  else
    v11 = nullptr;
  *(_QWORD *)(a3 + 8) = v11;
  v12 = *(_BYTE *)(v5 + 376654993);
  if ( v11[48] != 0 )
  {
    if ( v12 != 0 )
      v8 = &v11[*((_QWORD *)v11 + 4)];
    else
      v8 = &v11[*(_QWORD *)v11];
  }
  else
  {
    v8 = v11 + 2112;
  }
  v13 = &v8[a5];
  *(_QWORD *)(a3 + 16) = &v8[a5];
  while ( v13 > &v11[*(_QWORD *)v11] )
  {
    v14 = *((_QWORD *)v11 + 2);
    if ( v14 != 0 )
      v15 = &v11[v14];
    else
      v15 = nullptr;
    *(_QWORD *)(a3 + 8) = v15;
    if ( v15[48] != 0 )
    {
      if ( v12 != 0 )
        v16 = &v15[*((_QWORD *)v15 + 4)];
      else
        v16 = &v15[*(_QWORD *)v15];
    }
    else
    {
      v16 = v15 + 2112;
    }
    v13 = &v16[a5];
    *(_QWORD *)(a3 + 16) = &v16[a5];
    v17 = v16;
    v11 = v15;
    v8 = v17;
  }
  return v8;
}
