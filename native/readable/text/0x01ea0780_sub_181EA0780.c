// sub_1EA0780
// rva 0x01ea0780  size 166  section .text  group text
// window base 0x181ea0780: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1EA0780(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // [rsp+18h] [rbp-10h]

  if ( a5 == v5 )
  {
    sub_276EFE0();
  }
  else
  {
    v17 = a5;
    sub_1E886A0(a1, a2, a3: v5 + 376654816, a4: v5 + 376654816, a5: *(_QWORD *)(a3 + 16));
    sub_1E88740(a1: v7, a2: v8, a3: v5 + 376654816, a4: v6, a5: *(_QWORD *)(a3 + 32));
    v12 = a3;
    *(_QWORD *)(a3 + 16) = 0;
    *(_QWORD *)(a3 + 24) = 0;
    *(_QWORD *)(a3 + 32) = 0;
    *(_QWORD *)(a3 + 40) = 0;
    result = *(unsigned int *)(a3 + 12);
    if ( (_DWORD)result != 0 )
    {
      *(_QWORD *)(v5 + 8 * result + 16) = 0;
      *(_QWORD *)(v5 + 8 * result + 24) = 0;
      *(_QWORD *)(v5 + 8 * result + 8) = 0;
      return result;
    }
  }
  sub_276EFE0(a1: v10, a2: v11, a3: v12, a4: v9, a5: v17);
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
  return sub_1EA0840(a1: v15, a2: v16, a3: v14);
}
