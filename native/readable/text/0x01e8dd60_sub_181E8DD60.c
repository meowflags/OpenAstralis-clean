// sub_1E8DD60
// rva 0x01e8dd60  size 179  section .text  group text
// window base 0x181e8dd60: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E8DD60(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 result; // rax
  __int64 v29; // rdx
  __int64 v30; // rdi
  __int64 v31; // rsi
  double v32; // xmm0_8
  char v33; // [rsp+0h] [rbp-18h] BYREF
  __int64 v34; // [rsp+8h] [rbp-10h]
  __int64 v35; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v33 <= *(_QWORD *)(v7 + 8) )
  {
    v32 = sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v33);
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
    return sub_1E8DE20(a1: v32);
  }
  else
  {
    v35 = sub_28C0020(a1, a2, a3: *(_QWORD *)(v6 + 376181320));
    v34 = v6 + 376612880;
    sub_2084840(a1: v8, a2: v9, a3: v6 + 376612880, a4: v6 + 376612880, a5: v6 + 365822384);
    v12 = sub_20843E0(a1: 3, a2: v11, a3: v34, a4: v10, a5: v35, a6: 1000);
    v16 = sub_2084840(a1: v14, a2: v15, a3: v12, a4: v13, a5: v6 + 352154080);
    v20 = sub_2084840(a1: v18, a2: v19, a3: v16, a4: v17, a5: v6 + 365347008);
    v24 = sub_2084A00(a1: v22, a2: v23, a3: v20, a4: v21, a5: *(_QWORD *)(v6 + 376654976));
    result = sub_2084840(a1: v26, a2: v27, a3: v24, a4: v25, a5: v6 + 372673352);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280(a1: v30, a2: v31, a3: v29, a4: v35);
  }
  return result;
}
