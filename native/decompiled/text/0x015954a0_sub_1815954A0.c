// sub_1815954A0
// rva 0x015954a0  size 148  section .text  group text
// window base 0x1815954a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_1815954A0(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 result; // rax
  __int64 v5; // rdi
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 v9; // rsi
  __int64 v10; // [rsp+0h] [rbp-18h] BYREF
  __int64 v11; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v10 <= *(_QWORD *)(v3 + 8) )
  {
    MEMORY[0x181EB84E0]();
    MEMORY[0x18277F280](a1: v8, a2: v9, a3: v7, a4: v11);
    return 1;
  }
  else
  {
    result = sub_181595240(a1, a2);
    if ( (_DWORD)result == 2 )
    {
      v11 = v2 + 8LL * *(unsigned int *)(v2 + 376612716);
      MEMORY[0x18C23E260]();
      if ( *(int *)(v3 + 16) <= 0 )
        MEMORY[0x18277F280](a1: v5, a2: v6, a3: v11);
      return 0;
    }
    else if ( *(int *)(v3 + 16) <= 0 )
    {
      return MEMORY[0x18277F280]();
    }
  }
  return result;
}
