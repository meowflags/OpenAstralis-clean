// sub_2782540
// rva 0x02782540  size 479  section .text  group text
// window base 0x182782540: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2782540(__int64 a1, __int64 a2, unsigned int *a3, int a4, __m128 a5, __int64 a6, __int64 a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  int v9; // ecx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rsi
  int v16; // ecx
  __int64 v17; // rdi
  __int64 v18; // rsi
  __int64 v19; // r9
  __m128 v20; // xmm0
  unsigned int *v21; // rdx
  __int64 v22; // r8
  __int64 result; // rax
  __int64 v24; // r8
  __int64 v25; // rcx
  __int64 v26; // rbp
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rsi
  int v31; // ecx
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // r9
  __int64 v35; // r9
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // r8
  __int64 v41; // [rsp+0h] [rbp-48h] BYREF
  int v42; // [rsp+8h] [rbp-40h]
  __int64 v43; // [rsp+10h] [rbp-38h]
  __int64 v44; // [rsp+18h] [rbp-30h]
  __int64 v45; // [rsp+20h] [rbp-28h]
  unsigned int v46; // [rsp+2Ch] [rbp-1Ch]
  __int64 v47; // [rsp+30h] [rbp-18h]
  unsigned int *v48; // [rsp+38h] [rbp-10h]
  unsigned int v49; // [rsp+40h] [rbp-8h]
  int v50; // [rsp+44h] [rbp-4h]

  v48 = a3;
  if ( (unsigned __int64)&v41 <= *(_QWORD *)(v8 + 8) )
  {
    sub_1EB83C0();
    goto LABEL_22;
  }
  sub_2781F40(a1, a2, (__int64)a3, a4, a5: v7 + 8LL * a3[1], a6: a7, a7: a5, a8: v41, a9: v42, a10: v43);
  sub_2781D40(
    a1: v10,
    a2: v11,
    a3: (__int64)v48,
    a4: v9,
    a5: v7 + 8LL * v48[3],
    a6: v12,
    a7: v41,
    a8: v42,
    a9: v43,
    a10: v44,
    a11: v45);
  v13 = v48[2];
  v47 = v7 + 8 * v13;
  v46 = v13;
  sub_2782720(a1: v14, a2: v15, a3: v48, a4: v47, a5: v47);
  v21 = v48;
  v22 = v48[4];
  result = v7 + 8 * v22;
  if ( (_DWORD)v22 == 0 )
  {
LABEL_22:
    sub_276EFE0(a1: v17, a2: v18, a3: (_DWORD)v21, a4: v16, a5: v22, a6: v19, a7: v41);
LABEL_23:
    sub_276EFE0(a1: v17, a2: v18, a3: (_DWORD)v21, a4: v27, a5: v24, a6: v19, a7: v41);
    __builtin_debugtrap();
    return sub_2782720(a1: v38, a2: v39, a3: v36, a4: v37, a5: v40);
  }
  v24 = *(unsigned int *)(v7 + 8 * v22 + 4);
  if ( (_DWORD)v24 != 0 )
  {
    v25 = v7 + 8LL * *(unsigned int *)(v7 + 8 * v24 + 16);
    while ( v25 != v7 )
    {
      v26 = v7 + 8LL * *(unsigned int *)(v25 + 16);
      if ( *(int *)(v8 + 16) <= 0 )
      {
        result = sub_277F280(a1: v17, a2: v18, a3: (__int64)v21, a4: v25);
        v25 = v26;
      }
      else
      {
        v25 = v7 + 8LL * *(unsigned int *)(v25 + 16);
      }
    }
  }
  v27 = v46;
  if ( v46 == 0 )
    goto LABEL_23;
  if ( *(_QWORD *)(v7 + 8LL * v46 + 8) != 0 || (_DWORD)v24 != 0 )
  {
    if ( *(_DWORD *)(v7 + 376668724) == 2 )
    {
      v50 = 0;
      v49 = 0;
      v45 = v7 + 376668720;
      v44 = result;
    }
    else
    {
      v45 = v7 + 376668720;
      v44 = result;
      v43 = sub_27828E0(a1: v17, a2: v18, a3: v47, a4: v7 + 376668720, a5: result);
      v50 = sub_277F180(a1: v29, a2: v30, a3: v45, a4: v28, a5: v43);
      v49 = 1;
    }
    sub_2781F40(a1: v17, a2: v18, a3: (__int64)v48, a4: v47, a5: v47, a6: v19, a7: v20, a8: v41, a9: v42, a10: v43);
    result = sub_2781D40(
               a1: v32,
               a2: v33,
               a3: (__int64)v48,
               a4: v31,
               a5: v44,
               a6: v34,
               a7: v41,
               a8: v42,
               a9: v43,
               a10: v44,
               a11: v45);
    v27 = v49;
    if ( v49 != 0 )
      result = sub_277E420(a1: v17, a2: v18, a3: v45, a4: v49, a5: v50, a6: v35, a7: v41);
  }
  if ( *(int *)(v8 + 16) <= 0 )
    return sub_277F280(a1: v17, a2: v18, a3: (__int64)v21, a4: v27);
  return result;
}
