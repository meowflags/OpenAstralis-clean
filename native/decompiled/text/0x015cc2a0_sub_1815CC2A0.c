// sub_1815CC2A0
// rva 0x015cc2a0  size 134  section .text  group text
// window base 0x1815cc2a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815CC2A0(int a1, int a2, __int64 a3, __int64 a4, int a5, int a6, int a7, __int64 a8)
{
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 result; // rax
  __int64 v11; // rcx
  int v12; // edx
  int v13; // ecx
  int v14; // edi
  int v15; // esi
  int v16; // r8d
  int v17; // r9d
  _QWORD v18[3]; // [rsp+0h] [rbp-18h] BYREF

  if ( (unsigned __int64)v18 <= *(_QWORD *)(v9 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1815CC340(a1: v14, a2: v15, a3: v12, a4: v13, a5: v16, a6: v17, a7, a8);
  }
  else
  {
    result = *(_QWORD *)(v9 + 40);
    v11 = result + 16;
    if ( (unsigned __int64)(result + 16) > *(_QWORD *)(v9 + 32) )
    {
      return sub_1815CC2F8(a1, a2, a3, a4: v11, a5, a6, a7, a8);
    }
    else
    {
      *(_QWORD *)(v9 + 40) = v11;
      *(_DWORD *)result = 35319208;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_DWORD *)(result + 4) = (unsigned __int64)(a3 - v8) >> 3;
      if ( *(int *)(v9 + 16) <= 0 )
      {
        v18[2] = a3;
        return MEMORY[0x18277F280]();
      }
    }
  }
  return result;
}
