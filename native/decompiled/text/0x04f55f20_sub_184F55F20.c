// sub_184F55F20
// rva 0x04f55f20  size 159  section .text  group text
// window base 0x184f55f20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F55F20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v11; // [rsp+0h] [rbp-8h] BYREF

  v7 = a5;
  if ( (unsigned __int64)&v11 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0](a1, a2, a3, a4: a5);
    goto LABEL_9;
  }
  v8 = *(unsigned __int16 *)(v5 + 2LL * ((unsigned __int16)a5 >> 5) + 377194084) | ((unsigned __int16)a5 >> 1) & 0xFu;
  if ( (unsigned int)v8 >= 0x70 )
  {
LABEL_9:
    MEMORY[0x182771220](a1, a2, a3: (unsigned int)v8, a4: v7, a5: 112);
    goto LABEL_10;
  }
  v9 = *(unsigned __int16 *)(v5 + 2 * v8 + 377198196) | (unsigned int)(v7 & 1);
  if ( (unsigned int)v9 >= 8 )
  {
LABEL_10:
    MEMORY[0x182771220](a1, a2, a3: v9, a4: v7, a5: 8);
    __builtin_debugtrap();
    return sub_184F55FC0();
  }
  if ( *(int *)(v6 + 16) <= 0 )
    MEMORY[0x18277F280]();
  if ( (*(_WORD *)(v5 + 2 * v9 + 377198484) & 0x200) != 0 )
    JUMPOUT(0x309E6BF91LL);
  return 0;
}
