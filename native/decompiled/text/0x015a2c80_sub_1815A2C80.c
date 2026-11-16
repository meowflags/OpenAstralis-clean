// sub_1815A2C80
// rva 0x015a2c80  size 190  section .text  group text
// window base 0x1815a2c80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815A2C80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v14; // [rsp+0h] [rbp-28h] BYREF
  __int64 v15; // [rsp+10h] [rbp-18h]
  __int64 v16; // [rsp+18h] [rbp-10h]
  __int64 v17; // [rsp+20h] [rbp-8h]

  v17 = a3;
  if ( (unsigned __int64)&v14 <= *(_QWORD *)(v6 + 8) )
  {
    v16 = a5;
    MEMORY[0x181EB84E0]();
    goto LABEL_12;
  }
  v7 = *(unsigned int *)(a3 + 4);
  if ( (_DWORD)v7 == 0 )
  {
LABEL_12:
    v16 = a5;
    MEMORY[0x182771080]();
    goto LABEL_13;
  }
  v15 = v5 + 8 * v7;
  v16 = a5;
  if ( sub_1815A5660(a1, a2, a3: v15, a4, a5) != v5 )
  {
    v11 = v17;
    v12 = *(unsigned int *)(v17 + 4);
    if ( (_DWORD)v12 != 0 )
    {
      sub_1815A6420(a1: v9, a2: v10, a3: v5 + 8 * v12, a4: v8, a5: v16);
      if ( *(int *)(v6 + 16) <= 0 )
        MEMORY[0x18277F280]();
      return 1;
    }
LABEL_13:
    MEMORY[0x182771080](a1: v9, a2: v10, a3: v11, a4: v8, a5: v16);
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_1815A2D40();
  }
  if ( *(int *)(v6 + 16) <= 0 )
    MEMORY[0x18277F280]();
  return 0;
}
