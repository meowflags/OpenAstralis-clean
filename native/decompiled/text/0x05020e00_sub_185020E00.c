// sub_185020E00
// rva 0x05020e00  size 475  section .text  group text
// window base 0x185020e00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185020E00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  unsigned int v6; // ebp
  __int64 v7; // r15
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rsi
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // rdx
  int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v20; // r8
  unsigned int v21; // r10d
  __int16 v22; // r11
  __int64 v23; // r12
  char v25; // [rsp+0h] [rbp-38h] BYREF
  __int64 v26; // [rsp+8h] [rbp-30h]
  __int64 v27; // [rsp+10h] [rbp-28h]
  unsigned int v28; // [rsp+1Ch] [rbp-1Ch]
  int v29; // [rsp+20h] [rbp-18h]
  int v30; // [rsp+24h] [rbp-14h]
  unsigned int v31; // [rsp+28h] [rbp-10h]
  unsigned int v32; // [rsp+2Ch] [rbp-Ch]
  int v33; // [rsp+30h] [rbp-8h]
  int v34; // [rsp+34h] [rbp-4h]

  v34 = a5;
  v27 = a6;
  if ( (unsigned __int64)&v25 <= *(_QWORD *)(v7 + 8) )
  {
    v33 = a2;
    v19 = a3;
    MEMORY[0x181EB84E0]();
LABEL_28:
    v16 = MEMORY[0x18277F280](a1: v17, a2: v12, a3: v15, a4: v14, a5: v13);
    v14 = v6;
  }
  else
  {
    v26 = a3;
    v33 = a2;
    v32 = a1;
    v31 = a1 - 1 + a2;
    v30 = a1 - 1;
    sub_18501CF00(a1, a2, a3: a1 - 1, a4: v31, a5: a6, a6, a7: v25);
    v8 = *(__int16 *)(v27 + 2 * v30 + 12);
    v9 = *(unsigned __int16 *)(v27 + 2 * v30 + 12);
    v29 = *(unsigned __int16 *)(v27 + 2 * v30 + 12);
    v28 = v8;
    sub_18501CF00(a1: v10, a2: v11, a3: v31, a4: v9, a5: v26, a6: v27, a7: v25);
    v14 = v31;
    v15 = v28;
    v16 = v30;
    v17 = v32;
    v18 = v27;
    v19 = v26;
  }
  while ( 1 )
  {
    while ( 1 )
    {
      v6 = v14 - 1;
      if ( v16 > (int)v14 )
        break;
      v12 = 2 * (int)v14;
      if ( (_WORD)v15 == *(_WORD *)(v19 + v12 + 12) )
        break;
      if ( *(int *)(v7 + 16) <= 0 )
        v16 = MEMORY[0x18277F280](a1: v17, a2: v12, a3: v15, a4: v14, a5: v13, a6: v18);
      v14 = v6;
    }
    if ( v16 > (int)v14 )
      break;
    v12 = v6 - v16;
    v20 = (unsigned int)(v17 - 2);
    if ( (int)v6 <= (int)v12 )
    {
LABEL_23:
      if ( *(int *)(v7 + 16) <= 0 )
        MEMORY[0x18277F280](a1: v17, a2: v12, a3: v15, a4: v14, a5: v20, a6: v18);
      return (unsigned int)(v12 + 1);
    }
    v13 = 2 * (int)v20;
    if ( *(_WORD *)(v19 + (int)(2 * v6) + 12) == *(_WORD *)(v18 + v13 + 12) )
    {
      LODWORD(v13) = v14 - 2;
      v21 = v17 - 3;
      do
      {
        if ( (int)v13 <= (int)v12 )
        {
          v20 = v21;
          goto LABEL_23;
        }
        v22 = *(_WORD *)(v19 + 2 * (int)v13 + 12);
        v23 = (int)(2 * v21);
        v13 = (unsigned int)(v13 - 1);
        --v21;
      }
      while ( v22 == *(_WORD *)(v18 + v23 + 12) );
      if ( *(int *)(v7 + 16) <= 0 )
        goto LABEL_28;
      v14 = v6;
    }
    else
    {
      if ( *(int *)(v7 + 16) <= 0 )
        v16 = MEMORY[0x18277F280](a1: v17, a2: v12, a3: v15);
      v14 = v6;
    }
  }
  if ( *(int *)(v7 + 16) <= 0 )
    MEMORY[0x18277F280](a1: v17, a2: v12, a3: v15, a4: v14, a5: v13, a6: v18);
  return 0xFFFFFFFFLL;
}
