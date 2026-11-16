// sub_1815AFE00
// rva 0x015afe00  size 484  section .text  group text
// window base 0x1815afe00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815AFE00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 result; // rax
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 i; // rdx
  __int64 v20; // [rsp+0h] [rbp-48h] BYREF
  __int64 v21; // [rsp+8h] [rbp-40h]
  unsigned int v22; // [rsp+14h] [rbp-34h]
  __int64 v23; // [rsp+18h] [rbp-30h]
  unsigned int v24; // [rsp+24h] [rbp-24h]
  unsigned __int64 v25; // [rsp+28h] [rbp-20h]
  __int64 v26; // [rsp+30h] [rbp-18h]
  unsigned int v27; // [rsp+3Ch] [rbp-Ch]
  __int64 v28; // [rsp+40h] [rbp-8h]

  v28 = a3;
  v27 = a1;
  if ( (unsigned __int64)&v20 <= *(_QWORD *)(v7 + 8) )
  {
    v26 = a6;
    v25 = a5;
    MEMORY[0x181EB84E0]();
LABEL_20:
    v26 = a6;
    v25 = a5;
    v18 = (unsigned int)(a1 + 128);
    if ( (unsigned int)v18 >= 0x100 )
      goto LABEL_23;
    for ( i = v6 + 8LL * *(unsigned int *)(v6 + 4 * v18 + 376353204); ; *(_DWORD *)(i + 4) = a1 )
    {
      MEMORY[0x1828C1E80](a1, a2, a3: i);
LABEL_23:
      i = *(_QWORD *)(v7 + 40);
      if ( (unsigned __int64)(i + 16) > *(_QWORD *)(v7 + 32) )
      {
        i = MEMORY[0x181EAA920](a1, a2, a3: 34086464);
        a1 = v27;
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
  v8 = (unsigned __int8)(a1 & 0xC0) >> 6;
  if ( (unsigned __int8)(a1 & 0xC0) >> 6 >= 2u )
  {
    if ( (_DWORD)v8 != 2 && (_DWORD)v8 != 3 )
      goto LABEL_20;
    v24 = 0;
LABEL_9:
    v21 = v6 + 376614808;
    v25 = a5;
    v26 = a6;
    v9 = sub_1815AF9A0(a1, a2: a6, a3, a4: v8, a5, a6);
    v12 = v28;
    v13 = *(_QWORD *)(v28 + 128);
    v14 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v14 + 32) > *(_QWORD *)(v7 + 32) )
    {
      v23 = *(_QWORD *)(v28 + 128);
      v22 = v9;
      v14 = MEMORY[0x181EAA920](a1: v10, a2: v11, a3: 35803168);
      v13 = v23;
      v9 = v22;
      v12 = v28;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v14 + 32;
      *(_DWORD *)v14 = 35803168;
      *(_DWORD *)(v14 + 4) = 0;
      *(_QWORD *)(v14 + 8) = 0;
      *(_QWORD *)(v14 + 16) = 0;
      *(_QWORD *)(v14 + 24) = 0;
    }
    *(_QWORD *)(v14 + 16) = (int)v9;
    *(_QWORD *)(v14 + 8) = v13;
    v22 = v9;
    result = MEMORY[0x181DF3680](a1: v21, a2: v11, a3: v24, a4: v12, a5: v14, a6: v12);
    if ( *(int *)(v7 + 16) <= 0 )
      return MEMORY[0x18277F280](a1: v16, a2: v17, a3: v22, a4: v24);
    return result;
  }
  if ( (_DWORD)v8 != 0 )
  {
    if ( (_DWORD)v8 != 1 )
      goto LABEL_20;
    v24 = 1;
    goto LABEL_9;
  }
  if ( *(int *)(v7 + 16) <= 0 )
  {
    v26 = a6;
    v25 = a5;
    MEMORY[0x18277F280]();
  }
  return v6;
}
