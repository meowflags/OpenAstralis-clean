// sub_1596200
// rva 0x01596200  size 179  section .text  group text
// window base 0x181596200: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1596200(unsigned int a1, int a2, __int64 a3, int a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  _QWORD v12[4]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v13; // [rsp+20h] [rbp-38h]
  __int64 v14; // [rsp+28h] [rbp-30h]
  __int64 v15; // [rsp+30h] [rbp-28h]
  int v16; // [rsp+3Ch] [rbp-1Ch]
  unsigned int v17; // [rsp+40h] [rbp-18h]
  unsigned int v18; // [rsp+44h] [rbp-14h]
  __int64 v19; // [rsp+48h] [rbp-10h]
  int v20; // [rsp+54h] [rbp-4h]

  if ( (unsigned __int64)v12 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0();
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
    return ((__int64 (*)(void))sub_15962C0)();
  }
  else
  {
    v7 = (a4 >> 8) & 0xFFF;
    v20 = a4;
    v19 = (unsigned int)(1 << a4);
    v18 = a5;
    v17 = a1;
    v16 = a2;
    v15 = v7 + ((unsigned __int64)a5 << a4);
    v14 = v7 + ((unsigned __int64)a1 << a4);
    v13 = v19 * a2;
    v12[3] = a3;
    v12[2] = a6;
    result = sub_15962C0(a1: v14, a2: v13, a3, a4: v13, a5: v15);
    if ( *(int *)(v6 + 16) <= 0 )
      return sub_277F280(a1: v10, a2: v11, a3: v9, a4: v13);
  }
  return result;
}
