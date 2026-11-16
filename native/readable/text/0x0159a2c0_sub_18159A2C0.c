// sub_159A2C0
// rva 0x0159a2c0  size 414  section .text  group text
// window base 0x18159a2c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_159A2C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdi
  __int64 v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdi
  __int64 v34; // rsi
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rdi
  __int64 v39; // rsi
  __int64 v40; // [rsp+0h] [rbp-38h] BYREF
  __int64 v41; // [rsp+8h] [rbp-30h]
  __int64 v42; // [rsp+10h] [rbp-28h]
  __int64 v43; // [rsp+18h] [rbp-20h]
  BOOL v44; // [rsp+20h] [rbp-18h]
  int v45; // [rsp+24h] [rbp-14h]
  __int64 v46; // [rsp+28h] [rbp-10h]
  int v47; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v40 <= *(_QWORD *)(v7 + 8) )
  {
    v45 = a2;
    v47 = a1;
    v46 = a6;
    v42 = a3;
    sub_1EB83C0();
LABEL_13:
    v47 = a1;
    v46 = a6;
    v42 = a3;
    sub_276EFE0();
    goto LABEL_14;
  }
  v43 = a5;
  result = (unsigned int)*(char *)(v7 + 152);
  if ( *(_BYTE *)(v7 + 152) == 0 )
  {
    if ( a5 != v6 )
    {
      v45 = a2;
      v47 = a1;
      v46 = a6;
      v42 = a3;
      v41 = v6 + 376612120;
      v9 = sub_2084840(a1, a2, a3: v6 + 376612120, a4: v6 + 366228672, a5: v6 + 366228672);
      v13 = sub_2084BC0(a1: v11, a2: v12, a3: v9, a4: v10, a5: v7);
      v17 = sub_2084840(a1: v15, a2: v16, a3: v13, a4: v14, a5: v6 + 372437504);
      sub_2084180(a1: v19, a2: v20, a3: v17, a4: v18, a5: 1);
      v44 = v45 < 2;
      sub_2783EA0(a1: v22, a2: v23, a3: v41, a4: v21, a5: v7, a6: v45 < 2);
      result = sub_2084180(a1: v25, a2: v26, a3: v41, a4: v24, a5: 0);
      goto LABEL_5;
    }
    goto LABEL_13;
  }
  if ( (_DWORD)a2 != 1 )
  {
    v45 = a2;
    v47 = a1;
    v46 = a6;
    v42 = a3;
    goto LABEL_5;
  }
  v45 = 1;
  v47 = a1;
  v46 = a6;
  v42 = a3;
  if ( a5 == v6 )
  {
LABEL_14:
    sub_276EFE0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_159A460();
  }
  v41 = v6 + 376612120;
  v27 = sub_2084840(a1, a2, a3: v6 + 376612120, a4: v6 + 366730264, a5: v6 + 366730264);
  v31 = sub_2084BC0(a1: v29, a2: v30, a3: v27, a4: v28, a5: v7);
  v35 = sub_2084840(a1: v33, a2: v34, a3: v31, a4: v32, a5: v6 + 372925192);
  sub_20841E0(a1: v36, a2: v37, a3: v35);
  result = sub_20841E0(a1: v38, a2: v39, a3: v41);
LABEL_5:
  if ( *(int *)(v7 + 16) <= 0 )
    return sub_277F280();
  return result;
}
