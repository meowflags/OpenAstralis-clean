// sub_159AFE0
// rva 0x0159afe0  size 177  section .text  group text
// window base 0x18159afe0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_159AFE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 result; // rax
  __int64 v19; // [rsp+0h] [rbp-28h] BYREF
  __int64 v20; // [rsp+10h] [rbp-18h]
  __int64 v21; // [rsp+18h] [rbp-10h]
  int v22; // [rsp+24h] [rbp-4h]

  v22 = a6;
  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v7 + 8) )
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
    return sub_159B0A0();
  }
  else
  {
    v21 = a5;
    v20 = v6 + 376612120;
    v8 = sub_2084840(a1, a2, a3: v6 + 376612120, a4: v6 + 367047008, a5: v6 + 367047008);
    sub_2084180(a1: v10, a2: v11, a3: v8, a4: v9, a5: 1);
    *(_DWORD *)(v6 + 376613252) = v22;
    *(_DWORD *)(v6 + 376613256) = 0;
    *(_QWORD *)(v6 + 376613240) = 0;
    *(_DWORD *)(v6 + 376613248) = -5;
    sub_2773300(a1: v13, a2: v14, a3: v21, a4: v12, a5: v6 + 376613232, a6: v20);
    result = sub_2084500(a1: v16, a2: v17, a3: v20, a4: v15, a5: 0);
    if ( *(int *)(v7 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
