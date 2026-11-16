// sub_1595540
// rva 0x01595540  size 629  section .text  group text
// window base 0x181595540: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1595540(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  signed __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 result; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rdi
  __int64 v33; // rsi
  int v34; // r8d
  __int64 v35; // rcx
  int v36; // [rsp+0h] [rbp-28h] BYREF
  __int64 v37; // [rsp+10h] [rbp-18h]
  __int64 v38; // [rsp+18h] [rbp-10h]
  __int64 v39; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v36 <= *(_QWORD *)(v6 + 8) )
  {
    v30 = sub_1EB84E0();
    v35 = (unsigned int)(v34 - 1);
    *(_DWORD *)(v5 + 8 * v31 + 28) = v35;
    if ( v34 == 1 )
    {
      v28 = *(unsigned int *)(v5 + 8 * v31 + 4);
      if ( (_DWORD)v28 != 0 )
      {
        v29 = *(unsigned int *)(v5 + 8 * v28 + 8);
        if ( (_DWORD)v29 != 0 )
        {
          if ( *(_DWORD *)(v5 + 8 * v29 + 16) != 0 )
          {
            v37 = v30;
            sub_208CCA0(a1: v32, a2: v33, a3: v5 + 376612752, a4: v35, a5: 1);
            v39 = v4;
            v38 = v37;
          }
          else
          {
            v38 = v30;
          }
        }
        else
        {
          v38 = v30;
        }
      }
      else
      {
        v38 = v30;
      }
    }
    else
    {
      v38 = v30;
    }
    v37 = v5 + 376612880;
    sub_2084840(a1: v32, a2: v33, a3: v5 + 376612880, a4: v5 + 376612880, a5: v5 + 370786912);
    v25 = sub_2083F20(a1: v23, a2: v24, a3: v37, a4: v22, a5: v38);
    result = sub_20841E0(a1: v26, a2: v27, a3: v25);
    goto LABEL_10;
  }
  sub_277A360(a1, a2, a3: v5 + 371193896, a4, a5: v5, a6: 0);
  sub_277B720(a1: v7, a2: v8, a3: v5 + 376612728);
  v11 = *(unsigned int *)(v5 + 376612868);
  if ( (_DWORD)v11 == 0 || v6 == *(_QWORD *)(v5 + 376351704) )
    goto LABEL_18;
  v12 = *(_QWORD *)(v6 + 64);
  v13 = *(_QWORD *)(v5 + 8 * v11 + 16);
  if ( v13 != 0 )
  {
    if ( v13 == v12 )
    {
      v21 = *(_DWORD *)(v5 + 8 * v11 + 28) + 1;
      if ( v21 >= 0 )
      {
        *(_DWORD *)(v5 + 8 * v11 + 28) = v21;
        goto LABEL_6;
      }
    }
    goto LABEL_18;
  }
  if ( __sync_val_compare_and_swap((volatile signed __int64 *)(v5 + 8 * v11 + 16), 0, v12) != 0 )
LABEL_18:
    sub_208CC20(a1: v9, a2: v10, a3: v5 + 376612752);
LABEL_6:
  sub_4FCBE20();
  v16 = *(unsigned int *)(v5 + 376612868);
  v17 = *(unsigned int *)(v5 + 8 * v16 + 28);
  if ( (_DWORD)v17 == 1 )
  {
    *(_QWORD *)(v5 + 8 * v16 + 16) = 0;
    __faststorefence();
  }
  else
  {
    *(_DWORD *)(v5 + 8 * v16 + 28) = v17 - 1;
  }
  if ( (_DWORD)v17 == 1 )
  {
    v19 = *(unsigned int *)(v5 + 8 * v16 + 4);
    if ( (_DWORD)v19 != 0 )
    {
      v20 = *(unsigned int *)(v5 + 8 * v19 + 8);
      if ( (_DWORD)v20 != 0 && *(_DWORD *)(v5 + 8 * v20 + 16) != 0 )
        sub_208CCA0(a1: v14, a2: v15, a3: v5 + 376612752, a4: v17, a5: 1);
    }
  }
  result = sub_283B040();
LABEL_10:
  if ( *(int *)(v6 + 16) <= 0 )
    return sub_277F280();
  return result;
}
