// sub_18501BB00
// rva 0x0501bb00  size 622  section .text  group text
// window base 0x18501bb00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18501BB00(_DWORD *a1, int a2, __int64 a3, __int64 a4, int a5, signed int a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  int v9; // edi
  __int64 v10; // rsi
  unsigned int v11; // ecx
  _DWORD *v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // r9d
  __int64 v16; // rsi
  __int64 v17; // r8
  __int64 v18; // rsi
  void (__fastcall *v19)(_DWORD *, __int64, _DWORD *, _QWORD, _QWORD); // rcx
  unsigned int v21; // ecx
  char v22; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v23; // [rsp+8h] [rbp-30h]
  __int64 v24; // [rsp+10h] [rbp-28h]
  unsigned int v25; // [rsp+1Ch] [rbp-1Ch]
  unsigned int v26; // [rsp+20h] [rbp-18h]
  signed int v27; // [rsp+24h] [rbp-14h]
  int v28; // [rsp+28h] [rbp-10h]
  signed int v29; // [rsp+2Ch] [rbp-Ch]
  __int64 v30; // [rsp+30h] [rbp-8h]

  v24 = a3;
  v29 = a6;
  v23 = a1;
  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_17;
  }
  v28 = a5;
  v27 = a5 + 1;
  sub_18501CF00((_DWORD)a1, a2, a3: a5, a4: a3, a5: a3, a6, a7: v22);
  v11 = *(unsigned __int16 *)(v24 + 2 * v28 + 12);
  v26 = v11;
  if ( v11 < 0xD800 )
  {
    v30 = v6;
    v25 = v27;
    v12 = v23;
    v13 = v24;
  }
  else if ( v11 >= 0xDC00 )
  {
    v30 = v6;
    v25 = v27;
    v12 = v23;
    v13 = v24;
  }
  else if ( v29 > v27 )
  {
    sub_18501CF00(a1: v9, a2: v10, a3: v27, a4: v11, a5: v24, a6: v29, a7: v22);
    v13 = v24;
    v21 = *(unsigned __int16 *)(v24 + 2 * v27 + 12);
    if ( v21 < 0xDC00 )
    {
      v11 = v26;
      v30 = v6;
      v25 = v27;
      v12 = v23;
    }
    else
    {
      if ( v21 >= 0xE000 )
        goto LABEL_19;
      v11 = (v26 << 10) + v21 - 56613888;
      v25 = v28 + 2;
      v12 = v23;
    }
  }
  else
  {
    v30 = v6;
    v25 = v27;
    v12 = v23;
    v13 = v24;
  }
  while ( 1 )
  {
    if ( v12 == v7 )
    {
LABEL_17:
      v27 = v11;
      MEMORY[0x182771080](a1: v12, a2: v10, a3: v13);
      goto LABEL_18;
    }
    v14 = *v12 >> 3;
    v15 = v11;
    v16 = v7[2 * v14 + 11] & (0x641u >> HIBYTE(v7[2 * v14 + 11]));
    if ( (unsigned __int16)v7[2 * (unsigned int)v7[2 * v14 + 5] + 3 + v16] == 1601 )
      break;
LABEL_18:
    MEMORY[0x182770780](a1: v12, a2: v16, a3: v13, a4: v15);
LABEL_19:
    v11 = v26;
    v30 = v6;
    v25 = v27;
    v12 = v23;
  }
  v17 = *v12 >> 3;
  v18 = v7[2 * v17 + 11] & (0x641u >> HIBYTE(v7[2 * v17 + 11]));
  v19 = (void (__fastcall *)(_DWORD *, __int64, _DWORD *, _QWORD, _QWORD))(v6
                                                                         + *(_QWORD *)((char *)&v7[2 * v17]
                                                                                     + HIWORD(v7[2
                                                                                               * (unsigned int)v7[2 * v17 + 5]
                                                                                               + 3
                                                                                               + v18])));
  v27 = v15;
  v19(a1: v12, a2: v18, a3: v12, a4: v19, a5: v15);
  if ( *(int *)(v8 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return v25;
}
