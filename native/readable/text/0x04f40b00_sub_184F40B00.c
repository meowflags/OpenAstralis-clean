// sub_4F40B00
// rva 0x04f40b00  size 134  section .text  group text
// window base 0x184f40b00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_4F40B00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned int v10; // ebp
  __int64 v12; // [rsp+0h] [rbp-8h] BYREF

  v7 = a3;
  v8 = a5;
  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v6 + 8) )
  {
    sub_1EB84E0(a1, a2, a3, a4: a5);
    goto LABEL_13;
  }
  if ( a5 != v5 )
  {
    a3 = *(_DWORD *)a5 >> 3;
    if ( (_DWORD)a3 != 4261917 )
      goto LABEL_14;
  }
  if ( a5 == v5 )
  {
LABEL_13:
    sub_2771080(a1, a2, a3, a4: v8);
LABEL_14:
    sub_276FC00(a1, a2, a3: v8, a4: v8, a5: v5 + 34095336);
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
    return sub_4F40BA0();
  }
  v9 = *(unsigned __int8 *)(v7 + 4);
  if ( *(unsigned __int8 *)(a5 + 4) == (_DWORD)v9 )
  {
    v10 = 0;
  }
  else
  {
    if ( *(_BYTE *)(v7 + 4) != 0 )
      JUMPOUT(0x309E56B4ALL);
    v10 = 0xFFFFFFFF;
  }
  if ( *(int *)(v6 + 16) <= 0 )
    sub_277F280(a1, a2, a3: v9, a4: a5);
  return v10;
}
