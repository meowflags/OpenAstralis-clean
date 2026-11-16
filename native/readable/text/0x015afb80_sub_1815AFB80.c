// sub_15AFB80
// rva 0x015afb80  size 271  section .text  group text
// window base 0x1815afb80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15AFB80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rbx
  __int64 v10; // rax
  __int64 i; // rax
  int v12; // [rsp+24h] [rbp-4h]

  if ( a6 == 1 )
    return *(unsigned int *)(a3 + 4 * (int)a5 + 12);
  if ( a6 != 8 )
  {
    v10 = (unsigned int)(a6 + 128);
    if ( (unsigned int)v10 >= 0x100 )
      goto LABEL_11;
    for ( i = v6 + 8LL * *(unsigned int *)(v6 + 4 * v10 + 376353204); ; *(_DWORD *)(i + 4) = a6 )
    {
      sub_28C1E80(a1, a2, a3: i);
LABEL_11:
      i = *(_QWORD *)(v7 + 40);
      if ( (unsigned __int64)(i + 16) > *(_QWORD *)(v7 + 32) )
      {
        v12 = a6;
        i = sub_1EAA920(a1, a2, a3: 34086464);
        a6 = v12;
      }
      else
      {
        *(_QWORD *)(v7 + 40) = i + 16;
        *(_DWORD *)i = 34086464;
        *(_DWORD *)(i + 4) = 0;
        *(_QWORD *)(i + 8) = 0;
      }
    }
  }
  v8 = *(unsigned int *)(a3 + (int)(18 * (a5 >> 3)) + 12);
  if ( (a5 & 7) != 0 )
    v8 += *(unsigned __int16 *)(a3 + (int)(18 * (a5 >> 3) + 2 * ((a5 & 7) - 1) + 4) + 12);
  return v8;
}
