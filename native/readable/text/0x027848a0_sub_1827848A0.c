// sub_27848A0
// rva 0x027848a0  size 105  section .text  group text
// window base 0x1827848a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_27848A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // r9
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // [rsp+0h] [rbp-28h] BYREF
  __int64 v14; // [rsp+10h] [rbp-18h]
  __int64 v15; // [rsp+18h] [rbp-10h]
  __int64 v16; // [rsp+20h] [rbp-8h]

  v16 = a3;
  v15 = a5;
  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_6;
  }
  v7 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v7 == 0 )
  {
LABEL_6:
    sub_28C1C40(a1, a2, a3: v5 + 366716120);
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
    return sub_2784920();
  }
  v14 = v5 + 8 * v7;
  result = sub_AF110A0(a1, a2, a3: v14, a4: a5, a5, a6: v5);
  if ( *(int *)(v6 + 16) <= 0 )
    return sub_277F280(a1: v11, a2: v12, a3: v9, a4: v10);
  return result;
}
