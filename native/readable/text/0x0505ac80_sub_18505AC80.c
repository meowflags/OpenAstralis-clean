// sub_505AC80
// rva 0x0505ac80  size 316  section .text  group text
// window base 0x18505ac80: Hex-Rays prints an operand at or above the
// base as base-relative, and one below it as absolute
__int64 __fastcall sub_505AC80(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v12; // [rsp+0h] [rbp-28h] BYREF
  __int64 v13; // [rsp+8h] [rbp-20h]
  __int64 v14; // [rsp+10h] [rbp-18h]
  __int64 v15; // [rsp+18h] [rbp-10h]
  unsigned int v16; // [rsp+24h] [rbp-4h]

  if ( (unsigned __int64)&v12 <= *(_QWORD *)(v7 + 8) )
  {
    sub_1EB84E0();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    __builtin_debugtrap();
    return sub_505ADC0();
  }
  else
  {
    if ( a6 == v6 )
    {
      v8 = v6 + 376426880;
    }
    else
    {
      v8 = *(_QWORD *)(v7 + 40);
      if ( (unsigned __int64)(v8 + 16) > *(_QWORD *)(v7 + 32) )
      {
        v15 = a6;
        v16 = a5;
        v14 = a3;
        v8 = sub_1EAA920(a1: v8, a2, a3: 34201016);
        a6 = v15;
        a5 = v16;
        a3 = v14;
      }
      else
      {
        *(_QWORD *)(v7 + 40) = v8 + 16;
        *(_DWORD *)v8 = 34201016;
        *(_DWORD *)(v8 + 4) = 0;
        *(_QWORD *)(v8 + 8) = 0;
      }
      *(_DWORD *)(v8 + 4) = (unsigned __int64)(a6 - v6) >> 3;
    }
    v9 = *(_QWORD *)(v7 + 40);
    if ( (unsigned __int64)(v9 + 24) > *(_QWORD *)(v7 + 32) )
    {
      v13 = v8;
      v15 = a6;
      v16 = a5;
      v14 = a3;
      v9 = sub_1EAA920(a1: v8, a2, a3: 43317560);
      v8 = v13;
      a5 = v16;
      v10 = v14;
    }
    else
    {
      *(_QWORD *)(v7 + 40) = v9 + 24;
      *(_DWORD *)v9 = 43317560;
      *(_DWORD *)(v9 + 4) = 0;
      *(_QWORD *)(v9 + 8) = 0;
      *(_QWORD *)(v9 + 16) = 0;
      v15 = a6;
      v10 = a3;
    }
    v14 = v10;
    v16 = a5;
    v13 = v9;
    sub_5FDCAE0(a1: v8, a2, a3: v9, a4: v10, a5: v10, a6: a5);
    if ( *(int *)(v7 + 16) <= 0 )
      sub_277F280();
    return v13;
  }
}
