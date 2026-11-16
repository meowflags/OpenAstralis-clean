// sub_185023B20
// rva 0x05023b20  size 121  section .text  group text
// window base 0x185023b20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185023B20(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  unsigned int v5; // eax
  unsigned int v6; // eax
  __int64 v7; // rcx
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rsi
  __int64 result; // rax
  int v11; // [rsp+0h] [rbp-18h] BYREF
  __int64 v12; // [rsp+8h] [rbp-10h]
  unsigned int v13; // [rsp+10h] [rbp-8h]
  unsigned int v14; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v4 + 8) )
  {
    MEMORY[0x181EB84E0]();
LABEL_10:
    MEMORY[0x182771080]();
    __builtin_debugtrap();
  }
  if ( a3 == v3 )
    goto LABEL_10;
  v5 = *(_DWORD *)(a3 + 8) >> 1;
  v12 = a3;
  v14 = v5;
  v6 = sub_185021340(a1, a2, a3);
  v13 = v6;
  if ( v6 == v14 )
    result = v3;
  else
    result = sub_185021B40(a1: v8, a2: v9, a3: v12, a4: v7, a5: 0, a6: v6, a7: v11, a8: v12);
  if ( *(int *)(v4 + 16) <= 0 )
    return MEMORY[0x18277F280](a1: v8, a2: v9, a3: v14, a4: v13);
  return result;
}
