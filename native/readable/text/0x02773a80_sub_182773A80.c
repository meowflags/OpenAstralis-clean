// sub_2773A80
// rva 0x02773a80  size 796  section .text  group text
// window base 0x182773a80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2773A80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rsi
  int v12; // ecx
  __int64 v13; // rdi
  __int64 v14; // rsi
  int v15; // r9d
  int v16; // edx
  int v17; // edx
  int v18; // ecx
  __int64 v19; // rdi
  __int64 v20; // rsi
  int v21; // r9d
  int v22; // r8d
  __int64 result; // rax
  __int64 v24; // rdx
  int v25; // edx
  __int64 v26; // rcx
  __int64 v27; // rdi
  __int64 v28; // rsi
  int v29; // r9d
  int v30; // r8d
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rsi
  int v35; // r8d
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rbx
  __int64 v40; // rdi
  __int64 v41; // rsi
  int v42; // r8d
  int v43; // ecx
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // [rsp+0h] [rbp-58h] BYREF
  __int64 v51; // [rsp+18h] [rbp-40h]
  __int64 v52; // [rsp+20h] [rbp-38h]
  __int64 v53; // [rsp+28h] [rbp-30h]
  __int64 v54; // [rsp+30h] [rbp-28h]
  unsigned int v55; // [rsp+3Ch] [rbp-1Ch]
  __int64 v56; // [rsp+40h] [rbp-18h]
  __int64 v57; // [rsp+48h] [rbp-10h]
  __int64 v58; // [rsp+50h] [rbp-8h]

  v54 = a3;
  v53 = a5;
  v58 = a6;
  v57 = a1;
  v56 = a2;
  if ( (unsigned __int64)&v50 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB83C0();
    goto LABEL_33;
  }
  v52 = v6 + 376612120;
  if ( *(_DWORD *)(a3 + 20) != 1 )
  {
    a4 = *(_QWORD *)(v6 + 376178840);
    if ( a4 != 0 )
    {
      if ( a4 == a2 )
        goto LABEL_3;
      a4 = *(_QWORD *)(a4 + 160);
      while ( a4 != 0 )
      {
        if ( a4 == a2 )
          goto LABEL_3;
        v39 = *(_QWORD *)(a4 + 160);
        if ( *(int *)(v7 + 16) <= 0 )
        {
          sub_277F280(a1, a2, a3);
          a4 = v39;
        }
        else
        {
          a4 = *(_QWORD *)(a4 + 160);
        }
      }
    }
    sub_2773900(a1, a2, a3, a4: v6, a5, a6, a7: v50, a8: 1);
    v30 = v53;
    if ( v53 == v6 )
    {
LABEL_35:
      sub_276EFE0(a1: v27, a2: v28, a3: v25, a4: v26, a5: v30, a6: v29, a7: v50);
      goto LABEL_36;
    }
    v31 = sub_2084840(a1: v27, a2: v28, a3: v52, a4: v26, a5: v6 + 371394968);
    result = sub_2084BC0(a1: v33, a2: v34, a3: v31, a4: v32, a5: v56);
    goto LABEL_7;
  }
LABEL_3:
  if ( *(_DWORD *)(a3 + 4) == 0 )
  {
LABEL_33:
    sub_276EFE0(a1, a2, a3, a4, a5: v53, a6, a7: v50);
LABEL_34:
    sub_276EFE0(a1: v19, a2: v20, a3: v17, a4: v18, a5: v22, a6: v21, a7: v50);
    goto LABEL_35;
  }
  v8 = *(_QWORD *)(a2 + 80);
  v9 = *(_QWORD *)(a2 + 192);
  v51 = v6 + 376668232;
  sub_15AF260(a1: 0, a2, a3: v6 + 376668232, a4: a1 - v8, a5: a2, a6: a1 - v8 + v9);
  sub_15AE9E0(a1: v10, a2: v11, a3: v51);
  v16 = *(_DWORD *)(v6 + 376668252);
  if ( v16 == 0 )
    goto LABEL_5;
  if ( *(int *)(v54 + 24) < 100000 )
  {
    v55 = *(unsigned __int8 *)(v6 + 376668302);
    sub_2773E60(a1: v57, a2: v56, a3: v54, a4: v6 + 8 * v16, a5: v53, a6: v58, a7: v50, a8: v55);
    while ( 1 )
    {
      result = sub_15AE9E0(a1: v40, a2: v41, a3: v51);
      v24 = *(unsigned int *)(v6 + 376668252);
      if ( (_DWORD)v24 == 0 )
        goto LABEL_7;
      v16 = v54;
      if ( *(int *)(v54 + 24) >= 100000 )
      {
        v55 = 0;
        goto LABEL_14;
      }
      v42 = v53;
      if ( v53 == v6 )
        goto LABEL_37;
      sub_20841E0(a1: v13, a2: v14, a3: v52);
      v43 = v6 + 8 * *(_DWORD *)(v6 + 376668252);
      v55 = *(unsigned __int8 *)(v6 + 376668302);
      sub_2773E60(a1: v57, a2: v56, a3: v54, a4: v43, a5: v53, a6: v58, a7: v50, a8: v55);
    }
  }
  v55 = 1;
LABEL_14:
  v35 = v53;
  if ( v53 != v6 )
  {
    v36 = sub_2084840(a1: v13, a2: v14, a3: v52, a4: v6 + 372583328, a5: v6 + 372583328);
    sub_20841E0(a1: v37, a2: v38, a3: v36);
    result = v55;
    if ( v55 != 0 )
    {
LABEL_5:
      sub_2773900(a1: v57, a2: v56, a3: v54, a4: v6, a5: v53, a6: v58, a7: v50, a8: 1);
      v22 = v53;
      if ( v53 != v6 )
      {
        result = sub_2084840(a1: v19, a2: v20, a3: v52, a4: v6 + 358663688, a5: v6 + 358663688);
        goto LABEL_7;
      }
      goto LABEL_34;
    }
LABEL_7:
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280(a1: v13, a2: v14, a3: v24);
    return result;
  }
LABEL_36:
  sub_276EFE0(a1: v13, a2: v14, a3: v16, a4: v12, a5: v35, a6: v15, a7: v50);
LABEL_37:
  sub_276EFE0(a1: v57, a2: v56, a3: v16, a4: v12, a5: v42, a6: v58, a7: v50);
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  __builtin_debugtrap();
  return sub_2773DA0(a1: v46, a2: v47, a3: v44, a4: v45, a5: v48, a6: v49);
}
