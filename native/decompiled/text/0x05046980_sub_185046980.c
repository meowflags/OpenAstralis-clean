// sub_185046980
// rva 0x05046980  size 1455  section .text  group text
// window base 0x185046980: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185046980(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // r15
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 *v14; // rbx
  double v15; // xmm0_8
  __int64 result; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  double v20; // xmm0_8
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 *v29; // rdx
  double v30; // xmm0_8
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // rcx
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 *v38; // rdx
  double v39; // xmm0_8
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdi
  __int64 v45; // rsi
  __int64 i; // rdx
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rcx
  __int64 v50; // rdx
  int v51; // [rsp+0h] [rbp-78h] BYREF
  __int64 v52; // [rsp+20h] [rbp-58h]
  __int64 v53; // [rsp+28h] [rbp-50h]
  _BYTE v54[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 *v55; // [rsp+38h] [rbp-40h]
  __int64 *v56; // [rsp+40h] [rbp-38h]
  void (__fastcall *v57)(__int64, __int64, __int64 *, __int64 *); // [rsp+48h] [rbp-30h]
  __int64 v58; // [rsp+50h] [rbp-28h]
  __int64 *v59; // [rsp+58h] [rbp-20h]
  __int64 *v60; // [rsp+60h] [rbp-18h]
  __int64 v61; // [rsp+68h] [rbp-10h]
  __int64 v62; // [rsp+70h] [rbp-8h]

  v53 = a3;
  v61 = a5;
  if ( (unsigned __int64)&v51 <= *(_QWORD *)(v9 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_33;
  }
  v10 = sub_185044E60(a1, a2, a3, a4, a5, a6, a7: v51);
  v13 = 34586824;
  if ( v10 != 0 )
  {
LABEL_33:
    v58 = v13;
    v47 = *(_QWORD *)(v9 + 40);
    v48 = v47 + 40;
    if ( (unsigned __int64)(v47 + 40) > *(_QWORD *)(v9 + 32) )
    {
      v47 = MEMORY[0x181EAA920](a1: v11, a2: v12, a3: v58, a4: v48, a5: v61);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v48;
      *(_DWORD *)v47 = 34586824;
      *(_DWORD *)(v47 + 4) = 0;
      *(_QWORD *)(v47 + 8) = 0;
      *(_QWORD *)(v47 + 16) = 0;
      *(_QWORD *)(v47 + 24) = 0;
      *(_QWORD *)(v47 + 32) = 0;
    }
    *(_DWORD *)(v47 + 20) = 46923644;
    *(_DWORD *)(v47 + 16) = *(_DWORD *)(v8 + 374343896);
    v49 = (unsigned __int64)(v47 - v8) >> 3;
    *(_DWORD *)(v47 + 12) = v49;
    v52 = v47;
    sub_18503B9A0(a1: v11, a2: v12, a3: (unsigned int *)v47, a4: v49, a5: 0);
    v42 = v52;
    goto LABEL_29;
  }
  if ( v61 != 0 )
  {
    v14 = (__int64 *)v54;
    v60 = (__int64 *)v54;
    v15 = *(double *)(v8 + 376178920);
    v59 = (__int64 *)MEMORY[0xE572C40];
    v58 = 34586824;
    if ( v15 == 0.0 )
    {
      MEMORY[0xE572C40](a1: v11, a2: v12, a3: 34586824, a4: v54, a5: v15);
      v14 = v60;
      *(double *)(v8 + 376178920) = MEMORY[0xE987630] / (double)*v60;
    }
    v57 = (void (__fastcall *)(__int64, __int64, __int64 *, __int64 *))MEMORY[0xE572170];
    result = MEMORY[0xE572170](a1: v11, a2: v12, a3: MEMORY[0xE572170], a4: v14);
    if ( v61 >= 1 )
    {
      v20 = (double)*v60 * *(double *)(v8 + 376178920);
      v21 = (__int64)v20;
      if ( (__int64)v20 == MEMORY[0xE987638] )
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
      v60 = (__int64 *)v21;
      sub_185045F80(a1: v18, a2: v19, a3: v53, a4: v17, a5: v61);
      if ( (unsigned int)sub_185044E60(a1: v23, a2: v24, a3: v53, a4: v22, a5: v25, a6: v26, a7: v51) != 0 )
      {
        v62 = v7;
        v59 = (__int64 *)v61;
      }
      else
      {
        v29 = (__int64 *)v54;
        v56 = (__int64 *)v54;
        if ( *(double *)(v8 + 376178920) == 0.0 )
        {
          ((void (__fastcall *)(__int64, __int64, _BYTE *, _BYTE *))v59)(a1: v27, a2: v28, a3: v54, a4: v54);
          v29 = v56;
          *(double *)(v8 + 376178920) = MEMORY[0xE987630] / (double)*v56;
        }
        v57(a1: v27, a2: v28, a3: v29, a4: v29);
        v30 = (double)*v56 * *(double *)(v8 + 376178920);
        v31 = (__int64)v30;
        if ( (__int64)v30 == MEMORY[0xE987638] )
        {
          if ( __builtin_isnan(v30) )
          {
            v31 = 0;
          }
          else if ( v30 > 0.0 )
          {
            v31 = ~v31;
          }
        }
        v32 = v61;
        for ( result = v61 - (v31 - (_QWORD)v60); ; result = v61 - (v40 - (_QWORD)v60) )
        {
          v41 = v53;
          if ( result < 1 )
            goto LABEL_24;
          v56 = (__int64 *)result;
          sub_185045F80(a1: v18, a2: v53, a3: v53, a4: v17, a5: result);
          if ( (unsigned int)sub_185044E60(a1: v34, a2: v35, a3: v53, a4: v33, a5: v36, a6: v37, a7: v51) != 0 )
            break;
          v38 = (__int64 *)v54;
          v55 = (__int64 *)v54;
          if ( *(double *)(v8 + 376178920) == 0.0 )
          {
            ((void (__fastcall *)(__int64, __int64, _BYTE *, _BYTE *))v59)(a1: v27, a2: v28, a3: v54, a4: v54);
            v38 = v55;
            *(double *)(v8 + 376178920) = MEMORY[0xE987630] / (double)*v55;
          }
          v57(a1: v27, a2: v28, a3: v38, a4: v38);
          v39 = (double)*v55 * *(double *)(v8 + 376178920);
          v40 = (__int64)v39;
          if ( (__int64)v39 == MEMORY[0xE987638] )
          {
            if ( __builtin_isnan(v39) )
            {
              v40 = 0;
            }
            else if ( v39 > 0.0 )
            {
              v40 = ~v40;
            }
          }
          v32 = v61;
        }
        v62 = v7;
        v59 = v56;
      }
      v50 = *(_QWORD *)(v9 + 40);
      if ( (unsigned __int64)(v50 + 40) > *(_QWORD *)(v9 + 32) )
      {
        v50 = MEMORY[0x181EAA920](a1: v27, a2: v28, a3: v58);
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v50 + 40;
        *(_DWORD *)v50 = 34586824;
        *(_DWORD *)(v50 + 4) = 0;
        *(_QWORD *)(v50 + 8) = 0;
        *(_QWORD *)(v50 + 16) = 0;
        *(_QWORD *)(v50 + 24) = 0;
        *(_QWORD *)(v50 + 32) = 0;
      }
      *(_DWORD *)(v50 + 20) = 46923644;
      *(_DWORD *)(v50 + 16) = *(_DWORD *)(v8 + 374343896);
      *(_DWORD *)(v50 + 12) = (unsigned __int64)(v50 - v8) >> 3;
      v52 = v50;
      sub_18503B9A0(a1: v27, a2: v28, a3: (unsigned int *)v50, a4: v50, a5: 0);
      v42 = v52;
      for ( i = v53; ; i = v53 )
      {
        if ( *(_BYTE *)(i + 102) == 0 )
        {
          *(_BYTE *)(i + 102) = 1;
          __faststorefence();
        }
LABEL_29:
        v42 = MEMORY[0x182769900](a1: v44, a2: v45, a3: v42, a4: v43, a5: &a7);
      }
    }
    v32 = v61;
    v41 = v53;
LABEL_24:
    if ( *(_BYTE *)(v41 + 102) == 0 )
    {
      *(_BYTE *)(v41 + 102) = 1;
      __faststorefence();
    }
  }
  else
  {
    *(_DWORD *)(v53 + 136) = 10;
    __faststorefence();
    result = MEMORY[0x1863606A0](a1: v11, a2: v12, a3: v8 + 376668552);
    if ( (_DWORD)result != 0 )
    {
      v32 = v61;
      v41 = v53;
    }
    else
    {
      v41 = v53;
      *(_DWORD *)(v53 + 136) = 2;
      __faststorefence();
      v32 = v61;
    }
  }
  if ( *(int *)(v9 + 16) <= 0 )
    return MEMORY[0x18277F280](a1: v18, a2: v19, a3: v41, a4: v17, a5: v32);
  return result;
}
