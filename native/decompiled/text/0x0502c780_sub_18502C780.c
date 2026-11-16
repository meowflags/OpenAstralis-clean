// sub_18502C780
// rva 0x0502c780  size 139  section .text  group text
// window base 0x18502c780: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18502C780(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 result; // rax
  __int64 v6; // rcx
  unsigned int v7; // r8d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // [rsp+0h] [rbp-8h] BYREF

  result = (__int64)a3;
  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v4 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_7;
  }
  v6 = *a3 >> 3;
  v7 = *(_DWORD *)(v3 + 8 * v6 + 44);
  v8 = v3 + 8LL * *(unsigned int *)(v3 + 8 * v6 + 20);
  v9 = HIBYTE(v7);
  if ( (unsigned __int16)*(_DWORD *)(v8 + 4LL * (v7 & (0x16ABu >> SHIBYTE(v7))) + 12) != 5803 )
  {
LABEL_7:
    result = MEMORY[0x182770780]();
  }
  else if ( *(_DWORD *)result >> 3 == 4268038 )
  {
    *(_BYTE *)(result + 40) = 1;
    *(_BYTE *)(result + 41) = 1;
    if ( *(int *)(v4 + 16) <= 0 )
      return MEMORY[0x18277F280]();
    return result;
  }
  MEMORY[0x18276FC00](a1, a2, a3: result, a4: v9, a5: v3 + 34145240);
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
  return sub_18502C820();
}
