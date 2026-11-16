// sub_184F40BA0
// rva 0x04f40ba0  size 159  section .text  group text
// window base 0x184f40ba0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_184F40BA0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v8; // [rsp+0h] [rbp-18h] BYREF
  __int64 v9; // [rsp+8h] [rbp-10h]
  __int64 v10; // [rsp+10h] [rbp-8h]

  if ( (unsigned __int64)&v8 <= *(_QWORD *)(v4 + 8) )
  {
    MEMORY[0x181EB84E0]();
    __builtin_debugtrap();
    return sub_184F40C40();
  }
  else
  {
    if ( *(_BYTE *)(a3 + 4) != 0 )
      v5 = v3 + 377133560;
    else
      v5 = v3 + 377133592;
    v6 = *(_QWORD *)(v4 + 40);
    if ( (unsigned __int64)(v6 + 16) > *(_QWORD *)(v4 + 32) )
    {
      v10 = v5;
      v9 = a3;
      v6 = MEMORY[0x181EAA920](a1, a2, a3: 34201016);
      v5 = v10;
      a3 = v9;
    }
    else
    {
      *(_QWORD *)(v4 + 40) = v6 + 16;
      *(_DWORD *)v6 = 34201016;
      *(_DWORD *)(v6 + 4) = 0;
      *(_QWORD *)(v6 + 8) = 0;
    }
    *(_DWORD *)(v6 + 4) = (unsigned __int64)(v5 - v3) >> 3;
    if ( *(int *)(v4 + 16) <= 0 )
    {
      v9 = a3;
      MEMORY[0x18277F280]();
    }
    return v6;
  }
}
