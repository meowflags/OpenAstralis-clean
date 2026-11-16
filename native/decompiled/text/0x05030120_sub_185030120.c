// sub_185030120
// rva 0x05030120  size 1916  section .text  group text
// window base 0x185030120: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185030120(
        __int64 a1,
        signed __int64 a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  int v11; // ecx
  __int64 v12; // rbp
  signed __int64 v13; // rax
  __int64 (__fastcall *v14)(__int64, __int64, _DWORD *); // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 *v17; // rdx
  double v18; // xmm0_8
  __int64 v19; // rcx
  double v20; // xmm0_8
  __int64 v21; // rax
  _DWORD *v22; // rbx
  __int64 v23; // rax
  __int64 *v24; // rdx
  double v25; // xmm0_8
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 result; // rax
  __int64 v31; // rax
  int i; // eax
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  int v36; // ecx
  _DWORD *v37; // rdx
  __int64 v38; // rcx
  int v39; // edx
  unsigned int v40; // eax
  __int64 v41; // rax
  unsigned __int64 v42; // rcx
  __int64 v43; // rdi
  __int64 v44; // rsi
  __int64 v45; // r8
  __int64 v46; // r8
  __int64 v47; // r8
  __int64 v48; // r8
  __int64 v49; // r8
  int v50; // [rsp+0h] [rbp-98h] BYREF
  unsigned int v51; // [rsp+2Ch] [rbp-6Ch]
  _DWORD *v52; // [rsp+30h] [rbp-68h]
  _DWORD *v53; // [rsp+38h] [rbp-60h]
  _BYTE v54[16]; // [rsp+40h] [rbp-58h] BYREF
  __int64 *v55; // [rsp+50h] [rbp-48h]
  __int64 v56; // [rsp+58h] [rbp-40h]
  void (__fastcall *v57)(__int64, __int64, __int64 *, __int64 *); // [rsp+60h] [rbp-38h]
  void (__fastcall *v58)(__int64, __int64, _BYTE *, _BYTE *, double); // [rsp+68h] [rbp-30h]
  __int64 *v59; // [rsp+70h] [rbp-28h]
  __int64 (__fastcall *v60)(__int64, __int64, _DWORD *); // [rsp+78h] [rbp-20h]
  int v61; // [rsp+84h] [rbp-14h]
  __int64 v62; // [rsp+88h] [rbp-10h]
  __int64 v63; // [rsp+90h] [rbp-8h]

  v63 = a5;
  if ( (unsigned __int64)&v50 <= *(_QWORD *)(v9 + 8) )
  {
    MEMORY[0x181EB84E0]();
LABEL_65:
    v48 = *(_QWORD *)(v9 + 40);
    if ( (unsigned __int64)(v48 + 40) > *(_QWORD *)(v9 + 32) )
    {
      v48 = MEMORY[0x181EAA920](a1, a2, a3: 34081944);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v48 + 40;
      *(_DWORD *)v48 = 34081944;
      *(_DWORD *)(v48 + 4) = 0;
      *(_QWORD *)(v48 + 8) = 0;
      *(_QWORD *)(v48 + 16) = 0;
      *(_QWORD *)(v48 + 24) = 0;
      *(_QWORD *)(v48 + 32) = 0;
    }
    *(_DWORD *)(v48 + 20) = 46923644;
    *(_DWORD *)(v48 + 16) = *(_DWORD *)(v8 + 374343896);
    *(_DWORD *)(v48 + 12) = (unsigned __int64)(v48 - v8) >> 3;
    v52 = (_DWORD *)v48;
    sub_18503B9A0(a1, a2, a3: v48, a4, a5: 0);
    v49 = (__int64)v52;
    v52[2] = 43885988;
    if ( (*(_DWORD *)v49 & 2) != 0 )
    {
      v42 = (v49 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v49 & 0xFFFFFFFFFFF80000LL) + ((v49 - v42) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v49 & 0xFFFFFFFFFFF80000LL) + ((v49 - v42) >> 9) + 0x38) = 0;
      v41 = v49;
    }
    else
    {
      v41 = v49;
    }
    while ( 1 )
    {
      do
      {
        do
        {
          v41 = MEMORY[0x182769900](a1: v43, a2: v44, a3: v41, a4: v42, a5: &a7);
          v46 = *(unsigned int *)(v8 + 8 * v45 + 4);
        }
        while ( (_DWORD)v46 == 0 );
        v47 = *(unsigned int *)(v8 + 8 * v46 + 8);
      }
      while ( (_DWORD)v47 == 0 || *(_DWORD *)(v8 + 8 * v47 + 16) == 0 );
      v52 = (_DWORD *)v41;
      MEMORY[0x18208CCA0](a1: v43, a2: v44, a3: v53, a4: v42, a5: 1);
      v41 = (__int64)v52;
    }
  }
  v53 = a3;
  if ( a5 < 0 )
    goto LABEL_65;
  if ( *a3 >> 3 != 5067607 )
  {
    v10 = *a3 >> 3;
    v11 = *(_DWORD *)(v8 + 8 * v10 + 48);
    if ( v11 != 0 )
    {
      v12 = *(unsigned int *)((char *)a3 + v11);
      if ( (_DWORD)v12 != 0 )
      {
        if ( v9 == *(_QWORD *)(v8 + 376351704) )
        {
          v62 = v11;
          v61 = v11;
          v51 = v10;
        }
        else
        {
          a2 = *(_QWORD *)(v9 + 64);
          a1 = *(_QWORD *)(v8 + 8 * v12 + 16);
          if ( a1 != 0 )
          {
            v51 = *a3 >> 3;
            if ( a1 == a2 )
            {
              v39 = *(_DWORD *)(v8 + 8 * v12 + 28) + 1;
              if ( v39 >= 0 )
              {
                *(_DWORD *)(v8 + 8 * v12 + 28) = v39;
                v62 = v11;
                v61 = v11;
LABEL_9:
                v14 = (__int64 (__fastcall *)(__int64, __int64, _DWORD *))(v7 + *(_QWORD *)(v8 + 8LL * v51 + 112));
                v60 = v14;
                if ( v63 < 1 )
                {
                  for ( i = v14(a1, a2, a3: v53); i != 0; i = v60(a1: v34, a2: v35, a3: v53) )
                    MEMORY[0x18208B5E0](a1: v15, a2: v16, a3: v8 + 376381032, a4: v33, a5: v53, a6: 0);
                  v36 = v61;
                  v27 = v63;
                }
                else if ( (unsigned int)v14(a1, a2, a3: v53) != 0 )
                {
                  v17 = (__int64 *)v54;
                  v59 = (__int64 *)v54;
                  v18 = *(double *)(v8 + 376178920);
                  v58 = (void (__fastcall *)(__int64, __int64, _BYTE *, _BYTE *, double))MEMORY[0xE572C40];
                  if ( v18 == 0.0 )
                  {
                    MEMORY[0xE572C40](a1: v15, a2: v16, a3: v54, a4: v54, a5: MEMORY[0xE987618]);
                    v17 = v59;
                    *(double *)(v8 + 376178920) = MEMORY[0xE987618] / (double)*v59;
                  }
                  v52 = (_DWORD *)(v8 + 376381032);
                  v57 = (void (__fastcall *)(__int64, __int64, __int64 *, __int64 *))MEMORY[0xE572170];
                  MEMORY[0xE572170](a1: v15, a2: v16, a3: v17, a4: v17);
                  v20 = (double)*v59 * *(double *)(v8 + 376178920);
                  v21 = (__int64)v20;
                  if ( (__int64)v20 == MEMORY[0xE987610] )
                  {
                    if ( __builtin_isnan(v20) )
                    {
                      v21 = 0;
                    }
                    else if ( v20 > 0.0 )
                    {
                      v21 = ~v21;
                    }
                  }
                  v59 = (__int64 *)v21;
                  v22 = v52;
                  v23 = v63;
                  while ( 1 )
                  {
                    v56 = v23;
                    MEMORY[0x18208B5E0](a1: v15, a2: v16, a3: v22, a4: v19, a5: v53, a6: v23);
                    if ( (unsigned int)v60(a1: v28, a2: v29, a3: v53) == 0 )
                    {
                      v36 = v61;
                      v27 = v63;
                      goto LABEL_33;
                    }
                    v24 = (__int64 *)v54;
                    v55 = (__int64 *)v54;
                    if ( *(double *)(v8 + 376178920) == 0.0 )
                    {
                      v58(a1: v15, a2: v16, a3: v54, a4: v54, a5: MEMORY[0xE987618]);
                      v24 = v55;
                      *(double *)(v8 + 376178920) = MEMORY[0xE987618] / (double)*v55;
                    }
                    v57(a1: v15, a2: v16, a3: v24, a4: v24);
                    v25 = (double)*v55 * *(double *)(v8 + 376178920);
                    v26 = (__int64)v25;
                    if ( (__int64)v25 == MEMORY[0xE987610] )
                    {
                      if ( __builtin_isnan(v25) )
                      {
                        v26 = 0;
                      }
                      else if ( v25 > 0.0 )
                      {
                        v26 = ~v26;
                      }
                    }
                    v27 = v63;
                    v23 = v63 - (v26 - (__int64)v59) / 1000000;
                    if ( v23 < 1 )
                      break;
                    v22 = v52;
                  }
                  v36 = v61;
                }
                else
                {
                  v36 = v61;
                  v27 = v63;
                }
LABEL_33:
                if ( v36 != 0 )
                {
                  v37 = v53;
                  result = *(unsigned int *)((char *)v53 + v62);
                  v38 = *(unsigned int *)(v8 + 8 * result + 28);
                  if ( (_DWORD)v38 == 1 )
                  {
                    *(_QWORD *)(v8 + 8 * result + 16) = 0;
                    __faststorefence();
                  }
                  else
                  {
                    *(_DWORD *)(v8 + 8 * result + 28) = v38 - 1;
                  }
                  if ( (_DWORD)v38 != 1 )
                    goto LABEL_37;
                  result = *(unsigned int *)(v8 + 8 * result + 4);
                  if ( (_DWORD)result == 0 )
                    goto LABEL_37;
                  result = *(unsigned int *)(v8 + 8 * result + 8);
                  if ( (_DWORD)result == 0 )
                    goto LABEL_37;
                  result = *(unsigned int *)(v8 + 8 * result + 16);
                  if ( (_DWORD)result == 0 )
                    goto LABEL_37;
                  v40 = 1;
                }
                else
                {
                  v40 = 0xFFFFFFFF;
                  v37 = v53;
                }
                result = MEMORY[0x18208CCA0](a1: v15, a2: v16, a3: v37, a4: v37, a5: v40);
                v27 = v63;
                v37 = v53;
LABEL_37:
                if ( *(int *)(v9 + 16) <= 0 )
                  return MEMORY[0x18277F280](a1: v15, a2: v16, a3: v37, a4: v38, a5: v27);
                return result;
              }
              v62 = v11;
              v61 = v11;
            }
            else
            {
              v62 = v11;
              v61 = v11;
            }
          }
          else
          {
            v51 = *a3 >> 3;
            v13 = __sync_val_compare_and_swap((volatile signed __int64 *)(v8 + 8 * v12 + 16), 0, a2);
            v62 = v11;
            v61 = v11;
            if ( v13 == 0 )
              goto LABEL_9;
          }
        }
      }
      else
      {
        v62 = v11;
        v61 = v11;
        v51 = v10;
      }
    }
    else
    {
      v62 = 0;
      v61 = 0;
      v51 = v10;
    }
    MEMORY[0x18208CC20](a1, a2, a3: v53);
    goto LABEL_9;
  }
  result = (unsigned int)a3[34];
  if ( (_DWORD)result != 0 && (_DWORD)result != 99 )
  {
    if ( a5 < 0x8637BD05AF7LL )
      v31 = 1000000 * a5;
    else
      v31 = 0x7FFFFFFFFFFFFFFFLL;
    v62 = v31;
    result = sub_185045840(a1, a2, a3, a4: a3, a5: v31);
  }
  if ( *(int *)(v9 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
