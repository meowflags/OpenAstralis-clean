// sub_1ECA360
// rva 0x01eca360  size 1819  section .text  group text
// window base 0x181eca360: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1ECA360(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // r8
  char *v10; // r8
  __int64 result; // rax
  char *v12; // rcx
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rax
  unsigned __int64 v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rax
  char *v20; // rsi
  unsigned __int64 v21; // r9
  unsigned int v22; // r10d
  __int64 v23; // r11
  __int64 v24; // rdx
  unsigned __int64 v25; // r12
  unsigned int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // r8
  __int64 v30; // r8
  unsigned __int64 v31; // r9
  unsigned int v32; // r10d
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // r9
  char v37; // [rsp+0h] [rbp-58h] BYREF
  char *v38; // [rsp+10h] [rbp-48h]
  int v39; // [rsp+1Ch] [rbp-3Ch]
  char *v40; // [rsp+20h] [rbp-38h]
  char *v41; // [rsp+28h] [rbp-30h]
  __int64 v42; // [rsp+30h] [rbp-28h]
  unsigned int v43; // [rsp+3Ch] [rbp-1Ch]
  __int64 v44; // [rsp+40h] [rbp-18h]
  unsigned int v45; // [rsp+48h] [rbp-10h]
  int v46; // [rsp+4Ch] [rbp-Ch]
  __int64 v47; // [rsp+50h] [rbp-8h]

  v42 = a3;
  if ( (unsigned __int64)&v37 <= *(_QWORD *)(v7 + 8) )
  {
LABEL_72:
    sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v37);
LABEL_73:
    sub_2771080(a1: v15, a2: v20);
LABEL_74:
    v43 = v22;
    sub_2771220(a1: v15, a2: v20, a3: (unsigned int)v23, a4: v12, a5: v22);
    sub_2771220(a1: v34, a2: v35, a3: v32, a4: v33, a5: (unsigned int)v33, a6: v36);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1ECAA80();
  }
  else
  {
    v8 = *(unsigned int *)(v7 + 72);
    if ( (_DWORD)v8 == 0 )
      goto LABEL_12;
    v9 = *(unsigned int *)&v6[8 * v8 + 72];
    if ( (_DWORD)v9 != 0 )
      v10 = &v6[8 * v9];
    else
      v10 = &v6[8 * v8];
    while ( 1 )
    {
      v41 = v10;
      result = (__int64)&v6[8 * *(unsigned int *)(a3 + 12)];
      if ( (char *)result == v10 )
      {
        if ( *(int *)(v7 + 16) <= 0 )
          return sub_277F280();
        return result;
      }
      result = *(unsigned int *)(a3 + 16);
      v12 = &v6[8 * result];
      v13 = (unsigned __int64)(v10 - v6) >> 3;
      if ( (_DWORD)result == 0 )
      {
        result = (unsigned int)__sync_val_compare_and_swap((volatile signed __int32 *)(a3 + 16), 0, v13);
        v17 = *(unsigned int *)a3;
        if ( (v17 & 2) != 0 )
        {
          a2 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
          v17 = (unsigned __int64)(a3 - a2) >> 9;
          if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + v17 + 0x38) != 0 )
            *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((unsigned __int64)(a3 - a2) >> 9) + 0x38) = 0;
        }
        if ( (_DWORD)result == 0 )
        {
          if ( *(int *)(v7 + 16) <= 0 )
            return sub_277F280(a1: v17, a2, a3, a4: v12);
          return result;
        }
        v12 = &v6[8 * result];
      }
      if ( v12 == v10 )
      {
        if ( *(int *)(v7 + 16) <= 0 )
        {
          v40 = v12;
          return sub_277F280();
        }
        return result;
      }
      v39 = (unsigned __int64)(v10 - v6) >> 3;
      v14 = *(_DWORD *)v12 >> 3;
      v15 = 40469904;
      v47 = 40469904;
      if ( *(__int16 *)&v6[8 * v14 + 62] >= 2 && *(_DWORD *)&v6[8 * *(unsigned int *)&v6[8 * v14 + 16] + 16] == 27277 )
      {
        v18 = *(_QWORD *)(v7 + 40);
        if ( (unsigned __int64)(v18 + 24) > *(_QWORD *)(v7 + 32) )
        {
          v40 = v12;
          v18 = sub_1EAA840(a1: 40469904, a2, a3: v47, a4: (__int64)v12, a5: 2u);
          v15 = v47;
          v12 = v40;
          LODWORD(v13) = v39;
          v10 = v41;
          a3 = v42;
        }
        else
        {
          *(_QWORD *)(v7 + 40) = v18 + 24;
          *(_QWORD *)v18 = 40469904;
          *(_DWORD *)(v18 + 8) = 2;
          *(_DWORD *)(v18 + 12) = 0;
          *(_QWORD *)(v18 + 16) = 0;
        }
        *(_DWORD *)(v18 + 16) = v13;
        *(_DWORD *)(v18 + 12) = (unsigned __int64)(v12 - v6) >> 3;
        v19 = (unsigned int)__sync_val_compare_and_swap(
                              (volatile signed __int32 *)(a3 + 16),
                              (unsigned __int64)(v12 - v6) >> 3,
                              (unsigned __int64)(v18 - (_QWORD)v6) >> 3);
        if ( (*(_DWORD *)a3 & 2) != 0 )
        {
          v31 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
          if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v31) >> 9) + 0x38) != 0 )
            *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v31) >> 9) + 0x38) = 0;
        }
        result = (__int64)&v6[8 * v19];
        if ( (char *)result == v12 )
        {
          if ( *(int *)(v7 + 16) <= 0 )
            return sub_277F280(a1: v15, a2: v10);
          return result;
        }
        v12 = (char *)result;
      }
      v40 = v12;
      if ( v12 == v6 )
        break;
      v16 = *(_DWORD *)v12 >> 3;
      if ( *(__int16 *)&v6[8 * v16 + 62] >= 3 && *(_DWORD *)&v6[8 * *(unsigned int *)&v6[8 * v16 + 16] + 20] == 85404 )
        break;
      sub_276FC00(a1: v15, a2: v10, a3: v12, a4: v12, a5: v6 + 40469904);
LABEL_12:
      v10 = v6;
    }
    v20 = v10;
    v21 = (unsigned __int64)v12;
    if ( v12 == v6 )
      goto LABEL_73;
    v38 = v12;
    v22 = *((_DWORD *)v12 + 2);
    v23 = 0;
    while ( 1 )
    {
      if ( (int)v22 <= (int)v23 )
      {
        v26 = v22 + 1;
        if ( (int)(2 * v22) > (int)(v22 + 1) )
          JUMPOUT(0x303D54626LL);
        v27 = v26;
        if ( (v26 & 0x80000000) == 0 )
        {
          v28 = *(_QWORD *)(v7 + 40);
          v29 = (4LL * (unsigned int)v27 + 19) & 0x7FFFFFFF8LL;
          if ( v29 >= 0x20000 || (unsigned __int64)(v30 = v28 + v29) > *(_QWORD *)(v7 + 32) )
          {
            v44 = (unsigned int)v27;
            v46 = v23;
            v43 = v22;
            v45 = v27;
            sub_1EAA840(a1: v15, a2: (unsigned int)v27, a3: v15, a4: v27, a5: v27);
            LODWORD(v27) = v45;
            v22 = v43;
          }
          else
          {
            *(_QWORD *)(v7 + 40) = v30;
            *(_QWORD *)v28 = v15;
            *(_DWORD *)(v28 + 8) = v27;
          }
          if ( v22 >= (unsigned int)v27 )
            JUMPOUT(0x303D5468ALL);
          JUMPOUT(0x303D5467FLL);
        }
        v45 = v22 + 1;
        v46 = v23;
        sub_579AF80(a1: v15, a2: v10, a3: v38, a4: v26, a5: v26, a6: v6 + 40469904);
        goto LABEL_72;
      }
      if ( v22 <= (unsigned int)v23 )
        goto LABEL_74;
      result = *(unsigned int *)(v21 + 4 * v23 + 12);
      if ( &v6[8 * result] == v10 )
        break;
      v24 = (unsigned int)(v23 + 1);
      if ( (_DWORD)result != 0 )
      {
        v23 = (unsigned int)v24;
      }
      else
      {
        result = __sync_val_compare_and_swap((volatile signed __int32 *)(v21 + 4 * v23 + 12), 0, v13) == 0;
        if ( (*(_DWORD *)v21 & 2) != 0 )
        {
          if ( (*(_DWORD *)v21 & 1) != 0 )
          {
            v12 = (char *)(v21 - *(_QWORD *)(v21 - 8));
            v25 = (unsigned __int64)(4 * v23 + 12) >> 9;
            if ( v12[v25 + 48] != 0 )
              v12[v25 + 48] = 0;
          }
          else
          {
            v12 = (char *)((v21 & 0xFFFFFFFFFFF80000LL) + 2112);
            if ( *(_BYTE *)((v21 & 0xFFFFFFFFFFF80000LL) + ((v21 - (unsigned __int64)v12) >> 9) + 0x38) != 0 )
              *(_BYTE *)((v21 & 0xFFFFFFFFFFF80000LL) + ((v21 - (unsigned __int64)v12) >> 9) + 0x38) = 0;
          }
        }
        if ( (_DWORD)result != 0 )
        {
          v46 = v23;
          if ( *(int *)(v7 + 16) <= 0 )
            return sub_277F280(a1: v15, a2: v10, a3: v24);
          return result;
        }
        v23 = (unsigned int)v24;
      }
    }
    v46 = v23;
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
