// sub_15A58C0
// rva 0x015a58c0  size 211  section .text  group text
// window base 0x1815a58c0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15A58C0(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 result; // rax
  unsigned __int64 v7; // rbp
  __int64 v8; // [rsp+0h] [rbp-18h] BYREF
  _DWORD *v9; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v8 <= *(_QWORD *)(v4 + 8) )
  {
    sub_1EB84E0();
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
    return sub_15A59A0();
  }
  else
  {
    v5 = *(unsigned int *)(a3 + 20);
    if ( (_DWORD)v5 != 0 )
    {
      result = v3 + 8 * v5;
    }
    else
    {
      result = *(_QWORD *)(v4 + 40);
      if ( (unsigned __int64)(result + 16) > *(_QWORD *)(v4 + 32) )
      {
        v9 = (_DWORD *)a3;
        result = sub_1EAA920(a1, a2, a3: 35800816);
        a3 = (unsigned __int64)v9;
      }
      else
      {
        *(_QWORD *)(v4 + 40) = result + 16;
        *(_DWORD *)result = 35800816;
        *(_DWORD *)(result + 4) = 0;
        *(_QWORD *)(result + 8) = 0;
      }
      *(_DWORD *)(result + 4) = (a3 - v3) >> 3;
      *(_DWORD *)(a3 + 20) = (unsigned __int64)(result - v3) >> 3;
      if ( (*(_DWORD *)a3 & 2) != 0 )
      {
        v7 = (a3 & 0xFFFFFFFFFFF80000LL) + 2112;
        if ( *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v7) >> 9) + 0x38) != 0 )
          *(_BYTE *)((a3 & 0xFFFFFFFFFFF80000LL) + ((a3 - v7) >> 9) + 0x38) = 0;
      }
    }
    if ( *(int *)(v4 + 16) <= 0 )
    {
      v9 = (_DWORD *)a3;
      return sub_277F280();
    }
  }
  return result;
}
