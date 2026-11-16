// sub_2773DA0
// rva 0x02773da0  size 173  section .text  group text
// window base 0x182773da0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_2773DA0(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6, int a7, int a8)
{
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 result; // rax
  __int64 v26; // rdx
  __int64 v27; // rdi
  __int64 v28; // rsi
  int v29; // edx
  int v30; // ecx
  int v31; // edi
  int v32; // esi
  int v33; // r8d
  int v34; // r9d
  char v35; // [rsp+0h] [rbp-28h] BYREF
  __int64 v36; // [rsp+8h] [rbp-20h]
  __int64 v37; // [rsp+10h] [rbp-18h]
  __int64 v38; // [rsp+18h] [rbp-10h]
  __int64 v39; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v35 <= *(_QWORD *)(v9 + 8) )
  {
    v39 = a6;
    v38 = a5;
    sub_1EB83C0();
  }
  else if ( a3 != v8 )
  {
    v39 = a6;
    v38 = a5;
    v37 = a3;
    v36 = v8 + 376612120;
    v10 = sub_2084840(a1, a2, a3: v8 + 376612120, a4: v8 + 367469072, a5: v8 + 367469072);
    v14 = sub_2084BC0(a1: v12, a2: v13, a3: v10, a4: v11, a5: v38);
    sub_20846E0(a1: v16, a2: v17, a3: v14, a4: v15, a5: 1);
    v21 = sub_2084840(a1: v19, a2: v20, a3: v36, a4: v18, a5: v8 + 369992840);
    result = sub_2084BC0(a1: v23, a2: v24, a3: v21, a4: v22, a5: v39);
    if ( *(int *)(v9 + 16) <= 0 )
      return sub_277F280(a1: v27, a2: v28, a3: v26);
    return result;
  }
  sub_276EFE0(a1, a2, a3, a4, a5, a6, a7: v35);
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
  return sub_2773E60(a1: v31, a2: v32, a3: v29, a4: v30, a5: v33, a6: v34, a7, a8);
}
