// sub_18277F180
// rva 0x0277f180  size 142  section .text  group text
// window base 0x18277f180: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18277F180(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  int v18; // [rsp+0h] [rbp-18h] BYREF
  __int64 v19; // [rsp+8h] [rbp-10h]
  unsigned int v20; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB83C0]();
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
    return sub_18277F220(a1: v16, a2: v17, a3: v15);
  }
  else
  {
    v19 = a5;
    v20 = sub_18277E3E0();
    MEMORY[0x18207FA40](a1: v7, a2: v8, a3: v5 + 376668752);
    *(_QWORD *)(v5 + 376668736) = v6;
    *(_DWORD *)(v5 + 376668724) = 1;
    __faststorefence();
    sub_18277E660(a1: v9, a2: v10, a3: v19);
    *(_DWORD *)(v5 + 376668724) = 2;
    __faststorefence();
    ++*(_QWORD *)(v5 + 376668728);
    __faststorefence();
    if ( *(int *)(v6 + 16) <= 0 )
      sub_18277F280(a1: v12, a2: v13, a3: v11);
    return v20;
  }
}
