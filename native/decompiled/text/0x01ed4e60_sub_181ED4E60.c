// sub_181ED4E60
// rva 0x01ed4e60  size 901  section .text  group text
// window base 0x181ed4e60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_181ED4E60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rcx
  unsigned int v10; // eax
  __int64 v11; // rcx
  int i; // eax
  __int64 v13; // rcx
  unsigned int v14; // edx
  __int64 v15; // rcx
  _DWORD *result; // rax
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // r9
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rsi
  unsigned int v31; // edx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rdx
  unsigned __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rdi
  __int64 v38; // rsi
  char v39; // [rsp+0h] [rbp-48h] BYREF
  __int64 v40; // [rsp+10h] [rbp-38h]
  __int64 v41; // [rsp+18h] [rbp-30h]
  __int64 v42; // [rsp+20h] [rbp-28h]
  __int64 v43; // [rsp+28h] [rbp-20h]
  __int64 v44; // [rsp+30h] [rbp-18h]
  __int64 v45; // [rsp+38h] [rbp-10h]
  int v46; // [rsp+44h] [rbp-4h]

  v45 = a5;
  v44 = a6;
  if ( (unsigned __int64)&v39 <= *(_QWORD *)(v8 + 8) )
    goto LABEL_33;
  if ( a5 == v7 )
    goto LABEL_34;
  v9 = *(unsigned int *)(a5 + 4);
  if ( (_DWORD)v9 == 0 )
    goto LABEL_35;
  v10 = *(_DWORD *)(v7 + 8 * v9 + 8);
  v11 = (unsigned int)*(char *)(a5 + 12);
  if ( v10 >> *(_BYTE *)(a5 + 12) != 0 )
  {
    v43 = a3;
    if ( (unsigned int)MEMORY[0x184FEBC20](a1, a2, a3: a5, a4: v11, a5: 0) == 91 )
    {
      for ( i = 1; ; i = v46 + 1 )
      {
        a5 = v45;
        v33 = *(unsigned int *)(v45 + 4);
        if ( (_DWORD)v33 == 0 )
        {
          MEMORY[0x182771080]();
          goto LABEL_41;
        }
        v31 = *(_DWORD *)(v7 + 8 * v33 + 8);
        v32 = (unsigned int)*(char *)(v45 + 12);
        if ( (int)(v31 >> *(_BYTE *)(v45 + 12)) <= i )
          break;
        v46 = i;
        if ( (unsigned int)MEMORY[0x184FEBC20](a1, a2, a3: v45, a4: v32, a5: (unsigned int)i) != 91 )
        {
          i = v46;
          a5 = v45;
          break;
        }
      }
    }
    else
    {
      i = 0;
      a5 = v45;
    }
  }
  else
  {
    i = 0;
    v43 = a3;
  }
  v13 = *(unsigned int *)(a5 + 4);
  if ( (_DWORD)v13 == 0 )
    goto LABEL_36;
  v14 = *(_DWORD *)(v7 + 8 * v13 + 8);
  v15 = (unsigned int)*(char *)(a5 + 12);
  if ( v14 >> *(_BYTE *)(a5 + 12) == i || i >= 256 )
  {
    if ( v44 != v7 )
    {
      while ( 1 )
      {
        v46 = i;
        v34 = *(_QWORD *)(v8 + 40);
        if ( (unsigned __int64)(v34 + 40) > *(_QWORD *)(v8 + 32) )
        {
          v34 = sub_181EAA920(a1, a2, a3: 36450760);
        }
        else
        {
          *(_QWORD *)(v8 + 40) = v34 + 40;
          *(_DWORD *)v34 = 36450760;
          *(_DWORD *)(v34 + 4) = 0;
          *(_QWORD *)(v34 + 8) = 0;
          *(_QWORD *)(v34 + 16) = 0;
          *(_QWORD *)(v34 + 24) = 0;
          *(_QWORD *)(v34 + 32) = 0;
        }
        *(_DWORD *)(v34 + 20) = 46923644;
        *(_DWORD *)(v34 + 16) = *(_DWORD *)(v7 + 374343896);
        *(_DWORD *)(v34 + 12) = (unsigned __int64)(v34 - v7) >> 3;
        v42 = v34;
        MEMORY[0x18503B9A0](a1, a2, a3: v34, a4: v15, a5: 0);
        v36 = v42;
        *(_DWORD *)(v42 + 8) = (unsigned __int64)(v45 - v7) >> 3;
        if ( (*(_DWORD *)v36 & 2) != 0 )
        {
LABEL_41:
          v35 = (v36 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((v36 & 0xFFFFFFFFFFF80000LL) + ((v36 - v35) >> 9) + 0x38) != 0 )
            *(_BYTE *)((v36 & 0xFFFFFFFFFFF80000LL) + ((v36 - v35) >> 9) + 0x38) = 0;
        }
        *(_DWORD *)(v36 + 12) = 0;
        MEMORY[0x182769900](a1: v37, a2: v38, a3: v36, a4: v35, a5: &a7);
LABEL_33:
        v43 = a3;
        sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v39);
LABEL_34:
        v43 = a3;
        MEMORY[0x182771080]();
LABEL_35:
        v43 = a3;
        i = MEMORY[0x182771080]();
LABEL_36:
        v46 = i;
        i = MEMORY[0x182771080]();
      }
    }
    if ( *(int *)(v8 + 16) <= 0 )
    {
      v46 = i;
      MEMORY[0x18277F280]();
    }
    return (_DWORD *)v7;
  }
  else
  {
    v46 = i;
    if ( i < 1 )
    {
      v28 = sub_181ED5780(a1, a2, a3: v43, a4: v15, a5: v45, a6: v44);
    }
    else
    {
      v42 = v7 + 376660112;
      sub_181ED38E0(a1, a2, a3: v7 + 376660112, a4: v7 + 376660112, a5, a6: v44);
      v41 = sub_181ED5200(a1: v44, a2: v18, a3: v43, a4: v17, a5: v45, a6: (unsigned int)v46);
      sub_181ED3660(a1: v20, a2: v21, a3: v42, a4: v19, a5: v22, a6: v23, a7: v39);
      v28 = v41;
    }
    v41 = v28;
    if ( v46 < 1 || v28 == v7 )
    {
      if ( v28 == v7 )
        v28 = sub_181EC3420(a1: v25, a2: v26, a3: v45, a4: v24, a5: v44, a6: v27);
    }
    else
    {
      v28 = sub_181ED4300(a1: v25, a2: v26, a3: v28, a4: v24, a5: (unsigned int)v46, a6: v27);
    }
    v40 = v28;
    result = sub_181ED3B20(a1: v25, a2: v26, a3: v43, a4: v24, a5: v28, a6: v45, a7: v39);
    if ( *(int *)(v8 + 16) <= 0 )
      return (_DWORD *)MEMORY[0x18277F280](a1: v29, a2: v30, a3: v40, a4: v41);
  }
  return result;
}
