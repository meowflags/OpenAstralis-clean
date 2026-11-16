// sub_1932AFC48
// rva 0x132afc48  size 541  section .text  group text
// window base 0x1932afc48: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932AFC48(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, int a5, int a6)
{
  unsigned int v6; // r13d
  unsigned int v8; // r14d
  __int64 v9; // rdx
  _BYTE *v10; // rdi
  __int64 v11; // rsi
  int v12; // r8d
  int v13; // r9d
  int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // rsi
  int v17; // eax
  __int64 v18; // rsi
  _BYTE *i; // rbx
  __int64 v20; // rax
  int v21; // esi
  __int64 v22; // rax
  __int64 v23; // rsi
  _BYTE *v24; // r14
  __int64 v25; // rsi
  __int64 v26; // rax
  int v27; // ebx
  __int64 v28; // rdx
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v32; // [rsp+0h] [rbp-60h]
  __int64 v33; // [rsp+8h] [rbp-58h]
  __int64 v34; // [rsp+10h] [rbp-50h]
  __int64 v35; // [rsp+50h] [rbp-10h] BYREF
  __int64 v36; // [rsp+58h] [rbp-8h] BYREF
  int v39; // [rsp+A8h] [rbp+48h]

  v6 = 0;
  v8 = 0xFFFFFFFF;
  v35 = 0;
  v36 = 0;
  v39 = -1;
  if ( (unsigned int)sub_1932AFE68(a1: 0, a2: 0, a3: (unsigned int)&v35, a4: 238, a5, a6) == 0 )
  {
    if ( (unsigned int)sub_1932AFE68(a1: (_DWORD)v10, a2: v11, a3: (unsigned int)&v36, a4: 6, a5: v12, a6: v13) != 0 )
      goto LABEL_25;
    v14 = MEMORY[0x337570](a1: v10, a2: 400, a3: 0, a4: 0, a5: v35, a6: 0);
    if ( v14 != 0 && v14 != -2147481646 )
      goto LABEL_25;
    v10 = (_BYTE *)MEMORY[0x79AD8](a1: v10, a2: v15, a3: 1, a4: 0);
    if ( v10 == nullptr )
      goto LABEL_25;
    v17 = MEMORY[0x337570](a1: v10, a2: v16, a3: 0, a4: 0, a5: v35, a6: 0);
    if ( v17 != 0 && v17 != -2147481646 )
      goto LABEL_25;
    v18 = 0;
    for ( i = v10; *i != 0; i += v20 + 1 )
    {
      v20 = sub_1932CA1FD(a1: v10, a2: v18, a3: v9, a4: i);
      v18 = (unsigned int)(v21 + 1);
    }
    v22 = MEMORY[0x79AD0](a1: v10, a2: v18, a3: v9, a4: 8LL * (unsigned int)v18);
    a4[2] = v22;
    if ( v22 == 0
      || (*((_DWORD *)a4 + 6) = v23, (unsigned int)MEMORY[0x337550](a1: v10, a2: v23, a3: 0, a4: 0, a5: a4) != 0) )
    {
LABEL_25:
      v11 = v36;
    }
    else
    {
      v24 = v10;
      v25 = v36;
      if ( *v10 != 0 )
      {
        while ( 1 )
        {
          v26 = sub_1932AFEE8(
                  a1: (_DWORD)v10,
                  a2: v25,
                  a3: v25,
                  a4: v35,
                  a5: 0,
                  a6: (_DWORD)v24,
                  a7: v32,
                  a8: v33,
                  a9: v34);
          v36 = v26;
          if ( v26 == 0 )
            break;
          v27 = MEMORY[0x337548](a1: v10, a2: v11, a3: v26, a4: *a4, a5: 0, a6: a4[2] + 8LL * v6);
          v39 = -(v27 != 0);
          MEMORY[0x79AE0](a1: v29, a2: v30, a3: v28, a4: v36);
          if ( v27 != 0 )
            break;
          ++v6;
          v24 += sub_1932CA1FD(a1: v10, a2: v11, a3: v9, a4: v24) + 1;
          if ( *v24 == 0 )
            goto LABEL_16;
        }
      }
      else
      {
LABEL_16:
        MEMORY[0x337560](a1: v10, a2: v25, a3: v9, a4: *a4);
      }
      v8 = v39;
    }
  }
  if ( v35 != 0 )
    MEMORY[0x79AE0](a1: v10, a2: v11, a3: v9, a4: v35);
  if ( v11 != 0 )
    MEMORY[0x79AE0](a1: v10, a2: v11, a3: v9, a4: v11);
  if ( v10 != nullptr )
    MEMORY[0x79AE0](a1: v10, a2: v11, a3: v9, a4: v10);
  return v8;
}
