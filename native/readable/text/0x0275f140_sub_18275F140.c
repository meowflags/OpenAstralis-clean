// sub_275F140
// rva 0x0275f140  size 177  section .text  group text
// window base 0x18275f140: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_275F140(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  __int64 v6; // r15
  unsigned __int16 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v12; // [rsp+0h] [rbp-28h] BYREF
  __int64 v13; // [rsp+10h] [rbp-18h]
  __int64 v14; // [rsp+18h] [rbp-10h]
  int v15; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v6 + 8) )
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
    return sub_275F200();
  }
  else
  {
    v7 = *(unsigned __int16 **)(a3 + 8);
    v8 = *(unsigned int *)(a3 + 20);
    if ( (_DWORD)v8 != 0 )
      v9 = *(unsigned __int16 *)((char *)&v7[4 * v8] + v5);
    else
      v9 = *v7;
    if ( (unsigned int)v9 >= 0x80 )
    {
      v10 = *(_QWORD *)(v6 + 40);
      if ( (unsigned __int64)(v10 + 16) > *(_QWORD *)(v6 + 32) )
      {
        v15 = v9;
        v14 = a5;
        v13 = a3;
        v10 = sub_1EAA920(a1, a2, a3: 34307848);
        LOWORD(v9) = v15;
        a3 = v13;
      }
      else
      {
        *(_QWORD *)(v6 + 40) = v10 + 16;
        *(_DWORD *)v10 = 34307848;
        *(_DWORD *)(v10 + 4) = 0;
        *(_QWORD *)(v10 + 8) = 0;
      }
      *(_WORD *)(v10 + 4) = v9;
    }
    else
    {
      v10 = v5 + 8LL * *(unsigned int *)(v5 + 4 * v9 + 376429804);
    }
    if ( *(int *)(v6 + 16) <= 0 )
      sub_277F280(a1, a2, a3);
    return v10;
  }
}
