// sub_15B0140
// rva 0x015b0140  size 5105  section .text  group text
// window base 0x1815b0140: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_15B0140(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int64 a5,
        _DWORD *a6)
{
  __int64 v6; // rbx
  unsigned int v7; // ebp
  __int64 v8; // r13
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // rcx
  int v12; // ebx
  unsigned __int64 result; // rax
  __int64 v14; // rdi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // r8
  __int64 v19; // rsi
  __int64 v20; // r8
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rax
  signed __int64 v25; // r8
  __int64 v26; // rbp
  int v27; // edx
  __int64 v28; // rbp
  __int64 v29; // rbp
  unsigned int v30; // r9d
  int v31; // ebx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // rdi
  unsigned __int64 v38; // r9
  unsigned __int64 v39; // rcx
  __int64 v40; // r11
  _DWORD *v41; // rcx
  unsigned int v42; // r9d
  unsigned __int64 v43; // rdx
  unsigned __int64 v44; // r9
  unsigned __int64 v45; // rsi
  _DWORD *v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // rdi
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rax
  int v56; // r9d
  __int64 v57; // r11
  __int64 v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // rdi
  __int64 v61; // [rsp+0h] [rbp-98h] BYREF
  __int64 v62; // [rsp+8h] [rbp-90h]
  _DWORD *v63; // [rsp+10h] [rbp-88h]
  __int64 v64; // [rsp+18h] [rbp-80h]
  __int64 v65; // [rsp+20h] [rbp-78h]
  __int64 v66; // [rsp+28h] [rbp-70h]
  __int64 v67; // [rsp+30h] [rbp-68h]
  __int64 v68; // [rsp+38h] [rbp-60h]
  __int64 v69; // [rsp+40h] [rbp-58h]
  __int64 v70; // [rsp+48h] [rbp-50h]
  unsigned __int64 v71; // [rsp+50h] [rbp-48h]
  int v72; // [rsp+5Ch] [rbp-3Ch]
  unsigned __int64 v73; // [rsp+60h] [rbp-38h]
  unsigned int v74; // [rsp+6Ch] [rbp-2Ch]
  __int64 v75; // [rsp+70h] [rbp-28h]
  unsigned __int64 v76; // [rsp+78h] [rbp-20h]
  signed __int64 v77; // [rsp+80h] [rbp-18h]
  __int64 v78; // [rsp+88h] [rbp-10h]
  __int64 v79; // [rsp+90h] [rbp-8h]

  v78 = a3;
  v77 = a5;
  v63 = a6;
  if ( (unsigned __int64)&v61 <= *(_QWORD *)(v10 + 8) )
  {
    result = sub_1EB84E0(a1, a2, a3, a4: a6);
    goto LABEL_59;
  }
  v62 = v9 + 376614808;
  v11 = *(_QWORD *)(a3 + 56);
  v12 = *(_DWORD *)(a3 + 208);
  v76 = a5 & 0xFFFFFFFFFFFFFF00LL;
  v75 = v11;
  v74 = v12;
  v73 = a5 >> 8;
  result = sub_15AFB80(a1, a2: a5 & 0xFFFFFFFFFFFFFF00LL, a3: v11, a4: v11, a5: a5 >> 8, a6: v12);
  v15 = v78;
  v16 = *(_QWORD *)(v78 + 48);
  v17 = *(unsigned __int8 *)(v16 + (int)result + 12);
  LODWORD(v18) = result + 2;
  if ( (unsigned int)v17 <= 0x4F )
    __asm { jmp     r9; switch jump }
  v42 = *(unsigned __int8 *)(v16 + (int)result + 12);
  v7 = 0;
  v18 = (int)v18;
  v6 = v17 & 3;
  v19 = 34086464;
  if ( (v42 & 3) >= 2 )
  {
    if ( (_DWORD)v6 == 2 )
    {
      v20 = *(__int16 *)(v16 + (int)v18 + 12);
      goto LABEL_11;
    }
    if ( (_DWORD)v6 == 3 )
    {
      v20 = *(int *)(v16 + (int)v18 + 12);
      goto LABEL_11;
    }
LABEL_59:
    v75 = v19;
    v45 = v76;
    v46 = v63;
    v47 = v42 + 128;
    if ( (unsigned int)v47 >= 0x100 )
      goto LABEL_65;
    v48 = v9 + 8LL * *(unsigned int *)(v9 + 4 * v47 + 376353204);
    v74 = v42;
    v73 = result;
    while ( 1 )
    {
      v49 = sub_28C1E80(a1: v14, a2: v45, a3: v48, a4: v46, a5: v18);
      v74 = v50;
      v73 = v49;
      v51 = v9 + 8LL * *(unsigned int *)(v9 + 4LL * (unsigned int)(v6 + 128) + 376353204);
      v72 = v6;
      v24 = sub_28C1E80(a1: v52, a2: v50, a3: v51);
LABEL_62:
      v53 = v30 + 128;
      if ( (unsigned int)v53 >= 0x100 )
      {
        v68 = v24;
        v67 = v40;
        v66 = v22;
        v65 = v6;
        v54 = *(_QWORD *)(v10 + 40);
        if ( (unsigned __int64)(v54 + 16) > *(_QWORD *)(v10 + 32) )
        {
          v74 = v30;
          v54 = sub_1EAA920(a1: v21, a2: v22, a3: v75, a4: v16, a5: v25);
          v30 = v74;
        }
        else
        {
          *(_QWORD *)(v10 + 40) = v54 + 16;
          *(_DWORD *)v54 = 34086464;
          *(_DWORD *)(v54 + 4) = 0;
          *(_QWORD *)(v54 + 8) = 0;
        }
        *(_DWORD *)(v54 + 4) = v30;
        v74 = v30;
      }
      else
      {
        v54 = v9 + 8LL * *(unsigned int *)(v9 + 4 * v53 + 376353204);
        v74 = v30;
        v68 = v24;
        v67 = v40;
        v66 = v22;
        v65 = v6;
      }
      v55 = sub_28C1E80(a1: v21, a2: v22, a3: v54, a4: v16, a5: v25);
      v72 = v56;
      v68 = v55;
      v67 = v57;
      v66 = v58;
      v65 = v6;
      v59 = v9 + 8LL * *(unsigned int *)(v9 + 4LL * (v7 + 128) + 376353204);
      v74 = v7;
      result = sub_28C1E80(a1: v60, a2: v58, a3: v59);
LABEL_65:
      v73 = result;
      v48 = *(_QWORD *)(v10 + 40);
      if ( (unsigned __int64)(v48 + 16) > *(_QWORD *)(v10 + 32) )
      {
        v74 = v42;
        v48 = sub_1EAA920(a1: v14, a2: v45, a3: v75, a4: v46, a5: v18);
        v42 = v74;
      }
      else
      {
        *(_QWORD *)(v10 + 40) = v48 + 16;
        *(_DWORD *)v48 = 34086464;
        *(_DWORD *)(v48 + 4) = 0;
        *(_QWORD *)(v48 + 8) = 0;
      }
      *(_DWORD *)(v48 + 4) = v42;
      v74 = v42;
    }
  }
  if ( (_DWORD)v6 != 0 )
  {
    if ( (_DWORD)v6 != 1 )
      goto LABEL_59;
    v20 = *(char *)(v16 + (int)v18 + 12);
  }
  else
  {
    v20 = 0;
  }
LABEL_11:
  v21 = (unsigned __int8)(v42 & 0xC0) >> 6;
  v40 = -1;
  v75 = 34086464;
  v22 = v76;
  if ( v76 == v77 )
  {
    v31 = v42;
    v32 = result;
    v71 = v76;
    v70 = -1;
    v69 = v20;
LABEL_40:
    v74 = v31;
    v64 = v32;
    sub_15AFCA0(a1: v21, a2: v22, a3: v15, a4: v32, a5: v32, a6: v31);
    sub_15B0000(a1: v34, a2: v35, a3: v78, a4: v33, a5: v64, a6: v74);
    result = (unsigned __int64)(sub_15AFE00(a1: v74, a2: v62, a3: v78, a4: v36, a5: v77, a6: v64) - v9) >> 3;
    v38 = (unsigned __int64)v63;
    v63[1] = result;
    if ( (*(_DWORD *)v38 & 2) != 0 )
    {
      v39 = v38;
      v43 = v38 & 0xFFFFFFFFFFF80000LL;
      result = (v38 & 0xFFFFFFFFFFF80000LL) + 2112;
      v44 = (v38 - result) >> 9;
      if ( *(_BYTE *)(v43 + v44 + 56) != 0 )
        *(_BYTE *)(v43 + v44 + 56) = 0;
    }
    else
    {
      v39 = v38;
    }
    if ( *(int *)(v10 + 16) <= 0 )
      return sub_277F280(a1: v37, a2: v64, a3: v69, a4: v39);
  }
  else
  {
    if ( *(_BYTE *)(v16 + (int)result + 1 + 12) != 0 )
      v22 = *(unsigned __int8 *)(v16 + (int)result + 1 + 12) + v76;
    else
      v22 = 0x7FFFFFFFFFFFFFFFLL;
    if ( (v42 & 0xE00) != 0x200 )
      JUMPOUT(0x302B3C3CFLL);
    v23 = 0;
    v6 = result + *(unsigned __int8 *)(v9 + (unsigned __int8)v42 + 376615684);
    if ( v22 > v77 )
    {
      v41 = v63;
    }
    else
    {
      v24 = v20;
      v25 = v77;
      while ( 1 )
      {
        v26 = *(unsigned __int8 *)((int)v6 + v16 + 12);
        v27 = v6 + 2;
        if ( (unsigned int)v26 <= 0x4F )
          __asm { jmp     r9; switch jump }
        v30 = *(unsigned __int8 *)((int)v6 + v16 + 12);
        v21 = 0;
        v7 = v26 & 3;
        if ( (v30 & 3) >= 2 )
        {
          if ( v7 == 2 )
          {
            v64 = *(__int16 *)(v27 + v16 + 12);
          }
          else
          {
            if ( v7 != 3 )
              goto LABEL_62;
            v64 = *(int *)(v27 + v16 + 12);
          }
        }
        else if ( (v30 & 3) != 0 )
        {
          if ( v7 != 1 )
            goto LABEL_62;
          v64 = *(char *)(v27 + v16 + 12);
        }
        else
        {
          v64 = v24;
        }
        v28 = (unsigned __int8)(v30 & 0xC0) >> 6;
        if ( v22 == v25 )
        {
          v32 = v6;
          v71 = v22;
          v70 = v40;
          v79 = v8;
          v69 = v64;
          v15 = v78;
          v31 = v30;
          goto LABEL_40;
        }
        if ( *(_BYTE *)((int)v6 + 1 + v16 + 12) != 0 )
          v22 += *(unsigned __int8 *)((int)v6 + 1 + v16 + 12);
        else
          v22 = 0x7FFFFFFFFFFFFFFFLL;
        v23 = *(unsigned int *)(v9 + 4 * v28 + 376615652);
        result = *(unsigned __int8 *)(v9 + (unsigned __int8)v30 + 376615684)
               - (__int64)*(int *)(v9 + 4 * v28 + 376615652);
        if ( (v30 & 0xE00) != 0x200 )
          JUMPOUT(0x302B3C5C8LL);
        v21 = 0;
        v29 = v6 + result + (int)v23;
        if ( v22 > v25 )
          break;
        if ( *(int *)(v10 + 16) <= 0 )
          sub_277F280();
        v24 = v64;
        v6 = v29;
      }
      v41 = v63;
      v20 = v64;
    }
    v41[1] = 0;
    if ( *(int *)(v10 + 16) <= 0 )
      return sub_277F280(a1: v21, a2: v22, a3: v23, a4: v41, a5: v20);
  }
  return result;
}
