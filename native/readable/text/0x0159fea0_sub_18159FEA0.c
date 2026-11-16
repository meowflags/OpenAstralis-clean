// sub_159FEA0
// rva 0x0159fea0  size 422  section .text  group text
// window base 0x18159fea0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_159FEA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // rcx
  __int64 v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rdi
  __int64 v39; // rsi
  void (*v40)(void); // r10
  __int64 v41; // rcx
  __int64 v42; // rdi
  __int64 v43; // rsi
  __int64 result; // rax
  _BYTE v45[32]; // [rsp+0h] [rbp-78h] BYREF
  __int64 v46; // [rsp+20h] [rbp-58h]
  char v47; // [rsp+28h] [rbp-50h] BYREF
  void *v48; // [rsp+30h] [rbp-48h]
  _BYTE *v49; // [rsp+38h] [rbp-40h]
  __int64 v50; // [rsp+40h] [rbp-38h]
  __int64 v51; // [rsp+50h] [rbp-28h]
  __int64 v52; // [rsp+58h] [rbp-20h]
  __int64 v53; // [rsp+60h] [rbp-18h]
  int v54; // [rsp+6Ch] [rbp-Ch]
  __int64 v55; // [rsp+70h] [rbp-8h]

  v55 = a6;
  if ( (unsigned __int64)v45 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB83C0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_15A0060();
  }
  else
  {
    v54 = a2;
    v53 = a1;
    v52 = a5;
    v51 = a3;
    v46 = v6 + 376612120;
    sub_20841E0(a1, a2, a3: v6 + 376612120);
    sub_2084840(a1: v9, a2: v10, a3: v46, a4: v8, a5: v6 + 365821968);
    v14 = sub_2084BC0(a1: v12, a2: v13, a3: v46, a4: v11, a5: v7);
    v18 = sub_2084840(a1: v16, a2: v17, a3: v14, a4: v15, a5: v6 + 372976016);
    sub_20841E0(a1: v19, a2: v20, a3: v18);
    if ( v55 != 0 )
      sub_2788240(a1: v22, a2: v23, a3: v6 + 376613976, a4: v21, a5: v46);
    if ( (unsigned int)sub_159D980(a1: v53, a2: 0, a3: v46, a4: v21, a5: v51, a6: v52) != 0 )
    {
      sub_2084840(a1: v25, a2: v26, a3: v46, a4: v24, a5: v6 + 367247552);
      v30 = sub_2084840(a1: v28, a2: v29, a3: v46, a4: v27, a5: v6 + 366305896);
      v34 = sub_2084840(a1: v32, a2: v33, a3: v30, a4: v31, a5: v6 + 367664816);
      v37 = sub_20841E0(a1: v35, a2: v36, a3: v34);
      sub_20841E0(a1: v38, a2: v39, a3: v37);
    }
    v40 = *(void (**)(void))(v6 + 376612088);
    if ( v40 != nullptr )
    {
      v48 = nullptr;
      v49 = nullptr;
      v50 = *(_QWORD *)(v7 + 56);
      *(_QWORD *)(v7 + 56) = &v47;
      v48 = &loc_18159FFD6;
      v49 = v45;
      *(_DWORD *)(v7 + 20) = 3;
      v40();
      result = (unsigned int)__sync_val_compare_and_swap((volatile signed __int32 *)(v7 + 20), 3, 1);
      if ( (_DWORD)result == 3 )
        *(_QWORD *)(v7 + 56) = *(_QWORD *)(*(_QWORD *)(v7 + 56) + 24LL);
      else
        result = sub_277F4A0(a1: v42, a2: v43, a3: 1, a4: v41, a5: 1);
    }
    else
    {
      result = sub_2786160(a1: v25, a2: v26, a3: v6 + 376613992);
    }
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
