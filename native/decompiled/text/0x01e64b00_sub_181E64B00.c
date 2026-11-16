// sub_181E64B00
// rva 0x01e64b00  size 87  section .text  group text
// window base 0x181e64b00: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E64B00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdx
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // eax
  __int64 v16; // [rsp+0h] [rbp-18h] BYREF
  __int64 v17; // [rsp+10h] [rbp-8h]

  v7 = v5 + 376651168;
  if ( (unsigned __int64)&v16 <= *(_QWORD *)(v6 + 8) )
  {
    v17 = a5;
    MEMORY[0x181EB84E0](a1, a2, a3: v7);
    goto LABEL_7;
  }
  v17 = a5;
  v8 = sub_181E64D20(a1, a2, a3: v7);
  v12 = v8;
  if ( v8 == 0 )
  {
LABEL_7:
    MEMORY[0x1827701A0](a1: v10, a2: v11, a3: v9, a4: v12, a5: v17);
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_181E64B60();
  }
  v13 = (unsigned int)((int)(v8 + 11) >> 31);
  v14 = (int)(v8 + 11) / (int)v8;
  if ( *(int *)(v6 + 16) <= 0 )
  {
    LODWORD(v13) = ((int)v12 + 11) % (int)v12;
    v14 = MEMORY[0x18277F280](a1: v10, a2: v11, a3: v13);
  }
  return (unsigned int)(v12 * v14);
}
