// sub_184F38820
// rva 0x04f38820  size 427  section .text  group text
// window base 0x184f38820: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F38820(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        int a11,
        __int64 a12)
{
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // r9
  unsigned int v15; // eax
  __int64 v16; // rcx
  unsigned int v17; // ebp
  __int64 v18; // rdi
  __int64 result; // rax
  _QWORD v20[3]; // [rsp+0h] [rbp-38h] BYREF
  __int64 v21; // [rsp+18h] [rbp-20h]
  __int64 v22; // [rsp+20h] [rbp-18h]
  unsigned int v23; // [rsp+2Ch] [rbp-Ch]
  unsigned int v24; // [rsp+30h] [rbp-8h]
  int v25; // [rsp+34h] [rbp-4h]

  if ( (unsigned __int64)v20 <= *(_QWORD *)(v13 + 8) )
  {
    v21 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_13;
  }
  if ( a5 != a3 )
  {
    v14 = v12 + 8LL * *(unsigned int *)(a3 + 4);
    if ( a5 != v12 )
    {
      v15 = *(_DWORD *)(a5 + 8);
      v16 = (unsigned int)*(char *)(a3 + 12);
      v17 = *(_DWORD *)(a3 + 8);
      v18 = v12 + 8LL * *(unsigned int *)(a5 + 4);
      if ( *(_BYTE *)(a5 + 12) == *(_BYTE *)(a3 + 12) )
        return sub_184F388D6(a1: v18, a2: v16, a3, a4: v16, a5, a6: v14, a7, a8, a9, a10, a11, a12);
      if ( (_BYTE)v16 == 0 )
        return sub_184F3892B(a1: v18, a2: v16, a3, a4: v16, a5, a6: v14, a7, a8, a9, a10, a11, a12);
      v25 = *(char *)(a3 + 12);
      v22 = a5;
      v21 = a3;
      v20[1] = v14;
      v20[2] = v18;
      v23 = v15;
      v24 = v17;
      result = (unsigned int)-MEMORY[0x1850159C0](a1: v17, a2: v16, a3: v18, a4: v16, a5: v14, a6: v15);
      if ( *(int *)(v13 + 16) <= 0 )
        return MEMORY[0x18277F280]();
      return result;
    }
LABEL_13:
    MEMORY[0x182771080](a1, a2, a3, a4, a5, a6: v14);
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
    return sub_184F389E0();
  }
  v22 = a5;
  v21 = a3;
  if ( *(int *)(v13 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return 0;
}
