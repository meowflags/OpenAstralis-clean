// sub_132C79B0
// rva 0x132c79b0  size 1183  section .text  group text
// window base 0x1932c79b0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char __fastcall sub_132C79B0(_DWORD a1, _DWORD a2, __int64 a3, __int64 a4, int a5)
{
  _UNKNOWN **v5; // rax
  unsigned int v6; // edi
  int v7; // ebx
  int v8; // r10d
  unsigned __int16 *v10; // r14
  __int64 v11; // r12
  int v12; // edx
  int v13; // ecx
  __int16 v14; // si
  __int64 v15; // rbp
  int v16; // r15d
  int v17; // r11d
  int v18; // ecx
  unsigned __int16 v19; // r8
  __int16 v20; // si
  __int64 v21; // rdx
  __int16 v22; // ax
  __int64 v23; // rcx
  int v24; // edx
  __int16 v25; // r8
  int *v26; // r11
  _WORD *v27; // r8
  int v28; // ebx
  int v29; // ecx
  unsigned __int16 v30; // r10
  __int64 v31; // rdx
  int v32; // edx
  __int16 v33; // r10
  int v34; // esi
  int v35; // ecx
  unsigned __int16 v36; // bx
  __int64 v37; // rdx
  int v38; // edx
  __int16 v39; // bx
  unsigned __int16 v40; // r10
  char v41; // cl
  __int64 v42; // rdx
  __int16 v43; // ax
  __int64 v44; // rcx
  __int16 v45; // r10
  int v46; // ecx
  int v47; // esi
  unsigned __int16 v48; // bx
  __int64 v49; // rdx
  int v50; // edx
  __int64 v51; // rdx
  __int16 v52; // ax
  __int64 v53; // rcx
  int v54; // esi
  unsigned __int16 v55; // bx
  __int64 v56; // rdx
  int v57; // eax
  __int16 v58; // bx
  unsigned __int16 v59; // r10
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int16 v62; // r10
  _UNKNOWN *retaddr; // [rsp+20h] [rbp+0h] BYREF

  v5 = &retaddr;
  v6 = *(unsigned __int16 *)(a3 + 2);
  v7 = -1;
  v8 = 0;
  if ( a5 >= 0LL )
  {
    v10 = (unsigned __int16 *)(a3 + 6);
    v11 = a5 + 1LL;
    v12 = v6 != 0 ? 7 : 138;
    LODWORD(v5) = -v6;
    v13 = (v6 != 0) + 3;
    do
    {
      v14 = v8;
      v15 = v6;
      ++v8;
      v16 = v6;
      v6 = *v10;
      if ( v8 < v12 && (_DWORD)v15 == v6 )
        goto LABEL_45;
      if ( v8 >= v13 )
      {
        v26 = (int *)(a4 + 5904);
        v27 = (_WORD *)(a4 + 5900);
        if ( (_DWORD)v15 != 0 )
        {
          if ( v16 != v7 )
          {
            v28 = *(unsigned __int16 *)(a4 + 4 * v15 + 2726);
            v29 = *v26;
            v30 = *(_WORD *)(a4 + 4 * v15 + 2724);
            if ( *v26 <= 16 - v28 )
            {
              v32 = v29 + v28;
              v33 = *v27 | (v30 << v29);
            }
            else
            {
              v31 = *(unsigned int *)(a4 + 40);
              *v27 |= v30 << v29;
              *(_BYTE *)(v31 + *(_QWORD *)(a4 + 16)) = *(_BYTE *)v27;
              *(_BYTE *)((unsigned int)++*(_DWORD *)(a4 + 40) + *(_QWORD *)(a4 + 16)) = *(_BYTE *)(a4 + 5901);
              LODWORD(v31) = *v26;
              ++*(_DWORD *)(a4 + 40);
              v32 = v28 + v31 - 16;
              v33 = v30 >> (16 - *(_BYTE *)v26);
            }
            *v27 = v33;
            LOWORD(v8) = v14;
            *v26 = v32;
          }
          v34 = *(unsigned __int16 *)(a4 + 2790);
          v35 = *v26;
          v36 = *(_WORD *)(a4 + 2788);
          if ( *v26 <= 16 - v34 )
          {
            v38 = v35 + v34;
            v39 = *v27 | (v36 << v35);
          }
          else
          {
            v37 = *(unsigned int *)(a4 + 40);
            *v27 |= v36 << v35;
            *(_BYTE *)(v37 + *(_QWORD *)(a4 + 16)) = *(_BYTE *)v27;
            *(_BYTE *)((unsigned int)++*(_DWORD *)(a4 + 40) + *(_QWORD *)(a4 + 16)) = *(_BYTE *)(a4 + 5901);
            LODWORD(v37) = *v26;
            ++*(_DWORD *)(a4 + 40);
            v38 = v34 + v37 - 16;
            v39 = v36 >> (16 - *(_BYTE *)v26);
          }
          v40 = v8 - 3;
          v41 = v38;
          *v26 = v38;
          if ( v38 > 14 )
          {
            v42 = *(unsigned int *)(a4 + 40);
            v43 = v40 << v41;
            v44 = *(_QWORD *)(a4 + 16);
            LOWORD(v5) = v39 | v43;
            *v27 = (_WORD)v5;
            *(_BYTE *)(v42 + v44) = (_BYTE)v5;
            ++*(_DWORD *)(a4 + 40);
            LOBYTE(v5) = *(_BYTE *)(a4 + 5901);
            *(_BYTE *)(*(unsigned int *)(a4 + 40) + *(_QWORD *)(a4 + 16)) = (_BYTE)v5;
            LOBYTE(v44) = 16 - *(_BYTE *)v26;
            ++*(_DWORD *)(a4 + 40);
            v45 = v40 >> v44;
            *v26 -= 14;
LABEL_31:
            *v27 = v45;
            goto LABEL_39;
          }
          LODWORD(v5) = v38 + 2;
          goto LABEL_30;
        }
        v46 = *v26;
        if ( v8 <= 10 )
        {
          v47 = *(unsigned __int16 *)(a4 + 2794);
          v48 = *(_WORD *)(a4 + 2792);
          if ( v46 <= 16 - v47 )
          {
            v50 = v46 + v47;
            v39 = *v27 | (v48 << v46);
          }
          else
          {
            v49 = *(unsigned int *)(a4 + 40);
            *v27 |= v48 << v46;
            *(_BYTE *)(v49 + *(_QWORD *)(a4 + 16)) = *(_BYTE *)v27;
            *(_BYTE *)((unsigned int)++*(_DWORD *)(a4 + 40) + *(_QWORD *)(a4 + 16)) = *(_BYTE *)(a4 + 5901);
            LODWORD(v49) = *v26;
            ++*(_DWORD *)(a4 + 40);
            v50 = v47 + v49 - 16;
            v39 = v48 >> (16 - *(_BYTE *)v26);
          }
          v40 = v8 - 3;
          *v27 = v39;
          v41 = v50;
          *v26 = v50;
          if ( v50 > 13 )
          {
            v51 = *(unsigned int *)(a4 + 40);
            v52 = v40 << v41;
            v53 = *(_QWORD *)(a4 + 16);
            LOWORD(v5) = v39 | v52;
            *v27 = (_WORD)v5;
            *(_BYTE *)(v51 + v53) = (_BYTE)v5;
            ++*(_DWORD *)(a4 + 40);
            LOBYTE(v5) = *(_BYTE *)(a4 + 5901);
            *(_BYTE *)(*(unsigned int *)(a4 + 40) + *(_QWORD *)(a4 + 16)) = (_BYTE)v5;
            LOBYTE(v53) = 16 - *(_BYTE *)v26;
            ++*(_DWORD *)(a4 + 40);
            v45 = v40 >> v53;
            *v26 -= 13;
            goto LABEL_31;
          }
          LODWORD(v5) = v50 + 3;
LABEL_30:
          v45 = v39 | (v40 << v41);
          *v26 = (int)v5;
          goto LABEL_31;
        }
        v54 = *(unsigned __int16 *)(a4 + 2798);
        v55 = *(_WORD *)(a4 + 2796);
        if ( v46 <= 16 - v54 )
        {
          LODWORD(v5) = v46 + v54;
          v58 = *v27 | (v55 << v46);
        }
        else
        {
          v56 = *(unsigned int *)(a4 + 40);
          *v27 |= v55 << v46;
          *(_BYTE *)(v56 + *(_QWORD *)(a4 + 16)) = *(_BYTE *)v27;
          *(_BYTE *)((unsigned int)++*(_DWORD *)(a4 + 40) + *(_QWORD *)(a4 + 16)) = *(_BYTE *)(a4 + 5901);
          v57 = *v26;
          ++*(_DWORD *)(a4 + 40);
          LODWORD(v5) = v54 + v57 - 16;
          v58 = v55 >> (16 - *(_BYTE *)v26);
        }
        v59 = v8 - 11;
        *v27 = v58;
        *v26 = (int)v5;
        if ( (int)v5 <= 9 )
        {
          v62 = v58 | (v59 << (char)v5);
          LODWORD(v5) = (_DWORD)v5 + 7;
          *v26 = (int)v5;
        }
        else
        {
          v60 = *(unsigned int *)(a4 + 40);
          v61 = *(_QWORD *)(a4 + 16);
          LOWORD(v5) = v58 | (v59 << (char)v5);
          *v27 = (_WORD)v5;
          *(_BYTE *)(v60 + v61) = (_BYTE)v5;
          ++*(_DWORD *)(a4 + 40);
          LOBYTE(v5) = *(_BYTE *)(a4 + 5901);
          *(_BYTE *)(*(unsigned int *)(a4 + 40) + *(_QWORD *)(a4 + 16)) = (_BYTE)v5;
          LOBYTE(v61) = 16 - *(_BYTE *)v26;
          ++*(_DWORD *)(a4 + 40);
          v62 = v59 >> v61;
          *v26 -= 9;
        }
        *v27 = v62;
      }
      else
      {
        do
        {
          v17 = *(unsigned __int16 *)(a4 + 4 * v15 + 2726);
          v18 = *(_DWORD *)(a4 + 5904);
          LOBYTE(v5) = 16 - v17;
          v19 = *(_WORD *)(a4 + 4 * v15 + 2724);
          v20 = *(_WORD *)(a4 + 5900);
          if ( v18 <= 16 - v17 )
          {
            v24 = v18 + v17;
            v25 = v20 | (v19 << v18);
          }
          else
          {
            v21 = *(unsigned int *)(a4 + 40);
            v22 = v19 << v18;
            v23 = *(_QWORD *)(a4 + 16);
            LOWORD(v5) = v20 | v22;
            *(_WORD *)(a4 + 5900) = (_WORD)v5;
            *(_BYTE *)(v21 + v23) = (_BYTE)v5;
            ++*(_DWORD *)(a4 + 40);
            LOBYTE(v5) = *(_BYTE *)(a4 + 5901);
            *(_BYTE *)(*(unsigned int *)(a4 + 40) + *(_QWORD *)(a4 + 16)) = (_BYTE)v5;
            LODWORD(v21) = *(_DWORD *)(a4 + 5904);
            ++*(_DWORD *)(a4 + 40);
            v24 = v17 + v21 - 16;
            v25 = v19 >> (16 - *(_BYTE *)(a4 + 5904));
          }
          *(_WORD *)(a4 + 5900) = v25;
          *(_DWORD *)(a4 + 5904) = v24;
          --v8;
        }
        while ( v8 != 0 );
      }
LABEL_39:
      v8 = 0;
      v7 = v16;
      if ( v6 != 0 )
      {
        if ( (_DWORD)v15 != v6 )
        {
          v12 = 7;
          v13 = 4;
          goto LABEL_45;
        }
        v12 = 6;
      }
      else
      {
        v12 = 138;
      }
      v13 = 3;
LABEL_45:
      v10 += 2;
      --v11;
    }
    while ( v11 != 0 );
  }
  return (char)v5;
}
