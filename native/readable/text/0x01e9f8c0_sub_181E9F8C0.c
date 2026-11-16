// sub_1E9F8C0
// rva 0x01e9f8c0  size 166  section .text  group text
// window base 0x181e9f8c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1E9F8C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  __int64 v5; // r14
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 result; // rax
  __int64 v13; // [rsp+30h] [rbp-18h]
  _QWORD *v14; // [rsp+38h] [rbp-10h]

  v6 = *(_QWORD **)(a3 + 8);
  v14 = v6;
  if ( v6 == nullptr || (_DWORD)(result = sub_1E9F660(a1, a2, a3: v6, a4, a5)) == 0 )
  {
    v7 = MEMORY[0x11703060]/* 0x11703060 */(a1, a2, a3, a4: 144);
    if ( v7 != 0 )
    {
      v13 = v7;
      sub_28393A0(a1: v9, a2: v10, a3: a5, a4: v8, a5: v7, a6: 144);
      result = v13;
      *(_QWORD *)(v13 + 104) = v14;
      *(_QWORD *)(a3 + 8) = v13;
      __faststorefence();
    }
    else
    {
      sub_28C1C40(a1: v9, a2: v10, a3: v5 + 368039752);
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
      return sub_1E9F980();
    }
  }
  return result;
}
