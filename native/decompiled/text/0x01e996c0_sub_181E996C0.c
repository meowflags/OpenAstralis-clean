// sub_181E996C0
// rva 0x01e996c0  size 333  section .text  group text
// window base 0x181e996c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
void __fastcall sub_181E996C0(__int64 a1, __int64 a2, int a3, __int64 a4, unsigned __int64 a5, int a6, __int64 a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  int v14; // r9d
  __int64 v15; // rcx
  unsigned __int64 v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  int v22; // [rsp+0h] [rbp-28h] BYREF
  __int64 v23; // [rsp+8h] [rbp-20h]
  unsigned __int64 v24; // [rsp+10h] [rbp-18h]
  __int64 v25; // [rsp+18h] [rbp-10h]
  unsigned __int64 v26; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v8 + 8) )
  {
    sub_181EB83C0(a1, a2, a3, a4, a5, a6, a7: v22);
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
    sub_181E99820(a1: v20, a2: v21, a3: v19);
    return;
  }
  v26 = a5;
  if ( a5 == 0 )
  {
    if ( *(int *)(v8 + 16) > 0 )
      return;
    goto LABEL_21;
  }
  v9 = *(_QWORD *)(v7 + 376656656);
  if ( v9 == 0 )
  {
    v18 = 0;
LABEL_17:
    *(_QWORD *)(v7 + 376656656) = v9;
    __faststorefence();
    __sync_fetch_and_add((volatile signed __int64 *)(v7 + 376656136), -(__int64)v18);
    if ( *(int *)(v8 + 16) > 0 )
      return;
LABEL_21:
    MEMORY[0x18277F280]();
    return;
  }
  v10 = *(_QWORD *)(v9 + 16);
  if ( v10 != 0 )
    v25 = v9 + v10;
  else
    v25 = 0;
  v24 = v9;
  sub_181E99500(a1, a2, a3: v9, a4);
  v15 = v25;
  v16 = 1;
  while ( v15 != 0 )
  {
    if ( v26 <= v16 )
    {
      v23 = v15;
      v18 = v16;
      v9 = v23;
      goto LABEL_17;
    }
    v17 = *(_QWORD *)(v15 + 16);
    if ( v17 != 0 )
      v25 = v15 + v17;
    else
      v25 = 0;
    v24 = v16;
    v23 = v15;
    sub_181E99500(a1: v12, a2: v13, a3: v15, a4: v15);
    v16 = v24 + 1;
    v15 = v25;
    if ( *(int *)(v8 + 16) <= 0 )
      v16 = MEMORY[0x18277F280](a1: v12, a2: v13, a3: v11, a4: v25);
  }
  sub_181E997C4(a1: v12, a2: v13, a3: v11, a4: 0, a5: v26, a6: v14, a7);
}
