// sub_185026920
// rva 0x05026920  size 997  section .text  group text
// window base 0x185026920: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185026920(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, _DWORD *a5, _DWORD *a6, char a7)
{
  __int64 v7; // r13
  _DWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // rax
  _DWORD *v13; // rbx
  char v14; // dl
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rdi
  int v18; // ebp
  __int64 v19; // rsi
  unsigned int v20; // edi
  __int64 v21; // r10
  __int64 v22; // rdi
  unsigned int v23; // edx
  __int64 v24; // r10
  __int64 v25; // rdi
  int v26; // edx
  __int64 v27; // r8
  unsigned __int64 v28; // r9
  unsigned __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rdx
  __int64 v35; // r8
  int v37; // eax
  __int64 v38; // rdx
  unsigned __int64 v39; // rcx
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int64 v42; // rax
  __int64 v43; // [rsp+0h] [rbp-58h] BYREF
  __int64 v44; // [rsp+8h] [rbp-50h]
  __int64 v45; // [rsp+10h] [rbp-48h]
  _DWORD *v46; // [rsp+18h] [rbp-40h]
  _DWORD *v47; // [rsp+20h] [rbp-38h]
  _DWORD *v48; // [rsp+28h] [rbp-30h]
  _DWORD *v49; // [rsp+30h] [rbp-28h]
  _DWORD *v50; // [rsp+38h] [rbp-20h]
  _DWORD *v51; // [rsp+40h] [rbp-18h]
  int v52; // [rsp+48h] [rbp-10h]
  int v53; // [rsp+4Ch] [rbp-Ch]
  unsigned int v54; // [rsp+50h] [rbp-8h]
  unsigned int v55; // [rsp+54h] [rbp-4h]

  if ( (unsigned __int64)&v43 <= *(_QWORD *)(v9 + 8) )
  {
    v48 = a1;
    v47 = a6;
    v46 = a5;
    v45 = a3;
    MEMORY[0x181EB84E0]();
LABEL_31:
    v55 = v19;
    v49 = (_DWORD *)v10;
    MEMORY[0x182771080]();
    goto LABEL_32;
  }
  v10 = (__int64)(v8 + 88325320);
  if ( a5 == v8 )
    v51 = v8 + 88325320;
  else
    v51 = a5;
  if ( a1 == v8 )
    v50 = v8 + 88325320;
  else
    v50 = a1;
  if ( a6 == v8 )
  {
    v49 = v8 + 88325320;
    v48 = a1;
    v47 = a6;
    v46 = a5;
    v45 = a3;
  }
  else
  {
    v49 = v8 + 88325320;
    v48 = a1;
    v46 = a5;
    v45 = a3;
    v11 = *(_QWORD *)&v8[2 * (*a6 >> 3) + 26];
    v47 = a6;
    v12 = ((__int64 (__fastcall *)(_DWORD *, __int64, _DWORD *))(v7 + v11))(a1, a2, a3: a6);
    if ( (_DWORD *)v12 == v8 )
      v10 = (__int64)v49;
    else
      v10 = v12;
  }
  v13 = v50;
  v14 = *((_BYTE *)v51 + 12);
  v15 = *(char *)(v10 + 12);
  v16 = *((char *)v50 + 12);
  v17 = (unsigned int)v51[1];
  v18 = v16 | v15 | v14;
  v19 = (unsigned int)(char)(*((_BYTE *)v50 + 12) | *(_BYTE *)(v10 + 12) | v14);
  if ( (_DWORD)v17 == 0 )
    goto LABEL_31;
  v20 = v8[2 * v17 + 2];
  v21 = *(unsigned int *)(v10 + 4);
  v49 = (_DWORD *)v10;
  v22 = v20 >> v14;
  if ( (_DWORD)v21 == 0 )
  {
LABEL_32:
    v55 = v19;
    MEMORY[0x182771080](a1: v22);
    goto LABEL_33;
  }
  v23 = v8[2 * v21 + 2];
  v24 = (unsigned int)v50[1];
  v25 = (v23 >> v15) + (unsigned int)v22;
  if ( (_DWORD)v24 == 0 )
  {
LABEL_33:
    v54 = v25;
    v55 = v19;
    MEMORY[0x182771080]();
LABEL_34:
    v54 = v25;
    v55 = v19;
    v37 = v26;
    v38 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v38 + 40) > *(_QWORD *)(v9 + 32) )
    {
      v53 = v37;
      v38 = MEMORY[0x181EAA920](a1: v25, a2: v19, a3: 34082880);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v38 + 40;
      *(_DWORD *)v38 = 34082880;
      *(_DWORD *)(v38 + 4) = 0;
      *(_QWORD *)(v38 + 8) = 0;
      *(_QWORD *)(v38 + 16) = 0;
      *(_QWORD *)(v38 + 24) = 0;
      *(_QWORD *)(v38 + 32) = 0;
      v53 = v37;
    }
    *(_DWORD *)(v38 + 20) = 46923644;
    *(_DWORD *)(v38 + 16) = v8[93585974];
    *(_DWORD *)(v38 + 12) = (unsigned __int64)(v38 - (_QWORD)v8) >> 3;
    v44 = v38;
    sub_18503B9A0(a1: v25, a2: v19, a3: v38, a4: v38, a5: 0);
    v42 = v44;
    *(_DWORD *)(v44 + 8) = 46004603;
    if ( (*(_DWORD *)v42 & 2) != 0 )
      goto LABEL_38;
    while ( 1 )
    {
      v42 = MEMORY[0x182769900](a1: v40, a2: v41, a3: v42, a4: v39, a5: &a7);
LABEL_38:
      v39 = (v42 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v42 & 0xFFFFFFFFFFF80000LL) + ((v42 - v39) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v42 & 0xFFFFFFFFFFF80000LL) + ((v42 - v39) >> 9) + 0x38) = 0;
    }
  }
  v26 = ((_DWORD)v25 + (v8[2 * v24 + 2] >> v16)) << v19;
  if ( v26 < 0 )
    goto LABEL_34;
  v53 = v18;
  v27 = *(_QWORD *)(v9 + 40);
  v28 = *(_QWORD *)(v9 + 32);
  v29 = ((unsigned int)v26 + 19LL) & 0x1FFFFFFF8LL;
  if ( v29 >= 0x20000 || (v29 += v27, v29 > v28) )
  {
    v54 = v25;
    v55 = v19;
    v27 = MEMORY[0x181EAA840](a1: v25, a2: v19, a3: 34082368, a4: v29, a5: (unsigned int)v26, a6: v28);
    LODWORD(v25) = v54;
    v19 = v55;
    LOBYTE(v18) = v53;
    v13 = v50;
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v29;
    *(_QWORD *)v27 = 34082368;
    *(_DWORD *)(v27 + 8) = v26;
  }
  v44 = v27;
  if ( (_BYTE)v18 != 0 )
  {
    v55 = v19;
    v54 = v25;
    MEMORY[0x184FF2C40](a1: 1, a2: v19, a3: v13, a4: v29, a5: v27, a6: (unsigned int)v25);
  }
  else
  {
    v54 = v25;
    v55 = v19;
    MEMORY[0x184FF2C40](a1: 0, a2: v19, a3: v50, a4: v29, a5: v44, a6: (unsigned int)v25);
  }
  v31 = MEMORY[0x185011A80](a1: v49, a2: v51, a3: v54, a4: v30, a5: v55, a6: v44);
  v34 = *(_QWORD *)(v9 + 40);
  if ( (unsigned __int64)(v34 + 24) > *(_QWORD *)(v9 + 32) )
  {
    v52 = v31;
    v34 = MEMORY[0x181EAA920](a1: v32, a2: v33, a3: 34082680);
  }
  else
  {
    *(_QWORD *)(v9 + 40) = v34 + 24;
    *(_DWORD *)v34 = 34082680;
    *(_DWORD *)(v34 + 4) = 0;
    *(_QWORD *)(v34 + 8) = 0;
    *(_QWORD *)(v34 + 16) = 0;
  }
  v35 = v44;
  *(_BYTE *)(v34 + 12) = v53;
  *(_DWORD *)(v34 + 4) = (unsigned __int64)(v35 - (_QWORD)v8) >> 3;
  if ( *(int *)(v9 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return v34;
}
