// sub_502FDE0
// rva 0x0502fde0  size 75  section .text  group text
// window base 0x18502fde0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_502FDE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  int v6; // eax
  __int64 v8; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v8 <= *(_QWORD *)(v4 + 8) )
  {
    sub_1EB84E0();
    goto LABEL_8;
  }
  v5 = *(unsigned int *)(a3 + 12);
  if ( (_DWORD)v5 == 0 )
  {
LABEL_8:
    sub_2771080();
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
    return sub_502FE40();
  }
  v6 = *(_DWORD *)(v3 + 8 * v5 + 28);
  if ( *(int *)(v4 + 16) <= 0 )
    LOBYTE(v6) = sub_277F280();
  if ( (v6 & 2) != 0 )
    JUMPOUT(0x30A04AE0DLL);
  return 0;
}
