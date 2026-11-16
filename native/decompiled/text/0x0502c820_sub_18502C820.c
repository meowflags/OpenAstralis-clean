// sub_18502C820
// rva 0x0502c820  size 166  section .text  group text
// window base 0x18502c820: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
_DWORD *__fastcall sub_18502C820(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4, int a5, __int64 a6, char a7)
{
  __int64 v7; // r14
  __int64 v8; // r15
  _DWORD *result; // rax
  __int64 v11; // rcx
  unsigned int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // edx
  int v16; // edx
  int v17; // ecx
  int v18; // edi
  int v19; // esi
  int v20; // r8d
  int v21; // r9d
  __int64 v22; // [rsp+0h] [rbp-8h] BYREF

  result = a3;
  if ( (unsigned __int64)&v22 <= *(_QWORD *)(v8 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_11;
  }
  v11 = *a3 >> 3;
  v12 = *(_DWORD *)(v7 + 8 * v11 + 44);
  v13 = v7 + 8LL * *(unsigned int *)(v7 + 8 * v11 + 20);
  v14 = HIBYTE(v12);
  if ( (unsigned __int16)*(_DWORD *)(v13 + 4LL * (v12 & (0x16ABu >> SHIBYTE(v12))) + 12) != 5803 )
  {
LABEL_11:
    result = (_DWORD *)MEMORY[0x182770780]();
  }
  else if ( *result >> 3 == 4268038 )
  {
    v15 = result[3];
    if ( a5 != 0 )
      result[3] = v15 & 0xFFFFFFFB;
    else
      result[3] = v15 | 4;
    if ( *(int *)(v8 + 16) <= 0 )
      return (_DWORD *)MEMORY[0x18277F280]();
    return result;
  }
  MEMORY[0x18276FC00](a1, a2, a3: result, a4: v14, a5: v7 + 34145240);
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
  return (_DWORD *)sub_18502C8E0(a1: v18, a2: v19, a3: v16, a4: v17, a5: v20, a6: v21, a7);
}
