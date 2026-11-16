// sub_184F21A80
// rva 0x04f21a80  size 869  section .text  group text
// window base 0x184f21a80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F21A80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  _DWORD *v13; // rdx
  __int64 result; // rax
  __int64 v15; // r8
  unsigned int v16; // eax
  __int64 v17; // rcx
  unsigned int v18; // ebx
  _DWORD *v19; // r8
  __int64 v20; // rax
  __int64 v21; // rsi
  unsigned __int64 v22; // rdi
  __int64 v23; // r9
  __int64 v24; // r8
  __int64 v25; // rsi
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // r8
  __int64 (__fastcall *v29)(__int64, __int64, __int64, _QWORD, _DWORD *); // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rcx
  void (__fastcall *v35)(__int64, __int64, _DWORD *, _QWORD, __int64, __int64); // rcx
  _DWORD *v36; // rax
  unsigned __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // rdx
  __int64 v41; // rdx
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rbx
  char v44; // [rsp+0h] [rbp-38h] BYREF
  _DWORD *v45; // [rsp+8h] [rbp-30h]
  _DWORD *v46; // [rsp+10h] [rbp-28h]
  _DWORD *v47; // [rsp+18h] [rbp-20h]
  unsigned int v48; // [rsp+24h] [rbp-14h]
  __int64 v49; // [rsp+28h] [rbp-10h]
  unsigned int v50; // [rsp+34h] [rbp-4h]

  v47 = (_DWORD *)a3;
  v46 = (_DWORD *)a5;
  if ( (unsigned __int64)&v44 <= *(_QWORD *)(v9 + 8) )
  {
    MEMORY[0x181EB84E0]();
LABEL_31:
    v41 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v41 + 48) > *(_QWORD *)(v9 + 32) )
    {
      v41 = MEMORY[0x181EAA920](a1, a2, a3: 34101256);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v41 + 48;
      *(_DWORD *)v41 = 34101256;
      *(_DWORD *)(v41 + 4) = 0;
      *(_QWORD *)(v41 + 8) = 0;
      *(_QWORD *)(v41 + 16) = 0;
      *(_QWORD *)(v41 + 24) = 0;
      *(_QWORD *)(v41 + 32) = 0;
      *(_QWORD *)(v41 + 40) = 0;
    }
    *(_DWORD *)(v41 + 20) = 46923644;
    *(_DWORD *)(v41 + 16) = *(_DWORD *)(v8 + 374343896);
    *(_DWORD *)(v41 + 12) = (unsigned __int64)(v41 - v8) >> 3;
    v45 = (_DWORD *)v41;
    MEMORY[0x18503B9A0](a1, a2, a3: v41, a4, a5: 0);
    v42 = (unsigned __int64)v45;
    v45[2] = 44101391;
    if ( (*(_DWORD *)v42 & 2) != 0 )
    {
      v37 = v42 & 0xFFFFFFFFFFF80000LL;
      v43 = (v42 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v42 & 0xFFFFFFFFFFF80000LL) + ((v42 - v43) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v42 & 0xFFFFFFFFFFF80000LL) + ((v42 - v43) >> 9) + 0x38) = 0;
      v36 = (_DWORD *)v42;
    }
    else
    {
      v36 = (_DWORD *)v42;
    }
LABEL_26:
    MEMORY[0x182769900](a1: v38, a2: v39, a3: v36, a4: v37, a5: &a7);
    goto LABEL_27;
  }
  if ( a5 == v8 )
    goto LABEL_31;
  sub_184F21320(a1, a2, a3, a4, a5, a6, a7: v44);
  v13 = v47;
  if ( *v47 >> 3 != 5223474 )
  {
    result = MEMORY[0x184ED6760](a1: v11, a2: v12, a3: v47, a4: v10, a5: v46);
    if ( *(int *)(v9 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  v15 = (unsigned int)v47[2];
  if ( (_DWORD)v15 == 0 )
  {
    MEMORY[0x182771080]();
    goto LABEL_36;
  }
  v16 = *(_DWORD *)(v8 + 8 * v15 + 8);
  v17 = (unsigned int)v47[3];
  v18 = v16 - v17;
  v50 = v16 - v17;
  if ( (int)(v16 - v17) >= 1 )
  {
    v19 = (_DWORD *)(v8 + 8 * v15);
    if ( (int)v17 < 0 || (unsigned int)v17 > v16 )
    {
      v36 = (_DWORD *)MEMORY[0x18579B920](a1: v11, a2: v12, a3: v19, a4: v17, a5: (unsigned int)v17, a6: v16);
LABEL_24:
      v40 = *v36 >> 3;
      if ( *(__int16 *)(v8 + 8 * v40 + 62) >= 5
        && *(_DWORD *)(v8 + 8LL * *(unsigned int *)(v8 + 8 * v40 + 16) + 28) == 88004 )
      {
        goto LABEL_27;
      }
      goto LABEL_26;
    }
    v20 = *(_QWORD *)(v9 + 40);
    v21 = v18;
    v22 = (v18 + 19LL) & 0x1FFFFFFF8LL;
    v23 = 34082368;
    if ( v22 >= 0x20000 || (v22 += v20, v22 > *(_QWORD *)(v9 + 32)) )
    {
      v49 = v18;
      v45 = v19;
      v48 = v17;
      v20 = MEMORY[0x181EAA840](a1: v22, a2: v18, a3: 34082368, a4: v17, a5: v50);
      v21 = v49;
      v19 = v45;
      v17 = v48;
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v22;
      *(_QWORD *)v20 = 34082368;
      *(_DWORD *)(v20 + 8) = v18;
    }
    v24 = (__int64)v19 + v17 + 12;
    v25 = v21 - 1;
    v26 = 0;
    do
    {
      v27 = (unsigned int)*(char *)(v24 + v26);
      *(_BYTE *)(v20 + 12 + v26) = *(_BYTE *)(v24 + v26);
      ++v26;
    }
    while ( v26 <= v25 );
    v35 = (void (__fastcall *)(__int64, __int64, _DWORD *, _QWORD, __int64, __int64))(v7
                                                                                    + *(_QWORD *)(v8
                                                                                                + 8LL * (*v46 >> 3)
                                                                                                + 136));
    v45 = (_DWORD *)v20;
    v35(a1: v27, a2: v25, a3: v46, a4: v35, a5: v20, a6: v23);
    v13 = v47;
    v18 = v50;
    v47[3] = v50;
  }
  v28 = (unsigned int)v13[1];
  if ( (_DWORD)v28 == 0 )
  {
LABEL_36:
    v36 = (_DWORD *)MEMORY[0x18276BEE0]();
    goto LABEL_24;
  }
  v29 = (__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, _DWORD *))(v7
                                                                            + *(_QWORD *)(v8
                                                                                        + 8LL
                                                                                        * (*(_DWORD *)(v8 + 8 * v28) >> 3)
                                                                                        + 216));
  v49 = (int)v18;
  v30 = v29(a1: v11, a2: v12, a3: v8 + 8 * v28, a4: (int)v18, a5: v46);
  v34 = v30 + v49;
  if ( !__OFADD__(v30, v49) )
  {
    if ( *(int *)(v9 + 16) <= 0 )
      MEMORY[0x18277F280](a1: v32, a2: v33, a3: v49, a4: v34);
    return v34;
  }
  MEMORY[0x18276B900](a1: v32, a2: v33, a3: v31, a4: v34);
LABEL_27:
  if ( *(int *)(v9 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return 0x7FFFFFFFFFFFFFFFLL;
}
