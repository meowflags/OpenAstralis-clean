// sub_1827575A0
// rva 0x027575a0  size 1658  section .text  group text
// window base 0x1827575a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1827575A0(__int64 i, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, int a6, char a7)
{
  _DWORD *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 result; // rax
  __int64 v12; // rbx
  __int16 v13; // bp
  unsigned __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // r8
  unsigned int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  unsigned int v25; // eax
  __int64 v26; // rdi
  __int64 v27; // rsi
  _DWORD *v28; // rbx
  __int64 v29; // rcx
  unsigned int v30; // ebp
  __int64 v31; // rdx
  unsigned __int64 v32; // r9
  unsigned __int64 v33; // r9
  __int64 v34; // rcx
  unsigned int v35; // eax
  __int64 v36; // rcx
  int v37; // eax
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 v44; // rdx
  unsigned __int64 v45; // rcx
  char *v46; // rax
  unsigned __int64 v47; // rax
  BOOL v48; // r8d
  __int64 v49; // rdx
  unsigned __int64 v50; // rdx
  unsigned __int64 v51; // rax
  __int64 v52; // rdx
  int v53; // edx
  int v54; // ecx
  int v55; // edi
  int v56; // esi
  int v57; // r8d
  int v58; // r9d
  char v59; // [rsp+0h] [rbp-58h] BYREF
  _DWORD *v60; // [rsp+8h] [rbp-50h]
  unsigned __int64 v61; // [rsp+10h] [rbp-48h]
  __int64 v62; // [rsp+18h] [rbp-40h]
  __int64 v63; // [rsp+20h] [rbp-38h]
  int v64; // [rsp+2Ch] [rbp-2Ch]
  __int64 v65; // [rsp+30h] [rbp-28h]
  __int64 v66; // [rsp+38h] [rbp-20h]
  _DWORD *v67; // [rsp+40h] [rbp-18h]
  int v68; // [rsp+4Ch] [rbp-Ch]
  unsigned int v69; // [rsp+50h] [rbp-8h]
  unsigned int v70; // [rsp+54h] [rbp-4h]

  if ( (unsigned __int64)&v59 <= *(_QWORD *)(v8 + 8) )
  {
    v67 = a5;
    v66 = a3;
    v9 = MEMORY[0x181EB84E0]();
LABEL_60:
    v67 = a5;
    v66 = a3;
    MEMORY[0x1815ACE20](a1: i, a2, a3: &v7[2 * v9]);
    a5 = v67;
    a3 = v66;
    goto LABEL_5;
  }
  v9 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v9 != 0 )
  {
    v10 = (unsigned int)v7[2 * v9 + 7];
    if ( (_DWORD)v10 == 0 )
    {
      sub_182771080(a1: i, a2, a3, a4: 0, (_DWORD)a5, a6, a7: v59);
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      __builtin_debugtrap();
      return sub_182757C20(a1: v55, a2: v56, a3: v53, a4: v54, a5: v57, a6: v58, a7);
    }
    a4 = (unsigned int)v7[2 * v10 + 11];
    if ( BYTE2(v7[2 * a4 + 8]) != 0 )
      goto LABEL_60;
  }
LABEL_5:
  result = *(unsigned int *)(a3 + 24);
  if ( (_DWORD)result == 0 )
  {
LABEL_27:
    v67 = a5;
    v66 = a3;
    goto LABEL_28;
  }
  if ( a5 == v7 )
  {
    v66 = a3;
    v52 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v52 + 48) > *(_QWORD *)(v8 + 32) )
    {
      v52 = MEMORY[0x181EAA920](a1: i, a2, a3: 34101256);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v52 + 48;
      *(_DWORD *)v52 = 34101256;
      *(_DWORD *)(v52 + 4) = 0;
      *(_QWORD *)(v52 + 8) = 0;
      *(_QWORD *)(v52 + 16) = 0;
      *(_QWORD *)(v52 + 24) = 0;
      *(_QWORD *)(v52 + 32) = 0;
      *(_QWORD *)(v52 + 40) = 0;
    }
    *(_DWORD *)(v52 + 20) = 46923644;
    *(_DWORD *)(v52 + 16) = v7[93585974];
    *(_DWORD *)(v52 + 12) = (unsigned __int64)(v52 - (_QWORD)v7) >> 3;
    v65 = v52;
    MEMORY[0x18503B9A0](a1: i, a2, a3: v52, a4, a5: 0);
    v47 = v65;
LABEL_26:
    result = sub_182769900(a1: v42, a2: v43, a3: v47, a4: v45, a5: &a7);
    goto LABEL_27;
  }
  v12 = *a5 >> 3;
  v13 = HIWORD(v7[2 * v12 + 15]);
  a2 = (unsigned int)SLOWORD(v7[2 * result + 15]);
  v14 = (unsigned __int64)&v7[2 * v7[2 * v12 + 4]];
  if ( SLOWORD(v7[2 * result + 15]) < 0 )
  {
    v67 = a5;
    v66 = a3;
    a3 = (unsigned int)result;
    result = (unsigned int)v7[2 * (unsigned int)result + 10];
    if ( (int)result >= 0x10000 )
    {
      a2 = (unsigned int)(2 * SLOWORD(v7[2 * v12 + 16]));
      for ( i = 0; (int)a2 > (int)i; i = (unsigned int)(i + 2) )
      {
        if ( (_DWORD)result == *(_DWORD *)(v14 + 4 * (v13 + (int)i) + 12) )
          goto LABEL_28;
      }
      v64 = a3;
      goto LABEL_10;
    }
    a2 = v7[2 * v12 + 11] & ((unsigned int)result >> HIBYTE(v7[2 * v12 + 11]));
    v14 = (unsigned __int16)*(_DWORD *)((char *)&v7[2 * v7[2 * v12 + 5]]
                                      + (int)(4
                                            * (v7[2 * v12 + 11] & ((unsigned int)result >> HIBYTE(v7[2 * v12 + 11])))
                                            + 12));
    v48 = result == v14;
  }
  else
  {
    if ( v13 <= SLOWORD(v7[2 * result + 15]) )
    {
      v64 = *(_DWORD *)(a3 + 24);
      v67 = a5;
      v66 = a3;
LABEL_10:
      v65 = MEMORY[0x184F68C80](a1: i, a2, a3: &v7[2 * v12], a4: v14);
      v17 = MEMORY[0x184F68C80](a1: v15, a2: v16, a3: &v7[2 * v64]);
      v19 = (__int64)(v7 + 88325320);
      if ( (_DWORD *)v65 == v7 )
        v20 = (__int64)(v7 + 88325320);
      else
        v20 = v65;
      if ( (_DWORD *)v17 != v7 )
        v19 = v17;
      v63 = v17;
      v70 = *(char *)(v19 + 12) | *(char *)(v20 + 12);
      v62 = v19;
      v61 = v20;
      v21 = MEMORY[0x1850132E0](a1: v18, a2: v20, a3: 57);
      v25 = MEMORY[0x1850132E0](a1: v23, a2: v24, a3: v21, a4: v22, a5: v62);
      v28 = v7 + 93320312;
      v29 = v70;
      v30 = v25 << v70;
      if ( ((v25 << v70) & 0x80000000) != 0 )
      {
        v69 = v25;
        v49 = *(_QWORD *)(v8 + 40);
        if ( (unsigned __int64)(v49 + 40) > *(_QWORD *)(v8 + 32) )
        {
          v68 = v25 << v70;
          v49 = MEMORY[0x181EAA920](a1: v26, a2: v27, a3: 34082880);
        }
        else
        {
          *(_QWORD *)(v8 + 40) = v49 + 40;
          *(_DWORD *)v49 = 34082880;
          *(_DWORD *)(v49 + 4) = 0;
          *(_QWORD *)(v49 + 8) = 0;
          *(_QWORD *)(v49 + 16) = 0;
          *(_QWORD *)(v49 + 24) = 0;
          *(_QWORD *)(v49 + 32) = 0;
          v68 = v30;
        }
        *(_DWORD *)(v49 + 20) = 46923644;
        *(_DWORD *)(v49 + 16) = v7[93585974];
        *(_DWORD *)(v49 + 12) = (unsigned __int64)(v49 - (_QWORD)v7) >> 3;
        v60 = (_DWORD *)v49;
        MEMORY[0x18503B9A0](a1: v26, a2: v27, a3: v49, a4: v29, a5: 0);
        v50 = (unsigned __int64)v60;
        v60[2] = 46004603;
        if ( (*(_DWORD *)v50 & 2) != 0 )
        {
          v45 = (v50 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v50 & 0xFFFFFFFFFFF80000LL) + ((v50 - v45) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v50 & 0xFFFFFFFFFFF80000LL) + ((v50 - v45) >> 9) + 0x38) = 0;
          v47 = v50;
        }
        else
        {
          v47 = v50;
        }
      }
      else
      {
        v31 = *(_QWORD *)(v8 + 40);
        v32 = (v30 + 19LL) & 0x1FFFFFFF8LL;
        if ( v32 >= 0x20000 || (v33 = v31 + v32) > *(_QWORD *)(v8 + 32) )
        {
          v60 = v7 + 93320312;
          v69 = v25;
          v31 = MEMORY[0x181EAA840](a1: 34082368, a2: v27, a3: 34082368, a4: v70, a5: v30);
          v28 = v60;
          v25 = v69;
        }
        else
        {
          *(_QWORD *)(v8 + 40) = v33;
          *(_QWORD *)v31 = 34082368;
          *(_DWORD *)(v31 + 8) = v30;
        }
        v60 = (_DWORD *)v31;
        v69 = v25;
        if ( v70 != 0 )
          MEMORY[0x184FF2C40](a1: 1, a2: v27, a3: v28, a4: v31, a5: v31, a6: v25);
        else
          MEMORY[0x181EB4960](a1: v25, a2: 0, a3: v7 + 94087886, a4: v70, a5: 0, a6: v60);
        v35 = MEMORY[0x185011A80](a1: v62, a2: v7 + 14546060, a3: v69, a4: v34, a5: v70, a6: v60);
        v37 = MEMORY[0x185011A80](a1: v61, a2: v7 + 14546066, a3: v35, a4: v36, a5: v70, a6: v60);
        v40 = *(_QWORD *)(v8 + 40);
        if ( (unsigned __int64)(v40 + 40) > *(_QWORD *)(v8 + 32) )
        {
          v68 = v37;
          v40 = MEMORY[0x181EAA920](a1: v38, a2: v39, a3: 34081944);
        }
        else
        {
          *(_QWORD *)(v8 + 40) = v40 + 40;
          *(_DWORD *)v40 = 34081944;
          *(_DWORD *)(v40 + 4) = 0;
          *(_QWORD *)(v40 + 8) = 0;
          *(_QWORD *)(v40 + 16) = 0;
          *(_QWORD *)(v40 + 24) = 0;
          *(_QWORD *)(v40 + 32) = 0;
        }
        v61 = v40;
        *(_DWORD *)(v40 + 20) = 46923644;
        *(_DWORD *)(v40 + 16) = v7[93585974];
        *(_DWORD *)(v40 + 12) = (unsigned __int64)(v40 - (_QWORD)v7) >> 3;
        v68 = (char)v70;
        v41 = MEMORY[0x18503B9A0](a1: v38, a2: v39, a3: v40, a4: v40, a5: 0);
        v44 = *(_QWORD *)(v8 + 40);
        if ( (unsigned __int64)(v44 + 24) > *(_QWORD *)(v8 + 32) )
        {
          v62 = v41;
          v44 = MEMORY[0x181EAA920](a1: v42, a2: 34082680, a3: 34082680);
        }
        else
        {
          *(_QWORD *)(v8 + 40) = v44 + 24;
          *(_DWORD *)v44 = 34082680;
          *(_DWORD *)(v44 + 4) = 0;
          *(_QWORD *)(v44 + 8) = 0;
          *(_QWORD *)(v44 + 16) = 0;
        }
        v45 = v61;
        v46 = (char *)v60;
        *(_BYTE *)(v44 + 12) = v70;
        *(_DWORD *)(v44 + 4) = (unsigned __int64)(v46 - (char *)v7) >> 3;
        *(_DWORD *)(v45 + 8) = (unsigned __int64)(v44 - (_QWORD)v7) >> 3;
        if ( (*(_DWORD *)v45 & 2) != 0 )
        {
          v51 = (v45 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v45 & 0xFFFFFFFFFFF80000LL) + ((v45 - v51) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v45 & 0xFFFFFFFFFFF80000LL) + ((v45 - v51) >> 9) + 0x38) = 0;
          v47 = v45;
        }
        else
        {
          v47 = v45;
        }
      }
      goto LABEL_26;
    }
    v67 = a5;
    v66 = a3;
    a3 = (unsigned int)result;
    result = (unsigned int)v7[2 * (unsigned int)result + 9];
    v48 = result == *(_DWORD *)(v14 + 4LL * (unsigned __int16)a2 + 12);
  }
  if ( !v48 )
  {
    v64 = a3;
    goto LABEL_10;
  }
LABEL_28:
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_18277F280(a1: i, a2, a3);
  return result;
}
