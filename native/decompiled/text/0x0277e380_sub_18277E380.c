// sub_18277E380
// rva 0x0277e380  size 95  section .text  group text
// window base 0x18277e380: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18277E380(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 result; // rax
  __int64 v6; // [rsp+0h] [rbp-18h] BYREF
  __int64 v7; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v6 <= *(_QWORD *)(v4 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    return sub_18277E3E0();
  }
  else
  {
    if ( *(_QWORD *)(v3 + 376612208) == 1 )
    {
      result = v3 + 376658920;
      v7 = a3;
      if ( v3 + 376658920 == a3 )
        result = MEMORY[0x181E9BC60](a1, a2, a3: v3 + 376613784);
    }
    else
    {
      v7 = a3;
    }
    if ( *(int *)(v4 + 16) <= 0 )
      return sub_18277F280(a1, a2, a3);
  }
  return result;
}
