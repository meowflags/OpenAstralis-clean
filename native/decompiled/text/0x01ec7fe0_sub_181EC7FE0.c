// sub_181EC7FE0
// rva 0x01ec7fe0  size 1388  section .text  group text
// window base 0x181ec7fe0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_181EC7FE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // rbp
  __int64 v22; // r9
  __int64 v23; // rsi
  BOOL v24; // r8d
  __int64 v25; // rcx
  __int64 v26; // rax
  int v27; // ebx
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // r8
  __int64 v31; // rdx
  unsigned int v32; // r11d
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdi
  _DWORD *v36; // r9
  __int64 v37; // rsi
  __int64 v38; // r8
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rax
  _DWORD *result; // rax
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // rdx
  __int64 v49; // r9
  __int64 v50; // rdx
  char v51; // [rsp+0h] [rbp-88h] BYREF
  __int64 v52; // [rsp+10h] [rbp-78h]
  __int64 v53; // [rsp+18h] [rbp-70h]
  __int64 v54; // [rsp+20h] [rbp-68h]
  __int64 v55; // [rsp+28h] [rbp-60h]
  _DWORD *v56; // [rsp+30h] [rbp-58h]
  __int64 v57; // [rsp+38h] [rbp-50h]
  __int64 v58; // [rsp+40h] [rbp-48h]
  __int64 v59; // [rsp+48h] [rbp-40h]
  __int64 v60; // [rsp+50h] [rbp-38h]
  int v61; // [rsp+5Ch] [rbp-2Ch]
  unsigned int v62; // [rsp+60h] [rbp-28h]
  unsigned int v63; // [rsp+64h] [rbp-24h]
  __int64 v64; // [rsp+68h] [rbp-20h]
  unsigned int v65; // [rsp+74h] [rbp-14h]
  unsigned int v66; // [rsp+78h] [rbp-10h]
  unsigned int v67; // [rsp+7Ch] [rbp-Ch]
  __int64 v68; // [rsp+80h] [rbp-8h]

  v60 = a3;
  v59 = a5;
  v67 = a6;
  if ( (unsigned __int64)&v51 <= *(_QWORD *)(v8 + 8) )
  {
    v66 = a1;
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v51);
  }
  else if ( (_DWORD *)a5 != v7 )
  {
    v9 = *(unsigned int *)(a5 + 28);
    if ( (_DWORD)v9 == 0 )
    {
LABEL_57:
      v66 = a1;
      MEMORY[0x182771080]();
      goto LABEL_58;
    }
    v10 = (unsigned int)v7[2 * v9 + 11];
    if ( (_DWORD)v10 == 0 )
    {
LABEL_58:
      v66 = a1;
      MEMORY[0x182771080]();
      goto LABEL_59;
    }
    v66 = a1;
    MEMORY[0x1815ABC60](a1, a2, a3: &v7[2 * v10]);
    v13 = *(unsigned int *)(v60 + 4);
    if ( (_DWORD)v13 == 0 )
    {
LABEL_59:
      MEMORY[0x182771080]();
      goto LABEL_60;
    }
    v14 = MEMORY[0x1828A1320](a1: v11, a2: v12, a3: &v7[2 * v13]);
    v18 = (__int64)(v7 + 94091572);
    if ( (_DWORD *)v14 == v7 )
    {
LABEL_60:
      result = (_DWORD *)MEMORY[0x182771080](a1: v16, a2: v17, a3: v15, a4: v18);
      goto LABEL_61;
    }
    v58 = v14;
    v65 = *(_DWORD *)(v14 + 8);
    v19 = 34161576;
    if ( v65 != 0 )
    {
      v20 = *(unsigned int *)(v14 + 12);
      v21 = (__int64)&v7[2 * v20];
      if ( (_DWORD)v20 == 0 )
        goto LABEL_62;
      v22 = (unsigned int)v7[2 * v20 + 1];
      v23 = (unsigned int)v7[2 * v20 + 3];
      v16 = v7[2 * v20 + 16] & 0x1DFF;
      v62 = v16;
      if ( (v16 & 8) != 0 )
        v24 = (_DWORD)v23 == 47082448 && v22 == 47082451;
      else
        v24 = false;
      v61 = v24;
      v17 = (__int64)&v7[2 * v23];
      v57 = v17;
      v56 = &v7[2 * v22];
      if ( v24 )
      {
        v25 = *(_QWORD *)(v8 + 40);
        if ( (unsigned __int64)(v25 + 24) > *(_QWORD *)(v8 + 32) )
        {
          v54 = v21;
          v64 = 34161576;
          v25 = sub_181EAA920(a1: v16, a2: v17, a3: 34161576);
        }
        else
        {
          *(_QWORD *)(v8 + 40) = v25 + 24;
          *(_DWORD *)v25 = 34161576;
          *(_DWORD *)(v25 + 4) = 0;
          *(_QWORD *)(v25 + 8) = 0;
          *(_QWORD *)(v25 + 16) = 0;
        }
        *(_DWORD *)(v25 + 8) = 47045786;
        v53 = v25;
      }
      else if ( v67 == 0 || (v16 & 1) != 0 )
      {
        v64 = 34161576;
        v55 = (__int64)(v7 + 94091572);
        v54 = v21;
        v45 = sub_181EC7520(a1: v16, a2: v17, a3: v60, a4: v18, a5: v59, a6: v21);
        v48 = *(_QWORD *)(v8 + 40);
        if ( (unsigned __int64)(v48 + 24) > *(_QWORD *)(v8 + 32) )
        {
          v52 = v45;
          v48 = sub_181EAA920(a1: v46, a2: v47, a3: v64);
          v45 = v52;
        }
        else
        {
          *(_QWORD *)(v8 + 40) = v48 + 24;
          *(_DWORD *)v48 = 34161576;
          *(_DWORD *)(v48 + 4) = 0;
          *(_QWORD *)(v48 + 8) = 0;
          *(_QWORD *)(v48 + 16) = 0;
        }
        *(_DWORD *)(v48 + 8) = 47045786;
        *(_DWORD *)(v48 + 4) = 1;
        v49 = v55;
        v52 = v45;
        v55 = v48;
        MEMORY[0x1857881C0](a1: 0, a2: v47, a3: v48, a4: v48, a5: v45, a6: v49);
        v68 = v6;
        v53 = v55;
      }
      else
      {
        v54 = v21;
        v64 = 34161576;
        v50 = *(_QWORD *)(v8 + 40);
        if ( (unsigned __int64)(v50 + 24) > *(_QWORD *)(v8 + 32) )
        {
          v50 = sub_181EAA920(a1: v16, a2: v17, a3: v64);
        }
        else
        {
          *(_QWORD *)(v8 + 40) = v50 + 24;
          *(_DWORD *)v50 = 34161576;
          *(_DWORD *)(v50 + 4) = 0;
          *(_QWORD *)(v50 + 8) = 0;
          *(_QWORD *)(v50 + 16) = 0;
        }
        *(_DWORD *)(v50 + 8) = 47045786;
        v53 = v50;
      }
      v26 = 1;
      v27 = v65;
      v28 = v58;
      v29 = v67;
      v30 = v59;
      v31 = v60;
      while ( v27 > (int)v26 )
      {
        if ( v27 <= (unsigned int)v26 )
          goto LABEL_63;
        v17 = *(unsigned int *)(v28 + 4 * v26 + 12);
        v16 = (__int64)&v7[2 * v17];
        if ( (_DWORD)v17 == 0 )
          goto LABEL_64;
        v32 = v26 + 1;
        if ( (v7[2 * v17 + 16] & 8) != 0 && v7[2 * v17 + 3] == 47082448 && v7[2 * v17 + 1] == 47082451 )
        {
          v26 = v32;
        }
        else if ( (_DWORD)v29 == 0 || (v7[2 * v17 + 16] & 1) != 0 )
        {
          v62 = v26 + 1;
          v61 = v26;
          v57 = (__int64)&v7[2 * v17];
          v33 = sub_181EC7520(a1: v16, a2: v31, a3: v31, a4: v28, a5: v30, a6: v16);
          v34 = v53;
          ++*(_DWORD *)(v53 + 4);
          v35 = *(unsigned int *)(v34 + 12);
          v36 = &v7[2 * *(unsigned int *)(v34 + 8)];
          v54 = v33;
          MEMORY[0x1857881C0](a1: v35, a2: v37, a3: v34, a4: v34, a5: v33, a6: v36);
          v26 = v62;
          v27 = v65;
          v28 = v58;
          v29 = v67;
          v30 = v59;
          v31 = v60;
        }
        else
        {
          v26 = v32;
        }
      }
      v63 = v26;
      v38 = v53;
    }
    else
    {
      v38 = *(_QWORD *)(v8 + 40);
      if ( (unsigned __int64)(v38 + 24) > *(_QWORD *)(v8 + 32) )
      {
        v64 = 34161576;
        v38 = sub_181EAA920(a1: v16, a2: v17, a3: 34161576);
      }
      else
      {
        *(_QWORD *)(v8 + 40) = v38 + 24;
        *(_DWORD *)v38 = 34161576;
        *(_DWORD *)(v38 + 4) = 0;
        *(_QWORD *)(v38 + 8) = 0;
        *(_QWORD *)(v38 + 16) = 0;
      }
      *(_DWORD *)(v38 + 8) = 47045786;
      v63 = 0;
    }
    v39 = *(_QWORD *)(v8 + 40);
    v40 = v39 + 16;
    if ( (unsigned __int64)(v39 + 16) > *(_QWORD *)(v8 + 32) )
    {
      v54 = v38;
      v41 = sub_181EAA840(a1: v16, a2: v17, a3: 40452240, a4: v40, a5: 0);
      v38 = v54;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v40;
      *(_QWORD *)v39 = 40452240;
      *(_DWORD *)(v39 + 8) = 0;
      *(_DWORD *)(v39 + 12) = 0;
      v41 = v39;
    }
    v54 = v38;
    result = (_DWORD *)MEMORY[0x18578E980](a1: v16, a2: v17, a3: v38, a4: v40, a5: v41);
    if ( result != v7 && *result >> 3 != 5056530 )
    {
LABEL_61:
      MEMORY[0x18276FC00](a1: v43, a2: v44, a3: result, a4: v63, a5: v7 + 10113060);
LABEL_62:
      LODWORD(v26) = MEMORY[0x182771080](a1: v16, a2: v17, a3: v19, a4: v18);
LABEL_63:
      v61 = v26;
      MEMORY[0x182771220](a1: v16, a2: v17, a3: (unsigned int)v26, a4: v28, a5: v65, a6: v29);
LABEL_64:
      MEMORY[0x182771080](a1: v16, a2: v66, a3: v28, a4: v53, a5: v30, a6: v29);
      JUMPOUT(0x181EC854CLL);
    }
    if ( *(int *)(v8 + 16) <= 0 )
      return (_DWORD *)MEMORY[0x18277F280]();
    return result;
  }
  v66 = a1;
  MEMORY[0x182771080]();
  goto LABEL_57;
}
