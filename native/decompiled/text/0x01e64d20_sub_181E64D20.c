// sub_181E64D20
// rva 0x01e64d20  size 305  section .text  group text
// window base 0x181e64d20: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E64D20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v9; // rdx
  __int64 v10; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v6 + 8) )
  {
    MEMORY[0x181EB84E0]();
    goto LABEL_12;
  }
  if ( v5 + 376651208 != a5 )
  {
    v7 = *(unsigned int *)(a5 + 8);
    if ( (unsigned int)v7 < 0xB )
    {
      if ( (unsigned int)v7 <= 8 )
        __asm { jmp     r8; switch jump }
      MEMORY[0x182771080]();
      goto LABEL_10;
    }
LABEL_12:
    MEMORY[0x182771220](a1, a2, a3: v7, a4, a5: 11);
    __halt();
  }
  v9 = 4;
  if ( *(int *)(v6 + 16) <= 0 )
LABEL_10:
    MEMORY[0x18277F280](a1, a2, a3: v9);
  return (unsigned int)v9;
}
