// sub_1932BFE30
// rva 0x132bfe30  size 1444  section .text  group text
// window base 0x1932bfe30: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1932BFE30(__int64 a1, __int64 a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // ebx
  unsigned __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  signed __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rdi
  signed __int64 v17; // r12
  signed __int64 v18; // r13
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  signed __int64 v22; // r14
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rsi
  int v26; // eax
  __int64 v27; // r13
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rax
  unsigned __int64 v31; // r9
  int v32; // r11d
  __int64 v33; // r10
  __int64 v34; // r13
  int v35; // r13d
  int v36; // eax
  char *v37; // r9
  char *v38; // rax
  __int64 v39; // r11
  char v40; // r8
  unsigned int v41; // eax
  int v42; // ecx
  __int64 v43; // r13
  __int64 v44; // rcx
  __int64 v45; // rdx
  unsigned __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 v49; // rdx
  _DWORD v50[4]; // [rsp+0h] [rbp-A9h] BYREF
  __int64 v51; // [rsp+10h] [rbp-99h]
  char v52; // [rsp+20h] [rbp-89h]
  int v53; // [rsp+24h] [rbp-85h]
  __int64 v54; // [rsp+28h] [rbp-81h]
  __int64 v55; // [rsp+30h] [rbp-79h]
  __int64 v56; // [rsp+38h] [rbp-71h]
  __int64 v57; // [rsp+40h] [rbp-69h]
  char *v58; // [rsp+48h] [rbp-61h]
  char *v59; // [rsp+50h] [rbp-59h]
  __int64 v60; // [rsp+58h] [rbp-51h]
  unsigned __int64 v61; // [rsp+60h] [rbp-49h]
  unsigned __int64 v62; // [rsp+68h] [rbp-41h]
  char v63[10]; // [rsp+70h] [rbp-39h] BYREF
  unsigned __int16 v64; // [rsp+7Ah] [rbp-2Fh]
  unsigned __int8 v65; // [rsp+7Ch] [rbp-2Dh]
  unsigned __int8 v66; // [rsp+7Dh] [rbp-2Ch]
  unsigned __int16 v67; // [rsp+7Eh] [rbp-2Bh]
  unsigned __int8 v68; // [rsp+80h] [rbp-29h]
  unsigned __int8 v69; // [rsp+81h] [rbp-28h]
  unsigned __int16 v70; // [rsp+82h] [rbp-27h]
  _BYTE v71[34]; // [rsp+88h] [rbp-21h] BYREF
  unsigned __int16 v72; // [rsp+AAh] [rbp+1h]
  unsigned __int8 v73; // [rsp+ACh] [rbp+3h]
  unsigned __int8 v74; // [rsp+ADh] [rbp+4h]
  unsigned __int16 v75; // [rsp+AEh] [rbp+5h]
  unsigned __int8 v76; // [rsp+B0h] [rbp+7h]
  unsigned __int8 v77; // [rsp+B1h] [rbp+8h]
  unsigned __int16 v78; // [rsp+B2h] [rbp+9h]
  unsigned __int8 v79; // [rsp+B4h] [rbp+Bh]
  unsigned __int8 v80; // [rsp+B5h] [rbp+Ch]
  unsigned __int16 v81; // [rsp+B6h] [rbp+Dh]
  unsigned __int8 v82; // [rsp+B8h] [rbp+Fh]
  unsigned __int8 v83; // [rsp+B9h] [rbp+10h]
  unsigned __int16 v84; // [rsp+BAh] [rbp+11h]
  unsigned __int8 v85; // [rsp+BCh] [rbp+13h]
  unsigned __int8 v86; // [rsp+BDh] [rbp+14h]
  unsigned __int16 v87; // [rsp+BEh] [rbp+15h]
  __int64 v88; // [rsp+C0h] [rbp+17h]

  v53 = a3;
  v6 = 0;
  *(_QWORD *)(a4 + 80) = 0;
  v7 = 0;
  v8 = sub_1932BF590(a1: a4, a2, a3: (__int64)v63, a4, a5, a6);
  v14 = v8;
  if ( v8 != -1 && v8 != 0 )
  {
    sub_1932BF840(a1: v10, a2: v11, a3: v9, a4: v10);
    v17 = v65 | (unsigned __int64)((v66 | (v67 << 8)) << 8);
    v18 = v68 | (unsigned __int64)((v69 | (v70 << 8)) << 8);
    v19 = v64;
    if ( v17 == 0xFFFFFFFFLL || v18 == 0xFFFFFFFFLL || v64 == 0xFFFF )
    {
      v15 = sub_1932BF76C(a1: v16, a2: v64, a3: (int)v71, a4: v16, a5: v14);
      if ( v15 != -1 )
      {
        v17 = v76
            | (unsigned __int64)((v77 | (v78 << 8)) << 8)
            | ((v79 | (unsigned __int64)((v80 | (v81 << 8)) << 8)) << 32);
        v18 = v82
            | (unsigned __int64)((v83 | (v84 << 8)) << 8)
            | ((v85 | (unsigned __int64)((v86 | (v87 << 8)) << 8)) << 32);
        v19 = v71[32]
            | (unsigned __int64)((v71[33] | (v72 << 8)) << 8)
            | ((v73 | (unsigned __int64)((v74 | (v75 << 8)) << 8)) << 32);
        if ( v17 < 0 || v18 < 0 || v19 > 0x7FFFFFFF )
        {
          v20 = 547080;
          goto LABEL_14;
        }
        v14 = v15;
      }
    }
    if ( v17 <= v14 )
    {
      v22 = v14 - v17;
      *(_QWORD *)(v16 + 160) = v22 - v18;
      if ( v22 - v18 >= 0 )
      {
        v23 = MEMORY[0x79AD0](a1: v16, a2: v19, a3: v15, a4: v17);
        v7 = v23;
        if ( v23 == 0
          || (unsigned int)sub_1932C0524(a1: v16, a2: v19, a3: v23, a4: *(_QWORD *)(v16 + 48), a5: v17, a6: v22) == -1 )
        {
          goto LABEL_15;
        }
        v62 = v17 + v7;
        if ( v53 == -1 )
          JUMPOUT(0x32651A0D5LL);
        v57 = v53;
        v54 = MEMORY[0x79AD8](a1: v16, a2: (unsigned int)v53, a3: 16, a4: v53);
        *(_QWORD *)(v24 + 88) = v54;
        v26 = ((int)v25 / 2) | 1;
        v27 = 4LL * v26;
        v53 = v26;
        *(_DWORD *)(v24 + 112) = v26;
        v29 = MEMORY[0x79AD0](a1: v24, a2: v25, a3: (unsigned int)((int)v25 >> 31), a4: v27);
        v60 = v29;
        *(_QWORD *)(v16 + 104) = v29;
        v30 = v54;
        if ( v54 == 0 && (_DWORD)v19 != 0 )
          goto LABEL_15;
        if ( v29 == 0 )
          goto LABEL_15;
        if ( v53 > 0 )
        {
          sub_1932CA161(a1: v16, a2: v19, a3: 0xFFFFFFFFLL, a4: v29, a5: v27 & 0xFFFFFFFFFFFFFFFCLL);
          v30 = v54;
        }
        v31 = v17 + v7;
        LODWORD(v54) = 0;
        v32 = 0;
        v61 = v17 + v7 - 46;
        v19 = v7;
        if ( v7 <= v61 )
        {
          v33 = v30 + 4;
          v55 = 0;
          v56 = v30 + 4;
          v34 = 0;
          while ( v34 < v57 )
          {
            v35 = *(unsigned __int16 *)(v19 + 28);
            v15 = (*(_BYTE *)(v19 + 3) == 2) & (unsigned __int8)(*(_BYTE *)(v19 + 1) == 75);
            v36 = 0;
            if ( *(_BYTE *)(v19 + 2) != 1 )
              JUMPOUT(0x32651A1C9LL);
            LOBYTE(v36) = *(_BYTE *)v19 == 80;
            if ( ((unsigned int)v15 & v36) == 0 )
            {
              v20 = 547224;
              goto LABEL_14;
            }
            if ( (*(_BYTE *)(v19 + 8) & 1) != 0 )
            {
              v20 = 547264;
              goto LABEL_14;
            }
            if ( (*(_WORD *)(v19 + 10) & 0xFFF7) != 0 )
            {
              v20 = 547304;
              goto LABEL_14;
            }
            if ( v19 + *(unsigned __int16 *)(v19 + 28) + 46LL > v31 )
              goto LABEL_48;
            v37 = (char *)(v19 + 46);
            v59 = (char *)(v19 + 46);
            v38 = (char *)(v19 + 46);
            if ( (unsigned int)v35 >= 9 )
            {
              v39 = 547064;
              v52 = 77;
              while ( 1 )
              {
                v40 = *v38;
                v58 = v38 + 1;
                if ( (unsigned __int8)(v40 - 97) <= 0x19u )
                  JUMPOUT(0x32651A23BLL);
                if ( v52 != v40 )
                  break;
                v52 = *(_BYTE *)++v39;
                v38 = v58;
                if ( v52 == 0 )
                {
                  if ( (unsigned int)sub_1932BF3F8(a1: v16, a2: v19, a3: v19 + 46, a4: v16, a5: v35) != 0 )
                    goto LABEL_15;
                  v37 = v59;
                  v33 = v56;
                  break;
                }
              }
              v32 = v54;
            }
            *(_QWORD *)(v33 + 4) = v22 + v19 - v7;
            v41 = 0;
            if ( v35 != 0 )
            {
              do
              {
                v42 = *v37;
                --v35;
                ++v37;
                v41 = v42 + 31 * v41;
              }
              while ( v35 > 0 );
            }
            v43 = v55;
            *(_DWORD *)(v33 - 4) = v41;
            v34 = v43 + 1;
            v55 = v34;
            v44 = v41 % v53;
            v45 = v60;
            *(_DWORD *)v33 = *(_DWORD *)(v60 + 4 * v44);
            v33 += 16;
            *(_DWORD *)(v45 + 4 * v44) = v32++;
            v28 = *(unsigned __int16 *)(v19 + 32);
            v46 = (unsigned __int64)*(unsigned __int8 *)(v19 + 29) << 8;
            v47 = *(unsigned __int16 *)(v19 + 30);
            LODWORD(v54) = v32;
            v48 = *(unsigned __int8 *)(v19 + 28);
            v15 = v47 + 46;
            v56 = v33;
            v19 += (v48 | v46) + v28 + v15;
            if ( v19 > v61 )
            {
              v31 = v62;
              goto LABEL_56;
            }
            v31 = v17 + v7;
          }
          v49 = 0;
          if ( v17 >= 46 )
          {
            do
            {
              ++v6;
              v31 = *(unsigned __int16 *)(v49 + v7 + 30) + 46LL;
              v28 = v49 + *(unsigned __int16 *)(v49 + v7 + 32);
              v49 = v28 + v31 + *(unsigned __int16 *)(v49 + v7 + 28);
            }
            while ( v49 + 46 <= v17 );
          }
          sub_1932BFE30(a1: v16, a2: v19, a3: v6, a4: v16, a5: v28, a6: v31, a7: v50[0], a8: v50[2], a9: v51);
          goto LABEL_16;
        }
LABEL_56:
        if ( v19 == v31 )
        {
          *(_DWORD *)(v16 + 96) = v32;
          goto LABEL_16;
        }
LABEL_48:
        v20 = 547352;
      }
      else
      {
        v20 = 547168;
      }
    }
    else
    {
      v20 = 547120;
    }
LABEL_14:
    *(_QWORD *)(v16 + 80) = v20;
LABEL_15:
    sub_1932BF840(a1: v16, a2: v19, a3: v15, a4: v16);
LABEL_16:
    MEMORY[0x79AE0](a1: v16, a2: v19, a3: v15, a4: v7);
  }
  return sub_1932C8DE0(a1: v10, a2: v11, a3: v9, a4: (unsigned __int64)v50 ^ v88, a5: v12, a6: v13);
}
