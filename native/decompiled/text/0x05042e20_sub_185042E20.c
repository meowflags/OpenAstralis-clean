// sub_185042E20
// rva 0x05042e20  size 301  section .text  group text
// window base 0x185042e20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185042E20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  _DWORD *v7; // r9
  _DWORD *v8; // rdi
  unsigned __int64 i; // rdi
  unsigned __int64 v10; // r9
  unsigned __int64 v12; // rcx
  __int64 v13; // [rsp+0h] [rbp-28h] BYREF
  _DWORD *v14; // [rsp+10h] [rbp-18h]
  __int64 v15; // [rsp+18h] [rbp-10h]
  __int64 v16; // [rsp+20h] [rbp-8h]

  if ( (unsigned __int64)&v13 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0]();
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
    return sub_185042F60();
  }
  else
  {
    v7 = *(_DWORD **)(v6 + 40);
    v8 = v7 + 34;
    if ( (unsigned __int64)(v7 + 34) > *(_QWORD *)(v6 + 32) )
    {
      v16 = a5;
      v15 = a3;
      v7 = (_DWORD *)MEMORY[0x181EAA920](a1: v8, a2, a3: 43307944);
      a5 = v16;
    }
    else
    {
      *(_QWORD *)(v6 + 40) = v8;
      *v7 = 43307944;
      v7[1] = 0;
      for ( i = 2; i < 34; i += 2LL )
        *(_QWORD *)&v7[i] = 0;
      v15 = a3;
    }
    v14 = v7;
    v16 = a5;
    MEMORY[0x185A4FD20](a1: 0, a2: 0, a3: v7, a4: v16, a5: v5 + 377212704, a6: v16);
    v10 = (unsigned __int64)v14;
    v14[2] = 47045299;
    if ( (*(_DWORD *)v10 & 2) != 0 )
    {
      v12 = (v10 & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((v10 & 0xFFFFFFFFFFF80000LL) + ((v10 - v12) >> 9) + 0x38) != 0 )
        *(_BYTE *)((v10 & 0xFFFFFFFFFFF80000LL) + ((v10 - v12) >> 9) + 0x38) = 0;
    }
    *(_DWORD *)(v10 + 20) = 0;
    if ( *(int *)(v6 + 16) <= 0 )
      MEMORY[0x18277F280]();
    return v10;
  }
}
