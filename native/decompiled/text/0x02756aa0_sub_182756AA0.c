// sub_182756AA0
// rva 0x02756aa0  size 1295  section .text  group text
// window base 0x182756aa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall __noreturn sub_182756AA0(__int64 a1, __int64 a2, int a3, __int64 a4, _DWORD *a5, _DWORD *a6, char a7)
{
  _DWORD *v7; // r14
  _QWORD *v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 i; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rax
  _DWORD *v21; // r9
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r11
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rcx
  __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 v46; // rcx
  __int64 v47; // rdi
  __int64 v48; // rsi
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r8
  __int64 v55; // rdi
  __int64 v56; // rsi
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rbp
  unsigned __int64 v59; // rbx
  __int64 v60; // rcx
  __int64 v61; // rdi
  __int64 v62; // rsi
  char v63; // [rsp+0h] [rbp-78h] BYREF
  __int64 v64; // [rsp+10h] [rbp-68h]
  _DWORD *v65; // [rsp+18h] [rbp-60h]
  char *v66; // [rsp+20h] [rbp-58h]
  unsigned int v67; // [rsp+2Ch] [rbp-4Ch]
  __int64 v68; // [rsp+30h] [rbp-48h]
  __int64 v69; // [rsp+38h] [rbp-40h]
  char *j; // [rsp+40h] [rbp-38h]
  __int64 v71; // [rsp+48h] [rbp-30h]
  _DWORD *v72; // [rsp+50h] [rbp-28h]
  _DWORD *v73; // [rsp+58h] [rbp-20h]
  unsigned int v74; // [rsp+64h] [rbp-14h]
  int v75; // [rsp+68h] [rbp-10h]
  int v76; // [rsp+6Ch] [rbp-Ch]

  v76 = a3;
  v73 = a5;
  v72 = a6;
  if ( (unsigned __int64)&v63 <= v8[1] )
  {
    MEMORY[0x181EB84E0]();
  }
  else
  {
    v9 = v8[5];
    if ( (unsigned __int64)(v9 + 24) > v8[4] )
    {
      v9 = MEMORY[0x181EAA920](a1, a2, a3: 34085680);
    }
    else
    {
      v8[5] = v9 + 24;
      *(_DWORD *)v9 = 34085680;
      *(_DWORD *)(v9 + 4) = 0;
      *(_QWORD *)(v9 + 8) = 0;
      *(_QWORD *)(v9 + 16) = 0;
    }
    v71 = v9;
    v10 = v8[5];
    if ( (unsigned __int64)(v10 + 32) > v8[4] )
    {
      v10 = MEMORY[0x181EAA840](a1, a2, a3: 34082368, a4: v10, a5: 16);
      v9 = v71;
    }
    else
    {
      v8[5] = v10 + 32;
      *(_QWORD *)v10 = 34082368;
      *(_DWORD *)(v10 + 8) = 16;
      *(_DWORD *)(v10 + 12) = 0;
      *(_QWORD *)(v10 + 16) = 0;
      *(_QWORD *)(v10 + 24) = 0;
    }
    *(_DWORD *)(v9 + 4) = (unsigned __int64)(v10 - (_QWORD)v7) >> 3;
    if ( (*(_DWORD *)v9 & 2) != 0 )
    {
      v58 = (v9 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v9 & 0xFFFFFFFFFFF80000LL) + ((v9 - v58) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v9 & 0xFFFFFFFFFFF80000LL) + ((v9 - v58) >> 9) + 0x38) = 0;
    }
    j = (char *)(v7 + 14283806);
    MEMORY[0x184F36F80](a1, a2, a3: v9, a4: v7 + 92482080, a5: v7 + 92482080);
    v69 = (__int64)(v7 + 88325320);
    if ( v76 != 0 )
    {
      MEMORY[0x184F36F80](a1: v12, a2: v13, a3: v71, a4: i, a5: j);
      MEMORY[0x184F36F80](a1: v15, a2: v16, a3: v71, a4: v14, a5: v7 + 93261454);
      if ( v73 == v7 )
        v20 = v69;
      else
        v20 = MEMORY[0x184F68C80](a1: v18, a2: v19, a3: &v7[2 * (*v73 >> 3)]);
      v68 = v20;
      MEMORY[0x184F36F80](a1: v18, a2: v19, a3: v71, a4: v17, a5: v20);
    }
    v21 = v72;
    if ( v72 != v7 )
    {
      v75 = v72[2];
      if ( v75 != 0 )
      {
        v22 = (unsigned int)v72[3];
        v68 = (__int64)&v7[2 * v22];
        v67 = v22;
        MEMORY[0x184F36F80](a1: v12, a2: v13, a3: v71, a4: v22, a5: j);
        v66 = (char *)(v7 + 93261708);
        MEMORY[0x184F36F80](a1: v24, a2: v25, a3: v71, a4: v23, a5: v7 + 93261708);
        MEMORY[0x184F36640](a1: v27, a2: v28, a3: v71, a4: v26, a5: 0);
        v65 = v7 + 91336378;
        MEMORY[0x184F36F80](a1: v30, a2: v31, a3: v71, a4: v29, a5: v7 + 91336378);
        v34 = v67;
        if ( v67 != 0 )
          v35 = MEMORY[0x184F68C80](a1: v32, a2: v33, a3: &v7[2 * (v7[2 * v67] >> 3)]);
        else
          v35 = v69;
        v64 = v35;
        MEMORY[0x184F36F80](a1: v32, a2: v33, a3: v71, a4: v34, a5: v35);
        for ( i = 1; ; i = v74 + 1 )
        {
          v50 = v75;
          v21 = v72;
          if ( v75 <= (int)i )
            break;
          if ( v75 <= (unsigned int)i )
            goto LABEL_31;
          v36 = (unsigned int)v72[i + 3];
          v64 = (__int64)&v7[2 * v36];
          v67 = v36;
          v74 = i;
          MEMORY[0x184F36F80](a1: v12, a2: v13, a3: v71, a4: i, a5: j);
          MEMORY[0x184F36F80](a1: v38, a2: v39, a3: v71, a4: v37, a5: v66);
          MEMORY[0x184F36640](a1: v41, a2: v42, a3: v71, a4: v40, a5: v74);
          MEMORY[0x184F36F80](a1: v44, a2: v45, a3: v71, a4: v43, a5: v65);
          if ( v67 != 0 )
            v49 = MEMORY[0x184F68C80](a1: v47, a2: v48, a3: &v7[2 * (v7[2 * v67] >> 3)]);
          else
            v49 = v69;
          v68 = v49;
          MEMORY[0x184F36F80](a1: v47, a2: v48, a3: v71, a4: v46, a5: v49);
        }
        v51 = v71;
      }
      else
      {
        v51 = v71;
      }
      goto LABEL_23;
    }
  }
  MEMORY[0x184F36F80](a1: v12, a2: v13, a3: v71, a4: i, a5: j);
  MEMORY[0x184F36F80](a1: v61, a2: v62, a3: v71, a4: v60, a5: v7 + 93261720);
  v51 = v71;
LABEL_23:
  if ( *(_DWORD *)(v51 + 8) == 0 )
    goto LABEL_32;
  v52 = v8[5];
  v53 = v52 + 24;
  if ( (unsigned __int64)(v52 + 24) > v8[4] )
  {
    v52 = MEMORY[0x181EAA920](a1: v12, a2: v13, a3: 34082680, a4: i, a5: v53, a6: v21);
    v51 = v71;
  }
  else
  {
    v8[5] = v53;
    *(_DWORD *)v52 = 34082680;
    *(_DWORD *)(v52 + 4) = 0;
    *(_QWORD *)(v52 + 8) = 0;
    *(_QWORD *)(v52 + 16) = 0;
  }
  v66 = (char *)v52;
  MEMORY[0x184FE9280](a1: v12, a2: v13, a3: v52, a4: v52, a5: v51, a6: v7);
  for ( j = v66; ; j = (char *)(v7 + 93320312) )
  {
    v54 = v8[5];
    if ( (unsigned __int64)(v54 + 40) > v8[4] )
    {
      v54 = MEMORY[0x181EAA920](a1: v12, a2: v13, a3: 34081944);
    }
    else
    {
      v8[5] = v54 + 40;
      *(_DWORD *)v54 = 34081944;
      *(_DWORD *)(v54 + 4) = 0;
      *(_QWORD *)(v54 + 8) = 0;
      *(_QWORD *)(v54 + 16) = 0;
      *(_QWORD *)(v54 + 24) = 0;
      *(_QWORD *)(v54 + 32) = 0;
    }
    *(_DWORD *)(v54 + 20) = 46923644;
    *(_DWORD *)(v54 + 16) = v7[93585974];
    *(_DWORD *)(v54 + 12) = (unsigned __int64)(v54 - (_QWORD)v7) >> 3;
    v66 = (char *)v54;
    MEMORY[0x18503B9A0](a1: v12, a2: v13, a3: v54, a4: i, a5: 0);
    v57 = (unsigned __int64)v66;
    *((_DWORD *)v66 + 2) = (unsigned __int64)(j - (char *)v7) >> 3;
    if ( (*(_DWORD *)v57 & 2) != 0 )
    {
      v59 = (v57 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v57 & 0xFFFFFFFFFFF80000LL) + ((v57 - v59) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v57 & 0xFFFFFFFFFFF80000LL) + ((v57 - v59) >> 9) + 0x38) = 0;
    }
    v50 = sub_182769900(a1: v55, a2: v56, a3: v57, a4: v57, a5: &a7);
LABEL_31:
    sub_182771220(a1: v12, a2: v13, a3: i, a4: i, a5: v50, a6: (_DWORD)v21, a7: v63);
LABEL_32:
    ;
  }
}
