// sub_1EA2500
// rva 0x01ea2500  size 166  section .text  group text
// window base 0x181ea2500: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_1EA2500(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdx
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
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdi
  __int64 v24; // rsi
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rsi
  char v28; // [rsp+0h] [rbp-18h] BYREF
  __int64 v29; // [rsp+8h] [rbp-10h]
  __int64 v30; // [rsp+10h] [rbp-8h]

  v8 = v6 + 376612880;
  if ( (unsigned __int64)&v28 <= *(_QWORD *)(v7 + 8) )
  {
    v29 = a5;
    sub_1EB83C0(a1, a2, a3: v8, a4, a5, a6, a7: v28);
    goto LABEL_10;
  }
  if ( a6 == v6 )
  {
LABEL_10:
    sub_276EFE0(a1, a2, a3: v8);
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
    sub_1EA25C0(a1: v26, a2: v27, a3: v25);
    return;
  }
  v30 = a6;
  if ( *(__int64 *)(a6 + 24) < 1 )
  {
    v29 = a5;
  }
  else
  {
    v29 = a5;
    v9 = sub_20841E0(a1, a2, a3: v8);
    v13 = sub_2084840(a1: v11, a2: v12, a3: v9, a4: v10, a5: v29);
    v17 = sub_2084840(a1: v15, a2: v16, a3: v13, a4: v14, a5: v6 + 8LL * *(unsigned int *)(v30 + 4));
    v21 = sub_2084840(a1: v19, a2: v20, a3: v17, a4: v18, a5: v6 + 372436952);
    sub_20845C0(a1: v23, a2: v24, a3: v21, a4: v22, a5: *(_QWORD *)(v30 + 24));
  }
  if ( *(int *)(v7 + 16) <= 0 )
    sub_277F280();
}
