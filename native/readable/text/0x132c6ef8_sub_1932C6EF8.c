// sub_132C6EF8
// rva 0x132c6ef8  size 1011  section .text  group text
// window base 0x1932c6ef8: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
char __fastcall sub_132C6EF8(_DWORD a1, _DWORD a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rsi
  int *v6; // r10
  __int64 v9; // rdx
  __int64 *v10; // rbx
  int v11; // r8d
  __int64 v12; // rsi
  int v13; // ecx
  __int64 v14; // rsi
  __int64 v15; // r12
  bool v16; // zf
  int v17; // r8d
  int v18; // ecx
  int v19; // edi
  unsigned __int16 v20; // r8
  __int16 v21; // r11
  __int16 v22; // ax
  __int64 v23; // rcx
  __int16 v24; // ax
  _DWORD *v25; // r11
  int v26; // edx
  int v27; // edx
  __int16 v28; // r8
  __int64 v29; // r13
  __int16 v30; // r11
  __int64 v31; // rax
  int v32; // r14d
  unsigned __int16 v33; // di
  __int16 v34; // ax
  __int64 v35; // rcx
  __int16 v36; // ax
  int v37; // edx
  int v38; // edx
  __int16 v39; // di
  int v40; // r14d
  int v41; // r12d
  char v42; // cl
  __int64 v43; // r8
  unsigned __int8 v44; // cl
  __int64 v45; // r13
  char v46; // cl
  int v47; // r12d
  unsigned __int16 v48; // r14
  __int64 v49; // rdx
  __int16 v50; // ax
  __int64 v51; // rcx
  __int16 v52; // ax
  int v53; // eax
  unsigned int *v54; // rdx
  int v55; // r12d
  __int16 v56; // r14
  int v57; // edi
  int v58; // r8d
  __int64 v59; // rcx
  int v60; // esi
  __int64 v61; // rdi
  int v62; // ecx
  unsigned __int16 v63; // r9
  char result; // al
  __int64 v65; // r8
  __int64 v66; // rdx
  char v67; // cl
  int v68; // edx
  __int16 v69; // r9
  _DWORD *v70; // [rsp+8h] [rbp-50h]
  _DWORD *v72; // [rsp+60h] [rbp+8h]
  __int64 *v74; // [rsp+68h] [rbp+10h]
  _DWORD *v77; // [rsp+78h] [rbp+20h]

  v5 = 0;
  v6 = (int *)(a4 + 5904);
  if ( *(_DWORD *)(a4 + 5876) != 0 )
  {
    do
    {
      v9 = *(_QWORD *)(a4 + 5864);
      v10 = (__int64 *)(a4 + 16);
      v11 = *(unsigned __int8 *)(v5 + v9);
      v12 = (unsigned int)(v5 + 1);
      v13 = *(unsigned __int8 *)(v12 + v9);
      v14 = (unsigned int)(v12 + 1);
      v13 <<= 8;
      v15 = *(unsigned __int8 *)(v14 + v9);
      v5 = (unsigned int)(v14 + 1);
      v16 = v13 + v11 == 0;
      v17 = v13 + v11;
      v18 = *v6;
      if ( v16 )
      {
        v19 = *(unsigned __int16 *)(a3 + 4 * v15 + 2);
        v20 = *(_WORD *)(a3 + 4 * v15);
        v21 = *(_WORD *)(a4 + 5900);
        if ( v18 <= 16 - v19 )
        {
          v27 = v18 + v19;
          v28 = v21 | (v20 << v18);
          v25 = (_DWORD *)(a4 + 40);
        }
        else
        {
          v22 = v20 << v18;
          v23 = *v10;
          v24 = v21 | v22;
          v25 = (_DWORD *)(a4 + 40);
          *(_WORD *)(a4 + 5900) = v24;
          *(_BYTE *)((unsigned int)(*(_DWORD *)(a4 + 40))++ + v23) = v24;
          *(_BYTE *)(*(unsigned int *)(a4 + 40) + *v10) = *(_BYTE *)(a4 + 5901);
          v26 = *v6;
          ++*(_DWORD *)(a4 + 40);
          v27 = v19 + v26 - 16;
          v28 = v20 >> (16 - *(_BYTE *)v6);
        }
        *(_WORD *)(a4 + 5900) = v28;
        *v6 = v27;
      }
      else
      {
        v29 = *(unsigned __int8 *)(v15 - 321232896 + 321787552);
        v30 = *(_WORD *)(a4 + 5900);
        v31 = (unsigned int)(v29 + 257);
        v32 = *(unsigned __int16 *)(a3 + 4 * v31 + 2);
        v33 = *(_WORD *)(a3 + 4 * v31);
        if ( v18 <= 16 - v32 )
        {
          v38 = v18 + v32;
          v39 = v30 | (v33 << v18);
          v25 = (_DWORD *)(a4 + 40);
        }
        else
        {
          v34 = v33 << v18;
          v35 = *v10;
          v36 = v30 | v34;
          v25 = (_DWORD *)(a4 + 40);
          *(_WORD *)(a4 + 5900) = v36;
          *(_BYTE *)((unsigned int)(*(_DWORD *)(a4 + 40))++ + v35) = v36;
          *(_BYTE *)(*(unsigned int *)(a4 + 40) + *v10) = *(_BYTE *)(a4 + 5901);
          v37 = *v6;
          ++*(_DWORD *)(a4 + 40);
          v38 = v32 + v37 - 16;
          v39 = v33 >> (16 - *(_BYTE *)v6);
        }
        *(_WORD *)(a4 + 5900) = v39;
        *v6 = v38;
        v40 = *(_DWORD *)(4 * v29 - 321232896 + 321788320);
        v70 = v25;
        v77 = v25;
        v74 = (__int64 *)(a4 + 16);
        v72 = v25;
        if ( v40 != 0 )
        {
          v41 = v15 - *(_DWORD *)(4 * v29 - 321232896 + 321790048);
          v39 |= (_WORD)v41 << v38;
          *(_WORD *)(a4 + 5900) = v39;
          if ( v38 <= 16 - v40 )
          {
            v38 += v40;
            *v6 = v38;
          }
          else
          {
            *(_BYTE *)((unsigned int)(*v25)++ + *v10) = v39;
            *(_BYTE *)((unsigned int)*v25 + *v10) = *(_BYTE *)(a4 + 5901);
            v42 = 16 - *(_BYTE *)v6;
            ++*v25;
            v39 = (unsigned __int16)v41 >> v42;
            *v6 += v40 - 16;
            v38 = *v6;
            *(_WORD *)(a4 + 5900) = (unsigned __int16)v41 >> v42;
          }
        }
        v43 = (unsigned int)(v17 - 1);
        if ( (unsigned int)v43 >= 0x100 )
          v44 = *(_BYTE *)(((unsigned int)v43 >> 7) + 256 - 321232896LL + 321787808);
        else
          v44 = *(_BYTE *)(v43 - 321232896 + 321787808);
        v45 = v44;
        v46 = v38;
        v47 = *(unsigned __int16 *)(a5 + 4 * v45 + 2);
        v48 = *(_WORD *)(a5 + 4 * v45);
        if ( v38 <= 16 - v47 )
        {
          v55 = v38 + v47;
          v54 = v25;
          v25 = (_DWORD *)(a4 + 40);
          v56 = v39 | (v48 << v46);
          v10 = (__int64 *)(a4 + 16);
        }
        else
        {
          v49 = (unsigned int)*v25;
          v50 = v48 << v46;
          v51 = *v10;
          v52 = v39 | v50;
          *(_WORD *)(a4 + 5900) = v52;
          *(_BYTE *)(v49 + v51) = v52;
          *(_BYTE *)((unsigned int)++*v25 + *v10) = *(_BYTE *)(a4 + 5901);
          v53 = *v6;
          v54 = v25;
          ++*v25;
          v55 = v53 - 16 + v47;
          v56 = v48 >> (16 - *(_BYTE *)v6);
        }
        *(_WORD *)(a4 + 5900) = v56;
        *v6 = v55;
        v57 = *(_DWORD *)(4 * v45 - 321232896 + 321788448);
        if ( v57 != 0 )
        {
          v58 = v43 - *(_DWORD *)(4 * v45 - 321232896 + 321790176);
          *(_WORD *)(a4 + 5900) = v56 | ((_WORD)v58 << v55);
          if ( v55 <= 16 - v57 )
          {
            *v6 = v55 + v57;
          }
          else
          {
            v10 = (__int64 *)(a4 + 16);
            v25 = v72;
            *(_BYTE *)(*v54 + *v74) = *(_BYTE *)(a4 + 5900);
            v59 = *v74;
            *(_BYTE *)((unsigned int)++*v77 + v59) = *(_BYTE *)(a4 + 5901);
            *(_WORD *)(a4 + 5900) = (unsigned __int16)v58 >> (16 - *(_BYTE *)v6);
            ++*v70;
            *v6 += v57 - 16;
          }
        }
      }
    }
    while ( (unsigned int)v5 < *(_DWORD *)(a4 + 5876) );
  }
  else
  {
    v25 = (_DWORD *)(a4 + 40);
    v10 = (__int64 *)(a4 + 16);
  }
  v60 = *(unsigned __int16 *)(a3 + 1026);
  v61 = a4 + 5900;
  v62 = *v6;
  v63 = *(_WORD *)(a3 + 1024);
  result = 16 - v60;
  if ( *v6 <= 16 - v60 )
  {
    v68 = v62 + v60;
    v69 = *(_WORD *)v61 | (v63 << v62);
  }
  else
  {
    v65 = (unsigned int)*v25;
    v66 = *v10;
    *(_WORD *)v61 |= v63 << v62;
    *(_BYTE *)(v65 + v66) = *(_BYTE *)v61;
    ++*v25;
    result = *(_BYTE *)(v61 + 1);
    *(_BYTE *)((unsigned int)*v25 + *v10) = result;
    LODWORD(v66) = *v6;
    v67 = 16 - *(_BYTE *)v6;
    ++*v25;
    v68 = v60 + v66 - 16;
    v69 = v63 >> v67;
  }
  *(_WORD *)v61 = v69;
  *v6 = v68;
  return result;
}
