// sub_1ED3C80
// rva 0x01ed3c80  size 645  section .text  group text
// window base 0x181ed3c80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1ED3C80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  char *v7; // r14
  __int64 v8; // r15
  char *v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 result; // rax
  __int64 v23; // rdx
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rax
  unsigned __int64 v27; // rbx
  char v28; // [rsp+0h] [rbp-58h] BYREF
  __int64 v29; // [rsp+10h] [rbp-48h]
  __int64 v30; // [rsp+18h] [rbp-40h]
  char *v31; // [rsp+20h] [rbp-38h]
  __int64 v32; // [rsp+28h] [rbp-30h]
  __int64 v33; // [rsp+30h] [rbp-28h]
  __int64 v34; // [rsp+38h] [rbp-20h]
  __int64 v35; // [rsp+40h] [rbp-18h]
  char *v36; // [rsp+48h] [rbp-10h]
  unsigned int v37; // [rsp+50h] [rbp-8h]
  unsigned int v38; // [rsp+54h] [rbp-4h]

  v36 = (char *)a5;
  if ( (unsigned __int64)&v28 <= *(_QWORD *)(v8 + 8) )
  {
    v34 = a4;
    v38 = a2;
    v37 = a1;
    v33 = a6;
    v32 = a3;
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v28);
    goto LABEL_20;
  }
  if ( (char *)a5 == v7 )
  {
    v35 = (__int64)v7;
    v34 = a4;
    v38 = a2;
    v37 = a1;
    v33 = a6;
    v32 = a3;
  }
  else
  {
    v34 = a4;
    v38 = a2;
    v37 = a1;
    v33 = a6;
    v32 = a3;
    v35 = sub_1581540(a1, a2, a3: a5);
  }
  v9 = (char *)sub_1ED45C0(a1, a2, a3: (int)v7 + 376659936, a4, a5: v32, a6, a7: v28);
  v31 = v9;
  if ( v9 != v7 )
  {
    v13 = *(_DWORD *)v9 >> 3;
    if ( *(__int16 *)&v7[8 * v13 + 62] < 3 || *(_DWORD *)&v7[8 * *(unsigned int *)&v7[8 * v13 + 16] + 20] != 19760 )
      v9 = (char *)sub_276FC00(a1: v11, a2: v12, a3: v9, a4: v10, a5: v7 + 40472560);
  }
  if ( v36 == v7 )
  {
    if ( v9 == v7 )
      goto LABEL_24;
    result = sub_1ECCCE0(a1: v37, a2: v38, a3: v9, a4: v34, a5: (__int64)v7, a6: v33, a7: v28);
    if ( *(int *)(v8 + 16) > 0 )
      return result;
    return sub_277F280();
  }
  v30 = sub_27C5AE0(a1: v11, a2: v12, a3: v36);
  v17 = sub_27CE160(a1: v15, a2: v16, a3: v7 + 376659688, a4: v14, a5: v30, a6: 0);
  if ( (char *)v17 == v7 )
  {
LABEL_20:
    v23 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v23 + 40) > *(_QWORD *)(v8 + 32) )
    {
      v23 = sub_1EAA920(a1: v20, a2: v21, a3: 35802856);
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v23 + 40;
      *(_DWORD *)v23 = 35802856;
      *(_DWORD *)(v23 + 4) = 0;
      *(_QWORD *)(v23 + 8) = 0;
      *(_QWORD *)(v23 + 16) = 0;
      *(_QWORD *)(v23 + 24) = 0;
      *(_QWORD *)(v23 + 32) = 0;
    }
    *(_DWORD *)(v23 + 20) = 46923644;
    *(_DWORD *)(v23 + 16) = *((_DWORD *)v7 + 93585974);
    *(_DWORD *)(v23 + 12) = (unsigned __int64)(v23 - (_QWORD)v7) >> 3;
    v29 = v23;
    sub_503B9A0(a1: v20, a2: v21, a3: v23, a4: v19, a5: 0);
    v26 = v29;
    *(_DWORD *)(v29 + 8) = (unsigned __int64)(v36 - v7) >> 3;
    if ( (*(_DWORD *)v26 & 2) != 0 )
      goto LABEL_26;
    goto LABEL_23;
  }
  if ( v31 == v7 )
  {
    while ( 1 )
    {
      v26 = sub_2771080(a1: v20, a2: v21, a3: v18, a4: v19, a5: v36);
LABEL_26:
      v27 = (v26 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v26 & 0xFFFFFFFFFFF80000LL) + ((v26 - v27) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v26 & 0xFFFFFFFFFFF80000LL) + ((v26 - v27) >> 9) + 0x38) = 0;
LABEL_23:
      sub_2769900(a1: v24, a2: v25, a3: v26, a4: &a7, a5: &a7);
LABEL_24:
      sub_2771080();
    }
  }
  v29 = v17;
  result = sub_1ECCCE0(a1: v37, a2: v38, a3: v31, a4: v34, a5: v17, a6: v33, a7: v28);
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280();
  return result;
}
