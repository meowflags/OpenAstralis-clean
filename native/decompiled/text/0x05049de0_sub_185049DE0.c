// sub_185049DE0
// rva 0x05049de0  size 179  section .text  group text
// window base 0x185049de0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_185049DE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  unsigned int v8; // ecx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 v11; // rax
  int v12; // ebx
  __int64 v14; // [rsp+0h] [rbp-18h] BYREF
  __int64 v15; // [rsp+8h] [rbp-10h]
  unsigned int v16; // [rsp+14h] [rbp-4h]

  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v4 + 8) )
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
    return sub_185049EA0();
  }
  else
  {
    v5 = *(unsigned int *)(a3 + 4);
    if ( (_DWORD)v5 != 0 )
    {
      v6 = *(_DWORD *)(v3 + 8 * v5) >> 3;
      v7 = v3 + 8 * v5;
      v8 = *(_DWORD *)(v7 + *(int *)(v3 + 8 * v6 + 52));
      if ( v8 == 0 )
      {
        v15 = a3;
        v8 = MEMORY[0x181ED7320](a1, a2, a3: v7);
        a3 = v15;
      }
    }
    else
    {
      v8 = 0;
    }
    v9 = *(unsigned int *)(a3 + 8);
    if ( (_DWORD)v9 != 0 )
    {
      v10 = *(_DWORD *)(v3 + 8 * v9) >> 3;
      v11 = v3 + 8 * v9;
      v12 = *(_DWORD *)(v11 + *(int *)(v3 + 8 * v10 + 52));
      if ( v12 == 0 )
      {
        v16 = v8;
        v15 = a3;
        v12 = MEMORY[0x181ED7320](a1, a2, a3: v11);
        v8 = v16;
        a3 = v15;
      }
    }
    else
    {
      v12 = 0;
    }
    if ( *(int *)(v4 + 16) <= 0 )
    {
      v16 = v8;
      v15 = a3;
      MEMORY[0x18277F280]();
    }
    return v12 ^ v8;
  }
}
