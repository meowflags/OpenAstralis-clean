// sub_15C7AA0
// rva 0x015c7aa0  size 209  section .text  group text
// window base 0x1815c7aa0: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_15C7AA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  __int64 v5; // r15
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v9; // [rsp+0h] [rbp-28h] BYREF
  __int64 v10; // [rsp+10h] [rbp-18h]
  __int64 v11; // [rsp+18h] [rbp-10h]
  unsigned int v12; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v9 <= *(_QWORD *)(v5 + 8) )
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
    return sub_15C7B80();
  }
  else
  {
    v6 = *(_QWORD *)(v5 + 40);
    if ( (unsigned __int64)(v6 + 56) > *(_QWORD *)(v5 + 32) )
    {
      v12 = a5;
      v11 = a3;
      v6 = sub_1EAA920(a1, a2, a3: 35850808);
      a5 = v12;
      v7 = v11;
    }
    else
    {
      *(_QWORD *)(v5 + 40) = v6 + 56;
      *(_DWORD *)v6 = 35850808;
      *(_DWORD *)(v6 + 4) = 0;
      *(_QWORD *)(v6 + 8) = 0;
      *(_QWORD *)(v6 + 16) = 0;
      *(_QWORD *)(v6 + 24) = 0;
      *(_QWORD *)(v6 + 32) = 0;
      *(_QWORD *)(v6 + 40) = 0;
      *(_QWORD *)(v6 + 48) = 0;
      v7 = a3;
    }
    v10 = v6;
    v11 = v7;
    v12 = a5;
    sub_92522A0(a1, a2, a3: v6, a4: a5, a5: v7, a6: a5);
    if ( *(int *)(v5 + 16) <= 0 )
      sub_277F280();
    return v10;
  }
}
