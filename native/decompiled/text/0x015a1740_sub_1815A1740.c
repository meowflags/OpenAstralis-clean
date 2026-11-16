// sub_1815A1740
// rva 0x015a1740  size 1215  section .text  group text
// window base 0x1815a1740: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815A1740(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, _DWORD *a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // eax
  _DWORD *v13; // rsi
  __int64 v14; // rdi
  unsigned int v15; // r9d
  int v16; // r10d
  __int64 v17; // r11
  _DWORD *v18; // rcx
  _DWORD *v19; // rbp
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // r10
  __int64 v25; // rdi
  __int64 v26; // r9
  _DWORD *v27; // rsi
  __int64 v28; // rbp
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r8
  _DWORD *v32; // rbx
  __int64 v33; // rdx
  __int64 v34; // rsi
  __int64 v35; // rdi
  __int64 v36; // rcx
  int v37; // eax
  unsigned int v38; // r9d
  unsigned int v39; // eax
  __int64 result; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // [rsp+0h] [rbp-78h] BYREF
  __int64 v48; // [rsp+8h] [rbp-70h]
  _DWORD *v49; // [rsp+10h] [rbp-68h]
  __int64 v50; // [rsp+18h] [rbp-60h]
  int v51; // [rsp+24h] [rbp-54h]
  _DWORD *v52; // [rsp+28h] [rbp-50h]
  __int64 v53; // [rsp+30h] [rbp-48h]
  unsigned int v54; // [rsp+3Ch] [rbp-3Ch]
  _DWORD *v55; // [rsp+40h] [rbp-38h]
  __int64 v56; // [rsp+48h] [rbp-30h]
  _DWORD *v57; // [rsp+50h] [rbp-28h]
  unsigned int *v58; // [rsp+58h] [rbp-20h]
  unsigned int v59; // [rsp+64h] [rbp-14h]
  int v60; // [rsp+68h] [rbp-10h]
  unsigned int v61; // [rsp+6Ch] [rbp-Ch]
  int v62; // [rsp+70h] [rbp-8h]
  unsigned int v63; // [rsp+74h] [rbp-4h]

  v58 = a3;
  v57 = a5;
  if ( (unsigned __int64)&v47 <= *(_QWORD *)(v9 + 8) )
  {
    MEMORY[0x181EB84E0]();
LABEL_44:
    v41 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v41 + 48) <= *(_QWORD *)(v9 + 32) )
    {
      *(_QWORD *)(v9 + 40) = v41 + 48;
      *(_DWORD *)v41 = 34101256;
      *(_DWORD *)(v41 + 4) = 0;
      *(_QWORD *)(v41 + 8) = 0;
      *(_QWORD *)(v41 + 16) = 0;
      *(_QWORD *)(v41 + 24) = 0;
      *(_QWORD *)(v41 + 32) = 0;
      *(_QWORD *)(v41 + 40) = 0;
LABEL_46:
      *(_DWORD *)(v41 + 20) = 46923644;
      *(_DWORD *)(v41 + 16) = v8[93585974];
      *(_DWORD *)(v41 + 12) = (unsigned __int64)(v41 - (_QWORD)v8) >> 3;
      v56 = v41;
      MEMORY[0x18503B9A0](a1, a2, a3: v41, a4, a5: 0);
      v45 = v56;
      goto LABEL_47;
    }
LABEL_56:
    v41 = MEMORY[0x181EAA920](a1, a2, a3: 34101256);
    goto LABEL_46;
  }
  if ( a5 == v8 )
    goto LABEL_44;
  v10 = a3[1];
  v56 = (__int64)&v8[2 * v10];
  if ( (_DWORD)v10 == 0 )
    goto LABEL_48;
  v11 = (unsigned int)v8[2 * v10 + 3];
  v12 = a3[4];
  v13 = &v8[2 * v11];
  v55 = v13;
  if ( v12 >= 0 )
  {
    v14 = a3[6];
    goto LABEL_6;
  }
  v14 = (unsigned int)v8[2 * v10 + 11];
  a3[6] = v14;
  if ( (_DWORD)v11 == 0 )
  {
    MEMORY[0x182771080]();
LABEL_54:
    MEMORY[0x182771220](a1: v14, a2: v13, a3: v59, a4: v18, a5: v38);
LABEL_55:
    MEMORY[0x182770780](a1: v25, a2: v27, a3: v22, a4: v18, a5: v23, a6: v26);
    goto LABEL_56;
  }
  v12 = v8[2 * v11 + 2];
  a3[4] = v12;
LABEL_6:
  v63 = v14;
  v62 = v12;
  if ( (_DWORD)v11 == 0 )
    goto LABEL_49;
  v15 = v8[2 * v11 + 2];
  if ( v12 > v15 )
  {
    result = v63;
    goto LABEL_35;
  }
  v16 = a3[3];
  if ( v16 < 0 )
  {
    result = v63;
    goto LABEL_35;
  }
  v54 = v10;
  a3[3] = v12;
  v17 = a3[2];
  if ( v12 > v16 || (_DWORD)v17 != 0 )
  {
    v61 = v15;
    a3[2] = 0;
    v60 = (unsigned __int16)v8[2 * v8[2 * (*a5 >> 3) + 5]
                             + 3
                             + (v8[2 * (*a5 >> 3) + 11] & (0x636u >> HIBYTE(v8[2 * (*a5 >> 3) + 11])))];
    v18 = v8 + 94153502;
    v53 = (__int64)(v8 + 94153502);
    v59 = v16;
    v19 = &v8[2 * v17];
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v19 == v8 )
        {
          v38 = v61;
          v37 = v59 + 1;
          if ( v61 <= v59 )
            goto LABEL_54;
          v14 = v59;
          v13 = v55;
          v18 = &v8[2 * v55[v59 + 3]];
        }
        else
        {
          v20 = *(_QWORD *)&v8[2 * (*v19 >> 3) + 38];
          v52 = v19;
          v21 = ((__int64 (__fastcall *)(__int64, _DWORD *, _DWORD *))(v7 + v20))(a1: v14, a2: v13, a3: v19);
          v18 = &v8[2 * v52[6]];
          if ( (_DWORD *)v21 == v8 )
          {
            v37 = v59;
          }
          else
          {
            if ( v53 == v21 )
              v24 = (__int64)v8;
            else
              v24 = v21;
            v25 = v59;
            v26 = v61;
            v27 = v55;
            v28 = (unsigned int)v52[5];
            if ( v60 != 1590 )
              goto LABEL_55;
            v29 = *(_QWORD *)(v9 + 40);
            v30 = v29 + 24;
            if ( (unsigned __int64)(v29 + 24) > *(_QWORD *)(v9 + 32) )
            {
              v52 = &v8[2 * v28];
              v51 = v28;
              v50 = v24;
              v49 = v18;
              v48 = v21;
              v31 = MEMORY[0x181EAA920](a1: v59, a2: v55, a3: 34436688, a4: v18, a5: v30, a6: v61);
              LODWORD(v28) = v51;
              v24 = v50;
            }
            else
            {
              *(_QWORD *)(v9 + 40) = v30;
              *(_DWORD *)v29 = 34436688;
              *(_DWORD *)(v29 + 4) = 0;
              *(_QWORD *)(v29 + 8) = 0;
              *(_QWORD *)(v29 + 16) = 0;
              v31 = v29;
              v52 = &v8[2 * v28];
              v49 = v18;
              v48 = v21;
            }
            v32 = v57;
            *(_DWORD *)(v31 + 8) = v28;
            *(_DWORD *)(v31 + 4) = (unsigned __int64)(v24 - (_QWORD)v8) >> 3;
            v33 = *v32 >> 3;
            v34 = (unsigned int)v8[2 * v33 + 11];
            v35 = (unsigned int)v34 & (0x636u >> HIBYTE(v8[2 * v33 + 11]));
            v36 = *(_QWORD *)((char *)&v8[2 * v33] + HIWORD(v8[2 * (unsigned int)v8[2 * v33 + 5] + 3 + v35]));
            v50 = v24;
            ((void (__fastcall *)(__int64, __int64, _DWORD *, __int64, __int64, __int64))(v7 + v36))(
              a1: v35,
              a2: v34,
              a3: v32,
              a4: v36,
              a5: v31,
              a6: v26);
            v18 = v49;
            v37 = v59;
          }
        }
        if ( v18 != v8 )
          break;
        if ( v62 <= v37 )
        {
          result = v63;
          v10 = v54;
          goto LABEL_35;
        }
        if ( *(int *)(v9 + 16) <= 0 )
        {
LABEL_30:
          v39 = MEMORY[0x18277F280]();
          v19 = v18;
          v59 = v39;
        }
        else
        {
          v19 = v18;
          v59 = v37;
        }
      }
      if ( *(int *)(v9 + 16) <= 0 )
        goto LABEL_30;
      v19 = v18;
      v59 = v37;
    }
  }
  result = v63;
LABEL_35:
  if ( (_DWORD)result != v8[2 * v10 + 11] )
  {
    while ( 1 )
    {
      v46 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v46 + 40) > *(_QWORD *)(v9 + 32) )
      {
        v46 = MEMORY[0x181EAA920](a1: v14, a2: v13, a3: 34449872);
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v46 + 40;
        *(_DWORD *)v46 = 34449872;
        *(_DWORD *)(v46 + 4) = 0;
        *(_QWORD *)(v46 + 8) = 0;
        *(_QWORD *)(v46 + 16) = 0;
        *(_QWORD *)(v46 + 24) = 0;
        *(_QWORD *)(v46 + 32) = 0;
      }
      *(_DWORD *)(v46 + 20) = 46923644;
      *(_DWORD *)(v46 + 16) = v8[93585974];
      *(_DWORD *)(v46 + 12) = (unsigned __int64)(v46 - (_QWORD)v8) >> 3;
      v53 = v46;
      MEMORY[0x18503B9A0](a1: v14, a2: v13, a3: v46, a4: v46, a5: 0);
      v45 = v53;
LABEL_47:
      MEMORY[0x182769900](a1: v43, a2: v44, a3: v45, a4: v42, a5: &a7);
LABEL_48:
      MEMORY[0x182771080]();
LABEL_49:
      MEMORY[0x182771080]();
    }
  }
  if ( *(int *)(v9 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
