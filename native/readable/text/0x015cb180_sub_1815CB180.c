// sub_15CB180
// rva 0x015cb180  size 173  section .text  group text
// window base 0x1815cb180: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15CB180(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 result; // rax
  __int64 v8; // [rsp+0h] [rbp-18h] BYREF
  __int64 v9; // [rsp+8h] [rbp-10h]
  __int64 v10; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v8 <= *(_QWORD *)(v6 + 8) )
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
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_15CB240();
  }
  else
  {
    result = *(_QWORD *)(v6 + 40);
    if ( (unsigned __int64)(result + 24) > *(_QWORD *)(v6 + 32) )
    {
      v10 = a5;
      v9 = a3;
      result = sub_1EAA920(a1, a2, a3: 34436688);
      a5 = v10;
      a3 = v9;
    }
    else
    {
      *(_QWORD *)(v6 + 40) = result + 24;
      *(_DWORD *)result = 34436688;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
    }
    *(_DWORD *)(result + 8) = (unsigned __int64)(a5 - v5) >> 3;
    *(_DWORD *)(result + 4) = (unsigned __int64)(a3 - v5) >> 3;
    if ( *(int *)(v6 + 16) <= 0 )
    {
      v10 = a5;
      v9 = a3;
      return sub_277F280();
    }
  }
  return result;
}
