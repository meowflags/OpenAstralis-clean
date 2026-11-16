// sub_185020B00
// rva 0x05020b00  size 384  section .text  group text
// window base 0x185020b00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185020B00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, unsigned int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v9; // rcx
  unsigned int v10; // ebp
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // rdi
  __int64 v14; // r9
  unsigned int v15; // ebp
  __int64 v16; // rcx
  __int64 v17; // [rsp+0h] [rbp-38h] BYREF
  __int64 v18; // [rsp+10h] [rbp-28h]
  unsigned int v19; // [rsp+1Ch] [rbp-1Ch]
  int v20; // [rsp+20h] [rbp-18h]
  int v21; // [rsp+24h] [rbp-14h]
  unsigned int v22; // [rsp+28h] [rbp-10h]
  int v23; // [rsp+2Ch] [rbp-Ch]
  int v24; // [rsp+30h] [rbp-8h]
  int v25; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v17 <= *(_QWORD *)(v7 + 8) )
  {
    v20 = a1;
    v21 = a6;
    v22 = a5;
    MEMORY[0x181EB84E0]();
    goto LABEL_21;
  }
  if ( HIWORD(a5) >= 0x11u )
  {
    v20 = a1;
    v21 = a6;
    v22 = a5;
LABEL_4:
    if ( *(int *)(v7 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return 0xFFFFFFFFLL;
  }
  v9 = (unsigned __int16)((a5 >> 10) - 10304);
  if ( a3 == v6 )
  {
LABEL_21:
    MEMORY[0x182771080](a1, a2, a3, a4: v9);
    return sub_185020C80();
  }
  v25 = (a5 & 0x3FF) + 56320;
  v24 = (unsigned __int16)((a5 >> 10) - 10304);
  v23 = (a5 >> 10) + 55232;
  v22 = a5;
  v10 = *(_DWORD *)(a3 + 8) >> 1;
  v18 = a3;
  v21 = a6;
  v20 = a1;
  v19 = v10;
  MEMORY[0x18632A360](a1: v6 + 376643464, a2: v6 + 376643464, a3: a6, a4: v9, a5: (unsigned int)a1, a6: v10);
  v13 = (unsigned int)(v20 - 1);
  if ( (int)v13 <= v21 )
    goto LABEL_4;
  v14 = (unsigned int)(v21 + 1);
  if ( (_WORD)v23 != *(_WORD *)(v18 + 2 * v21 + 12)
    || (_DWORD)(v16 = *(unsigned __int16 *)(v18 + 2 * (int)v14 + 12)) != v25 )
  {
    while ( (int)v13 > (int)v14 )
    {
      v15 = v14 + 1;
      if ( (_WORD)v23 == *(_WORD *)(v18 + 2 * (int)v14 + 12) )
      {
        v16 = *(unsigned __int16 *)(v18 + (int)(2 * v15) + 12);
        if ( (_DWORD)v16 == v25 )
          goto LABEL_17;
        v14 = v15;
      }
      else
      {
        v14 = v15;
      }
    }
    goto LABEL_4;
  }
  v14 = (unsigned int)v21;
LABEL_17:
  if ( *(int *)(v7 + 16) <= 0 )
    MEMORY[0x18277F280](a1: v13, a2: v11, a3: v18, a4: v16, a5: v12, a6: v14);
  return (unsigned int)v14;
}
