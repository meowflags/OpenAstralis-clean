// sub_277E420
// rva 0x0277e420  size 173  section .text  group text
// window base 0x18277e420: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_277E420(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, __int64 a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // rsi
  int v14; // r9d
  int v15; // r8d
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 result; // rax
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rsi
  int v22; // [rsp+0h] [rbp-18h] BYREF
  __int64 v23; // [rsp+8h] [rbp-10h]
  int v24; // [rsp+14h] [rbp-4h]

  v24 = a5;
  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v8 + 8) )
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
    return sub_277E4E0();
  }
  else
  {
    *(_DWORD *)(v7 + 376668724) = 0;
    __faststorefence();
    sub_277E4E0();
    sub_207FC60(a1: v9, a2: v10, a3: v7 + 376668752);
    v15 = v24;
    if ( v24 != 0 )
      sub_277E620();
    *(_QWORD *)(v7 + 376668736) = 0;
    __faststorefence();
    v16 = __atomic_exchange_n((volatile __int64 *)(v7 + 376658480), 0, __ATOMIC_SEQ_CST);
    v17 = v7 + 376658176;
    if ( v16 != 0 )
    {
      v23 = v16;
      result = sub_278A140(a1: v12, a2: v13, a3: v17, a4: v11, a5: v16);
      if ( *(int *)(v8 + 16) <= 0 )
        return sub_277F280(a1: v20, a2: v21, a3: v19);
    }
    else
    {
      return sub_18277E4B1(a1: v12, a2: v13, a3: v17, a4: v11, a5: v15, a6: v14, a7);
    }
  }
  return result;
}
