// sub_181EABF40
// rva 0x01eabf40  size 213  section .text  group text
// window base 0x181eabf40: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181EABF40(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 result; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  int v7; // ecx
  __int64 v8; // rbp
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi

  if ( a3 == v3 )
  {
    MEMORY[0x18276EFE0]();
LABEL_13:
    MEMORY[0x1828C1C40](a1, a2, a3: v3 + 366376776);
    goto LABEL_14;
  }
  result = a3;
  v5 = *(_QWORD *)(a3 - 8);
  v6 = *(_DWORD *)a3 >> 3;
  v7 = *(char *)(v3 + 8 * v6 + 68);
  v8 = a3 - v5;
  switch ( v7 )
  {
    case 3:
      if ( (_DWORD)v6 != 5057795 )
      {
LABEL_14:
        MEMORY[0x18276EAE0]();
      }
      else if ( *(_QWORD *)(a3 + 16) != 0 )
      {
        if ( *(_BYTE *)(v8 + 48) != 0 )
          *(_BYTE *)(v8 + 48) = 0;
        break;
      }
      MEMORY[0x1828C1C40](a1, a2, a3: v3 + 366713872);
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
      return sub_181EAC020(a1: v10, a2: v11, a3: v9);
    case 5:
      break;
    case 6:
      return MEMORY[0x182839540](a1, a2: v5 - 56, a3: v8 + 48, a4: v8 + 48, a5: v5 - 56, a6: 0);
    default:
      goto LABEL_13;
  }
  return result;
}
