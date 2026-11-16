// sub_1EC6600
// rva 0x01ec6600  size 1754  section .text  group text
// window base 0x181ec6600: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EC6600(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdx
  signed __int64 v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // rdx
  _DWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rdx
  __int64 result; // rax
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rcx
  int v22; // edx
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rdx
  __int64 v35; // rdx
  __int64 v36; // rdx
  int v37; // eax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rdi
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rdx
  int v45; // r8d
  __int64 v46; // rdx
  int v47; // r8d
  __int64 v48; // rdx
  __int64 v49; // rdx
  int v50; // [rsp+0h] [rbp-48h] BYREF
  __int64 v51; // [rsp+10h] [rbp-38h]
  _DWORD *v52; // [rsp+18h] [rbp-30h]
  __int64 v53; // [rsp+20h] [rbp-28h]
  __int64 v54; // [rsp+28h] [rbp-20h]
  __int64 v55; // [rsp+30h] [rbp-18h]
  unsigned int v56; // [rsp+3Ch] [rbp-Ch]
  __int64 v57; // [rsp+40h] [rbp-8h]

  v55 = a5;
  if ( (unsigned __int64)&v50 <= *(_QWORD *)(v8 + 8) )
  {
    v38 = sub_1EB84E0(a1, a2, a3, a4, a5, a6, a7: v50);
    v40 = (unsigned int)(v45 - 1);
    *(_DWORD *)(v7 + 8 * v39 + 28) = v40;
    if ( v45 == 1 )
      goto LABEL_44;
    goto LABEL_43;
  }
  v9 = *(unsigned int *)(v7 + 376659456);
  if ( (_DWORD)v9 == 0 || v8 == *(_QWORD *)(v7 + 376351704) )
    goto LABEL_31;
  v10 = *(_QWORD *)(v8 + 64);
  v11 = *(_QWORD *)(v7 + 8 * v9 + 16);
  if ( v11 == 0 )
  {
    if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v7 + 8 * v9 + 16), 0, v10) == 0 )
      goto LABEL_6;
    goto LABEL_31;
  }
  if ( v11 != v10 || (v37 = *(_DWORD *)(v7 + 8 * v9 + 28) + 1) < 0 )
  {
LABEL_31:
    sub_208CC20(a1, a2, a3: v7 + 376659448);
    goto LABEL_6;
  }
  *(_DWORD *)(v7 + 8 * v9 + 28) = v37;
LABEL_6:
  v12 = *(_QWORD *)(v8 + 40);
  if ( (unsigned __int64)(v12 + 16) > *(_QWORD *)(v8 + 32) )
  {
    v57 = 40468024;
    v12 = sub_1EAA920(a1, a2, a3: 40468024);
  }
  else
  {
    *(_QWORD *)(v8 + 40) = v12 + 16;
    *(_DWORD *)v12 = 40468024;
    *(_DWORD *)(v12 + 4) = 0;
    *(_QWORD *)(v12 + 8) = 0;
    v57 = 40468024;
  }
  *(_DWORD *)(v12 + 4) = (unsigned __int64)(v55 - v7) >> 3;
  v54 = v12;
  v53 = v7 + 376659464;
  v13 = (_DWORD *)sub_AF110A0(a1, a2, a3: v7 + 376659464, a4: v54, a5: v54, a6: v7);
  if ( v13 != (_DWORD *)v7 && *v13 >> 3 != 5058503 )
  {
    v38 = sub_276A220(a1: v15, a2: v16, a3: v13, a4: v54, a5: v7 + 40468024);
    v46 = *(unsigned int *)(v7 + 376659456);
    v47 = *(_DWORD *)(v7 + 8 * v46 + 28);
    if ( v47 == 1 )
    {
      *(_QWORD *)(v7 + 8 * v46 + 16) = 0;
      __faststorefence();
    }
    else
    {
      v40 = (unsigned int)(v47 - 1);
      *(_DWORD *)(v7 + 8 * v46 + 28) = v40;
    }
    if ( v47 != 1 )
      goto LABEL_43;
    v48 = *(unsigned int *)(v7 + 8 * v46 + 4);
    if ( (_DWORD)v48 == 0 )
      goto LABEL_43;
    v49 = *(unsigned int *)(v7 + 8 * v48 + 8);
    if ( (_DWORD)v49 == 0 || *(_DWORD *)(v7 + 8 * v49 + 16) == 0 )
      goto LABEL_43;
    while ( 1 )
    {
      v54 = v38;
      sub_208CCA0(a1: v41, a2: v42, a3: v7 + 376659448, a4: v40, a5: 1);
      v38 = v54;
      while ( 1 )
      {
LABEL_43:
        v38 = sub_2769900(a1: v41, a2: v42, a3: v38, a4: v40, a5: &a7);
LABEL_44:
        v43 = *(unsigned int *)(v7 + 8 * v39 + 4);
        if ( (_DWORD)v43 != 0 )
        {
          v44 = *(unsigned int *)(v7 + 8 * v43 + 8);
          if ( (_DWORD)v44 != 0 && *(_DWORD *)(v7 + 8 * v44 + 16) != 0 )
            break;
        }
      }
    }
  }
  if ( v13 == (_DWORD *)v7 )
  {
    v23 = sub_20860C0(a1: v15, a2: v16, a3: v7 + 376659496, a4: v14, a5: v55);
    v26 = *(_QWORD *)(v8 + 40);
    if ( (unsigned __int64)(v26 + 16) > *(_QWORD *)(v8 + 32) )
    {
      v52 = (_DWORD *)v23;
      v26 = sub_1EAA920(a1: v24, a2: v25, a3: v57);
      v23 = (__int64)v52;
    }
    else
    {
      *(_QWORD *)(v8 + 40) = v26 + 16;
      *(_DWORD *)v26 = 40468024;
      *(_DWORD *)(v26 + 4) = 0;
      *(_QWORD *)(v26 + 8) = 0;
    }
    v51 = v26;
    *(_DWORD *)(v26 + 4) = (unsigned __int64)(v23 - v7) >> 3;
    v52 = (_DWORD *)v23;
    sub_AF11E40(a1: v24, a2: v25, a3: v53, a4: v26, a5: v26, a6: v26);
    result = sub_1EC6CE0(a1: v27, a2: v28, a3: v7 + 8LL * *(unsigned int *)(v51 + 4));
    v31 = *(unsigned int *)(v7 + 376659456);
    v32 = *(unsigned int *)(v7 + 8 * v31 + 28);
    if ( (_DWORD)v32 == 1 )
    {
      *(_QWORD *)(v7 + 8 * v31 + 16) = 0;
      __faststorefence();
    }
    else
    {
      *(_DWORD *)(v7 + 8 * v31 + 28) = v32 - 1;
    }
    if ( (_DWORD)v32 == 1 )
    {
      v35 = *(unsigned int *)(v7 + 8 * v31 + 4);
      if ( (_DWORD)v35 != 0 )
      {
        v36 = *(unsigned int *)(v7 + 8 * v35 + 8);
        if ( (_DWORD)v36 != 0 && *(_DWORD *)(v7 + 8 * v36 + 16) != 0 )
        {
          v56 = result;
          sub_208CCA0(a1: v29, a2: v30, a3: v7 + 376659448, a4: v32, a5: 1);
          result = v56;
        }
      }
    }
    if ( *(int *)(v8 + 16) <= 0 )
    {
      v56 = result;
      sub_277F280(a1: v29, a2: v30, a3: v51);
      return v56;
    }
  }
  else
  {
    v17 = v7 + 8LL * (unsigned int)v13[1];
    v52 = v13;
    result = sub_1EC6CE0(a1: v15, a2: v16, a3: v17);
    v21 = *(unsigned int *)(v7 + 376659456);
    v22 = *(_DWORD *)(v7 + 8 * v21 + 28);
    if ( v22 == 1 )
    {
      *(_QWORD *)(v7 + 8 * v21 + 16) = 0;
      __faststorefence();
    }
    else
    {
      *(_DWORD *)(v7 + 8 * v21 + 28) = v22 - 1;
    }
    if ( v22 == 1 )
    {
      v33 = *(unsigned int *)(v7 + 8 * v21 + 4);
      if ( (_DWORD)v33 != 0 )
      {
        v34 = *(unsigned int *)(v7 + 8 * v33 + 8);
        if ( (_DWORD)v34 != 0 && *(_DWORD *)(v7 + 8 * v34 + 16) != 0 )
        {
          v56 = result;
          sub_208CCA0(a1: v19, a2: v20, a3: v7 + 376659448, a4: v21, a5: 1);
          result = v56;
        }
      }
    }
    if ( *(int *)(v8 + 16) <= 0 )
    {
      v56 = result;
      return sub_277F280();
    }
  }
  return result;
}
