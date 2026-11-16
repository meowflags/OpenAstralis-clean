// sub_159D980
// rva 0x0159d980  size 486  section .text  group text
// window base 0x18159d980: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_159D980(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 v15; // rsi
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rsi
  __int64 v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // [rsp+0h] [rbp-38h] BYREF
  __int64 v23; // [rsp+10h] [rbp-28h]
  __int64 v24; // [rsp+18h] [rbp-20h]
  __int64 v25; // [rsp+20h] [rbp-18h]
  __int64 v26; // [rsp+28h] [rbp-10h]
  unsigned int v27; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v7 + 8) )
  {
    v27 = a2;
    v26 = a1;
    v25 = a6;
    v24 = a5;
    sub_1EB83C0();
    goto LABEL_28;
  }
  v27 = a2;
  v26 = a1;
  v25 = a6;
  v24 = a5;
  v23 = v6 + 376612120;
  sub_20841E0(a1, a2, a3: v6 + 376612120);
  v9 = *(unsigned int *)(v6 + 376613536);
  if ( (_DWORD)v9 == 47076562 )
    v10 = v6 + 35127280;
  else
    v10 = v6 + 8 * v9;
  if ( v10 != v6 && *(_DWORD *)v10 >> 3 != 4261917 )
  {
LABEL_29:
    sub_276EAE0();
LABEL_30:
    sub_276EFE0();
LABEL_31:
    sub_276EAE0();
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
    return sub_159DB80();
  }
  if ( v10 == v6 )
  {
LABEL_28:
    sub_276EFE0();
    goto LABEL_29;
  }
  if ( *(_BYTE *)(v10 + 4) != 0 )
  {
    _mm_pause();
    while ( 1 )
    {
      v11 = *(unsigned int *)(v6 + 376613536);
      v12 = (_DWORD)v11 == 47076562 ? v6 + 35127280 : v6 + 8 * v11;
      if ( v12 != v6 && *(_DWORD *)v12 >> 3 != 4261917 )
        goto LABEL_31;
      if ( v12 == v6 )
        goto LABEL_30;
      if ( *(_BYTE *)(v12 + 4) == 0 )
        break;
      _mm_pause();
      if ( *(int *)(v7 + 16) <= 0 )
        v23 = sub_277F280(a1: v26, a2: v27, a3: v12, a4: v8, a5: v24, a6: v25);
    }
  }
  if ( (unsigned int)sub_159C620(a1: v25, a2: v26, a3: v6 + 376613328, a4: v27, a5: v23, a6: v24) != 0
    || v7 == *(_QWORD *)(v6 + 376613408) )
  {
    sub_159DB80();
    if ( *(int *)(v7 + 16) <= 0 )
      sub_277F280();
    return 1;
  }
  else
  {
    v17 = sub_2084840(a1: v14, a2: v15, a3: v23, a4: v13, a5: v6 + 370836008);
    sub_20841E0(a1: v18, a2: v19, a3: v17);
    sub_20841E0(a1: v20, a2: v21, a3: v23);
    if ( *(int *)(v7 + 16) <= 0 )
      sub_277F280();
    return 0;
  }
}
