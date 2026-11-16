// sub_1815AF9A0
// rva 0x015af9a0  size 474  section .text  group text
// window base 0x1815af9a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815AF9A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 i; // rax
  unsigned int v15; // [rsp+24h] [rbp-4h]

  v8 = (int)(4 * (a5 >> 8));
  v9 = a1 & 0xE00;
  if ( (a1 & 0x100) != 0 )
    JUMPOUT(0x302B3B9CFLL);
  v10 = (unsigned __int8)(a1 & 0xC0) >> 6;
  switch ( (_DWORD)v10 )
  {
    case 1:
      return *(unsigned int *)(*(_QWORD *)(a3 + 48)
                             + *(unsigned __int8 *)(v6 + (unsigned __int8)a1 + 376614836)
                             + a6
                             + 12LL);
    case 2:
      v12 = a6 + *(unsigned __int8 *)(v6 + (unsigned __int8)a1 + 376614836);
      if ( (a1 & 0x100) != 0 && (_DWORD)v9 == 1024 )
      {
        return (unsigned int)(*(char *)(*(_QWORD *)(a3 + 48) + v12 + 12) + *(_DWORD *)(v8 + *(_QWORD *)(a3 + 40) + 12));
      }
      else if ( (a1 & 0x100) != 0 && (_DWORD)v9 == 1536 )
      {
        return (unsigned int)(*(__int16 *)(v12 + *(_QWORD *)(a3 + 48) + 12) + *(_DWORD *)(v8 + *(_QWORD *)(a3 + 40) + 12));
      }
      else
      {
        return *(unsigned int *)(v12 + *(_QWORD *)(a3 + 48) + 12);
      }
    case 3:
LABEL_6:
      if ( (a1 & 0x100) != 0 && (_DWORD)v9 == 2048 )
        return *(unsigned int *)(*(_QWORD *)(a3 + 40) + v8 + 12);
      else
        return *(unsigned int *)(*(_QWORD *)(a3 + 48)
                               + a6
                               + *(unsigned __int8 *)(v6 + (unsigned __int8)a1 + 376614836)
                               + 12LL);
    default:
      v13 = (unsigned int)(a1 + 128);
      if ( (unsigned int)v13 >= 0x100 )
        goto LABEL_20;
      for ( i = v6 + 8LL * *(unsigned int *)(v6 + 4 * v13 + 376353204); ; *(_DWORD *)(i + 4) = a1 )
      {
        MEMORY[0x1828C1E80](a1, a2: v10, a3: i, a4: v9);
LABEL_20:
        i = *(_QWORD *)(v7 + 40);
        v9 = i + 16;
        if ( (unsigned __int64)(i + 16) > *(_QWORD *)(v7 + 32) )
        {
          v15 = a1;
          i = MEMORY[0x181EAA920](a1, a2: v10, a3: 34086464);
          a1 = v15;
        }
        else
        {
          *(_QWORD *)(v7 + 40) = v9;
          *(_DWORD *)i = 34086464;
          *(_DWORD *)(i + 4) = 0;
          *(_QWORD *)(i + 8) = 0;
        }
      }
      goto LABEL_6;
  }
}
