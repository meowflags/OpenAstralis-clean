// sub_1815B0000
// rva 0x015b0000  size 310  section .text  group text
// window base 0x1815b0000: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815B0000(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v11; // rax
  __int64 i; // rax
  int v13; // [rsp+24h] [rbp-4h]

  if ( (a6 & 0x100) != 0 )
    JUMPOUT(0x302B3C018LL);
  v8 = 0;
  v9 = (unsigned __int8)(a6 & 0x30) >> 4;
  if ( v9 >= 2 )
  {
    if ( v9 == 2 )
    {
      return *(unsigned __int16 *)(*(_QWORD *)(a3 + 48)
                                 + *(unsigned __int8 *)(v6 + (unsigned __int8)a6 + 376615380)
                                 + a5
                                 + 12LL);
    }
    else
    {
      if ( v9 != 3 )
      {
LABEL_12:
        v11 = (unsigned int)(a6 + 128);
        if ( (unsigned int)v11 >= 0x100 )
          goto LABEL_15;
        for ( i = v6 + 8LL * *(unsigned int *)(v6 + 4 * v11 + 376353204); ; *(_DWORD *)(i + 4) = a6 )
        {
          MEMORY[0x1828C1E80](a1, a2, a3: i, a4: v8);
LABEL_15:
          i = *(_QWORD *)(v7 + 40);
          v8 = i + 16;
          if ( (unsigned __int64)(i + 16) > *(_QWORD *)(v7 + 32) )
          {
            v13 = a6;
            i = MEMORY[0x181EAA920](a1, a2, a3: 34086464);
            a6 = v13;
          }
          else
          {
            *(_QWORD *)(v7 + 40) = v8;
            *(_DWORD *)i = 34086464;
            *(_DWORD *)(i + 4) = 0;
            *(_QWORD *)(i + 8) = 0;
          }
        }
      }
      return *(unsigned int *)(*(_QWORD *)(a3 + 48)
                             + a5
                             + *(unsigned __int8 *)(v6 + (unsigned __int8)a6 + 376615380)
                             + 12LL);
    }
  }
  else if ( v9 != 0 )
  {
    if ( v9 != 1 )
      goto LABEL_12;
    return 0;
  }
  else
  {
    return -1;
  }
}
