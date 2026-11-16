// sub_184F43B80
// rva 0x04f43b80  size 367  section .text  group text
// window base 0x184f43b80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F43B80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 result; // rax
  __int64 v6; // rcx
  unsigned __int64 v7; // rbp
  __int64 v8; // [rsp+0h] [rbp-18h] BYREF
  __int64 v9; // [rsp+8h] [rbp-10h]
  __int64 v10; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v8 <= *(_QWORD *)(v4 + 8) )
  {
    MEMORY[0x181EB84E0]();
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
    return sub_184F43D00();
  }
  else
  {
    result = *(_QWORD *)(v4 + 40);
    if ( (unsigned __int64)(result + 56) > *(_QWORD *)(v4 + 32) )
    {
      v10 = a3;
      result = MEMORY[0x181EAA920](a1, a2, a3: 43284824);
      a3 = v10;
    }
    else
    {
      *(_QWORD *)(v4 + 40) = result + 56;
      *(_DWORD *)result = 43284824;
      *(_DWORD *)(result + 4) = 0;
      *(_QWORD *)(result + 8) = 0;
      *(_QWORD *)(result + 16) = 0;
      *(_QWORD *)(result + 24) = 0;
      *(_QWORD *)(result + 32) = 0;
      *(_QWORD *)(result + 40) = 0;
      *(_QWORD *)(result + 48) = 0;
    }
    *(_DWORD *)(result + 36) = 95;
    *(_DWORD *)(result + 28) = 80;
    *(_DWORD *)(result + 4) = (unsigned __int64)(result - v3) >> 3;
    v6 = *(_QWORD *)(v4 + 40);
    if ( (unsigned __int64)(v6 + 16) > *(_QWORD *)(v4 + 32) )
    {
      v9 = result;
      v10 = a3;
      v6 = MEMORY[0x181EAA920](a1, a2, a3: 43286576);
      result = v9;
      a3 = v10;
    }
    else
    {
      *(_QWORD *)(v4 + 40) = v6 + 16;
      *(_DWORD *)v6 = 43286576;
      *(_DWORD *)(v6 + 4) = 0;
      *(_QWORD *)(v6 + 8) = 0;
    }
    *(_DWORD *)(v6 + 4) = (unsigned __int64)(a3 - v3) >> 3;
    *(_DWORD *)(result + 20) = (unsigned __int64)(v6 - v3) >> 3;
    if ( (*(_DWORD *)result & 2) != 0 )
    {
      v7 = (result & 0xFFFFFFFFFFF80000LL) + 2112;
      if ( *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v7) >> 9) + 0x38) != 0 )
        *(_BYTE *)((result & 0xFFFFFFFFFFF80000LL) + ((result - v7) >> 9) + 0x38) = 0;
    }
    if ( *(int *)(v4 + 16) <= 0 )
    {
      v9 = result;
      v10 = a3;
      MEMORY[0x18277F280]();
      return v9;
    }
  }
  return result;
}
