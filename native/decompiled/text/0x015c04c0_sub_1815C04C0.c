// sub_1815C04C0
// rva 0x015c04c0  size 175  section .text  group text
// window base 0x1815c04c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815C04C0(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 result; // rax
  int v4; // xmm0_4
  int v5; // xmm0_4
  __int64 v6; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v6 <= *(_QWORD *)(v2 + 8) )
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
    return sub_1815C0580();
  }
  else
  {
    result = *(_QWORD *)(v2 + 40);
    if ( (unsigned __int64)(result + 40) > *(_QWORD *)(v2 + 32) )
    {
      result = MEMORY[0x181EAA920](a1, a2, a3: 35839832);
    }
    else
    {
      *(_QWORD *)(v2 + 40) = result + 40;
      *(_DWORD *)result = 35839832;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
      *(_QWORD *)(result + 32) = 0;
    }
    v4 = MEMORY[0x123F3C44];
    *(_DWORD *)(result + 24) = MEMORY[0x123F3C44];
    *(_DWORD *)(result + 20) = v4;
    *(_DWORD *)(result + 16) = v4;
    v5 = MEMORY[0x123F3C48];
    *(_DWORD *)(result + 12) = MEMORY[0x123F3C48];
    *(_DWORD *)(result + 8) = v5;
    *(_DWORD *)(result + 4) = v5;
    if ( *(int *)(v2 + 16) <= 0 )
      return MEMORY[0x18277F280]();
  }
  return result;
}
