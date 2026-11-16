// sub_18502D320
// rva 0x0502d320  size 173  section .text  group text
// window base 0x18502d320: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_18502D320(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v8 <= *(_QWORD *)(v4 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  result = *(_QWORD *)(v4 + 40);
  v6 = result + 40;
  v7 = 43306512;
  if ( (unsigned __int64)(result + 40) > *(_QWORD *)(v4 + 32) )
  {
    result = MEMORY[0x181EAA840](a1, a2, a3: 43306512, a4, a5: 6);
  }
  else
  {
    *(_QWORD *)(v4 + 40) = v6;
    *(_QWORD *)result = 43306512;
    *(_DWORD *)(result + 8) = 6;
    *(_DWORD *)(result + 12) = 0;
    *(_QWORD *)(result + 16) = 0;
    *(_QWORD *)(result + 24) = 0;
    *(_QWORD *)(result + 32) = 0;
  }
  *(_DWORD *)(result + 32) = 46923633;
  *(_DWORD *)(result + 28) = 46923636;
  *(_DWORD *)(result + 24) = 46923639;
  *(_DWORD *)(result + 20) = 46923624;
  *(_DWORD *)(result + 16) = 46923630;
  *(_DWORD *)(result + 12) = 46923627;
  if ( *(int *)(v4 + 16) <= 0 )
    return MEMORY[0x18277F280](a1, a2, a3: v6, a4, a5: v7);
  return result;
}
