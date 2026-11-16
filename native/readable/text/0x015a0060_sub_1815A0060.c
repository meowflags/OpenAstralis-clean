// sub_15A0060
// rva 0x015a0060  size 217  section .text  group text
// window base 0x1815a0060: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15A0060(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // [rsp+0h] [rbp-28h] BYREF
  __int64 v28; // [rsp+8h] [rbp-20h]
  __int64 v29; // [rsp+10h] [rbp-18h]
  __int64 v30; // [rsp+18h] [rbp-10h]
  __int64 v31; // [rsp+20h] [rbp-8h]

  v31 = a5;
  if ( (unsigned __int64)&v27 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB83C0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_15A0140();
  }
  else
  {
    v29 = v5 + 376612120;
    result = sub_2084B80(a1, a2, a3: v5 + 376612120, a4: a5);
    if ( v31 != 0 )
    {
      v30 = v31 - v5;
      if ( v31 - v5 < 0 )
        v11 = v5 + 372605488;
      else
        v11 = v5 + 372662448;
      v28 = v11;
      v12 = sub_2084840(a1: v9, a2: v10, a3: v29, a4: v8, a5: v5 + 372987704);
      v16 = sub_2084840(a1: v14, a2: v15, a3: v12, a4: v13, a5: v28);
      v20 = sub_2084840(a1: v18, a2: v19, a3: v16, a4: v17, a5: v5 + 373055288);
      v23 = sub_20845C0(a1: v21, a2: v22, a3: v20, a4: v30, a5: __builtin_llabs(v30));
      result = sub_2084840(a1: v25, a2: v26, a3: v23, a4: v24, a5: v5 + 372674176);
    }
    if ( *(int *)(v6 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
