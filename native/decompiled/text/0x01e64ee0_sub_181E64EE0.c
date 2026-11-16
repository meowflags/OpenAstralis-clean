// sub_181E64EE0
// rva 0x01e64ee0  size 126  section .text  group text
// window base 0x181e64ee0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_181E64EE0(__int64 a1, __int64 a2, _DWORD *a3)
{
  _DWORD *v3; // r14
  __int64 v4; // r15
  __int64 result; // rax
  __int64 v6; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v7; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v6 <= *(_QWORD *)(v4 + 8) )
  {
    v7 = a3;
    MEMORY[0x181EB84E0]();
    goto LABEL_12;
  }
  if ( a3 != v3 )
  {
    if ( *a3 >> 3 != 5056622 )
    {
      result = 1;
      v7 = a3;
      goto LABEL_5;
    }
    if ( a3[1] != 0 )
    {
      v7 = a3;
      result = MEMORY[0x181E653E0](a1, a2, a3: v3 + 94162870);
      goto LABEL_5;
    }
LABEL_12:
    MEMORY[0x182771080]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_181E64F60();
  }
  result = 1;
  v7 = a3;
LABEL_5:
  if ( *(int *)(v4 + 16) <= 0 )
    return MEMORY[0x18277F280]();
  return result;
}
