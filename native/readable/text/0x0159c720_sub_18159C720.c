// sub_159C720
// rva 0x0159c720  size 217  section .text  group text
// window base 0x18159c720: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_159C720(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 result; // rax
  __int64 v18; // [rsp+0h] [rbp-28h] BYREF
  __int64 v19; // [rsp+8h] [rbp-20h]
  __int64 v20; // [rsp+10h] [rbp-18h]
  __int64 v21; // [rsp+18h] [rbp-10h]
  __int64 v22; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v18 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB83C0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_159C800();
  }
  else
  {
    v8 = *(_QWORD *)(a5 + 80);
    v9 = *(_QWORD *)(a5 + 192);
    v20 = v6 + 376613424;
    v22 = a6;
    v21 = a5;
    sub_15AF260(a1: 0, a2, a3: v6 + 376613424, a4: a5, a5, a6: a6 - v8 + v9);
    sub_15AE9E0(a1: v10, a2: v11, a3: v20);
    v14 = *(unsigned int *)(v6 + 376613444);
    if ( (_DWORD)v14 != 0 )
    {
      v19 = v6 + 8 * v14;
      while ( 1 )
      {
        sub_15AE9E0(a1: v12, a2: v13, a3: v20);
        v15 = *(unsigned int *)(v6 + 376613444);
        if ( (_DWORD)v15 == 0 )
          break;
        v16 = v6 + 8 * v15;
        if ( *(int *)(v7 + 16) <= 0 )
          v19 = sub_277F280();
        else
          v19 = v16;
      }
      result = v19;
    }
    else
    {
      result = v6;
    }
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
