// sub_159A540
// rva 0x0159a540  size 168  section .text  group text
// window base 0x18159a540: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_159A540(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
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
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 result; // rax
  __int64 v21; // [rsp+0h] [rbp-28h] BYREF
  __int64 v22; // [rsp+8h] [rbp-20h]
  unsigned int v23; // [rsp+14h] [rbp-14h]
  __int64 v24; // [rsp+18h] [rbp-10h]
  unsigned int v25; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v21 <= *(_QWORD *)(v7 + 8) )
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
    return sub_159A600();
  }
  else
  {
    v25 = a1;
    v24 = a5;
    v23 = a6;
    v22 = v6 + 376612120;
    sub_20840C0(a1: a6, a2, a3: v6 + 376612120, a4: a6, a5: a5 - (int)a6, a6: 1);
    sub_2084180(a1: v9, a2: v10, a3: v22, a4: v8, a5: 0);
    v14 = sub_2084840(a1: v12, a2: v13, a3: v22, a4: v11, a5: v6 + 372402064);
    sub_2084500(a1: v16, a2: v17, a3: v14, a4: v15, a5: 1);
    result = sub_20840C0(a1: v25, a2: v19, a3: v22, a4: v18, a5: v24, a6: 1);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
