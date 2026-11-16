// sub_181ED2AC0
// rva 0x01ed2ac0  size 1235  section .text  group text
// window base 0x181ed2ac0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181ED2AC0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        __int64 a11)
{
  unsigned int v11; // ebx
  __int64 v12; // r13
  _DWORD *v13; // r14
  __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdi
  __int64 v21; // rsi
  _DWORD *v22; // rax
  int v23; // edx
  __int64 v24; // rdi
  __int64 v25; // rsi
  int v26; // r8d
  int v27; // r9d
  __int64 (__fastcall *v28)(__int64, __int64, _DWORD *); // rbx
  __int64 v29; // rax
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rcx
  unsigned int v33; // eax
  __int64 v34; // rcx
  __int64 v35; // rdi
  __int64 v36; // rsi
  int v37; // eax
  __int64 v38; // rdi
  _DWORD *v39; // rbp
  __int64 v40; // rcx
  __int64 v41; // rsi
  _DWORD *v42; // rdx
  unsigned __int64 v43; // r9
  char *v44; // r9
  _DWORD *v45; // rax
  __int64 v46; // rcx
  unsigned int v47; // eax
  __int64 v48; // rcx
  __int64 v49; // rdi
  __int64 v50; // rsi
  __int64 v51; // rdx
  __int64 v52; // rcx
  char *v53; // rbx
  __int64 v54; // r8
  __int64 v55; // r9
  __int64 v56; // rax
  __int64 v57; // rdi
  __int64 v58; // rsi
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // r8
  __int64 v62; // rdi
  __int64 v63; // rsi
  __int64 result; // rax
  __int64 v65; // rdx
  unsigned __int64 v66; // rcx
  __int64 v67; // rdi
  __int64 v68; // rsi
  __int64 v69; // rax
  int v70; // [rsp+0h] [rbp-68h] BYREF
  __int64 v71; // [rsp+8h] [rbp-60h]
  _DWORD *v72; // [rsp+10h] [rbp-58h]
  __int64 v73; // [rsp+18h] [rbp-50h]
  _DWORD *v74; // [rsp+20h] [rbp-48h]
  _DWORD *v75; // [rsp+28h] [rbp-40h]
  _DWORD *v76; // [rsp+30h] [rbp-38h]
  __int64 v77; // [rsp+38h] [rbp-30h]
  __int64 v78; // [rsp+40h] [rbp-28h]
  __int64 v79; // [rsp+48h] [rbp-20h]
  __int64 v80; // [rsp+50h] [rbp-18h]
  int v81; // [rsp+58h] [rbp-10h]
  unsigned int v82; // [rsp+5Ch] [rbp-Ch]
  int v83; // [rsp+60h] [rbp-8h]
  unsigned int v84; // [rsp+64h] [rbp-4h]

  if ( (unsigned __int64)&v70 <= *(_QWORD *)(v14 + 8) )
  {
    v78 = a6;
    v80 = a5;
    v79 = a3;
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v70);
    goto LABEL_39;
  }
  v80 = a5;
  v79 = a3;
  v78 = a6;
  v77 = MEMORY[0x181EDAAC0](a1, a2, a3: a6);
  if ( (_DWORD *)v77 == v13 )
  {
    if ( *(int *)(v14 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return (__int64)v13;
  }
  else
  {
    v76 = (_DWORD *)sub_181ED1AE0(
                      a1: v16,
                      a2: v17,
                      a3: v79,
                      a4: v15,
                      a5: v18,
                      a6: v19,
                      a7: v70,
                      a8: v71,
                      a9: (int)v72,
                      a10: v73,
                      a11: (int)v74,
                      a12: (int)v75,
                      a13: (__int64)v76,
                      a14: v77);
    if ( v76 != v13 )
    {
      v22 = (_DWORD *)MEMORY[0x1827D1940](a1: v20, a2: v21, a3: v80);
      if ( v22 == v13 )
        return sub_181ED2D91(
                 a1: v24,
                 a2: v25,
                 a3: v23,
                 a4: (int)v13 + 353301280,
                 a5: v26,
                 a6: v27,
                 a7,
                 a8,
                 a9,
                 a10,
                 a11);
      v75 = v13 + 88325320;
      v28 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v12 + *(_QWORD *)&v13[2 * (*v22 >> 3) + 26]);
      v74 = v22;
      v29 = v28(a1: v24, a2: v25, a3: v22);
      if ( (_DWORD *)v29 == v13 )
        v32 = (__int64)v75;
      else
        v32 = v29;
      v75 = (_DWORD *)v29;
      v84 = *(char *)(v32 + 12) | *(char *)(v77 + 12);
      v73 = v32;
      v33 = MEMORY[0x1850132E0](a1: v30, a2: v31, a3: 16, a4: v32, a5: v77);
      v37 = MEMORY[0x1850132E0](a1: v35, a2: v36, a3: v33, a4: v34, a5: v73);
      v83 = v37;
      v11 = v37 - 6;
      v39 = v13 + 14544944;
      v40 = v84;
      v41 = (unsigned int)(v37 << v84);
      if ( (int)v41 >= 0 )
      {
        v42 = *(_DWORD **)(v14 + 40);
        v43 = ((unsigned int)v41 + 19LL) & 0x1FFFFFFF8LL;
        if ( v43 >= 0x20000 || (unsigned __int64)(v44 = (char *)v42 + v43) > *(_QWORD *)(v14 + 32) )
        {
          v72 = v13 + 14544944;
          v82 = v37 - 6;
          v45 = (_DWORD *)sub_181EAA840(a1: 34082368, a2: v41, a3: 34082368, a4: v84, a5: v41);
          v39 = v72;
          v11 = v82;
        }
        else
        {
          *(_QWORD *)(v14 + 40) = v44;
          *(_QWORD *)v42 = 34082368;
          v42[2] = v41;
          v45 = v42;
        }
        v72 = v45;
        v82 = v11;
        if ( v84 != 0 )
          MEMORY[0x184FF2C40](a1: 1, a2: v41, a3: v39, a4: v40, a5: v45, a6: v11);
        else
          sub_181EB4960(a1: v11, a2: 6, a3: v13 + 94165102, a4: v40, a5: 0, a6: v72, a7: v70);
        v47 = MEMORY[0x185011A80](a1: v73, a2: v13 + 14544950, a3: v82, a4: v46, a5: v84, a6: v72);
        v83 = MEMORY[0x185011A80](a1: v77, a2: v13 + 14544956, a3: v47, a4: v48, a5: v84, a6: v72);
        v51 = *(_QWORD *)(v14 + 40);
        if ( (unsigned __int64)(v51 + 24) > *(_QWORD *)(v14 + 32) )
        {
          v52 = sub_181EAA920(a1: v49, a2: v50, a3: 34082680);
        }
        else
        {
          *(_QWORD *)(v14 + 40) = v51 + 24;
          *(_DWORD *)v51 = 34082680;
          *(_DWORD *)(v51 + 4) = 0;
          *(_QWORD *)(v51 + 8) = 0;
          *(_QWORD *)(v51 + 16) = 0;
          v52 = v51;
        }
        v53 = (char *)v72;
        *(_BYTE *)(v52 + 12) = v84;
        *(_DWORD *)(v52 + 4) = (unsigned __int64)(v53 - (char *)v13) >> 3;
        v54 = *(_QWORD *)(v14 + 40);
        if ( (unsigned __int64)(v54 + 16) > *(_QWORD *)(v14 + 32) )
        {
          v71 = v52;
          v55 = sub_181EAA840(a1: v49, a2: v50, a3: 34087104, a4: v52, a5: 0);
          v52 = v71;
        }
        else
        {
          *(_QWORD *)(v14 + 40) = v54 + 16;
          *(_QWORD *)v54 = 34087104;
          *(_DWORD *)(v54 + 8) = 0;
          *(_DWORD *)(v54 + 12) = 0;
          v55 = v54;
        }
        v56 = ((__int64 (__fastcall *)(__int64, __int64, _DWORD *, __int64, __int64, __int64))(v12
                                                                                             + *(_QWORD *)&v13[2 * (*v76 >> 3) + 32]))(
                a1: v49,
                a2: v50,
                a3: v76,
                a4: v52,
                a5: v52,
                a6: v55);
        v59 = *(_QWORD *)(v14 + 40);
        v60 = 34114904;
        if ( (unsigned __int64)(v59 + 16) > *(_QWORD *)(v14 + 32) )
        {
          v71 = v56;
          v61 = sub_181EAA840(a1: v57, a2: v58, a3: 34114904, a4: 34114904, a5: 0);
          v56 = v71;
        }
        else
        {
          *(_QWORD *)(v14 + 40) = v59 + 16;
          *(_QWORD *)v59 = 34114904;
          *(_DWORD *)(v59 + 8) = 0;
          *(_DWORD *)(v59 + 12) = 0;
          v61 = v59;
        }
        v71 = v56;
        if ( (unsigned int)MEMORY[0x185554220](a1: v57, a2: v58, a3: v56, a4: v60, a5: v61) != 0 )
        {
          result = MEMORY[0x185557C60](a1: v62, a2: v63, a3: v71);
          if ( *(int *)(v14 + 16) <= 0 )
            return MEMORY[0x18277F280]();
        }
        else
        {
          if ( *(int *)(v14 + 16) <= 0 )
            MEMORY[0x18277F280]();
          return (__int64)v13;
        }
        return result;
      }
LABEL_39:
      v82 = v11;
      v65 = *(_QWORD *)(v14 + 40);
      if ( (unsigned __int64)(v65 + 40) > *(_QWORD *)(v14 + 32) )
      {
        v81 = v41;
        v65 = sub_181EAA920(a1: v38, a2: v41, a3: 34082880);
      }
      else
      {
        *(_QWORD *)(v14 + 40) = v65 + 40;
        *(_DWORD *)v65 = 34082880;
        *(_DWORD *)(v65 + 4) = 0;
        *(_QWORD *)(v65 + 8) = 0;
        *(_QWORD *)(v65 + 16) = 0;
        *(_QWORD *)(v65 + 24) = 0;
        *(_QWORD *)(v65 + 32) = 0;
        v81 = v41;
      }
      *(_DWORD *)(v65 + 20) = 46923644;
      *(_DWORD *)(v65 + 16) = v13[93585974];
      *(_DWORD *)(v65 + 12) = (unsigned __int64)(v65 - (_QWORD)v13) >> 3;
      v72 = (_DWORD *)v65;
      MEMORY[0x18503B9A0](a1: v38, a2: v41, a3: v65, a4: v40, a5: 0);
      v69 = (__int64)v72;
      v72[2] = 46004603;
      if ( (*(_DWORD *)v69 & 2) != 0 )
        goto LABEL_43;
      while ( 1 )
      {
        v69 = MEMORY[0x182769900](a1: v67, a2: v68, a3: v69, a4: v66, a5: &a7);
LABEL_43:
        v66 = (v69 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((v69 & 0xFFFFFFFFFFF80000LL) + ((v69 - v66) >> 9) + 0x38) != 0 )
          *(_BYTE *)((v69 & 0xFFFFFFFFFFF80000LL) + ((v69 - v66) >> 9) + 0x38) = 0;
      }
    }
    if ( *(int *)(v14 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return (__int64)v13;
  }
}
