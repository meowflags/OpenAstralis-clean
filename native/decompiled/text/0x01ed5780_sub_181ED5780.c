// sub_181ED5780
// rva 0x01ed5780  size 90  section .text  group text
// window base 0x181ed5780: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_181ED5780(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // rsi
  _DWORD *result; // rax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 v13; // rsi
  char v14; // [rsp+0h] [rbp-28h] BYREF
  __int64 v15; // [rsp+8h] [rbp-20h]
  __int64 v16; // [rsp+10h] [rbp-18h]
  __int64 v17; // [rsp+18h] [rbp-10h]
  __int64 v18; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v6 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v14);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return (_DWORD *)sub_181ED57E0();
  }
  else
  {
    v18 = a6;
    v17 = a3;
    v16 = a5;
    v15 = MEMORY[0x1827C5AE0](a1, a2, a3: a5);
    result = sub_181ED56C0(a1: v8, a2: v9, a3: v17, a4: v7, a5: v18, a6: v15);
    if ( *(int *)(v6 + 16) <= 0 )
      return (_DWORD *)MEMORY[0x18277F280](a1: v12, a2: v13, a3: v11, a4: v15);
  }
  return result;
}
