// sub_502A6A0
// rva 0x0502a6a0  size 180  section .text  group text
// window base 0x18502a6a0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_502A6A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 result; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // [rsp+0h] [rbp-8h] BYREF

  if ( (unsigned __int64)&v8 <= *(_QWORD *)(v4 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
  }
  result = *(_QWORD *)(v4 + 40);
  v6 = result + 40;
  v7 = 43304680;
  if ( (unsigned __int64)(result + 40) > *(_QWORD *)(v4 + 32) )
  {
    result = sub_1EAA840(a1, a2, a3: 43304680, a4, a5: 7);
  }
  else
  {
    *(_QWORD *)(v4 + 40) = v6;
    *(_QWORD *)result = 43304680;
    *(_DWORD *)(result + 8) = 7;
    *(_DWORD *)(result + 12) = 0;
    *(_QWORD *)(result + 16) = 0;
    *(_QWORD *)(result + 24) = 0;
    *(_QWORD *)(result + 32) = 0;
  }
  *(_DWORD *)(result + 36) = 46923610;
  *(_DWORD *)(result + 32) = 46923602;
  *(_DWORD *)(result + 28) = 46923618;
  *(_DWORD *)(result + 24) = 46923606;
  *(_DWORD *)(result + 20) = 46923598;
  *(_DWORD *)(result + 16) = 46923614;
  *(_DWORD *)(result + 12) = 46923594;
  if ( *(int *)(v4 + 16) <= 0 )
    return sub_277F280(a1, a2, a3: v6, a4, a5: v7);
  return result;
}
