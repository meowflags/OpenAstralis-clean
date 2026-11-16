// sub_181EB3A80
// rva 0x01eb3a80  size 178  section .text  group text
// window base 0x181eb3a80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
unsigned __int64 __fastcall sub_181EB3A80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        int a5,
        int a6,
        int a7,
        __int64 a8)
{
  __int64 v8; // r14
  __int64 v9; // r15
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  unsigned int v12; // r9d
  int v13; // eax
  unsigned __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  __int64 v18; // rsi
  char v19; // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v20; // [rsp+8h] [rbp-10h]
  __int64 v21; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v19 <= *(_QWORD *)(v9 + 8) )
  {
    sub_181EB84E0(a1, a2, a3, a4, a5, a6, a7: v19);
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
    return sub_181EB3B40(a1: v17, a2: v18, a3: v15, a4: v16);
  }
  else
  {
    v10 = *(_QWORD *)(v9 + 40);
    v11 = v10 + 24;
    if ( v10 + 24 > *(_QWORD *)(v9 + 32) )
    {
      return sub_181EB3B0C(a1, a2, a3, a4, a5: v10, a6: v11, a7, a8);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v11;
      *(_DWORD *)v10 = 40465984;
      *(_DWORD *)(v10 + 4) = 0;
      *(_QWORD *)(v10 + 8) = 0;
      *(_QWORD *)(v10 + 16) = 0;
      v12 = *(_DWORD *)(a3 + 4);
      v13 = *(unsigned __int8 *)(a3 + 8);
      v21 = a3;
      v20 = v10;
      result = sub_181EB3760(a1, a2, a3: v10, a4, a5: v12, a6: v13);
      *(_DWORD *)(v9 + 304) = (v20 - v8) >> 3;
      if ( *(int *)(v9 + 16) <= 0 )
        return MEMORY[0x18277F280]();
    }
  }
  return result;
}
