// sub_1E989E0
// rva 0x01e989e0  size 253  section .text  group text
// window base 0x181e989e0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E989E0(__int64 a1, __int64 a2, int a3, int a4, int a5, int a6, int a7, __int64 a8)
{
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 result; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  int v17; // edx
  int v18; // ecx
  int v19; // edi
  int v20; // esi
  int v21; // r8d
  int v22; // r9d
  char v23; // [rsp+0h] [rbp-28h] BYREF
  __int64 v24; // [rsp+10h] [rbp-18h]
  __int64 v25; // [rsp+18h] [rbp-10h]
  __int64 v26; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v23 <= *(_QWORD *)(v9 + 8) )
  {
    sub_1EB83C0(a1, a2, a3, a4, a5, a6, a7: v23);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1E98AE0(a1: v19, a2: v20, a3: v17, a4: v18, a5: v21, a6: v22, a7, a8);
  }
  else
  {
    result = *(_QWORD *)(v8 + 376656592);
    *(_QWORD *)(v8 + 376656592) = 0;
    *(_QWORD *)(v8 + 376656600) = 0;
    if ( result != 0 )
    {
      v11 = *(_QWORD *)(result + 16);
      if ( v11 != 0 )
        v26 = result + v11;
      else
        v26 = 0;
      v24 = v8 + 376653960;
      *(_QWORD *)(result + 16) = 0;
      v25 = result;
      sub_1E9FB00(a1, a2, a3: v8 + 376653960, a4: v8 + 376653960, a5: result);
      result = v26;
      while ( 1 )
      {
        v14 = v24;
        if ( result == 0 )
          break;
        v15 = *(_QWORD *)(result + 16);
        if ( v15 != 0 )
          v26 = result + v15;
        else
          v26 = 0;
        *(_QWORD *)(result + 16) = 0;
        v25 = result;
        sub_1E9FB00(a1: v12, a2: v13, a3: v14, a4: v14, a5: result);
        result = v26;
        if ( *(int *)(v9 + 16) <= 0 )
          result = sub_277F280(a1: v12, a2: v13, a3: v16, a4: v25);
      }
    }
    if ( *(int *)(v9 + 16) <= 0 )
      return sub_277F280();
  }
  return result;
}
